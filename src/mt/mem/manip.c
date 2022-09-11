#include "manip.h"

#include <string.h>

#include <mt/debug/assert.h>

const mvoid *mFindMemC(const mvoid *dst, msize n, muchar t) {
    return mFindMem((mvoid *) dst, n, t);
}

mvoid *mFindMem(mvoid *dst, msize n, muchar t) {
    mAssertMsg(dst, "<dst> is null");
    return memchr(dst, t, n);
}

mvoid mZeroMem(mvoid *dst, msize n) {
    mSetMem(dst, n, 0);
}

mvoid mSetMem(mvoid *dst, msize n, muchar c) {
    mAssertMsg(dst, "<dst> is null");
    memset(dst, c, n);
}

mvoid mCopyMem(mvoid *restrict dst, const mvoid *restrict src, msize n) {
    mAssertMsg(dst, "<dst> is null");
    mAssertMsg(dst, "<src> is null");
    memcpy(dst, src, n);
}

mvoid mMoveMem(mvoid *dst, mvoid *src, msize n) {
    mAssertMsg(dst, "<dst> is null");
    mAssertMsg(dst, "<src> is null");
    memmove(dst, src, n);
}
