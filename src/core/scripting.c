/* Copyright (c) 2013-2022 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#include <mgba/core/scripting.h>

#include <mgba/core/core.h>
#include <mgba/core/serialize.h>
#ifdef M_CORE_GBA
#include <mgba/gba/interface.h>
#include <mgba/internal/arm/decoder.h>
#include <mgba/internal/debugger/symbols.h>
#include <mgba/internal/gba/gba.h>
#endif
#include <mgba/script/base.h>
#include <mgba/script/context.h>
#include <mgba-util/crc32.h>
#include <mgba-util/table.h>
#include <mgba-util/vfs.h>

mLOG_DEFINE_CATEGORY(SCRIPT, "Scripting", "script");

struct mScriptBridge {
	struct Table engines;
	struct mDebugger* debugger;
};

struct mScriptInfo {
	const char* name;
	struct VFile* vf;
	bool success;
};

struct mScriptSymbol {
	const char* name;
	int32_t* out;
	bool success;
};

static void _seDeinit(void* value) {
	struct mScriptEngine* se = value;
	se->deinit(se);
}

static void _seTryLoad(const char* key, void* value, void* user) {
	UNUSED(key);
	struct mScriptEngine* se = value;
	struct mScriptInfo* si = user;
	if (!si->success && se->isScript(se, si->name, si->vf)) {
		si->success = se->loadScript(se, si->name, si->vf);
	}
}

static void _seLookupSymbol(const char* key, void* value, void* user) {
	UNUSED(key);
	struct mScriptEngine* se = value;
	struct mScriptSymbol* si = user;
	if (!si->success) {
		si->success = se->lookupSymbol(se, si->name, si->out);
	}
}

static void _seRun(const char* key, void* value, void* user) {
	UNUSED(key);
	UNUSED(user);
	struct mScriptEngine* se = value;
	se->run(se);
}

#ifdef ENABLE_DEBUGGERS
struct mScriptDebuggerEntry {
	enum mDebuggerEntryReason reason;
	struct mDebuggerEntryInfo* info;
};

static void _seDebuggerEnter(const char* key, void* value, void* user) {
	UNUSED(key);
	struct mScriptEngine* se = value;
	struct mScriptDebuggerEntry* entry = user;
	se->debuggerEntered(se, entry->reason, entry->info);
}
#endif

struct mScriptBridge* mScriptBridgeCreate(void) {
	struct mScriptBridge* sb = malloc(sizeof(*sb));
	HashTableInit(&sb->engines, 0, _seDeinit);
	sb->debugger = NULL;
	return sb;
}

void mScriptBridgeDestroy(struct mScriptBridge* sb) {
	HashTableDeinit(&sb->engines);
	free(sb);
}

void mScriptBridgeInstallEngine(struct mScriptBridge* sb, struct mScriptEngine* se) {
	if (!se->init(se, sb)) {
		return;
	}
	const char* name = se->name(se);
	HashTableInsert(&sb->engines, name, se);
}

#ifdef ENABLE_DEBUGGERS
void mScriptBridgeSetDebugger(struct mScriptBridge* sb, struct mDebugger* debugger) {
	if (sb->debugger == debugger) {
		return;
	}
	if (sb->debugger) {
		sb->debugger->bridge = NULL;
	}
	sb->debugger = debugger;
	if (debugger) {
		debugger->bridge = sb;
	}
}

struct mDebugger* mScriptBridgeGetDebugger(struct mScriptBridge* sb) {
	return sb->debugger;
}

void mScriptBridgeDebuggerEntered(struct mScriptBridge* sb, enum mDebuggerEntryReason reason, struct mDebuggerEntryInfo* info) {
	struct mScriptDebuggerEntry entry = {
		.reason = reason,
		.info = info
	};
	HashTableEnumerate(&sb->engines, _seDebuggerEnter, &entry);
}
#endif

void mScriptBridgeRun(struct mScriptBridge* sb) {
	HashTableEnumerate(&sb->engines, _seRun, NULL);
}

#ifdef ENABLE_VFS
bool mScriptBridgeLoadScript(struct mScriptBridge* sb, const char* name) {
	struct VFile* vf = VFileOpen(name, O_RDONLY);
	if (!vf) {
		return false;
	}
	struct mScriptInfo info = {
		.name = name,
		.vf = vf,
		.success = false
	};
	HashTableEnumerate(&sb->engines, _seTryLoad, &info);
	vf->close(vf);
	return info.success;
}
#endif

bool mScriptBridgeLookupSymbol(struct mScriptBridge* sb, const char* name, int32_t* out) {
	struct mScriptSymbol info = {
		.name = name,
		.out = out,
		.success = false
	};
	HashTableEnumerate(&sb->engines, _seLookupSymbol, &info);
	return info.success;
}

struct mScriptMemoryDomain {
	struct mCore* core;
	struct mCoreMemoryBlock block;
};

#ifdef ENABLE_DEBUGGERS
struct mScriptBreakpointName {
	uint32_t address;
	uint32_t maxAddress;
	int16_t segment;
	uint8_t type;
	uint8_t subtype;
};

#define SCRIPT_BREAKPOINT_MAGIC 0x42504D47u

	struct mScriptBreakpoint {
	ssize_t id;
	struct mScriptBreakpointName name;
	struct Table callbacks;
// TODO: Handle re-entry
	bool invalidated;
	bool inUse;
	// Catches a second free. The breakpoints hash table owns these objects and
	// frees them through _freeBreakpoint, so releasing must go by removing the
	// entry, never by calling _freeBreakpoint directly.
	uint32_t magic;
};

struct mScriptCoreAdapter;
struct mScriptDebugger {
	struct mDebuggerModule d;
	struct mScriptCoreAdapter* p;
	struct Table breakpoints;
	struct Table cbidMap;
	struct Table bpidMap;
	int64_t nextBreakpoint;
	struct mScriptDebuggerEvent* pending;
	size_t pendingCount;
	size_t pendingCapacity;
	size_t pendingDropped;
	bool reentered;
	// Callback ids logTrace created. It does not hand them out, so without this
	// list a script cannot take its points back and runFrame stays on its
	// stepping path for the rest of the session.
	int64_t* traceIds;
	size_t traceIdCount;
	size_t traceIdCapacity;
};

	struct mScriptDebuggerEvent {
	// Identity, not ownership: a point can be cleared while events for it are
	// still queued, and a stored pointer would dangle. Resolved through bpidMap
	// at delivery; an event whose point is gone is counted, not delivered.
	ssize_t pointId;
	enum mDebuggerEntryReason reason;
	struct mDebuggerEntryInfo info;
	// The program counter at the access itself, read here in the debugger hook.
	// Reading it from the callback does not work: a callback runs later, when the
	// queue is flushed, so emu:readRegister("pc") there returns wherever the CPU
	// happens to be at flush time. Every event in one flush reported the same
	// value, and that value was inside the flush code rather than the reader.
	// Recorded as an offset so a script can tell "no PC captured" from address 0.
	bool hasPc;
	uint32_t pc;
};
#endif

// An opaque blob of core state, owned by the adapter until it is cleared or the
// adapter goes away. The core only ever sees the bytes.
struct mScriptSnapshot {
	struct mScriptSnapshot* next;
	int32_t id;
	void* data;
	size_t size;
};

// Send a line to the emulator's own log under the Scripting category, so a script
// speaking up is marked as a script and lands wherever the frontend sends its
// log rather than in the middle of a frame. This is not print: print goes to
// stdout raw, while this goes through the logger the frontend configured.
//
// The message is passed as a "%s" argument rather than as the format, so a script
// cannot turn a message into a format string and read whatever is on the stack.
static void _logForward(struct mLogger* logger, int category, enum mLogLevel level, const char* format, ...) {
	va_list args;
	va_start(args, format);
	logger->log(logger, category, level, format, args);
	va_end(args);
}

static bool _mScriptCoreLog(struct mScriptCoreAdapter* adapter, const char* level, const char* message) {
	struct mLogger* logger = mLogGetContext();
	enum mLogLevel logLevel = mLOG_INFO;
	if (!logger || !logger->log || !message) {
		return false;
	}
	if (level) {
		if (!strcmp(level, "fatal")) {
			logLevel = mLOG_FATAL;
		} else if (!strcmp(level, "error")) {
			logLevel = mLOG_ERROR;
		} else if (!strcmp(level, "warn")) {
			logLevel = mLOG_WARN;
		} else if (!strcmp(level, "debug")) {
			logLevel = mLOG_DEBUG;
		} else if (strcmp(level, "info")) {
			// An unknown level is refused rather than silently logged as info,
			// because a script asking for "erorr" and getting an info line looks
			// like the logger dropped it.
			return false;
		}
	}
	_logForward(logger, _mLOG_CAT_SCRIPT, logLevel, "%s", message);
	return true;
}

struct mScriptCoreAdapter {
	struct mCore* core;
	struct mScriptContext* context;
	struct mScriptValue memory;
#ifdef ENABLE_DEBUGGERS
	struct mScriptDebugger debugger;
#endif
	// Snapshots taken by emu:saveStateSnapshot. Held as a list of opaque core
	// state blobs so a script can put the machine back the way it found it after
	// stepping somewhere it did not mean to.
	struct mScriptSnapshot* snapshots;
	struct mRumble rumble;
	struct mRumbleIntegrator rumbleIntegrator;
	struct mRumble* oldRumble;
	struct mRotationSource rotation;
	struct mScriptValue* rotationCbTable;
	struct mRotationSource* oldRotation;
#ifdef M_CORE_GBA
	struct GBALuminanceSource luminance;
	struct mScriptValue* luminanceCb;
	struct GBALuminanceSource* oldLuminance;
#endif
};
// emu:saveStateSnapshot() and emu:loadStateSnapshot() are for stepping with an
// undo: take a snapshot, run somewhere, and put the machine back exactly as it
// was. The snapshot stays in memory and is never written to disk, because a
// script that wanted it on disk wants a save state file and core->saveStateNamed
// already writes one.
//
// Saving is neither free nor small, so snapshots are explicit: nothing is captured
// behind a script's back and there is no cap to exceed.
static struct mScriptSnapshot* _findSnapshot(struct mScriptCoreAdapter* adapter, int32_t id) {
	struct mScriptSnapshot* snapshot = adapter->snapshots;
	while (snapshot) {
		if (snapshot->id == id) {
			return snapshot;
		}
		snapshot = snapshot->next;
	}
	return NULL;
}

static bool _mScriptCoreClearStateSnapshot(struct mScriptCoreAdapter* adapter, int32_t id);

static int32_t _mScriptCoreSaveStateSnapshot(struct mScriptCoreAdapter* adapter) {
	struct mCore* core = adapter->core;
	struct mScriptSnapshot* snapshot;
	size_t size;
	if (!core->stateSize || !core->saveState || !core->loadState) {
		return 0;
	}
	size = core->stateSize(core);
	if (!size) {
		return 0;
	}
	snapshot = malloc(sizeof(*snapshot));
	if (!snapshot) {
		return 0;
	}
	snapshot->data = malloc(size);
	if (!snapshot->data) {
		free(snapshot);
		return 0;
	}
	snapshot->size = size;
	snapshot->next = NULL;
	snapshot->id = 1;
	if (adapter->snapshots) {
		struct mScriptSnapshot* last = adapter->snapshots;
		while (last->next) {
			last = last->next;
		}
		last->next = snapshot;
		snapshot->id = last->id + 1;
	} else {
		adapter->snapshots = snapshot;
	}
	if (!core->saveState(core, snapshot->data)) {
		_mScriptCoreClearStateSnapshot(adapter, snapshot->id);
		return 0;
	}
	return snapshot->id;
}

static bool _mScriptCoreLoadStateSnapshot(struct mScriptCoreAdapter* adapter, int32_t id) {
	struct mScriptSnapshot* snapshot = _findSnapshot(adapter, id);
	if (!snapshot || !adapter->core->loadState) {
		return false;
	}
	return adapter->core->loadState(adapter->core, snapshot->data);
}

static bool _mScriptCoreClearStateSnapshot(struct mScriptCoreAdapter* adapter, int32_t id) {
	struct mScriptSnapshot** link = &adapter->snapshots;
	while (*link) {
		struct mScriptSnapshot* snapshot = *link;
		if (snapshot->id == id) {
			*link = snapshot->next;
			free(snapshot->data);
			free(snapshot);
			return true;
		}
		link = &snapshot->next;
	}
	return false;
}

static void _mScriptCoreClearStateSnapshots(struct mScriptCoreAdapter* adapter) {
	struct mScriptSnapshot* snapshot = adapter->snapshots;
	while (snapshot) {
		struct mScriptSnapshot* next = snapshot->next;
		free(snapshot->data);
		free(snapshot);
		snapshot = next;
	}
	adapter->snapshots = NULL;
}

// Load a symbol file so getSymbolic has something to resolve against.
//
// The core's own loader is not used here, and that is deliberate. Handed a file
// directly it only tries ELFOpen, and its text path is compiled out unless the
// core was built with directory support, which ours is not: a .sym file passed
// in would be opened, found not to be an ELF, and silently dropped. Parsing the
// text form here is what makes a symbol file a symbol file.
//
// A script naming the file is also the honest form - nothing is picked up behind
// the script's back, and two games in one directory can have different symbols.
static bool _mScriptCoreLoadSymbols(struct mScriptCoreAdapter* adapter, const char* path) {
	struct VFile* vf;
	if (!path) {
		return false;
	}
	vf = VFileOpen(path, O_RDONLY);
	if (!vf) {
		return false;
	}
	if (!adapter->core->symbolTable) {
		adapter->core->symbolTable = mDebuggerSymbolTableCreate();
		if (!adapter->core->symbolTable) {
			vf->close(vf);
			return false;
		}
	}
	mDebuggerLoadARMIPSSymbols(adapter->core->symbolTable, vf);
	vf->close(vf);
	return true;
}

// Name of the symbol covering an address, or nil when nothing covers it.
//
// The table is empty until emu:loadSymbols has been given something to read, so
// on a bare ROM this answers nil everywhere. That nil means "no symbol covers
// this address"; it never means the lookup did not run, and the two are told
// apart by the table being absent, which is checked first.
static struct mScriptValue* _mScriptCoreGetSymbolic(struct mScriptCoreAdapter* adapter, uint32_t address) {
	struct mCore* core = adapter->core;
	const char* name = NULL;
	if (!core->symbolTable) {
		return NULL;
	}
	// The reverse table is keyed on the exact (value, segment) pair, so a lookup
	// with the wrong segment silently finds nothing. The text reader stores -1,
	// because a symbol file names no segment, while an ELF may name 0, so both
	// are tried rather than assuming one.
	name = mDebuggerSymbolReverseLookup(core->symbolTable, address, -1);
	if (!name) {
		name = mDebuggerSymbolReverseLookup(core->symbolTable, address, 0);
	}
	if (!name) {
		return NULL;
	}
	return mScriptStringCreateFromBytes(name, strlen(name));
}


#define CALCULATE_SEGMENT_INFO \
	uint32_t segmentSize = adapter->block.end - adapter->block.start; \
	uint32_t segmentStart = adapter->block.segmentStart - adapter->block.start; \
	if (adapter->block.segmentStart) { \
		segmentSize -= segmentStart; \
	}

#define CALCULATE_SEGMENT_ADDRESS \
	uint32_t segmentAddress = address % segmentSize; \
	int segment = address / segmentSize; \
	segmentAddress += adapter->block.start; \
	if (adapter->block.segmentStart && segment) { \
		segmentAddress += segmentStart; \
	}

static uint32_t mScriptMemoryDomainRead8(struct mScriptMemoryDomain* adapter, uint32_t address) {
	CALCULATE_SEGMENT_INFO;
	CALCULATE_SEGMENT_ADDRESS;
	return adapter->core->rawRead8(adapter->core, segmentAddress, segment);
}

static uint32_t mScriptMemoryDomainRead16(struct mScriptMemoryDomain* adapter, uint32_t address) {
	CALCULATE_SEGMENT_INFO;
	CALCULATE_SEGMENT_ADDRESS;
	return adapter->core->rawRead16(adapter->core, segmentAddress, segment);
}

static uint32_t mScriptMemoryDomainRead32(struct mScriptMemoryDomain* adapter, uint32_t address) {
	CALCULATE_SEGMENT_INFO;
	CALCULATE_SEGMENT_ADDRESS;
	return adapter->core->rawRead32(adapter->core, segmentAddress, segment);
}

static struct mScriptValue* mScriptMemoryDomainReadRange(struct mScriptMemoryDomain* adapter, uint32_t address, uint32_t length) {
	CALCULATE_SEGMENT_INFO;
	struct mScriptValue* value = mScriptStringCreateEmpty(length);
	char* buffer = value->value.string->buffer;
	uint32_t i;
	for (i = 0; i < length; ++i, ++address) {
		CALCULATE_SEGMENT_ADDRESS;
		buffer[i] = adapter->core->rawRead8(adapter->core, segmentAddress, segment);
	}
	return value;
}

static void mScriptMemoryDomainWrite8(struct mScriptMemoryDomain* adapter, uint32_t address, uint8_t value) {
	CALCULATE_SEGMENT_INFO;
	CALCULATE_SEGMENT_ADDRESS;
	adapter->core->rawWrite8(adapter->core, segmentAddress, segment, value);
}

static void mScriptMemoryDomainWrite16(struct mScriptMemoryDomain* adapter, uint32_t address, uint16_t value) {
	CALCULATE_SEGMENT_INFO;
	CALCULATE_SEGMENT_ADDRESS;
	adapter->core->rawWrite16(adapter->core, segmentAddress, segment, value);
}

static void mScriptMemoryDomainWrite32(struct mScriptMemoryDomain* adapter, uint32_t address, uint32_t value) {
	CALCULATE_SEGMENT_INFO;
	CALCULATE_SEGMENT_ADDRESS;
	adapter->core->rawWrite32(adapter->core, segmentAddress, segment, value);
}

static uint32_t mScriptMemoryDomainBase(struct mScriptMemoryDomain* adapter) {
	return adapter->block.start;
}

static uint32_t mScriptMemoryDomainEnd(struct mScriptMemoryDomain* adapter) {
	return adapter->block.end;
}

static uint32_t mScriptMemoryDomainSize(struct mScriptMemoryDomain* adapter) {
	return adapter->block.size;
}

static struct mScriptValue* mScriptMemoryDomainName(struct mScriptMemoryDomain* adapter) {
	return mScriptStringCreateFromUTF8(adapter->block.shortName);
}

mSCRIPT_DECLARE_STRUCT(mScriptMemoryDomain);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, U32, read8, mScriptMemoryDomainRead8, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, U32, read16, mScriptMemoryDomainRead16, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, U32, read32, mScriptMemoryDomainRead32, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, WSTR, readRange, mScriptMemoryDomainReadRange, 2, U32, address, U32, length);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptMemoryDomain, write8, mScriptMemoryDomainWrite8, 2, U32, address, U8, value);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptMemoryDomain, write16, mScriptMemoryDomainWrite16, 2, U32, address, U16, value);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptMemoryDomain, write32, mScriptMemoryDomainWrite32, 2, U32, address, U32, value);

mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, U32, base, mScriptMemoryDomainBase, 0);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, U32, bound, mScriptMemoryDomainEnd, 0);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, U32, size, mScriptMemoryDomainSize, 0);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptMemoryDomain, WSTR, name, mScriptMemoryDomainName, 0);

mSCRIPT_DEFINE_STRUCT(mScriptMemoryDomain)
	mSCRIPT_DEFINE_CLASS_DOCSTRING(
		"An object used for access directly to a memory domain, e.g. the cartridge, "
		"instead of through a whole address space, as with the functions directly on struct::mCore."
	)
	mSCRIPT_DEFINE_DOCSTRING("Read an 8-bit value from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, read8)
	mSCRIPT_DEFINE_DOCSTRING("Read a 16-bit value from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, read16)
	mSCRIPT_DEFINE_DOCSTRING("Read a 32-bit value from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, read32)
	mSCRIPT_DEFINE_DOCSTRING("Read byte range from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, readRange)
	mSCRIPT_DEFINE_DOCSTRING("Write an 8-bit value from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, write8)
	mSCRIPT_DEFINE_DOCSTRING("Write a 16-bit value from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, write16)
	mSCRIPT_DEFINE_DOCSTRING("Write a 32-bit value from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, write32)

	mSCRIPT_DEFINE_DOCSTRING("Get the address of the base of this memory domain")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, base)
	mSCRIPT_DEFINE_DOCSTRING("Get the address of the end bound of this memory domain. Note that this address is not in the domain itself, and is the address of the first byte past it")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, bound)
	mSCRIPT_DEFINE_DOCSTRING("Get the size of this memory domain in bytes")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, size)
	mSCRIPT_DEFINE_DOCSTRING("Get a short, human-readable name for this memory domain")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptMemoryDomain, name)
mSCRIPT_DEFINE_END;

static struct mScriptValue* _mScriptCoreGetGameTitle(const struct mCore* core) {
	struct mGameInfo info;
	core->getGameInfo(core, &info);
	return mScriptStringCreateFromASCII(info.title);
}

static struct mScriptValue* _mScriptCoreGetGameCode(const struct mCore* core) {
	struct mGameInfo info;
	core->getGameInfo(core, &info);
	return mScriptStringCreateFromASCII(info.code);
}

static struct mScriptValue* _mScriptCoreChecksum(const struct mCore* core, int t) {
	enum mCoreChecksumType type = (enum mCoreChecksumType) t;
	size_t size = 0;
	switch (type) {
	case mCHECKSUM_CRC32:
		size = 4;
		break;
	case mCHECKSUM_MD5:
		size = 16;
		break;
	case mCHECKSUM_SHA1:
		size = 20;
		break;
	}
	if (!size) {
		return &mScriptValueNull;
	}
	void* data = calloc(1, size);
	core->checksum(core, data, type);
	if (type == mCHECKSUM_CRC32) {
		// This checksum is endian-dependent...let's just make it big endian for Lua
		uint32_t* crc = data;
		STORE_32BE(*crc, 0, crc);
	}
	struct mScriptValue* ret = mScriptStringCreateFromBytes(data, size);
	free(data);
	return ret;
}

static void _mScriptCoreAddKey(struct mCore* core, int32_t key) {
	core->addKeys(core, 1 << key);
}

static void _mScriptCoreClearKey(struct mCore* core, int32_t key) {
	core->clearKeys(core, 1 << key);
}

static int32_t _mScriptCoreGetKey(struct mCore* core, int32_t key) {
	return (core->getKeys(core) >> key) & 1;
}

static struct mScriptValue* _mScriptCoreReadRange(struct mCore* core, uint32_t address, uint32_t length) {
	struct mScriptValue* value = mScriptStringCreateEmpty(length);
	char* buffer = value->value.string->buffer;
	uint32_t i;
	for (i = 0; i < length; ++i, ++address) {
		buffer[i] = core->busRead8(core, address);
	}
	return value;
}

static bool _scriptStopRequested;

void mScriptRequestStop(void) {
	_scriptStopRequested = true;
}

bool mScriptShouldStop(void) {
	return _scriptStopRequested;
}

static void _mScriptCoreStop(struct mCore* core) {
	UNUSED(core);
	mScriptRequestStop();
}

// emu:stop() cannot report failure: it ends the run loop, and headless then
// exits 0 whether or not the checks passed, so every automation has to scrape a
// report file to find out what happened. emu:exit(code) sets the code a
// front-end returns instead, which is what a CI step needs.
//
// This is a separate method rather than an optional argument on stop() so that
// existing scripts keep their current meaning.
static int _scriptExitCode;

void mScriptSetExitCode(int code) {
	_scriptExitCode = code;
}

int mScriptGetExitCode(void) {
	return _scriptExitCode;
}

static void _mScriptCoreExit(struct mCore* core, int32_t code) {
	UNUSED(core);
	mScriptSetExitCode(code);
	mScriptRequestStop();
}

// Presses a key and leaves it held, so a script can walk menus with one call
// per input instead of composing a mask by hand.
static void _mScriptCorePressKey(struct mCore* core, int32_t key) {
	if (key >= 0 && key < 32) {
		core->addKeys(core, 1 << key);
	}
}

// Fill buffer with `chunk` bytes from `address`. When the whole chunk sits inside
// one mapped block it is memcpy'd out of the block's own pointer, and only a
// chunk that does not fit falls back to one busRead8 per byte.
//
// This is what makes a range crossing a block boundary fast: GBA work RAM is
// 256 KiB, so a chunk this size lands inside it almost every time, and the
// per-byte bus call disappears without special-casing where the boundary is.
static void _readChunk(struct mCore* core, uint32_t address, uint32_t chunk, uint8_t* buffer) {
	size_t avail = 0;
	const uint8_t* direct = mCoreGetMemoryBlock(core, address, &avail);
	if (direct && chunk <= avail) {
		memcpy(buffer, direct, chunk);
		return;
	}
	uint32_t i;
	for (i = 0; i < chunk; ++i) {
		buffer[i] = core->busRead8(core, address + i);
	}
}

// How many bytes writeRange moves through the bus per iteration. Matches the
// buffer the read side uses in _readChunk.
#define WRITERANGE_CHUNK 256

// Mirror of _readChunk. A chunk that lands entirely inside one mapped block is
// copied straight into that block, so writing a range that crosses a boundary
// does not cost a busWrite8 per byte either.
//
// The mask asks for WRITE as well as MAPPED. The read path cannot: ROM and BIOS
// are mapped and readable, but a memcpy through a read-only pointer would write
// into the loaded image itself and change what checksum, dumpRange and savestates
// see for the rest of the run. Requiring WRITE makes those addresses fall
// through to busWrite8, which the bus discards exactly as it discards write8.
static void _writeChunk(struct mCore* core, uint32_t address, uint32_t chunk, const uint8_t* buffer) {
	size_t avail = 0;
	uint8_t* direct = mCoreGetMemoryBlockMasked(core, address, &avail, mCORE_MEMORY_MAPPED | mCORE_MEMORY_WRITE);
	if (direct && chunk <= avail) {
		memcpy(direct, buffer, chunk);
		return;
	}
	uint32_t i;
	for (i = 0; i < chunk; ++i) {
		core->busWrite8(core, address + i, buffer[i]);
	}
}

// Write the bytes of a string to the bus starting at `address` and return the
// byte count. The length comes from the string itself rather than a separate
// argument, which is what keeps a disagreement between the two impossible.
//
// The return is the number of bytes handed to the bus, not the number that
// changed something. A write to unmapped or read-only space is still reported,
// because the bus discards those writes silently and write8 does the same, so
// counting them here would make writeRange the only memory method that can tell
// a script its write was dropped.
static int32_t _mScriptCoreWriteRange(struct mCore* core, uint32_t address, struct mScriptString* data) {
	const uint8_t* source;
	uint32_t length;
	uint32_t done = 0;
	if (!data || !data->size) {
		return 0;
	}
	source = (const uint8_t*) data->buffer;
	length = data->size;
	while (done < length) {
		uint32_t chunk = length - done;
		if (chunk > WRITERANGE_CHUNK) {
			chunk = WRITERANGE_CHUNK;
		}
		_writeChunk(core, address + done, chunk, source + done);
		done += chunk;
	}
	return (int32_t) length;
}

static int32_t _mScriptCoreHashRange(struct mCore* core, uint32_t address, uint32_t length) {
	uint8_t buffer[256];
	// crc32() uses zlib semantics: it complements on entry and on exit, so the
	// running value is passed through untouched and the seed is 0.
	uint32_t crc = 0;
	uint32_t done = 0;
	// A range inside a single block is hashed straight out of memory, with no
	// copy at all. Anything else goes through _readChunk, which still avoids the
	// per-byte bus call for as much of it as fits in the block it lands in.
	size_t avail = 0;
	const uint8_t* direct = mCoreGetMemoryBlock(core, address, &avail);
	if (direct && length <= avail) {
		return (int32_t) crc32(0, direct, length);
	}
	while (done < length) {
		uint32_t chunk = length - done;
		if (chunk > sizeof(buffer)) {
			chunk = sizeof(buffer);
		}
		_readChunk(core, address + done, chunk, buffer);
		crc = crc32(crc, buffer, chunk);
		done += chunk;
	}
	return (int32_t) crc;
}

#ifdef ENABLE_VFS
static int32_t _mScriptCoreDumpRange(struct mCore* core, const char* path, uint32_t address, uint32_t length) {
	struct VFile* vf = VFileOpen(path, O_WRONLY | O_CREAT | O_TRUNC);
	uint8_t buffer[256];
	uint32_t done = 0;
	if (!vf) {
		return -1;
	}
while (done < length) {
		uint32_t chunk = length - done;
		if (chunk > sizeof(buffer)) {
			chunk = sizeof(buffer);
		}
		// Dumping is what the extraction tooling leans on hardest, so it gets the
		// same block-pointer read as hashRange: a chunk landing inside a mapped
		// block is copied out rather than fetched one bus call per byte.
		_readChunk(core, address + done, chunk, buffer);
		if (vf->write(vf, buffer, chunk) != (ssize_t) chunk) {
			vf->close(vf);
			return -2;
		}
		done += chunk;
	}
	vf->close(vf);
	return (int32_t) length;
}
#endif

// Returns the match addresses packed as 4-byte little-endian values, so the
// caller gets a plain string like readRange returns. Building an mScriptValue
// table here is not worth the extra type machinery for a flat list of ints.
// REFUSES_TO_SCAN caps the worst case: one match per scanned byte is the
// upper bound on output, and without this a typo'd length allocates gigabytes
// or overflows the length * 4 product below.
#define REFUSES_TO_SCAN (64 * 1024 * 1024)
static struct mScriptValue* _mScriptCoreFindBytes(struct mCore* core, struct mScriptString* pattern, uint32_t address, uint32_t length) {
	struct mScriptValue* list;
	char* out;
	uint32_t patternLength;
	const char* needle;
	uint32_t i;
	uint32_t found = 0;
	if (!pattern || !pattern->size) {
		return mScriptStringCreateEmpty(0);
	}
	needle = pattern->buffer;
	patternLength = pattern->size;
	if (patternLength > length || length > REFUSES_TO_SCAN) {
		return mScriptStringCreateEmpty(0);
	}

	// Fast path: when the whole range sits inside one mapped block we get a
	// direct pointer and can scan it in memory instead of paying a busRead8
	// call per byte. Two passes rather than one, because the old code sized the
	// result for the worst case (a match at every offset), which asks for 128MB
	// to search a 32MB ROM.
	size_t avail = 0;
	const uint8_t* direct = mCoreGetMemoryBlock(core, address, &avail);
	if (direct && length <= avail) {
		size_t limit = length - patternLength + 1;
		size_t n;
		size_t count = 0;
		for (n = 0; n < limit; ++n) {
			if (direct[n] == (uint8_t) needle[0] && memcmp(direct + n, needle, patternLength) == 0) {
				count++;
			}
		}
		list = mScriptStringCreateEmpty(count * 4);
		out = list->value.string->buffer;
		count = 0;
		for (n = 0; n < limit; ++n) {
			if (direct[n] == (uint8_t) needle[0] && memcmp(direct + n, needle, patternLength) == 0) {
				uint32_t at = address + (uint32_t) n;
				out[count * 4 + 0] = at & 0xFF;
				out[count * 4 + 1] = (at >> 8) & 0xFF;
				out[count * 4 + 2] = (at >> 16) & 0xFF;
				out[count * 4 + 3] = (at >> 24) & 0xFF;
				count++;
			}
		}
		list->value.string->size = count * 4;
		return list;
	}

	list = mScriptStringCreateEmpty((size_t) length * 4);
	out = list->value.string->buffer;

	// i <= length - patternLength, not i + patternLength <= length:
	// the latter overflows when length is close to UINT32_MAX.
	for (i = 0; i <= length - patternLength; ++i) {
		uint32_t j;
		for (j = 0; j < patternLength; ++j) {
			if (core->busRead8(core, address + i + j) != (uint8_t) needle[j]) {
				break;
			}
		}
		if (j == patternLength) {
			uint32_t at = address + i;
			out[found * 4 + 0] = at & 0xFF;
			out[found * 4 + 1] = (at >> 8) & 0xFF;
			out[found * 4 + 2] = (at >> 16) & 0xFF;
			out[found * 4 + 3] = (at >> 24) & 0xFF;
			found++;
		}
	}
	list->value.string->size = found * 4;
	return list;
}

static struct mScriptValue* _mScriptCoreReadRegister(const struct mCore* core, const char* regName) {
	int32_t out = 0;
	if (!core->readRegister(core, regName, &out)) {
		return &mScriptValueNull;
	}
	struct mScriptValue* value = mScriptValueAlloc(mSCRIPT_TYPE_MS_S32);
	value->value.s32 = out;
	return value;
}

static void _mScriptCoreWriteRegister(struct mCore* core, const char* regName, int32_t in) {
	core->writeRegister(core, regName, in);
}

static struct mScriptValue* _mScriptCoreSaveState(struct mCore* core, int32_t flags) {
	struct VFile* vf = VFileMemChunk(NULL, 0);
	if (!mCoreSaveStateNamed(core, vf, flags)) {
		vf->close(vf);
		return &mScriptValueNull;
	}
	void* buffer = vf->map(vf, vf->size(vf), MAP_READ);
	struct mScriptValue* value = mScriptStringCreateFromBytes(buffer, vf->size(vf));
	vf->close(vf);
	return value;
}

#ifdef ENABLE_VFS
static int _mScriptCoreSaveStateFile(struct mCore* core, const char* path, int flags) {
	struct VFile* vf = VFileOpen(path, O_WRONLY | O_TRUNC | O_CREAT);
	if (!vf) {
		return false;
	}
	bool ok = mCoreSaveStateNamed(core, vf, flags);
	vf->close(vf);
	return ok;
}

static int _mScriptCoreLoadStateFile(struct mCore* core, const char* path, int flags) {
	struct VFile* vf = VFileOpen(path, O_RDONLY);
	if (!vf) {
		return false;
	}
	bool ok = mCoreLoadStateNamed(core, vf, flags);
	vf->close(vf);
	return ok;
}

static void _mScriptCoreTakeScreenshot(struct mCore* core, const char* filename) {
	if (filename) {
		struct VFile* vf = VFileOpen(filename, O_WRONLY | O_CREAT | O_TRUNC);
		if (!vf) {
			return;
		}
		mCoreTakeScreenshotVF(core, vf);
		vf->close(vf);
	} else {
		mCoreTakeScreenshot(core);
	}
}
#endif

static int32_t _mScriptCoreLoadState(struct mCore* core, struct mScriptString* buffer, int32_t flags) {
	struct VFile* vf = VFileFromConstMemory(buffer->buffer, buffer->size);
	int ret = mCoreLoadStateNamed(core, vf, flags);
	vf->close(vf);
	return ret;
}

static struct mScriptValue* _mScriptCoreTakeScreenshotToImage(struct mCore* core) {
	size_t stride = 0;
	const void* pixels = NULL;
	unsigned width, height;
	core->currentVideoSize(core, &width, &height);
	core->getPixels(core, &pixels, &stride);
	// stride can still come back 0 even when pixels is set; the mImage
	// constructors below treat that as a stride of sizeof(mColor) and walk off
	// the end of the buffer.
	if (!pixels || !stride) {
		return NULL;
	}
#ifndef COLOR_16_BIT
	struct mImage* image = mImageCreateFromConstBuffer(width, height, stride, mCOLOR_XBGR8, pixels);
#elif COLOR_5_6_5
	struct mImage* image = mImageCreateFromConstBuffer(width, height, stride, mCOLOR_RGB565, pixels);
#else
	struct mImage* image = mImageCreateFromConstBuffer(width, height, stride, mCOLOR_BGR5, pixels);
#endif

struct mScriptValue* result = mScriptValueAlloc(mSCRIPT_TYPE_MS_S(mImage));
	result->value.opaque = image;
	result->flags = mSCRIPT_VALUE_FLAG_DEINIT;
	return result;
}

#ifdef ENABLE_VFS
// A magnified glyph needs a handful of pixels per side. 64 covers 8x16 at 8x with
// room to spare, and the cap on the product below is what actually bounds the
// allocation.
#define SCREENSHOT_REGION_MAX_SCALE 64
#define SCREENSHOT_REGION_MAX_PIXELS (16 * 1024 * 1024)

#ifdef M_CORE_GBA
#ifdef ENABLE_DEBUGGERS
// Disassemble a run of instructions. mode is "thumb", "arm" or "auto", and the
// default is thumb because that is what a GBA game is made of. Auto is a guess
// and admits it: nothing in an instruction says it is ARM mode, and Radical Red
// is mixed, its ARM instructions having turned up while tracing rather than by
// looking for them. A caller that knows says so.
static struct mScriptValue* _mScriptCoreDisasm(struct mScriptCoreAdapter* adapter, uint32_t address, uint32_t count, const char* mode) {
	struct mCore* core = adapter->core;
	struct GBA* gba = core->board;
	bool arm = mode && !strcmp(mode, "arm");
	bool guess = mode && !strcmp(mode, "auto");
	// 96 bytes per line covers an address, its bytes and the longest mnemonic the
	// formatter produces. Bounded so a caller cannot ask for a disassembly large
	// enough to matter.
	size_t cap = (size_t) count * 96 + 64;
	char* buf = malloc(cap);
	size_t used = 0;
	uint32_t i;
	struct mScriptValue* result;
	if (!count) {
		return mScriptStringCreateFromBytes("", 0);
	}
	if (!buf) {
		return mScriptStringCreateFromBytes("", 0);
	}
	buf[0] = '\0';
	for (i = 0; i < count; ++i) {
		char text[128];
		struct ARMInstructionInfo info;
		struct ARMInstructionInfo info2;
		struct ARMInstructionInfo combined;
		uint32_t raw;
		uint16_t lo, hi;
		int written = -1;
		if (used + 96 >= cap) {
			break;
		}
		lo = core->busRead16(core, address);
		hi = core->busRead16(core, address + 2);
		raw = lo | (hi << 16);
		text[0] = '\0';
		if (!arm) {
			ARMDecodeThumb(lo, &info);
			ARMDecodeThumb(hi, &info2);
			if (ARMDecodeThumbCombine(&info, &info2, &combined)) {
				written = ARMDisassemble(&combined, gba->cpu, NULL, address + 4, text, sizeof(text));
				if (written > 0) {
					used += (size_t) snprintf(buf + used, cap - used, "%08X  %04X %04X\t%s\n", address, lo, hi, text);
					address += 4;
					continue;
				}
			}
			written = ARMDisassemble(&info, gba->cpu, NULL, address + 4, text, sizeof(text));
			if (written > 0) {
				used += (size_t) snprintf(buf + used, cap - used, "%08X  %04X    \t%s\n", address, lo, text);
				address += 2;
				continue;
			}
		}
		if (arm || guess) {
			struct ARMInstructionInfo armInfo;
			ARMDecodeARM(raw, &armInfo);
			written = ARMDisassemble(&armInfo, gba->cpu, NULL, address + 8, text, sizeof(text));
			if (written > 0) {
				used += (size_t) snprintf(buf + used, cap - used, "%08X  %08X\t%s\n", address, raw, text);
				address += 4;
				continue;
			}
		}
		// Nothing decoded here. Say so and step a halfword, so walking a data
		// region still yields an offset rather than stopping dead.
		used += (size_t) snprintf(buf + used, cap - used, "%08X  %04X    \t(n/a)\n", address, lo);
		address += 2;
	}
	result = mScriptStringCreateFromBytes(buf, used);
	free(buf);
	return result;
}
#endif
#endif

// Read one pixel of the framebuffer in the layout the build was configured for.
// The core hands over its own buffer rather than an mImage, so the format has to
// be spelled out once, exactly as _mScriptCoreTakeScreenshotToImage spells it.
static uint32_t _readPixel(const void* pixels, size_t stride, unsigned x, unsigned y) {
	// stride counts pixels, not bytes. mImageCreateFromConstBuffer multiplies it
	// by the format depth itself, and setVideoBuffer is likewise handed a pitch
	// divided by the bytes per pixel, so treating it as a byte count samples the
	// wrong row: row 80 of a 240 wide frame starts 19200 bytes in, which is pixel
	// 4800, or row 20.
	const uint8_t* row = (const uint8_t*) pixels + y * stride * sizeof(mColor);
#ifdef COLOR_16_BIT
	return ((const uint16_t*) row)[x];
#else
	return ((const uint32_t*) row)[x];
#endif
}

// Crop and zoom the framebuffer in one call. A full screenshot is useless for
// looking at an 8x8 tile, which is what this is for: pass scale and every source
// pixel becomes scale by scale blocks.
//
// Nearest neighbour on purpose. A tile magnified with interpolation loses the
// exact pixel boundaries the eye needs to judge a glyph against, and the values
// on screen stop corresponding to the ones in VRAM.
static bool _mScriptCoreScreenshotRegion(struct mCore* core, uint32_t x, uint32_t y, uint32_t w, uint32_t h, const char* path, uint32_t scale) {
	size_t stride = 0;
	const void* pixels = NULL;
	unsigned width, height;
	struct mImage* image;
	uint32_t ox, oy;
	if (scale < 1) {
		scale = 1;
	}
	if (!w || !h) {
		return false;
	}
	core->currentVideoSize(core, &width, &height);
	core->getPixels(core, &pixels, &stride);
	if (!pixels || !stride) {
		return false;
	}
	// Clamp by subtraction, not by testing x + w against width: a script can pass
	// w = 0xFFFFFFFF, and x + w then wraps to 0, which compares false and lets the
	// unclamped value through. width - x cannot wrap, because x < width is already
	// established above. A crop that reaches past the edge is clipped rather than
	// refused, so a tracer working at a border still gets the part that exists.
	if (x >= width) {
		return false;
	}
	if (y >= height) {
		return false;
	}
	if (w > width - x) {
		w = width - x;
	}
	if (h > height - y) {
		h = height - y;
	}
	// The output is w * scale by h * scale. Both are 32 bit and a script chooses
	// both, so the product is checked in 64 bit rather than trusted: an unclamped
	// scale of 858993459 would ask for a gigabyte and hundreds of millions of
	// iterations, which is a way to hang the process rather than an answer.
	if (scale > SCREENSHOT_REGION_MAX_SCALE
			|| (uint64_t) w * scale > SCREENSHOT_REGION_MAX_PIXELS
			|| (uint64_t) h * scale > SCREENSHOT_REGION_MAX_PIXELS) {
		return false;
	}
#if !defined(COLOR_16_BIT)
	image = mImageCreate(w * scale, h * scale, mCOLOR_XBGR8);
#elif COLOR_5_6_5
	image = mImageCreate(w * scale, h * scale, mCOLOR_RGB565);
#else
	image = mImageCreate(w * scale, h * scale, mCOLOR_BGR5);
#endif
	if (!image) {
		return false;
	}
	for (oy = 0; oy < h * scale; ++oy) {
		uint32_t sy = y + oy / scale;
		for (ox = 0; ox < w * scale; ++ox) {
			uint32_t sx = x + ox / scale;
			// Raw, not mImageSetPixel: the source is already in the image's own
			// format, while mImageSetPixel reads the argument as ARGB8 and
			// converts, which swaps red and blue on a 32 bit build.
			mImageSetPixelRaw(image, ox, oy, _readPixel(pixels, stride, sx, sy));
		}
	}
	bool ok = mImageSave(image, path, "png");
	mImageDestroy(image);
	return ok;
}
#endif

#ifdef ENABLE_VFS
// Loading functions
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, BOOL, loadFile, mCoreLoadFile, 1, CHARP, path);
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, BOOL, autoloadSave, mCoreAutoloadSave, 0);
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, BOOL, loadSaveFile, mCoreLoadSaveFile, 2, CHARP, path, BOOL, temporary);
#endif

// Info functions
mSCRIPT_DECLARE_STRUCT_CD_METHOD(mCore, S32, platform, 0);
mSCRIPT_DECLARE_STRUCT_CD_METHOD(mCore, U32, frameCounter, 0);
mSCRIPT_DECLARE_STRUCT_CD_METHOD(mCore, S32, frameCycles, 0);
mSCRIPT_DECLARE_STRUCT_CD_METHOD(mCore, S32, frequency, 0);
mSCRIPT_DECLARE_STRUCT_C_METHOD(mCore, WSTR, getGameTitle, _mScriptCoreGetGameTitle, 0);
mSCRIPT_DECLARE_STRUCT_C_METHOD(mCore, WSTR, getGameCode, _mScriptCoreGetGameCode, 0);
mSCRIPT_DECLARE_STRUCT_CD_METHOD(mCore, S64, romSize, 0);
mSCRIPT_DECLARE_STRUCT_C_METHOD_WITH_DEFAULTS(mCore, WSTR, checksum, _mScriptCoreChecksum, 1, S32, type);

// Run functions
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, reset, 0);
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, runFrame, 0);
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, step, 0);

// Key functions
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, setKeys, 1, U32, keys);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mCore, stop, _mScriptCoreStop, 0);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mCore, pressKey, _mScriptCorePressKey, 1, S32, key);
	// 0 means "no opinion", so a script that never calls exit leaves the front-end
	// to decide the code as it did before.
	mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mCore, exit, _mScriptCoreExit, 1, S32, code);
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, addKeys, 1, U32, keys);
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, clearKeys, 1, U32, keys);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mCore, addKey, _mScriptCoreAddKey, 1, S32, key);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mCore, clearKey, _mScriptCoreClearKey, 1, S32, key);
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, S32, getKey, _mScriptCoreGetKey, 1, S32, key);
mSCRIPT_DECLARE_STRUCT_D_METHOD(mCore, U32, getKeys, 0);

// Memory functions
mSCRIPT_DECLARE_STRUCT_D_METHOD(mCore, U32, busRead8, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_D_METHOD(mCore, U32, busRead16, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_D_METHOD(mCore, U32, busRead32, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, WSTR, readRange, _mScriptCoreReadRange, 2, U32, address, U32, length);
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, S32, hashRange, _mScriptCoreHashRange, 2, U32, address, U32, length);
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, WSTR, findBytes, _mScriptCoreFindBytes, 3, STR, pattern, U32, address, U32, length);
#ifdef ENABLE_VFS
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, S32, dumpRange, _mScriptCoreDumpRange, 3, CHARP, path, U32, address, U32, length);
#endif
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, busWrite8, 2, U32, address, U8, value);
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, busWrite16, 2, U32, address, U16, value);
mSCRIPT_DECLARE_STRUCT_VOID_D_METHOD(mCore, busWrite32, 2, U32, address, U32, value);
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, S32, writeRange, _mScriptCoreWriteRange, 2, U32, address, STR, data);

// Register functions
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, WRAPPER, readRegister, _mScriptCoreReadRegister, 1, CHARP, regName);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mCore, writeRegister, _mScriptCoreWriteRegister, 2, CHARP, regName, S32, value);

// Savestate functions
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mCore, WSTR, saveStateBuffer, _mScriptCoreSaveState, 1, S32, flags);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mCore, BOOL, loadStateBuffer, _mScriptCoreLoadState, 2, STR, buffer, S32, flags);
#ifdef ENABLE_VFS
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mCore, BOOL, saveStateSlot, mCoreSaveState, 2, S32, slot, S32, flags);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mCore, BOOL, saveStateFile, _mScriptCoreSaveStateFile, 2, CHARP, path, S32, flags);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mCore, BOOL, loadStateSlot, mCoreLoadState, 2, S32, slot, S32, flags);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mCore, BOOL, loadStateFile, _mScriptCoreLoadStateFile, 2, CHARP, path, S32, flags);

// Miscellaneous functions
mSCRIPT_DECLARE_STRUCT_VOID_METHOD_WITH_DEFAULTS(mCore, screenshot, _mScriptCoreTakeScreenshot, 1, CHARP, filename);
#endif
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, W(mImage), screenshotToImage, _mScriptCoreTakeScreenshotToImage, 0);
#ifdef ENABLE_VFS
mSCRIPT_DECLARE_STRUCT_METHOD(mCore, BOOL, screenshotRegion, _mScriptCoreScreenshotRegion, 6, U32, x, U32, y, U32, w, U32, h, CHARP, path, U32, scale);
#endif

mSCRIPT_DEFINE_STRUCT(mCore)
	mSCRIPT_DEFINE_CLASS_DOCSTRING(
		"An instance of an emulator core."
	)
#ifdef ENABLE_VFS
	mSCRIPT_DEFINE_DOCSTRING("Load a ROM file into the current state of this core")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, loadFile)
	mSCRIPT_DEFINE_DOCSTRING("Load the save data associated with the currently loaded ROM file")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, autoloadSave)
	mSCRIPT_DEFINE_DOCSTRING("Load save data from the given path. If the `temporary` flag is set, the given save data will not be written back to disk")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, loadSaveFile)
#endif

	mSCRIPT_DEFINE_DOCSTRING("Get which platform is being emulated. See C.PLATFORM for possible values")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, platform)
	mSCRIPT_DEFINE_DOCSTRING("Get the number of the current frame")
	mSCRIPT_DEFINE_STRUCT_METHOD_NAMED(mCore, currentFrame, frameCounter)
	mSCRIPT_DEFINE_DOCSTRING("Get the number of cycles per frame")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, frameCycles)
	mSCRIPT_DEFINE_DOCSTRING("Get the number of cycles per second")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, frequency)
	mSCRIPT_DEFINE_DOCSTRING("Get the size of the loaded ROM")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, romSize)
	mSCRIPT_DEFINE_DOCSTRING("Get the checksum of the loaded ROM")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, checksum)

	mSCRIPT_DEFINE_DOCSTRING("Get internal title of the game from the ROM header")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, getGameTitle)
	mSCRIPT_DEFINE_DOCSTRING("Get internal product code for the game from the ROM header, if available")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, getGameCode)

	mSCRIPT_DEFINE_DOCSTRING("Reset the emulation. This does not invoke the **reset** callback")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, reset)
	mSCRIPT_DEFINE_DOCSTRING("Run until the next frame")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, runFrame)
	mSCRIPT_DEFINE_DOCSTRING("Run a single instruction")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, step)

	mSCRIPT_DEFINE_DOCSTRING("Set the currently active key list")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, setKeys)
	mSCRIPT_DEFINE_DOCSTRING("Stop the front-end run loop, letting the process exit cleanly")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, stop)
	mSCRIPT_DEFINE_DOCSTRING("Press and hold a key (A=0, B=1, SELECT=2, START=3)")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, pressKey)
	mSCRIPT_DEFINE_DOCSTRING("Stop emulation and exit with the given code, for CI to read directly")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, exit)
	mSCRIPT_DEFINE_DOCSTRING("Add a single key to the currently active key list")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, addKey)
	mSCRIPT_DEFINE_DOCSTRING("Add a bitmask of keys to the currently active key list")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, addKeys)
	mSCRIPT_DEFINE_DOCSTRING("Remove a single key from the currently active key list")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, clearKey)
	mSCRIPT_DEFINE_DOCSTRING("Remove a bitmask of keys from the currently active key list")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, clearKeys)
	mSCRIPT_DEFINE_DOCSTRING("Get the active state of a given key")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, getKey)
	mSCRIPT_DEFINE_DOCSTRING("Get the currently active keys as a bitmask")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, getKeys)

	mSCRIPT_DEFINE_DOCSTRING("Read an 8-bit value from the given bus address")
	mSCRIPT_DEFINE_STRUCT_METHOD_NAMED(mCore, read8, busRead8)
	mSCRIPT_DEFINE_DOCSTRING("Read a 16-bit value from the given bus address")
	mSCRIPT_DEFINE_STRUCT_METHOD_NAMED(mCore, read16, busRead16)
	mSCRIPT_DEFINE_DOCSTRING("Read a 32-bit value from the given bus address")
	mSCRIPT_DEFINE_STRUCT_METHOD_NAMED(mCore, read32, busRead32)
	mSCRIPT_DEFINE_DOCSTRING("Read byte range from the given offset")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, readRange)
	mSCRIPT_DEFINE_DOCSTRING("CRC32 of a byte range, for change detection without dumping it")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, hashRange)
	mSCRIPT_DEFINE_DOCSTRING("Find all occurrences of a byte pattern, returns a table of addresses")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, findBytes)
	mSCRIPT_DEFINE_DOCSTRING("Write a byte range to a file, returns the byte count or a negative error")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, dumpRange)
	mSCRIPT_DEFINE_DOCSTRING("Write an 8-bit value from the given bus address")
	mSCRIPT_DEFINE_STRUCT_METHOD_NAMED(mCore, write8, busWrite8)
	mSCRIPT_DEFINE_DOCSTRING("Write a 16-bit value from the given bus address")
	mSCRIPT_DEFINE_STRUCT_METHOD_NAMED(mCore, write16, busWrite16)
mSCRIPT_DEFINE_DOCSTRING("Write a 32-bit value from the given bus address")
	mSCRIPT_DEFINE_STRUCT_METHOD_NAMED(mCore, write32, busWrite32)
	mSCRIPT_DEFINE_DOCSTRING("Write the bytes of a string to the bus starting at the given address, returns the number of bytes handed to the bus")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, writeRange)

	mSCRIPT_DEFINE_DOCSTRING("Read the value of the register with the given name")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, readRegister)
	mSCRIPT_DEFINE_DOCSTRING("Write the value of the register with the given name")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, writeRegister)

	mSCRIPT_DEFINE_DOCSTRING("Save state and return as a buffer. See C.SAVESTATE for possible values for `flags`")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, saveStateBuffer)
	mSCRIPT_DEFINE_DOCSTRING("Load state from a buffer. See C.SAVESTATE for possible values for `flags`")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, loadStateBuffer)
#ifdef ENABLE_VFS
	mSCRIPT_DEFINE_DOCSTRING("Save state to the slot number. See C.SAVESTATE for possible values for `flags`")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, saveStateSlot)
	mSCRIPT_DEFINE_DOCSTRING("Save state to the given path. See C.SAVESTATE for possible values for `flags`")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, saveStateFile)
	mSCRIPT_DEFINE_DOCSTRING("Load state from the slot number. See C.SAVESTATE for possible values for `flags`")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, loadStateSlot)
	mSCRIPT_DEFINE_DOCSTRING("Load state from the given path. See C.SAVESTATE for possible values for `flags`")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, loadStateFile)

	mSCRIPT_DEFINE_DOCSTRING("Save a screenshot to a file")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, screenshot)
#endif
mSCRIPT_DEFINE_DOCSTRING("Get a screenshot in an struct::mImage")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, screenshotToImage)
#ifdef ENABLE_VFS
	mSCRIPT_DEFINE_DOCSTRING("Save a zoomed crop of the screen as a PNG. Each source pixel becomes a scale by scale block")
	mSCRIPT_DEFINE_STRUCT_METHOD(mCore, screenshotRegion)
#endif
mSCRIPT_DEFINE_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, checksum)
	mSCRIPT_S32(mCHECKSUM_CRC32)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, saveStateSlot)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(SAVESTATE_ALL)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, saveStateBuffer)
	mSCRIPT_S32(SAVESTATE_ALL)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, saveStateFile)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(SAVESTATE_ALL)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, loadStateSlot)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(SAVESTATE_ALL & ~SAVESTATE_SAVEDATA)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, loadStateBuffer)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(SAVESTATE_ALL & ~SAVESTATE_SAVEDATA)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, loadStateFile)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(SAVESTATE_ALL & ~SAVESTATE_SAVEDATA)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mCore, screenshot)
	mSCRIPT_CHARP(NULL)
mSCRIPT_DEFINE_DEFAULTS_END;

static void _clearMemoryMap(struct mScriptContext* context, struct mScriptCoreAdapter* adapter, bool clear) {
	struct TableIterator iter;
	if (mScriptTableIteratorStart(&adapter->memory, &iter)) {
		while (true) {
			struct mScriptValue* weakref = mScriptTableIteratorGetValue(&adapter->memory, &iter);
			if (weakref) {
				if (clear) {
					mScriptContextClearWeakref(context, weakref->value.s32);
				}
				mScriptValueDeref(weakref);
			}
			if (!mScriptTableIteratorNext(&adapter->memory, &iter)) {
				break;
			}
		}
	}
	mScriptTableClear(&adapter->memory);
}

static void _rebuildMemoryMap(struct mScriptContext* context, struct mScriptCoreAdapter* adapter) {
	_clearMemoryMap(context, adapter, true);

	const struct mCoreMemoryBlock* blocks;
	size_t nBlocks = adapter->core->listMemoryBlocks(adapter->core, &blocks);
	size_t i;
	for (i = 0; i < nBlocks; ++i) {
		if (blocks[i].flags == mCORE_MEMORY_VIRTUAL) {
			continue;
		}
		struct mScriptMemoryDomain* memadapter = calloc(1, sizeof(*memadapter));
		memadapter->core = adapter->core;
		memcpy(&memadapter->block, &blocks[i], sizeof(memadapter->block));
		struct mScriptValue* value = mScriptValueAlloc(mSCRIPT_TYPE_MS_S(mScriptMemoryDomain));
		value->flags = mSCRIPT_VALUE_FLAG_FREE_BUFFER;
		value->value.opaque = memadapter;
		struct mScriptValue* key = mScriptStringCreateFromUTF8(blocks[i].internalName);
		mScriptTableInsert(&adapter->memory, key, mScriptContextMakeWeakref(context, value));
		mScriptValueDeref(key);
	}
}

#ifdef ENABLE_DEBUGGERS
static void _freeBreakpoint(void* bp) {
	struct mScriptBreakpoint* point = bp;
	if (point->inUse) {
		// TODO: Refcount this?
		return;
	}
	mASSERT(point->magic == SCRIPT_BREAKPOINT_MAGIC);
	point->magic = 0;
	HashTableDeinit(&point->callbacks);
	free(bp);
}

static struct mScriptBreakpoint* _ensureBreakpoint(struct mScriptDebugger* debugger, struct mBreakpoint* breakpoint) {
	struct mDebuggerModule* module = &debugger->d;
	struct mScriptBreakpointName name = {
		.address = breakpoint->address,
		.maxAddress = 0,
		.segment = breakpoint->segment,
		.type = 0,
		.subtype = breakpoint->type
	};
	struct mScriptBreakpoint* point = HashTableLookupBinary(&debugger->breakpoints, &name, sizeof(name));
	if (point) {
		return point;
	}
	point = calloc(1, sizeof(*point));
	if (!point) {
		return NULL;
	}
	point->magic = SCRIPT_BREAKPOINT_MAGIC;
	point->id = module->p->platform->setBreakpoint(module->p->platform, module, breakpoint);
	point->name = name;
	HashTableInit(&point->callbacks, 0, (void (*)(void*)) mScriptValueDeref);
	HashTableInsertBinary(&debugger->bpidMap, &point->id, sizeof(point->id), point);
	HashTableInsertBinary(&debugger->breakpoints, &name, sizeof(name), point);
	return point;
}

static struct mScriptBreakpoint* _ensureWatchpoint(struct mScriptDebugger* debugger, struct mWatchpoint* watchpoint) {
	struct mDebuggerModule* module = &debugger->d;
	struct mScriptBreakpointName name = {
		.address = watchpoint->minAddress,
		.maxAddress = watchpoint->maxAddress,
		.segment = watchpoint->segment,
		.type = 1,
		.subtype = watchpoint->type
	};
	struct mScriptBreakpoint* point = HashTableLookupBinary(&debugger->breakpoints, &name, sizeof(name));
	if (point) {
		return point;
	}
	point = calloc(1, sizeof(*point));
	if (!point) {
		return NULL;
	}
	point->magic = SCRIPT_BREAKPOINT_MAGIC;
	point->id = module->p->platform->setWatchpoint(module->p->platform, module, watchpoint);
	point->name = name;
	HashTableInit(&point->callbacks, 0, (void (*)(void*)) mScriptValueDeref);
	HashTableInsertBinary(&debugger->bpidMap, &point->id, sizeof(point->id), point);
	HashTableInsertBinary(&debugger->breakpoints, &name, sizeof(name), point);
	return point;
}

static int64_t _addCallbackToBreakpoint(struct mScriptDebugger* debugger, struct mScriptBreakpoint* point, struct mScriptValue* callback) {
	int64_t cbid = debugger->nextBreakpoint;
	++debugger->nextBreakpoint;
	HashTableInsertBinary(&debugger->cbidMap, &cbid, sizeof(cbid), point);
	mScriptValueRef(callback);
	HashTableInsertBinary(&point->callbacks, &cbid, sizeof(cbid), callback);
	point->invalidated = true;
	return cbid;
}

static void _runCallbacks(struct mScriptDebugger* debugger, struct mScriptBreakpoint* point, struct mScriptValue* info) {
	struct Table visited;
	HashTableInit(&visited, 0, NULL);
	point->inUse = true;

	struct TableIterator iter;
	while (HashTableIteratorStart(&point->callbacks, &iter)) {
		point->invalidated = false;
		do {
			int64_t cbid = *(int64_t*) HashTableIteratorGetKey(&point->callbacks, &iter);
			if (HashTableLookupBinary(&visited, &cbid, sizeof(cbid))) {
				continue;
			}
			HashTableInsertBinary(&visited, &cbid, sizeof(cbid), (void*) 1);

			struct mScriptValue* fn = HashTableIteratorGetValue(&point->callbacks, &iter);
			struct mScriptFrame frame;
			mScriptFrameInit(&frame);
			mSCRIPT_PUSH(&frame.stack, WTABLE, info);
			mScriptContextInvoke(debugger->p->context, fn, &frame);
			mScriptFrameDeinit(&frame);
			if (point->invalidated) {
				break;
			}
		} while (HashTableIteratorNext(&point->callbacks, &iter));
		if (!point->invalidated) {
			break;
		}
	}

HashTableDeinit(&visited);
	point->inUse = false;

	if (!HashTableSize(&point->callbacks)) {
		// The breakpoints table owns this object and frees it through
		// _freeBreakpoint, so releasing means removing the entry. Calling
		// _freeBreakpoint here freed it while the table still held the pointer,
		// and the teardown freed it a second time.
		struct mScriptCoreAdapter* adapter = ((struct mScriptDebugger*) debugger)->p;
		HashTableRemoveBinary(&adapter->debugger.bpidMap, &point->id, sizeof(point->id));
		struct mScriptBreakpointName name = point->name;
		HashTableRemoveBinary(&adapter->debugger.breakpoints, &name, sizeof(name));
	}
}

static void _scriptDebuggerInit(struct mDebuggerModule* debugger) {
	struct mScriptDebugger* scriptDebugger = (struct mScriptDebugger*) debugger;
	debugger->isPaused = false;
	debugger->needsCallback = false;
	scriptDebugger->reentered = false;

	HashTableInit(&scriptDebugger->breakpoints, 0, _freeBreakpoint);
	HashTableInit(&scriptDebugger->cbidMap, 0, NULL);
	HashTableInit(&scriptDebugger->bpidMap, 0, NULL);
}
	static void _scriptDebuggerDeinit(struct mDebuggerModule* debugger) {
	struct mScriptDebugger* scriptDebugger = (struct mScriptDebugger*) debugger;
	free(scriptDebugger->pending);
	scriptDebugger->pending = NULL;
	scriptDebugger->pendingCount = 0;
	scriptDebugger->pendingCapacity = 0;
	free(scriptDebugger->traceIds);
	scriptDebugger->traceIds = NULL;
	scriptDebugger->traceIdCount = 0;
	scriptDebugger->traceIdCapacity = 0;
	HashTableDeinit(&scriptDebugger->cbidMap);
	HashTableDeinit(&scriptDebugger->bpidMap);
	HashTableDeinit(&scriptDebugger->breakpoints);
}

static void _scriptDebuggerPaused(struct mDebuggerModule* debugger, int32_t timeoutMs) {
	UNUSED(debugger);
	UNUSED(timeoutMs);
}

static void _scriptDebuggerUpdate(struct mDebuggerModule* debugger) {
	UNUSED(debugger);
}

	// Build the Lua info table for one debugger event and hand it to the callbacks.
//
	// This must only run outside the debugger hook. Calling into Lua while the CPU
// is mid-instruction leaves the script context unusable from then on: the next
// emu: call of any kind fails with "Function called from invalid context".
// Measured on Radical Red with a watchpoint over 0x06000000-0x060000FF, which
// lands 545 hits in frame 13. Building the table and freeing it inside the hook
// is fine; calling _runCallbacks there is what breaks the context, and the same
// run survives 20 frames once the call is deferred.
	static void _dispatchDebuggerEvent(struct mScriptDebugger* scriptDebugger, struct mScriptBreakpoint* point, enum mDebuggerEntryReason reason, struct mDebuggerEntryInfo* info, uint32_t pc, bool hasPc) {
	// Unreferenced, so the Lua wrapper copies the struct instead of taking a
	// reference, and the table is released here once the callbacks have run.
	struct mScriptValue cbInfo = {
		.refs = mSCRIPT_VALUE_UNREF,
		.flags = 0,
		.type = mSCRIPT_TYPE_MS_TABLE,
	};
	cbInfo.type->alloc(&cbInfo);

	static struct mScriptValue keyAddress = mSCRIPT_CHARP("address");
	static struct mScriptValue keyWidth = mSCRIPT_CHARP("width");
	static struct mScriptValue keySegment = mSCRIPT_CHARP("segment");
	static struct mScriptValue keyOldValue = mSCRIPT_CHARP("oldValue");
	static struct mScriptValue keyNewValue = mSCRIPT_CHARP("newValue");
	static struct mScriptValue keyAccessType = mSCRIPT_CHARP("accessType");
	static struct mScriptValue keyPc = mSCRIPT_CHARP("pc");
	static struct mScriptValue keySource = mSCRIPT_CHARP("source");
	static struct mScriptValue keyCpuPc = mSCRIPT_CHARP("cpuPc");

	struct mScriptValue valAddress = mSCRIPT_MAKE_U32(info->address);
	struct mScriptValue valWidth = mSCRIPT_MAKE_S32(info->width);
	struct mScriptValue valSegment = mSCRIPT_MAKE_S32(info->segment);
	struct mScriptValue valOldValue;
	struct mScriptValue valNewValue;
	struct mScriptValue valAccessType;
	struct mScriptValue valPc;
	struct mScriptValue valSource;
	struct mScriptValue valCpuPc;

	mScriptTableInsert(&cbInfo, &keyAddress, &valAddress);
	// Present only when the access came from the CPU. A DMA transfer has no
	// instruction behind it, and reporting 0 there would be indistinguishable
	// from a real fetch at address 0.
	if (hasPc) {
		valPc = mSCRIPT_MAKE_U32(pc);
		mScriptTableInsert(&cbInfo, &keyPc, &valPc);
	}
	if (info->width > 0) {
		mScriptTableInsert(&cbInfo, &keyWidth, &valWidth);
	}
	if (info->segment >= 0) {
		mScriptTableInsert(&cbInfo, &keySegment, &valSegment);
	}

	if (reason == DEBUGGER_ENTER_WATCHPOINT) {
		// Which engine performed the access. A read watchpoint over a large slice
		// of the ROM is mostly not the program: the BIOS expands the game as it
		// boots, and copies and DMA move bytes without any instruction behind
		// them. Without this the caller can only see that a counter is missing and
		// has to guess why.
		valSource = mSCRIPT_MAKE_S32(info->type.wp.accessSource);
		mScriptTableInsert(&cbInfo, &keySource, &valSource);

		// Where the processor itself was, for every event including the ones with
		// no instruction behind them. Kept separate from pc on purpose: for a DMA
		// transfer this is not the instruction that caused it and must not be read
		// as one, but it is the only position available that a tracer can correlate
		// a transfer against, and a caller should not have to settle for no value.
		{
			int32_t out = 0;
			struct mDebugger* dbg = scriptDebugger->d.p;
			if (dbg && dbg->core && dbg->core->readRegister(dbg->core, "pc", &out)) {
				valCpuPc = mSCRIPT_MAKE_U32((uint32_t) out);
				mScriptTableInsert(&cbInfo, &keyCpuPc, &valCpuPc);
			}
		}

		valOldValue = mSCRIPT_MAKE_S32(info->type.wp.oldValue);
		valNewValue = mSCRIPT_MAKE_S32(info->type.wp.newValue);
		valAccessType = mSCRIPT_MAKE_S32(info->type.wp.accessType);

		mScriptTableInsert(&cbInfo, &keyOldValue, &valOldValue);
		if (info->type.wp.accessType != WATCHPOINT_READ) {
			mScriptTableInsert(&cbInfo, &keyNewValue, &valNewValue);
		}
		mScriptTableInsert(&cbInfo, &keyAccessType, &valAccessType);
	}

	_runCallbacks(scriptDebugger, point, &cbInfo);
	// The table is unreferenced, so mScriptValueRef and mScriptValueDeref both
	// return without doing anything and the allocation has to be released here.
	// That is safe only now that each invocation drains back to its own mark:
	// before, a nested invocation released the caller's borrow as well and this
	// free landed on a table the pool was still accounting for.
	//
	// Lifetime contract, unchanged from upstream: the table is valid for the
	// duration of the callbacks and not after. A callback that stores info in a
	// global and reads it on a later frame reads freed memory, because the table
	// is freed here and because its entries point at this function's stack. That
	// is a property of how the table is built, not of how it is released.
	cbInfo.type->free(&cbInfo);
}

	// A watchpoint over a whole region of VRAM produces thousands of hits in a
// single frame: 4 KiB at 0x06000000 gives 7148. Queue them per frame and drop
// past the cap so a pathological range cannot exhaust memory.
	#define SCRIPT_DEBUGGER_MAX_PENDING 65536

static void _flushDebuggerEvents(struct mScriptDebugger* scriptDebugger) {
		// Detach the batch before dispatching. A callback may run frames or
		// flush again; either way it must not see this batch, and it must not be
		// able to realloc the array out from under the loop.
		struct mScriptDebuggerEvent* pending = scriptDebugger->pending;
		size_t count = scriptDebugger->pendingCount;
		scriptDebugger->pending = NULL;
		scriptDebugger->pendingCount = 0;
		scriptDebugger->pendingCapacity = 0;

		// Chronological order: a tracer asking "which write left this value"
		// needs the hits as they happened, not as the queue unwound.
		size_t i = 0;
		while (i < count) {
			struct mScriptDebuggerEvent* event = &pending[i++];
			struct mScriptBreakpoint* point =
				HashTableLookupBinary(&scriptDebugger->bpidMap, &event->pointId, sizeof(event->pointId));
		if (!point) {
			// The breakpoint was cleared after this event was recorded, so
			// there is no callback to run. Counted, not silently dropped.
			++scriptDebugger->pendingDropped;
			continue;
		}
		_dispatchDebuggerEvent(scriptDebugger, point, event->reason, &event->info, event->hasPc ? event->pc : 0, event->hasPc);
	}
		free(pending);
	}

	static void _scriptDebuggerEntered(struct mDebuggerModule* debugger, enum mDebuggerEntryReason reason, struct mDebuggerEntryInfo* info) {
	struct mScriptDebugger* scriptDebugger = (struct mScriptDebugger*) debugger;
	// Clear the pause before anything else, including the returns below.
	// mDebuggerEnter sets isPaused on every module unconditionally before
	// calling into it, and _scriptDebuggerPaused is empty, so a module left
	// paused here keeps the debugger in DEBUGGER_PAUSED, where the run loop has
	// no branch that steps the core. The CPU then never advances and no
	// breakpoint can ever fire again. Nothing here wants to hold the debugger:
	// callbacks are deferred to emu:flushDebuggerEvents by design.
	debugger->isPaused = false;
	// No lookup here: the event records the id and the delivery resolves it,
	// so a breakpoint cleared in between cannot leave a dangling pointer behind.
	switch (reason) {
	case DEBUGGER_ENTER_BREAKPOINT:
	case DEBUGGER_ENTER_WATCHPOINT:
		break;
	default:
		return;
	}

	if (scriptDebugger->reentered) {
		return;
	}

	if (scriptDebugger->pendingCount >= SCRIPT_DEBUGGER_MAX_PENDING) {
		++scriptDebugger->pendingDropped;
	} else {
		if (scriptDebugger->pendingCount == scriptDebugger->pendingCapacity) {
			size_t capacity = scriptDebugger->pendingCapacity ? scriptDebugger->pendingCapacity * 2 : 64;
			struct mScriptDebuggerEvent* grown = realloc(scriptDebugger->pending, capacity * sizeof(*scriptDebugger->pending));
			if (!grown) {
				// Taking the failed return would leave a null array with a nonzero
				// capacity, and the next event would write through that null.
				++scriptDebugger->pendingDropped;
				return;
			}
			scriptDebugger->pending = grown;
			scriptDebugger->pendingCapacity = capacity;
		}
		struct mScriptDebuggerEvent* event = &scriptDebugger->pending[scriptDebugger->pendingCount++];
		event->pointId = info->pointId;
		event->reason = reason;
		event->info = *info;
		// target is only meaningful inside the hook and nothing at delivery
		// reads it, so do not carry a pointer a frame forward.
event->info.target = NULL;
		// Taken from the entry info the platform debugger filled in, which knows
		// the right convention for the current instruction. Reading the PC
		// register from here instead would report the following instruction on
		// ARM, where the register carries a pipeline offset.
		//
		// Only a watchpoint sets the field. The breakpoint paths do not touch it,
		// so reading it for a breakpoint would compare uninitialised stack against
		// zero and hand a script whatever happened to be lying there.
		event->hasPc = reason == DEBUGGER_ENTER_WATCHPOINT && info->pc >= 0;
		event->pc = event->hasPc ? (uint32_t) info->pc : 0;
	}
}

	// Deliver everything the debugger queued so far. A script calls this through
// emu:flushDebuggerEvents(), which is a normal Lua call and therefore a safe
// place to enter Lua; the debugger hook is not.
	static void _mScriptDebuggerFlush(struct mScriptCoreAdapter* adapter) {
	if (!adapter->debugger.d.p || !adapter->debugger.pendingCount) {
		return;
	}
	_flushDebuggerEvents(&adapter->debugger);
	adapter->debugger.pendingCount = 0;
}

	static void _mScriptCoreAdapterFlushDebugger(struct mScriptCoreAdapter* adapter) {
	_mScriptDebuggerFlush(adapter);
}

static void _scriptDebuggerCustom(struct mDebuggerModule* debugger) {
	UNUSED(debugger);
}

static void _scriptDebuggerInterrupt(struct mDebuggerModule* debugger) {
	UNUSED(debugger);
}

static bool _setupDebugger(struct mScriptCoreAdapter* adapter) {
	if (!adapter->core->debugger) {
		return false;
	}

	if (adapter->debugger.d.p) {
		return true;
	}
	adapter->debugger.p = adapter;
	adapter->debugger.d.type = DEBUGGER_CUSTOM;
	adapter->debugger.d.init = _scriptDebuggerInit;
	adapter->debugger.d.deinit = _scriptDebuggerDeinit;
	adapter->debugger.d.paused = _scriptDebuggerPaused;
	adapter->debugger.d.update = _scriptDebuggerUpdate;
	adapter->debugger.d.entered = _scriptDebuggerEntered;
	adapter->debugger.d.custom = _scriptDebuggerCustom;
	adapter->debugger.d.interrupt = _scriptDebuggerInterrupt;
	adapter->debugger.d.isPaused = false;
	adapter->debugger.d.needsCallback = false;
	adapter->debugger.nextBreakpoint = 1;
	mDebuggerAttachModule(adapter->core->debugger, &adapter->debugger.d);
	return true;
}

static int64_t _mScriptCoreAdapterSetBreakpoint(struct mScriptCoreAdapter* adapter, struct mScriptValue* callback, uint32_t address, int32_t segment) {
	if (!_setupDebugger(adapter)) {
		return -1;
	}
	struct mBreakpoint breakpoint = {
		.address = address,
		.segment = segment,
		.type = BREAKPOINT_HARDWARE
	};

	struct mDebuggerModule* module = &adapter->debugger.d;
	if (!module->p->platform->setBreakpoint) {
		return -1;
	}
	struct mScriptBreakpoint* point = _ensureBreakpoint(&adapter->debugger, &breakpoint);
	if (!point) {
		return -1;
	}
	return _addCallbackToBreakpoint(&adapter->debugger, point, callback);
}

// Trace a range of code by putting a breakpoint on every instruction address in
// it. The callback is the caller's and receives each hit as a breakpoint hit
// normally does, so frames stay the caller's to run and the trace interleaves
// with whatever else the script is doing. Registers are read in the callback
// with emu:readRegister, which already works and costs nothing extra to expose.
//
// One breakpoint per instruction is what makes this work, and it is why the
// range is bounded: every hit is a full stop, so this is for a single function
// rather than a sweep. The range is walked at the width the caller names, since
// nothing in the bytes marks the instruction set. A mode that is neither thumb
// nor arm arms nothing rather than quietly walking thumb, because a silent
// thumb walk over ARM code is the failure this function exists to prevent.
//
// The points stay armed until the session ends: the handles are not handed out,
// so a script cannot clear them, and while any point is armed runFrame takes its
// stepping path. That is the price of one breakpoint per instruction and it is
// why the range is meant to be short.
#define LOGTRACE_MAX_POINTS 2048

static bool _mScriptCoreAdapterClearBreakpoint(struct mScriptCoreAdapter*, int64_t);

static int32_t _mScriptCoreLogTrace(struct mScriptCoreAdapter* adapter, struct mScriptValue* callback, uint32_t start, uint32_t end, const char* mode) {
	uint32_t step;
	uint32_t address;
	uint32_t placed = 0;
	if (!mode) {
		return 0;
	}
	if (!strcmp(mode, "arm")) {
		step = 4;
	} else if (!strcmp(mode, "thumb")) {
		step = 2;
	} else {
		return 0;
	}
	if (end <= start) {
		return 0;
	}
	// Walking up to a range ending near the top of the address space would wrap
	// past 0 and keep arming points from the bottom up, so the walk stops at the
	// last address the range can actually reach.
	for (address = start; address < end; address += step) {
		int64_t handle;
		if (UINT32_MAX - address < step) {
			break;
		}
		handle = _mScriptCoreAdapterSetBreakpoint(adapter, callback, address, 0);
		if (handle <= 0) {
			break;
		}
		// A point the list could not take would stay armed with no handle on
		// record, so runFrame would keep stepping for the rest of the session.
		// Taking it back now and stopping costs the tail of the trace, which is
		// visible, over a leak that is not.
		if (adapter->debugger.traceIdCount == adapter->debugger.traceIdCapacity) {
			size_t capacity = adapter->debugger.traceIdCapacity ? adapter->debugger.traceIdCapacity * 2 : 64;
			int64_t* grown = realloc(adapter->debugger.traceIds, capacity * sizeof(*adapter->debugger.traceIds));
			if (!grown) {
				_mScriptCoreAdapterClearBreakpoint(adapter, handle);
				break;
			}
			adapter->debugger.traceIds = grown;
			adapter->debugger.traceIdCapacity = capacity;
		}
		adapter->debugger.traceIds[adapter->debugger.traceIdCount++] = handle;
		placed++;
		if (placed >= LOGTRACE_MAX_POINTS) {
			break;
		}
	}
	return (int32_t) placed;
}

// Take back everything logTrace armed. Its handles are not handed out, so without
// this a script has no way to disarm them, and while they stay armed runFrame
// keeps stepping. Only the ids logTrace created are removed, so a breakpoint the
// script armed itself with setBreakpoint keeps its own callbacks and survives.
static int32_t _mScriptCoreClearLogTrace(struct mScriptCoreAdapter* adapter) {
	struct mScriptDebugger* debugger = &adapter->debugger;
	int32_t removed = 0;
	size_t i;
	if (!debugger->d.p) {
		return 0;
	}
	for (i = 0; i < debugger->traceIdCount; ++i) {
		if (_mScriptCoreAdapterClearBreakpoint(adapter, debugger->traceIds[i])) {
			++removed;
		}
	}
	free(debugger->traceIds);
	debugger->traceIds = NULL;
	debugger->traceIdCount = 0;
	debugger->traceIdCapacity = 0;
	return removed;
}

// Events the debugger could not queue or deliver, and the cap it hit. Reading it
// resets the count, so a tracer can notice that its output was incomplete instead
// of silently trusting what it collected.
static int32_t _mScriptCoreDroppedDebuggerEvents(struct mScriptCoreAdapter* adapter) {
	size_t dropped = adapter->debugger.pendingDropped;
	adapter->debugger.pendingDropped = 0;
	return (int32_t) dropped;
}

#ifdef ENABLE_DEBUGGERS
// emu:runFrame() reached the core directly, and the core runs a frame by calling
// its own runLoop. Breakpoints are not checked there: they are checked inside
// mDebuggerRunTimeout, which is a path the script never took. So with a
// breakpoint set and a script driving the frames, the breakpoint simply never
// fired, however many frames ran.
//
// When the debugger is attached and holds breakpoints, step the frame instead and
// ask after each instruction, which is what the debugger does for its own run
// loop. Without breakpoints this stays the plain core call, so the common case
// costs nothing.
//
// The loop stops as soon as the frame counter reaches the target, but only
// after checking the breakpoints, because the instruction that completed the
// frame is still one the debugger owes the script. Skipping that check would
// lose a hit on every frame boundary and, since nothing counts a check that
// never ran, droppedDebuggerEvents could not report it either.
static void _mScriptCoreAdapterRunFrame(struct mScriptCoreAdapter* adapter) {
	struct mCore* core = adapter->core;
	struct mDebugger* debugger = adapter->debugger.d.p;
	uint32_t target;
	int64_t budget = SCREENSHOT_REGION_MAX_PIXELS;
	if (!debugger || !debugger->platform->hasBreakpoints(debugger->platform)) {
		core->runFrame(core);
		return;
	}
	target = core->frameCounter(core) + 1;
	while (core->frameCounter(core) < target && budget-- > 0) {
		core->step(core);
		debugger->platform->checkBreakpoints(debugger->platform);
	}
}
#endif

static int64_t _mScriptCoreAdapterSetWatchpoint(struct mScriptCoreAdapter* adapter, struct mScriptValue* callback, uint32_t address, int type, int32_t segment) {
	if (!_setupDebugger(adapter)) {
		return -1;
	}

	struct mWatchpoint watchpoint = {
		.minAddress = address,
		.maxAddress = address + 1,
		.segment = segment,
		.type = type,
	};
	struct mDebuggerModule* module = &adapter->debugger.d;
	if (!module->p->platform->setWatchpoint) {
		return -1;
	}
	struct mScriptBreakpoint* point = _ensureWatchpoint(&adapter->debugger, &watchpoint);
	if (!point) {
		return -1;
	}
	return _addCallbackToBreakpoint(&adapter->debugger, point, callback);
}

static int64_t _mScriptCoreAdapterSetRangeWatchpoint(struct mScriptCoreAdapter* adapter, struct mScriptValue* callback, uint32_t minAddress, uint32_t maxAddress, int type, int32_t segment) {
	if (!_setupDebugger(adapter)) {
		return -1;
	}

	struct mWatchpoint watchpoint = {
		.minAddress = minAddress,
		.maxAddress = maxAddress,
		.segment = segment,
		.type = type,
	};
	struct mDebuggerModule* module = &adapter->debugger.d;
	if (!module->p->platform->setWatchpoint) {
		return -1;
	}
	struct mScriptBreakpoint* point = _ensureWatchpoint(&adapter->debugger, &watchpoint);
	if (!point) {
		return -1;
	}
	return _addCallbackToBreakpoint(&adapter->debugger, point, callback);
}

static bool _mScriptCoreAdapterClearBreakpoint(struct mScriptCoreAdapter* adapter, int64_t cbid) {
	if (!_setupDebugger(adapter)) {
		return false;
	}
	struct mScriptBreakpoint* point = HashTableLookupBinary(&adapter->debugger.cbidMap, &cbid, sizeof(cbid));
	if (!point) {
		return false;
	}
	HashTableRemoveBinary(&adapter->debugger.cbidMap, &cbid, sizeof(cbid));
	HashTableRemoveBinary(&point->callbacks, &cbid, sizeof(cbid));

if (!HashTableSize(&point->callbacks)) {
		// Only retire the point when no dispatch is walking it. A script that
		// stops its own trace from inside the callback arrives here with inUse
		// set, and dropping the entry then would orphan the object: the entry is
		// what _freeBreakpoint is reached through, and _runCallbacks clears inUse
		// only after it has already looked the entry up. The tail of _runCallbacks
		// retires it once the callbacks are done, with the object still reachable.
		if (point->inUse) {
			return true;
		}
		struct mDebuggerModule* module = &adapter->debugger.d;
		module->p->platform->clearBreakpoint(module->p->platform, point->id);

		// bpidMap indexes by platform breakpoint id and owns nothing, so its
		// entry has to go before the point does. Leaving it behind meant the
		// next hit on that id looked up a freed pointer.
		HashTableRemoveBinary(&adapter->debugger.bpidMap, &point->id, sizeof(point->id));
		struct mScriptBreakpointName name = point->name;
		HashTableRemoveBinary(&adapter->debugger.breakpoints, &name, sizeof(name));
	}
	return true;
}

static uint64_t _mScriptCoreAdapterCurrentCycle(struct mScriptCoreAdapter* adapter) {
	return mTimingGlobalTime(adapter->core->timing);
}
#endif

static void _mScriptCoreAdapterDeinit(struct mScriptCoreAdapter* adapter) {
	_mScriptCoreClearStateSnapshots(adapter);
	_clearMemoryMap(adapter->context, adapter, false);
	adapter->memory.type->free(&adapter->memory);
#ifdef ENABLE_DEBUGGERS
	if (adapter->debugger.d.p) {
		struct TableIterator iter;
		if (HashTableIteratorStart(&adapter->debugger.breakpoints, &iter)) {
			struct mDebuggerModule* module = &adapter->debugger.d;
			do {
				struct mScriptBreakpoint* point = HashTableIteratorGetValue(&adapter->debugger.breakpoints, &iter);
				module->p->platform->clearBreakpoint(module->p->platform, point->id);
			} while (HashTableIteratorNext(&adapter->debugger.breakpoints, &iter));
		}
		HashTableClear(&adapter->debugger.breakpoints);
		HashTableClear(&adapter->debugger.cbidMap);
		HashTableClear(&adapter->debugger.bpidMap);
	}
	if (adapter->core->debugger) {
		mDebuggerDetachModule(adapter->core->debugger, &adapter->debugger.d);
	}
#endif
}

static struct mScriptValue* _mScriptCoreAdapterGet(struct mScriptCoreAdapter* adapter, const char* name) {
	struct mScriptValue val;
	struct mScriptValue core = mSCRIPT_MAKE(S(mCore), adapter->core);
	if (!mScriptObjectGet(&core, name, &val)) {
		return &mScriptValueNull;
	}

	struct mScriptValue* ret = malloc(sizeof(*ret));
	memcpy(ret, &val, sizeof(*ret));
	ret->refs = 1;
	return ret;
}

static void _mScriptCoreAdapterReset(struct mScriptCoreAdapter* adapter) {
	adapter->core->reset(adapter->core);
	mScriptContextTriggerCallback(adapter->context, "reset", NULL);
}

static struct mScriptValue* _mScriptCoreAdapterSetRotationCbTable(struct mScriptCoreAdapter* adapter, struct mScriptValue* cbTable) {
	if (cbTable) {
		mScriptValueRef(cbTable);
	}
	struct mScriptValue* oldTable = adapter->rotationCbTable;
	adapter->rotationCbTable = cbTable;
	return oldTable;
}

static void _mScriptCoreAdapterSetLuminanceCb(struct mScriptCoreAdapter* adapter, struct mScriptValue* callback) {
	if (callback) {
		if (callback->type->base != mSCRIPT_TYPE_FUNCTION) {
			return;
		}
		mScriptValueRef(callback);
	}
	if (adapter->luminanceCb) {
		mScriptValueDeref(adapter->luminanceCb);
	}
	adapter->luminanceCb = callback;
}

static uint32_t _mScriptCoreAdapterRead8(struct mScriptCoreAdapter* adapter, uint32_t address) {
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = true;
#endif
	uint32_t value = adapter->core->busRead8(adapter->core, address);
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = false;
#endif
	return value;
}

static uint32_t _mScriptCoreAdapterRead16(struct mScriptCoreAdapter* adapter, uint32_t address) {
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = true;
#endif
	uint32_t value = adapter->core->busRead16(adapter->core, address);
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = false;
#endif
	return value;
}

static uint32_t _mScriptCoreAdapterRead32(struct mScriptCoreAdapter* adapter, uint32_t address) {
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = true;
#endif
	uint32_t value = adapter->core->busRead32(adapter->core, address);
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = false;
#endif
	return value;
}

static struct mScriptValue* _mScriptCoreAdapterReadRange(struct mScriptCoreAdapter* adapter, uint32_t address, uint32_t length) {
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = true;
#endif
	struct mScriptValue* value = mScriptStringCreateEmpty(length);
	char* buffer = value->value.string->buffer;
	uint32_t i;
	for (i = 0; i < length; ++i, ++address) {
		buffer[i] = adapter->core->busRead8(adapter->core, address);
	}
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = false;
#endif
	return value;
}

static void _mScriptCoreAdapterWrite8(struct mScriptCoreAdapter* adapter, uint32_t address, uint8_t value) {
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = true;
#endif
	adapter->core->busWrite8(adapter->core, address, value);
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = false;
#endif
}

static void _mScriptCoreAdapterWrite16(struct mScriptCoreAdapter* adapter, uint32_t address, uint16_t value) {
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = true;
#endif
	adapter->core->busWrite16(adapter->core, address, value);
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = false;
#endif
}

static void _mScriptCoreAdapterWrite32(struct mScriptCoreAdapter* adapter, uint32_t address, uint32_t value) {
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = true;
#endif
	adapter->core->busWrite32(adapter->core, address, value);
#ifdef ENABLE_DEBUGGERS
	adapter->debugger.reentered = false;
#endif
}

mSCRIPT_DECLARE_STRUCT(mScriptCoreAdapter);
#ifdef M_CORE_GBA
// All four are declared under the same guards as their definitions, which sit in
// the debugger block: a GBA core built without debuggers has no implementation
// to bind to, and the disassembler itself is only declared there.
#ifdef ENABLE_DEBUGGERS
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mScriptCoreAdapter, WSTR, disasm, _mScriptCoreDisasm, 3, U32, address, U32, count, CHARP, mode);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mScriptCoreAdapter, S32, logTrace, _mScriptCoreLogTrace, 4, WRAPPER, callback, U32, start, U32, end, CHARP, mode);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, S32, clearLogTrace, _mScriptCoreClearLogTrace, 0);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, S32, droppedDebuggerEvents, _mScriptCoreDroppedDebuggerEvents, 0);
#endif
#endif
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, W(mCore), _get, _mScriptCoreAdapterGet, 1, CHARP, name);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, _deinit, _mScriptCoreAdapterDeinit, 0);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, reset, _mScriptCoreAdapterReset, 0);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, WTABLE, setRotationCallbacks, _mScriptCoreAdapterSetRotationCbTable, 1, WTABLE, cbTable);	mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, setSolarSensorCallback, _mScriptCoreAdapterSetLuminanceCb, 1, WRAPPER, callback);
// Delivers debugger events collected during the frames that have run so far.
// Calling into Lua from the debugger hook breaks the script context, so the
// events are queued and a script drains them at a point where it is safe.
#ifdef ENABLE_DEBUGGERS
#ifdef ENABLE_DEBUGGERS
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, flushDebuggerEvents, _mScriptCoreAdapterFlushDebugger, 0);
#endif
#endif

mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, U32, read8, _mScriptCoreAdapterRead8, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, U32, read16, _mScriptCoreAdapterRead16, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, U32, read32, _mScriptCoreAdapterRead32, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, WSTR, readRange, _mScriptCoreAdapterReadRange, 2, U32, address, U32, length);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, write8, _mScriptCoreAdapterWrite8, 2, U32, address, U8, value);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, write16, _mScriptCoreAdapterWrite16, 2, U32, address, U16, value);
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, write32, _mScriptCoreAdapterWrite32, 2, U32, address, U32, value);

#ifdef ENABLE_DEBUGGERS
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, U64, currentCycle, _mScriptCoreAdapterCurrentCycle, 0);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mScriptCoreAdapter, S64, setBreakpoint, _mScriptCoreAdapterSetBreakpoint, 3, WRAPPER, callback, U32, address, S32, segment);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mScriptCoreAdapter, S64, setWatchpoint, _mScriptCoreAdapterSetWatchpoint, 4, WRAPPER, callback, U32, address, S32, type, S32, segment);
mSCRIPT_DECLARE_STRUCT_METHOD_WITH_DEFAULTS(mScriptCoreAdapter, S64, setRangeWatchpoint, _mScriptCoreAdapterSetRangeWatchpoint, 5, WRAPPER, callback, U32, minAddress, U32, maxAddress, S32, type, S32, segment);
#ifdef ENABLE_DEBUGGERS
mSCRIPT_DECLARE_STRUCT_VOID_METHOD(mScriptCoreAdapter, runFrame, _mScriptCoreAdapterRunFrame, 0);
#endif
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, BOOL, clearBreakpoint, _mScriptCoreAdapterClearBreakpoint, 1, S64, cbid);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, S32, saveStateSnapshot, _mScriptCoreSaveStateSnapshot, 0);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, BOOL, log, _mScriptCoreLog, 2, CHARP, level, CHARP, message);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, BOOL, loadSymbols, _mScriptCoreLoadSymbols, 1, CHARP, path);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, WSTR, getSymbolic, _mScriptCoreGetSymbolic, 1, U32, address);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, BOOL, loadStateSnapshot, _mScriptCoreLoadStateSnapshot, 1, S32, id);
mSCRIPT_DECLARE_STRUCT_METHOD(mScriptCoreAdapter, BOOL, clearStateSnapshot, _mScriptCoreClearStateSnapshot, 1, S32, id);

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mScriptCoreAdapter, setBreakpoint)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(-1)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mScriptCoreAdapter, setWatchpoint)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(-1)
mSCRIPT_DEFINE_DEFAULTS_END;

mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mScriptCoreAdapter, setRangeWatchpoint)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_S32(-1)
mSCRIPT_DEFINE_DEFAULTS_END;
#ifdef M_CORE_GBA
mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mScriptCoreAdapter, disasm)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_CHARP("thumb")
mSCRIPT_DEFINE_DEFAULTS_END;
mSCRIPT_DEFINE_STRUCT_BINDING_DEFAULTS(mScriptCoreAdapter, logTrace)
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_NO_DEFAULT,
	mSCRIPT_CHARP("thumb")
mSCRIPT_DEFINE_DEFAULTS_END;
#endif
#endif

mSCRIPT_DEFINE_STRUCT(mScriptCoreAdapter)
	mSCRIPT_DEFINE_CLASS_DOCSTRING(
		"A wrapper around a struct::mCore object that exposes more functionality. "
		"It can be implicity cast to a Core object, and exposes the same methods. "
		"Please see the documentation on struct::mCore for details on those methods."
	)
	mSCRIPT_DEFINE_STRUCT_MEMBER_NAMED(mScriptCoreAdapter, PS(mCore), _core, core)
	mSCRIPT_DEFINE_DOCSTRING("A table containing a platform-specific set of struct::mScriptMemoryDomain objects")
	mSCRIPT_DEFINE_STRUCT_MEMBER(mScriptCoreAdapter, TABLE, memory)
	mSCRIPT_DEFINE_STRUCT_DEINIT(mScriptCoreAdapter)
	mSCRIPT_DEFINE_STRUCT_DEFAULT_GET(mScriptCoreAdapter)
	mSCRIPT_DEFINE_DOCSTRING("Reset the emulation. As opposed to struct::mCore.reset, this version calls the **reset** callback")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, reset)
	mSCRIPT_DEFINE_DOCSTRING(
		"Sets the table of functions to be called when the game requests rotation data, for either a gyroscope or accelerometer. "
		"The following functions are supported, and if any isn't set then then default implementation for that function is called instead:\n\n"
		"- `sample`: Update (\"sample\") the values returned by the other functions. The values returned shouldn't change until the next time this is called\n"
		"- `readTiltX`: Return a value between -1.0 and +1.0 representing the X (left/right axis) direction of the linear acceleration vector, as for an accelerometer.\n"
		"- `readTiltY`: Return a value between -1.0 and +1.0 representing the Y (up/down axis) direction of the linear acceleration vector, as for an accelerometer.\n"
		"- `readGyroZ`: Return a value between -1.0 and +1.0 representing the roll (front/back axis) value of the rotational acceleration vector, as for an gyroscope.\n\n"
		"Optionally, you can also set a value `context` on the table that will be passed to the callbacks. This table is copied by value, so changes made to the table "
		"after being passed to this function will not be seen unless the function is called again. Therefore, the recommended usage of the `context` field is as an index "
		"or key into a separate table. Use cases may vary. If this function is called more than once, the previous value of the table is returned."
	)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, setRotationCallbacks)
	mSCRIPT_DEFINE_DOCSTRING(
		"Set a callback that will be used to get the current value of the solar sensors between 0 (darkest) and 255 (brightest). "
		"Note that the full range of values is not used by games, and the exact range depends on the calibration done by the game itself."
	)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, setSolarSensorCallback)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, read8)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, read16)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, read32)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, readRange)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, write8)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, write16)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, write32)
#ifdef ENABLE_DEBUGGERS
	mSCRIPT_DEFINE_DOCSTRING("Get the current execution cycle")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, currentCycle)
	mSCRIPT_DEFINE_DOCSTRING("Set a breakpoint at a given address")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, setBreakpoint)
	mSCRIPT_DEFINE_DOCSTRING("Clear a breakpoint or watchpoint for a given id returned by a previous call")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, clearBreakpoint)
	mSCRIPT_DEFINE_DOCSTRING("Set a watchpoint at a given address of a given type")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, setWatchpoint)
	mSCRIPT_DEFINE_DOCSTRING(
		"Set a watchpoint in a given range of a given type. Note that the range is exclusive on the end, "
		"as though you've added the size, i.e. a 4-byte watch would specify the maximum as the minimum address + 4"
)
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, setRangeWatchpoint)
	mSCRIPT_DEFINE_DOCSTRING("Run until the next frame, checking breakpoints as it goes")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, runFrame)
#ifdef ENABLE_DEBUGGERS
mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, flushDebuggerEvents)
#endif
#endif
	mSCRIPT_DEFINE_DOCSTRING("Capture the machine state and return a handle, or 0 if the core cannot save state")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, saveStateSnapshot)
	mSCRIPT_DEFINE_DOCSTRING("Write a line to the emulator log under the Scripting category")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, log)
	mSCRIPT_DEFINE_DOCSTRING("Read a symbol file so getSymbolic has names to resolve")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, loadSymbols)
	mSCRIPT_DEFINE_DOCSTRING("Name of the symbol covering an address, or nil")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, getSymbolic)
	mSCRIPT_DEFINE_DOCSTRING("Put the machine back the way a snapshot found it")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, loadStateSnapshot)
	mSCRIPT_DEFINE_DOCSTRING("Release a snapshot and its memory")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, clearStateSnapshot)
#ifdef M_CORE_GBA
#ifdef ENABLE_DEBUGGERS
	mSCRIPT_DEFINE_DOCSTRING("Disassemble count instructions at address. mode is thumb, arm or auto, default thumb")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, disasm)
	mSCRIPT_DEFINE_DOCSTRING("Put a breakpoint on every instruction in a range and pass each hit to the callback")
	mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, logTrace)
mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, clearLogTrace)
mSCRIPT_DEFINE_STRUCT_METHOD(mScriptCoreAdapter, droppedDebuggerEvents)
#endif
#endif
	mSCRIPT_DEFINE_STRUCT_CAST_TO_MEMBER(mScriptCoreAdapter, S(mCore), _core)
	mSCRIPT_DEFINE_STRUCT_CAST_TO_MEMBER(mScriptCoreAdapter, CS(mCore), _core)
mSCRIPT_DEFINE_END;

static struct mScriptCoreAdapter* _getAdapter(struct mScriptContext* context) {
	struct mScriptValue* value = HashTableLookup(&context->rootScope, "emu");
	if (!value) {
		return NULL;
	}
	value = mScriptContextAccessWeakref(context, value);
	if (!value) {
		return NULL;
	}

	return value->value.opaque;
}

static void _setRumble(struct mRumble* rumble, bool enable, uint32_t timeSince) {
	struct mScriptCoreAdapter* adapter = containerof(rumble, struct mScriptCoreAdapter, rumble);

	if (adapter->oldRumble && adapter->oldRumble->setRumble) {
		adapter->oldRumble->setRumble(adapter->oldRumble, enable, timeSince);
	}

	adapter->rumbleIntegrator.d.setRumble(&adapter->rumbleIntegrator.d, enable, timeSince);
}

static void _rumbleIntegrate(struct mRumble* rumble, uint32_t period) {
	struct mScriptCoreAdapter* adapter = containerof(rumble, struct mScriptCoreAdapter, rumble);

	if (adapter->oldRumble && adapter->oldRumble->integrate) {
		adapter->oldRumble->integrate(adapter->oldRumble, period);
	}

	adapter->rumbleIntegrator.d.integrate(&adapter->rumbleIntegrator.d, period);
}

static void _rumbleReset(struct mRumble* rumble, bool enable) {
	struct mScriptCoreAdapter* adapter = containerof(rumble, struct mScriptCoreAdapter, rumble);

	if (adapter->oldRumble && adapter->oldRumble->reset) {
		adapter->oldRumble->reset(adapter->oldRumble, enable);
	}

	adapter->rumbleIntegrator.d.reset(&adapter->rumbleIntegrator.d, enable);
}

static void _setRumbleFloat(struct mRumbleIntegrator* integrator, float level) {
	struct mScriptCoreAdapter* adapter = containerof(integrator, struct mScriptCoreAdapter, rumbleIntegrator);

	struct mScriptList args;
	mScriptListInit(&args, 1);
	*mScriptListAppend(&args) = mSCRIPT_MAKE_F32(level);
	mScriptContextTriggerCallback(adapter->context, "rumble", &args);
	mScriptListDeinit(&args);
}

static bool _callRotationCb(struct mScriptCoreAdapter* adapter, const char* cbName, struct mScriptValue* out) {
	if (!adapter->rotationCbTable) {
		return false;
	}
	struct mScriptValue* cb = mScriptTableLookup(adapter->rotationCbTable, &mSCRIPT_MAKE_CHARP(cbName));
	if (!cb || cb->type->base != mSCRIPT_TYPE_FUNCTION) {
		return false;
	}
	struct mScriptFrame frame;
	struct mScriptValue* context = mScriptTableLookup(adapter->rotationCbTable, &mSCRIPT_MAKE_CHARP("context"));
	mScriptFrameInit(&frame);
	if (context) {
		mScriptValueWrap(context, mScriptListAppend(&frame.stack));
	}
	bool ok = mScriptContextInvoke(adapter->context, cb, &frame);
	if (ok && out && mScriptListSize(&frame.stack) == 1) {
		if (!mScriptCast(mSCRIPT_TYPE_MS_F32, mScriptListGetPointer(&frame.stack, 0), out)) {
			ok = false;
		}
	}
	mScriptFrameDeinit(&frame);
	return ok;
}

static void _rotationSample(struct mRotationSource* rotation) {
	struct mScriptCoreAdapter* adapter = containerof(rotation, struct mScriptCoreAdapter, rotation);

	_callRotationCb(adapter, "sample", NULL);

	if (adapter->oldRotation && adapter->oldRotation->sample) {
		adapter->oldRotation->sample(adapter->oldRotation);
	}
}

static int32_t _rotationReadTiltX(struct mRotationSource* rotation) {
	struct mScriptCoreAdapter* adapter = containerof(rotation, struct mScriptCoreAdapter, rotation);

	struct mScriptValue out;
	if (_callRotationCb(adapter, "readTiltX", &out)) {
		return out.value.f32 * (double) INT32_MAX;
	}

	if (adapter->oldRotation && adapter->oldRotation->readTiltX) {
		return adapter->oldRotation->readTiltX(adapter->oldRotation);
	}
	return 0;
}

static int32_t _rotationReadTiltY(struct mRotationSource* rotation) {
	struct mScriptCoreAdapter* adapter = containerof(rotation, struct mScriptCoreAdapter, rotation);

	struct mScriptValue out;
	if (_callRotationCb(adapter, "readTiltY", &out)) {
		return out.value.f32 * (double) INT32_MAX;
	}

	if (adapter->oldRotation && adapter->oldRotation->readTiltY) {
		return adapter->oldRotation->readTiltY(adapter->oldRotation);
	}
	return 0;
}

static int32_t _rotationReadGyroZ(struct mRotationSource* rotation) {
	struct mScriptCoreAdapter* adapter = containerof(rotation, struct mScriptCoreAdapter, rotation);

	struct mScriptValue out;
	if (_callRotationCb(adapter, "readGyroZ", &out)) {
		return out.value.f32 * (double) INT32_MAX;
	}

	if (adapter->oldRotation && adapter->oldRotation->readGyroZ) {
		return adapter->oldRotation->readGyroZ(adapter->oldRotation);
	}
	return 0;
}

#ifdef M_CORE_GBA
static uint8_t _readLuminance(struct GBALuminanceSource* luminance) {
	struct mScriptCoreAdapter* adapter = containerof(luminance, struct mScriptCoreAdapter, luminance);

	if (adapter->luminanceCb) {
		struct mScriptFrame frame;
		mScriptFrameInit(&frame);
		bool ok = mScriptContextInvoke(adapter->context, adapter->luminanceCb, &frame);
		struct mScriptValue out = {0};
		if (ok && mScriptListSize(&frame.stack) == 1) {
			if (!mScriptCast(mSCRIPT_TYPE_MS_U8, mScriptListGetPointer(&frame.stack, 0), &out)) {
				ok = false;
			}
		}
		mScriptFrameDeinit(&frame);
		if (ok) {
			return 0xFF - out.value.u32;
		}
	}
	if (adapter->oldLuminance) {
		adapter->oldLuminance->sample(adapter->oldLuminance);
		return adapter->oldLuminance->readLuminance(adapter->oldLuminance);
	}
	return 0;
}
#endif

#define mCoreCallback(NAME) _mScriptCoreCallback ## NAME
#define DEFINE_CALLBACK(NAME, ...) \
	void mCoreCallback(NAME) (void* context) { \
		struct mScriptContext* scriptContext = context; \
		if (!scriptContext) { \
			return; \
		} \
		__VA_ARGS__ \
		mScriptContextTriggerCallback(scriptContext, #NAME, NULL); \
	}

DEFINE_CALLBACK(frame)
DEFINE_CALLBACK(crashed)
DEFINE_CALLBACK(sleep)
DEFINE_CALLBACK(stop)
DEFINE_CALLBACK(keysRead)
DEFINE_CALLBACK(savedataUpdated)
DEFINE_CALLBACK(alarm)
DEFINE_CALLBACK(memoryBlocksChanged,
	struct mScriptCoreAdapter* adapter = _getAdapter(scriptContext);
	if (adapter) {
		_rebuildMemoryMap(scriptContext, adapter);
	})

void mScriptContextAttachCore(struct mScriptContext* context, struct mCore* core) {
	struct mScriptValue* coreValue = mScriptValueAlloc(mSCRIPT_TYPE_MS_S(mScriptCoreAdapter));
	struct mScriptCoreAdapter* adapter = calloc(1, sizeof(*adapter));
	adapter->core = core;
	adapter->context = context;

	adapter->memory.refs = mSCRIPT_VALUE_UNREF;
	adapter->memory.flags = 0;
	adapter->memory.type = mSCRIPT_TYPE_MS_TABLE;
	adapter->memory.type->alloc(&adapter->memory);

	mRumbleIntegratorInit(&adapter->rumbleIntegrator);
	adapter->rumbleIntegrator.setRumble = _setRumbleFloat;
	adapter->rumble.setRumble = _setRumble;
	adapter->rumble.reset = _rumbleReset;
	adapter->rumble.integrate = _rumbleIntegrate;
	adapter->rotation.sample = _rotationSample;
	adapter->rotation.readTiltX = _rotationReadTiltX;
	adapter->rotation.readTiltY = _rotationReadTiltY;
	adapter->rotation.readGyroZ = _rotationReadGyroZ;

	adapter->oldRumble = core->getPeripheral(core, mPERIPH_RUMBLE);
	adapter->oldRotation = core->getPeripheral(core, mPERIPH_ROTATION);
	core->setPeripheral(core, mPERIPH_RUMBLE, &adapter->rumble);
	core->setPeripheral(core, mPERIPH_ROTATION, &adapter->rotation);

#ifdef M_CORE_GBA
	adapter->luminance.readLuminance = _readLuminance;
	if (core->platform(core) == mPLATFORM_GBA) {
		adapter->oldLuminance = core->getPeripheral(core, mPERIPH_GBA_LUMINANCE);
		core->setPeripheral(core, mPERIPH_GBA_LUMINANCE, &adapter->luminance);
	}
#endif

	struct mCoreCallbacks callbacks = {
		.videoFrameEnded = mCoreCallback(frame),
		.coreCrashed = mCoreCallback(crashed),
		.sleep = mCoreCallback(sleep),
		.shutdown = mCoreCallback(stop),
		.keysRead = mCoreCallback(keysRead),
		.savedataUpdated = mCoreCallback(savedataUpdated),
		.alarm = mCoreCallback(alarm),
		.memoryBlocksChanged = mCoreCallback(memoryBlocksChanged),
		.context = context
	};
	core->addCoreCallbacks(core, &callbacks);

	_rebuildMemoryMap(context, adapter);

	coreValue->value.opaque = adapter;
	coreValue->flags = mSCRIPT_VALUE_FLAG_FREE_BUFFER;
	mScriptContextSetGlobal(context, "emu", coreValue);
}

void mScriptContextDetachCore(struct mScriptContext* context) {
	struct mScriptCoreAdapter* adapter = _getAdapter(context);
	if (!adapter) {
		return;
	}
	_clearMemoryMap(context, adapter, true);
	struct mCore* core = adapter->core;
	core->setPeripheral(core, mPERIPH_RUMBLE, adapter->oldRumble);
	core->setPeripheral(core, mPERIPH_ROTATION, adapter->oldRotation);
	if (adapter->rotationCbTable) {
		mScriptValueDeref(adapter->rotationCbTable);
	}

	struct mCoreCallbacks callbacks = {
		.videoFrameEnded = mCoreCallback(frame),
		.coreCrashed = mCoreCallback(crashed),
		.sleep = mCoreCallback(sleep),
		.shutdown = mCoreCallback(stop),
		.keysRead = mCoreCallback(keysRead),
		.savedataUpdated = mCoreCallback(savedataUpdated),
		.alarm = mCoreCallback(alarm),
		.memoryBlocksChanged = mCoreCallback(memoryBlocksChanged),
		.context = context
	};
	core->removeCoreCallbacks(core, &callbacks);

#ifdef M_CORE_GBA
	if (core->platform(core) == mPLATFORM_GBA) {
		core->setPeripheral(core, mPERIPH_GBA_LUMINANCE, adapter->oldLuminance);
	}
	if (adapter->luminanceCb) {
		mScriptValueDeref(adapter->luminanceCb);
	}
#endif

	mScriptContextRemoveGlobal(context, "emu");
}

