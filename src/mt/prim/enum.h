#ifndef MT_PRIM_ENUM_H
#define MT_PRIM_ENUM_H

#include "def.h"

enum MPrim {
    // Char:
    MPRIM_CHAR,
    MPRIM_SCHAR,
    MPRIM_UCHAR,
    // Int:
    MPRIM_SINT,
    MPRIM_USINT,
    MPRIM_INT,
    MPRIM_UINT,
    MPRIM_LINT,
    MPRIM_ULINT,
    MPRIM_LLINT,
    MPRIM_ULLINT,
    // Float:
    MPRIM_FLOAT,
    MPRIM_DOUBLE,
    MPRIM_LDOUBLE,
    // Void:
    MPRIM_VOID,
    // Bool:
    MPRIM_BOOL,
    // Fixed:
    MPRIM_INT8,
    MPRIM_UINT8,
    MPRIM_INT16,
    MPRIM_UINT16,
    MPRIM_INT32,
    MPRIM_UINT32,
    MPRIM_INT64,
    MPRIM_UINT64,
    // Fast:
    MPRIM_FAST8,
    MPRIM_UFAST8,
    MPRIM_FAST16,
    MPRIM_UFAST16,
    MPRIM_FAST32,
    MPRIM_UFAST32,
    MPRIM_FAST64,
    MPRIM_UFAST64,
    // Least:
    MPRIM_LEAST8,
    MPRIM_ULEAST8,
    MPRIM_LEAST16,
    MPRIM_ULEAST16,
    MPRIM_LEAST32,
    MPRIM_ULEAST32,
    MPRIM_LEAST64,
    MPRIM_ULEAST64,
    // Max:
    MPRIM_MAX,
    MPRIM_UMAX,
    // Size:
    MPRIM_SSIZE,
    MPRIM_SIZE,
    // Ptr:
    MPRIM_PTR,
    MPRIM_UPTR,
    // Count:
    MPRIM_COUNT
};

const mchar *mGetPrimName(enum MPrim prim);
msize mGetPrimSize(enum MPrim prim);
mbool mIsPrimValid(enum MPrim prim);

#endif
