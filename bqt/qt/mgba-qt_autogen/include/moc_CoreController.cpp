/****************************************************************************
** Meta object code from reading C++ file 'CoreController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/CoreController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoreController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN4QGBA14CoreControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::CoreController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA14CoreControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::CoreController",
        "started",
        "",
        "paused",
        "unpaused",
        "stopping",
        "crashed",
        "errorMessage",
        "failed",
        "frameAvailable",
        "didReset",
        "stateLoaded",
        "rewound",
        "rewindChanged",
        "fastForwardChanged",
        "unimplementedBiosCall",
        "statusPosted",
        "message",
        "logPosted",
        "level",
        "category",
        "log",
        "imagePrinted",
        "QImage",
        "start",
        "stop",
        "reset",
        "setPaused",
        "frameAdvance",
        "setSync",
        "enable",
        "showResetInfo",
        "setRewinding",
        "rewind",
        "count",
        "setFastForward",
        "forceFastForward",
        "changePlayer",
        "id",
        "overrideMute",
        "loadState",
        "slot",
        "path",
        "flags",
        "QIODevice*",
        "iodev",
        "saveState",
        "loadBackupState",
        "saveBackupState",
        "loadSave",
        "temporary",
        "VFile*",
        "loadPatch",
        "scanCard",
        "scanCards",
        "replaceGame",
        "yankPak",
        "blockSave",
        "addKey",
        "key",
        "clearKey",
        "setAutofire",
        "screenshot",
        "setRealTime",
        "setFixedTime",
        "time",
        "setFakeEpoch",
        "setTimeOffset",
        "offset",
        "importSharkport",
        "exportSharkport",
        "attachPrinter",
        "detachPrinter",
        "endPrint",
        "attachBattleChipGate",
        "detachBattleChipGate",
        "setBattleChipId",
        "uint16_t",
        "setBattleChipFlavor",
        "flavor",
        "attachDolphin",
        "Address",
        "address",
        "detachDolphin",
        "setAVStream",
        "mAVStream*",
        "clearAVStream",
        "clearOverride",
        "startVideoLog",
        "compression",
        "vf",
        "endVideoLog",
        "closeVf",
        "setFramebufferHandle",
        "fb"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'started'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'paused'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unpaused'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stopping'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'crashed'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'failed'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'frameAvailable'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'didReset'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stateLoaded'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rewound'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rewindChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'fastForwardChanged'
        QtMocHelpers::SignalData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'unimplementedBiosCall'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'statusPosted'
        QtMocHelpers::SignalData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Signal 'logPosted'
        QtMocHelpers::SignalData<void(int, int, const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { QMetaType::Int, 20 }, { QMetaType::QString, 21 },
        }}),
        // Signal 'imagePrinted'
        QtMocHelpers::SignalData<void(const QImage &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 2 },
        }}),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setPaused'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'frameAdvance'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSync'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'showResetInfo'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'setRewinding'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'rewind'
        QtMocHelpers::SlotData<void(int)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
        // Slot 'rewind'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'setFastForward'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'forceFastForward'
        QtMocHelpers::SlotData<void(bool)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'changePlayer'
        QtMocHelpers::SlotData<void(int)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 38 },
        }}),
        // Slot 'overrideMute'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'loadState'
        QtMocHelpers::SlotData<void(int)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Slot 'loadState'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'loadState'
        QtMocHelpers::SlotData<void(const QString &, int)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 42 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'loadState'
        QtMocHelpers::SlotData<void(const QString &)>(40, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'loadState'
        QtMocHelpers::SlotData<void(QIODevice *, int)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 44, 45 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'loadState'
        QtMocHelpers::SlotData<void(QIODevice *)>(40, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 44, 45 },
        }}),
        // Slot 'saveState'
        QtMocHelpers::SlotData<void(int)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Slot 'saveState'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'saveState'
        QtMocHelpers::SlotData<void(const QString &, int)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 42 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'saveState'
        QtMocHelpers::SlotData<void(const QString &)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'saveState'
        QtMocHelpers::SlotData<void(QIODevice *, int)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 44, 45 }, { QMetaType::Int, 43 },
        }}),
        // Slot 'saveState'
        QtMocHelpers::SlotData<void(QIODevice *)>(46, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 44, 45 },
        }}),
        // Slot 'loadBackupState'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveBackupState'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadSave'
        QtMocHelpers::SlotData<void(const QString &, bool)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Bool, 50 },
        }}),
        // Slot 'loadSave'
        QtMocHelpers::SlotData<void(VFile *, bool, const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 2 }, { QMetaType::Bool, 50 }, { QMetaType::QString, 42 },
        }}),
        // Slot 'loadSave'
        QtMocHelpers::SlotData<void(VFile *, bool)>(49, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 51, 2 }, { QMetaType::Bool, 50 },
        }}),
        // Slot 'loadPatch'
        QtMocHelpers::SlotData<void(const QString &)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'scanCard'
        QtMocHelpers::SlotData<void(const QString &)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'scanCards'
        QtMocHelpers::SlotData<void(const QStringList &)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Slot 'replaceGame'
        QtMocHelpers::SlotData<void(const QString &)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'yankPak'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'blockSave'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addKey'
        QtMocHelpers::SlotData<void(int)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 59 },
        }}),
        // Slot 'clearKey'
        QtMocHelpers::SlotData<void(int)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 59 },
        }}),
        // Slot 'setAutofire'
        QtMocHelpers::SlotData<void(int, bool)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 59 }, { QMetaType::Bool, 30 },
        }}),
        // Slot 'screenshot'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setRealTime'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setFixedTime'
        QtMocHelpers::SlotData<void(const QDateTime &)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 65 },
        }}),
        // Slot 'setFakeEpoch'
        QtMocHelpers::SlotData<void(const QDateTime &)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 65 },
        }}),
        // Slot 'setTimeOffset'
        QtMocHelpers::SlotData<void(qint64)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 68 },
        }}),
        // Slot 'importSharkport'
        QtMocHelpers::SlotData<void(const QString &)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'exportSharkport'
        QtMocHelpers::SlotData<void(const QString &)>(70, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'attachPrinter'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'detachPrinter'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'endPrint'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'attachBattleChipGate'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'detachBattleChipGate'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBattleChipId'
        QtMocHelpers::SlotData<void(uint16_t)>(76, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 77, 38 },
        }}),
        // Slot 'setBattleChipFlavor'
        QtMocHelpers::SlotData<void(int)>(78, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 79 },
        }}),
        // Slot 'attachDolphin'
        QtMocHelpers::SlotData<bool(const Address &)>(80, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 81, 82 },
        }}),
        // Slot 'detachDolphin'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setAVStream'
        QtMocHelpers::SlotData<void(mAVStream *)>(84, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 85, 2 },
        }}),
        // Slot 'clearAVStream'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearOverride'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'startVideoLog'
        QtMocHelpers::SlotData<void(const QString &, bool)>(88, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 42 }, { QMetaType::Bool, 89 },
        }}),
        // Slot 'startVideoLog'
        QtMocHelpers::SlotData<void(const QString &)>(88, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'startVideoLog'
        QtMocHelpers::SlotData<void(VFile *, bool)>(88, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 90 }, { QMetaType::Bool, 89 },
        }}),
        // Slot 'startVideoLog'
        QtMocHelpers::SlotData<void(VFile *)>(88, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 51, 90 },
        }}),
        // Slot 'endVideoLog'
        QtMocHelpers::SlotData<void(bool)>(91, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 92 },
        }}),
        // Slot 'endVideoLog'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'setFramebufferHandle'
        QtMocHelpers::SlotData<void(int)>(93, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 94 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CoreController, qt_meta_tag_ZN4QGBA14CoreControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::CoreController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14CoreControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14CoreControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA14CoreControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::CoreController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CoreController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->paused(); break;
        case 2: _t->unpaused(); break;
        case 3: _t->stopping(); break;
        case 4: _t->crashed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->failed(); break;
        case 6: _t->frameAvailable(); break;
        case 7: _t->didReset(); break;
        case 8: _t->stateLoaded(); break;
        case 9: _t->rewound(); break;
        case 10: _t->rewindChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->fastForwardChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->unimplementedBiosCall((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->statusPosted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->logPosted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->imagePrinted((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 16: _t->start(); break;
        case 17: _t->stop(); break;
        case 18: _t->reset(); break;
        case 19: _t->setPaused((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->frameAdvance(); break;
        case 21: _t->setSync((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->showResetInfo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->setRewinding((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->rewind((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->rewind(); break;
        case 26: _t->setFastForward((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->forceFastForward((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->changePlayer((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->overrideMute((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->loadState((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->loadState(); break;
        case 32: _t->loadState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 33: _t->loadState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->loadState((*reinterpret_cast<std::add_pointer_t<QIODevice*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 35: _t->loadState((*reinterpret_cast<std::add_pointer_t<QIODevice*>>(_a[1]))); break;
        case 36: _t->saveState((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->saveState(); break;
        case 38: _t->saveState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 39: _t->saveState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->saveState((*reinterpret_cast<std::add_pointer_t<QIODevice*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 41: _t->saveState((*reinterpret_cast<std::add_pointer_t<QIODevice*>>(_a[1]))); break;
        case 42: _t->loadBackupState(); break;
        case 43: _t->saveBackupState(); break;
        case 44: _t->loadSave((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 45: _t->loadSave((*reinterpret_cast<std::add_pointer_t<VFile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 46: _t->loadSave((*reinterpret_cast<std::add_pointer_t<VFile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 47: _t->loadPatch((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: _t->scanCard((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 49: _t->scanCards((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 50: _t->replaceGame((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 51: _t->yankPak(); break;
        case 52: _t->blockSave(); break;
        case 53: _t->addKey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->clearKey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 55: _t->setAutofire((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 56: _t->screenshot(); break;
        case 57: _t->setRealTime(); break;
        case 58: _t->setFixedTime((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 59: _t->setFakeEpoch((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 60: _t->setTimeOffset((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 61: _t->importSharkport((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 62: _t->exportSharkport((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 63: _t->attachPrinter(); break;
        case 64: _t->detachPrinter(); break;
        case 65: _t->endPrint(); break;
        case 66: _t->attachBattleChipGate(); break;
        case 67: _t->detachBattleChipGate(); break;
        case 68: _t->setBattleChipId((*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 69: _t->setBattleChipFlavor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 70: { bool _r = _t->attachDolphin((*reinterpret_cast<std::add_pointer_t<Address>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->detachDolphin(); break;
        case 72: _t->setAVStream((*reinterpret_cast<std::add_pointer_t<mAVStream*>>(_a[1]))); break;
        case 73: _t->clearAVStream(); break;
        case 74: _t->clearOverride(); break;
        case 75: _t->startVideoLog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 76: _t->startVideoLog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 77: _t->startVideoLog((*reinterpret_cast<std::add_pointer_t<VFile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 78: _t->startVideoLog((*reinterpret_cast<std::add_pointer_t<VFile*>>(_a[1]))); break;
        case 79: _t->endVideoLog((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 80: _t->endVideoLog(); break;
        case 81: _t->setFramebufferHandle((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::started, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::paused, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::unpaused, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::stopping, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)(const QString & )>(_a, &CoreController::crashed, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::failed, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::frameAvailable, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::didReset, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::stateLoaded, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)()>(_a, &CoreController::rewound, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)(bool )>(_a, &CoreController::rewindChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)(bool )>(_a, &CoreController::fastForwardChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)(int )>(_a, &CoreController::unimplementedBiosCall, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)(const QString & )>(_a, &CoreController::statusPosted, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)(int , int , const QString & )>(_a, &CoreController::logPosted, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoreController::*)(const QImage & )>(_a, &CoreController::imagePrinted, 15))
            return;
    }
}

const QMetaObject *QGBA::CoreController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::CoreController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14CoreControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::CoreController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    }
    return _id;
}

// SIGNAL 0
void QGBA::CoreController::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGBA::CoreController::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGBA::CoreController::unpaused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGBA::CoreController::stopping()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGBA::CoreController::crashed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QGBA::CoreController::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGBA::CoreController::frameAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGBA::CoreController::didReset()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGBA::CoreController::stateLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGBA::CoreController::rewound()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGBA::CoreController::rewindChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void QGBA::CoreController::fastForwardChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void QGBA::CoreController::unimplementedBiosCall(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void QGBA::CoreController::statusPosted(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void QGBA::CoreController::logPosted(int _t1, int _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2, _t3);
}

// SIGNAL 15
void QGBA::CoreController::imagePrinted(const QImage & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}
QT_WARNING_POP
