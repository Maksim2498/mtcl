#include "cstr.h"

#include <string.h>

#include "debug/assert.h"
#include "prim/func.h"

msize mGetCStrLen(const mchar *cstr) {
    mAssertMsg(cstr, "<cstr> is null");
    return strlen(cstr);
}

mint mCmpCStrR(const mchar *lhs, const mchar *rhs) {
    mAssertMsg(lhs, "<lhs> is null");
    mAssertMsg(rhs, "<rhs> is null");
    return strcmp(rhs, lhs);
}

mint mCmpCStr(const mchar *lhs, const mchar *rhs) {
    mAssertMsg(lhs, "<lhs> is null");
    mAssertMsg(rhs, "<rhs> is null");
    return strcmp(lhs, rhs);
}

mint mCmpCStrNR(const mchar *lhs, const mchar *rhs, msize n) {
    mAssertMsg(lhs, "<lhs> is null");
    mAssertMsg(rhs, "<rhs> is null");
    return strncmp(rhs, lhs, n);
}

mint mCmpCStrN(const mchar *lhs, const mchar *rhs, msize n) {
    mAssertMsg(lhs, "<lhs> is null");
    mAssertMsg(rhs, "<rhs> is null");
    return strncmp(lhs, rhs, n);
}

mint mCmpCStrNNR(const mchar *lhs, msize lhsLen, const mchar *rhs, msize rhsLen) {
    mAssertMsg(lhs, "<lhs> is null");
    mAssertMsg(rhs, "<rhs> is null");
    return mCmpCStrNN(rhs, rhsLen, lhs, lhsLen);
}

mint mCmpCStrNN(const mchar *lhs, msize lhsLen, const mchar *rhs, msize rhsLen) {
    mAssertMsg(lhs, "<lhs> is null");
    mAssertMsg(rhs, "<rhs> is null");

    const mint diff = mCmpCStrN(lhs, rhs, mMinG(lhsLen, rhsLen));

    if (diff)
        return diff;
    else if (lhsLen < rhsLen)
        return 1;
    else if (lhsLen > rhsLen)
        return -1;
    else
        return 0;
}
