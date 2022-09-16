#ifndef MT_CSTR_H
#define MT_CSTR_H

#include "prim/def.h"

// Len:

msize mGetCStrLen(const mchar *cstr);

// Cmp:

mint mCmpCStrR(const mchar *lhs, const mchar *rhs);
mint mCmpCStr(const mchar *lhs, const mchar *rhs);
mint mCmpCStrNR(const mchar *lhs, const mchar *rhs, msize n);
mint mCmpCStrN(const mchar *lhs, const mchar *rhs, msize n);
mint mCmpCStrNNR(const mchar *lhs, msize lhsLen, const mchar *rhs, msize rhsLen);
mint mCmpCStrNN(const mchar *lhs, msize lhsLen, const mchar *rhs, msize rhsLen);

#endif
