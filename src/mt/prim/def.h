#ifndef MT_PRIM_DEF_H
#define MT_PRIM_DEF_H

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

// Char:

typedef char        mchar;
typedef signed char mschar;
typedef unsigned    muchar;

// Int:

typedef short              msint;
typedef unsigned short     musint;
typedef int                mint;
typedef unsigned           muint;
typedef long               mlint;
typedef unsigned long      mulint;
typedef long long          mllint;
typedef unsigned long long mullint;

// Float:

typedef float       mfloat;
typedef double      mdouble;
typedef long double mldouble;

// Bool:

typedef bool mbool;

// Void:

typedef void mvoid;

#define M_NULL 0

// Fixed:

typedef int8_t   mint8;
typedef uint8_t  muint8;
typedef int16_t  mint16;
typedef uint16_t muint16;
typedef int32_t  mint32;
typedef uint32_t muint32;
typedef int64_t  mint64;
typedef uint64_t muint64;

// Fast:

typedef int_fast8_t   mfast8;
typedef uint_fast8_t  mufast8;
typedef int_fast16_t  mfast16;
typedef uint_fast16_t mufast16;
typedef int_fast32_t  mfast32;
typedef uint_fast32_t mufast32;
typedef int_fast64_t  mfast64;
typedef uint_fast64_t mufast64;

// Least:

typedef int_least8_t   mleast8;
typedef uint_least8_t  muleast8;
typedef int_least16_t  mleast16;
typedef uint_least16_t muleast16;
typedef int_least32_t  mleast32;
typedef uint_least32_t muleast32;
typedef int_least64_t  mleast64;
typedef uint_least64_t muleast64;

// Max:

typedef intmax_t  mmax;
typedef uintmax_t mumax;

// Size:

typedef size_t    msize;
typedef ptrdiff_t mssize;

// Ptr:

typedef intptr_t  mptr;
typedef uintptr_t muptr;

#endif
