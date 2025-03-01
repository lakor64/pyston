// Resource script for Python core DLL.
// Currently only holds version information.
//
#pragma code_page(1252)
#include "winver.h"

#define PYTHON_COMPANY   "The Pyston Team"
#define PYTHON_COPYRIGHT "Copyright \xA9 2001-2021 Python Software Foundation. Copyright \xA9 2000 BeOpen.com. Copyright \xA9 1995-2001 CNRI. Copyright \xA9 1991-1995 SMC."

#define MS_WINDOWS
#include "modsupport.h"
#include "patchlevel.h"
#include <pythonnt_rc.h>
#ifdef _DEBUG
#   define PYTHON_DEBUG_EXT "_d"
#else
#   define PYTHON_DEBUG_EXT
#endif

/* e.g., 3.3.0a1
 * PYSTON_VERSION comes from patchlevel.h
 */
#define PYTHON_VERSION PYSTON_VERSION "\0"

/* 64-bit version number as comma-separated list of 4 16-bit ints */
#if PY_MICRO_VERSION > 64
#   error "PY_MICRO_VERSION > 64"
#endif
#if PY_RELEASE_LEVEL > 99
#   error "PY_RELEASE_LEVEL > 99"
#endif
#if PY_RELEASE_SERIAL > 9
#   error "PY_RELEASE_SERIAL > 9"
#endif
#define PYVERSION64 PYSTON_MAJOR_VERSION, PYSTON_MINOR_VERSION, FIELD3, PYTHON_API_VERSION
