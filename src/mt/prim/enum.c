#include "enum.h"

#include <mt/debug/assert.h>

#define M_PRIM_(type) { .name = #type, .size = sizeof(type) }

static struct MPrimInfo_ {
    const mchar *name;
    msize        size;
} mPrimInfo_[] = {
    // Char:
    M_PRIM_(mchar),
    M_PRIM_(mschar),
    M_PRIM_(muchar),
    // Int:
    M_PRIM_(msint),
    M_PRIM_(musint),
    M_PRIM_(mint),
    M_PRIM_(muint),
    M_PRIM_(mlint),
    M_PRIM_(mulint),
    M_PRIM_(mllint),
    M_PRIM_(mullint),
    // Float:
    M_PRIM_(mfloat),
    M_PRIM_(mdouble),
    M_PRIM_(mldouble),
    // Void:
    M_PRIM_(mvoid),
    // Bool:
    M_PRIM_(mbool),
    // Fixed:
    M_PRIM_(mint8),
    M_PRIM_(muint8),
    M_PRIM_(mint16),
    M_PRIM_(muint16),
    M_PRIM_(mint32),
    M_PRIM_(muint32),
    M_PRIM_(mint64),
    M_PRIM_(muint64),
    // Fast:
    M_PRIM_(mfast8),
    M_PRIM_(mufast8),
    M_PRIM_(mfast16),
    M_PRIM_(mufast16),
    M_PRIM_(mfast32),
    M_PRIM_(mufast32),
    M_PRIM_(mfast64),
    M_PRIM_(mufast64),
    // Least:
    M_PRIM_(mleast8),
    M_PRIM_(muleast8),
    M_PRIM_(mleast16),
    M_PRIM_(muleast16),
    M_PRIM_(mleast32),
    M_PRIM_(muleast32),
    M_PRIM_(mleast64),
    M_PRIM_(muleast64),
    // Max:
    M_PRIM_(mmax),
    M_PRIM_(mumax),
    // Size:
    M_PRIM_(mssize),
    M_PRIM_(msize),
    // Ptr:
    M_PRIM_(mptr),
    M_PRIM_(muptr)
};

const mchar *mGetPrimName(enum MPrim prim) {
    mAssertMsg(mIsPrimValid(prim), "<prim> is invalid");
    return mPrimInfo_[prim].name;
}

msize mGetPrimSize(enum MPrim prim) {
    mAssertMsg(mIsPrimValid(prim), "<prim> is invalid");
    return mPrimInfo_[prim].size;
}

mbool mIsPrimValid(enum MPrim prim) {
    return 0 <= prim && prim <= MPRIM_COUNT;
}
