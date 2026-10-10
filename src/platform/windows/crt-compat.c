/* Copyright (c) 2013-2024 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#include <stdio.h>
#include <sys/stat.h>

/* MinGW-Builds' msvcrt runtime has no import entry for the POSIX large-file
 * aliases that _GNU_SOURCE makes mingw-w64 use: fstat() lowers to fstat64(),
 * which the headers declare as dllimport, and the stdio aliases lower to
 * __imp_ftello64/__imp_fseeko64. None of those exist, while every underscore
 * spelling does. MSYS2 ships them, so this file is only compiled when the build
 * asks for it (USE_CRT_COMPAT), and it must stay out of other toolchains. */

/* Defining fstat64 in C would collide with the dllimport declaration in
 * <sys/stat.h>, so the symbol is named at the assembler level instead. */
int _mgba_fstat64(int fd, struct _stat64* buf) {
	return _fstat64(fd, buf);
}
__asm__(".globl fstat64\n\t.set fstat64, _mgba_fstat64");

__int64 (*__imp_ftello64)(FILE*) = _ftelli64;
int (*__imp_fseeko64)(FILE*, __int64, int) = _fseeki64;