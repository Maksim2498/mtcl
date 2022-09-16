#include "func.h"

#include <mt/debug/assert.h>

// Min:

#define M_MIN_P_BODY_                 \
    mAssertMsg(lhs, "<lhs> is null"); \
    mAssertMsg(rhs, "<rhs> is null"); \
                                      \
    return *lhs <= *rhs ? lhs : rhs;

#define M_MIN_BODY_ \
    return lhs <= rhs ? lhs : rhs;


// - Char:

// -- Char:

const mchar *mMinCharP(const mchar *lhs, const mchar *rhs) {
    M_MIN_P_BODY_
}

mchar mMinChar(mchar lhs, mchar rhs) {
	M_MIN_BODY_
}

// -- SChar:

const mschar *mMinSCharP(const mschar *lhs, const mschar *rhs) {
    M_MIN_P_BODY_
}

mschar mMinSChar(mschar lhs, mschar rhs) {
	M_MIN_BODY_
}

// -- UChar:

const muchar *mMinUCharP(const muchar *lhs, const muchar *rhs) {
	M_MIN_P_BODY_
}

muchar mMinUChar(muchar lhs, muchar rhs) {
	M_MIN_BODY_
}

// - Int:

// -- SInt:

const msint *mMinSIntP(const msint *lhs, const msint *rhs) {
	M_MIN_P_BODY_
}

msint mMinSInt(msint lhs, msint rhs) {
	M_MIN_BODY_
}

// -- USInt:

const musint *mMinUSIntP(const musint *lhs, const musint *rhs) {
	M_MIN_P_BODY_
}

musint mMinUSInt(musint lhs, musint rhs) {
	M_MIN_BODY_
}

// -- Int:

const mint *mMinIntP(const mint *lhs, const mint *rhs) {
	M_MIN_P_BODY_
}

mint mMinInt(mint lhs, mint rhs) {
	M_MIN_BODY_
}

// -- UInt:

const muint *mMinUIntP(const muint *lhs, const muint *rhs) {
	M_MIN_P_BODY_
}

muint mMinUInt(muint lhs, muint rhs) {
	M_MIN_BODY_
}

// -- LInt:

const mlint *mMinLIntP(const mlint *lhs, const mlint *rhs) {
	M_MIN_P_BODY_
}

mlint mMinLInt(mlint lhs, mlint rhs) {
	M_MIN_BODY_
}

// -- ULInt:

const mulint *mMinULIntP(const mulint *lhs, const mulint *rhs) {
	M_MIN_P_BODY_
}

mulint mMinULInt(mulint lhs, mulint rhs) {
	M_MIN_BODY_
}

// -- LLInt:

const mllint *mMinLLIntP(const mllint *lhs, const mllint *rhs) {
	M_MIN_P_BODY_
}

mllint mMinLLInt(mllint lhs, mllint rhs) {
	M_MIN_BODY_
}

// -- ULLInt:

const mullint *mMinULLIntP(const mullint *lhs, const mullint *rhs) {
	M_MIN_P_BODY_
}

mullint mMinULLInt(mullint lhs, mullint rhs) {
	M_MIN_BODY_
}

// - Float:

// -- Float:

const mfloat *mMinFloatP(const mfloat *lhs, const mfloat *rhs) {
	M_MIN_P_BODY_
}

mfloat mMinFloat(mfloat lhs, mfloat rhs) {
	M_MIN_BODY_
}

// -- Double:

const mdouble *mMinDoubleP(const mdouble *lhs, const mdouble *rhs) {
	M_MIN_P_BODY_
}

mdouble mMinDouble(mdouble lhs, mdouble rhs) {
	M_MIN_BODY_
}

// -- LDouble:

const mldouble *mMinLDoubleP(const mldouble *lhs, const mldouble *rhs) {
	M_MIN_P_BODY_
}

mldouble mMinLDouble(mldouble lhs, mldouble rhs) {
	M_MIN_BODY_
}

// - Fixed:

// -- Int8:

const mint8 *mMinInt8P(const mint8 *lhs, const mint8 *rhs) {
	M_MIN_P_BODY_
}

mint8 mMinInt8(mint8 lhs, mint8 rhs) {
	M_MIN_BODY_
}

// -- UInt8:

const muint8 *mMinUInt8P(const muint8 *lhs, const muint8 *rhs) {
	M_MIN_P_BODY_
}

muint8 mMinUInt8(muint8 lhs, muint8 rhs) {
	M_MIN_BODY_
}

// -- Int16:

const mint16 *mMinInt16P(const mint16 *lhs, const mint16 *rhs) {
	M_MIN_P_BODY_
}

mint16 mMinInt16(mint16 lhs, mint16 rhs) {
	M_MIN_BODY_
}

// -- UInt16:

const muint16 *mMinUInt16P(const muint16 *lhs, const muint16 *rhs) {
	M_MIN_P_BODY_
}

muint16 mMinUInt16(muint16 lhs, muint16 rhs) {
	M_MIN_BODY_
}

// -- Int32:

const mint32 *mMinInt32P(const mint32 *lhs, const mint32 *rhs) {
	M_MIN_P_BODY_
}

mint32 mMinInt32(mint32 lhs, mint32 rhs) {
	M_MIN_BODY_
}

// -- UInt32:

const muint32 *mMinUInt32P(const muint32 *lhs, const muint32 *rhs) {
	M_MIN_P_BODY_
}

muint32 mMinUInt32(muint32 lhs, muint32 rhs) {
	M_MIN_BODY_
}

// -- Int64:

const mint64 *mMinInt64P(const mint64 *lhs, const mint64 *rhs) {
	M_MIN_P_BODY_
}

mint64 mMinInt64(mint64 lhs, mint64 rhs) {
	M_MIN_BODY_
}

// -- UInt64:

const muint64 *mMinUInt64P(const muint64 *lhs, const muint64 *rhs) {
	M_MIN_P_BODY_
}

muint64 mMinUInt64(muint64 lhs, muint64 rhs) {
	M_MIN_BODY_
}

// - Fast:

// -- Fast8:

const mfast8 *mMinFast8P(const mfast8 *lhs, const mfast8 *rhs) {
	M_MIN_P_BODY_
}

mfast8 mMinFast8(mfast8 lhs, mfast8 rhs) {
	M_MIN_BODY_
}

// -- UFast8:

const mufast8 *mMinUFast8P(const mufast8 *lhs, const mufast8 *rhs) {
	M_MIN_P_BODY_
}

mufast8 mMinUFast8(mufast8 lhs, mufast8 rhs) {
	M_MIN_BODY_
}

// -- Fast16:

const mfast16 *mMinFast16P(const mfast16 *lhs, const mfast16 *rhs) {
	M_MIN_P_BODY_
}

mfast16 mMinFast16(mfast16 lhs, mfast16 rhs) {
	M_MIN_BODY_
}

// -- UFast16:

const mufast16 *mMinUFast16P(const mufast16 *lhs, const mufast16 *rhs) {
	M_MIN_P_BODY_
}

mufast16 mMinUFast16(mufast16 lhs, mufast16 rhs) {
	M_MIN_BODY_
}

// -- Fast32:

const mfast32 *mMinFast32P(const mfast32 *lhs, const mfast32 *rhs) {
	M_MIN_P_BODY_
}

mfast32 mMinFast32(mfast32 lhs, mfast32 rhs) {
	M_MIN_BODY_
}

// -- UFast32:

const mufast32 *mMinUFast32P(const mufast32 *lhs, const mufast32 *rhs) {
	M_MIN_P_BODY_
}

mufast32 mMinUFast32(mufast32 lhs, mufast32 rhs) {
	M_MIN_BODY_
}

// -- Fast64:

const mfast64 *mMinFast64P(const mfast64 *lhs, const mfast64 *rhs) {
	M_MIN_P_BODY_
}

mfast64 mMinFast64(mfast64 lhs, mfast64 rhs) {
	M_MIN_BODY_
}

// -- UFast64:

const mufast64 *mMinUFast64P(const mufast64 *lhs, const mufast64 *rhs) {
	M_MIN_P_BODY_
}

mufast64 mMinUFast64(mufast64 lhs, mufast64 rhs) {
	M_MIN_BODY_
}

// - Least:

// -- Least8:

const mleast8 *mMinLeast8P(const mleast8 *lhs, const mleast8 *rhs) {
	M_MIN_P_BODY_
}

mleast8 mMinLeast8(mleast8 lhs, mleast8 rhs) {
	M_MIN_BODY_
}

// -- ULeast8:

const muleast8 *mMinULeast8P(const muleast8 *lhs, const muleast8 *rhs) {
	M_MIN_P_BODY_
}

muleast8 mMinULeast8(muleast8 lhs, muleast8 rhs) {
	M_MIN_BODY_
}

// -- Least16:

const mleast16 *mMinLeast16P(const mleast16 *lhs, const mleast16 *rhs) {
	M_MIN_P_BODY_
}

mleast16 mMinLeast16(mleast16 lhs, mleast16 rhs) {
	M_MIN_BODY_
}

// -- ULeast16:

const muleast16 *mMinULeast16P(const muleast16 *lhs, const muleast16 *rhs) {
	M_MIN_P_BODY_
}

muleast16 mMinULeast16(muleast16 lhs, muleast16 rhs) {
	M_MIN_BODY_
}

// -- Least32:

const mleast32 *mMinLeast32P(const mleast32 *lhs, const mleast32 *rhs) {
	M_MIN_P_BODY_
}

mleast32 mMinLeast32(mleast32 lhs, mleast32 rhs) {
	M_MIN_BODY_
}

// -- ULeast32:

const muleast32 *mMinULeast32P(const muleast32 *lhs, const muleast32 *rhs) {
	M_MIN_P_BODY_
}

muleast32 mMinULeast32(muleast32 lhs, muleast32 rhs) {
	M_MIN_BODY_
}

// -- Least64:

const mleast64 *mMinLeast64P(const mleast64 *lhs, const mleast64 *rhs) {
	M_MIN_P_BODY_
}

mleast64 mMinLeast64(mleast64 lhs, mleast64 rhs) {
	M_MIN_BODY_
}

// -- ULeast64:

const muleast64 *mMinULeast64P(const muleast64 *lhs, const muleast64 *rhs) {
	M_MIN_P_BODY_
}

muleast64 mMinULeast64(muleast64 lhs, muleast64 rhs) {
	M_MIN_BODY_
}

// - Max:

// -- Max:

const mmax *mMinMaxP(const mmax *lhs, const mmax *rhs) {
	M_MIN_P_BODY_
}

mmax mMinMax(mmax lhs, mmax rhs) {
	M_MIN_BODY_
}

// -- UMax:

const mumax *mMinUMaxP(const mumax *lhs, const mumax *rhs) {
	M_MIN_P_BODY_
}

mumax mMinUMax(mumax lhs, mumax rhs) {
	M_MIN_BODY_
}

// - Size:

// -- SSize:

const mssize *mMinSSizeP(const mssize *lhs, const mssize *rhs) {
	M_MIN_P_BODY_
}

mssize mMinSSize(mssize lhs, mssize rhs) {
	M_MIN_BODY_
}

// -- Size:

const msize *mMinSizeP(const msize *lhs, const msize *rhs) {
	M_MIN_P_BODY_
}

msize mMinSize(msize lhs, msize rhs) {
	M_MIN_BODY_
}

// - Ptr:

// -- Ptr:

const mptr *mMinPtrP(const mptr *lhs, const mptr *rhs) {
	M_MIN_P_BODY_
}

mptr mMinPtr(mptr lhs, mptr rhs) {
	M_MIN_BODY_
}

// -- UPtr:

const muptr *mMinUPtrP(const muptr *lhs, const muptr *rhs) {
	M_MIN_P_BODY_
}

muptr mMinUPtr(muptr lhs, muptr rhs) {
	M_MIN_BODY_
}

// Max:

#define M_MAX_P_BODY_                 \
    mAssertMsg(lhs, "<lhs> is null"); \
    mAssertMsg(rhs, "<rhs> is null"); \
                                      \
    return *lhs >= *rhs ? lhs : rhs;

#define M_MAX_BODY_ \
    return lhs >= rhs ? lhs : rhs;

// - Char:

// -- Char:

const mchar *mMaxCharP(const mchar *lhs, const mchar *rhs) {
	M_MAX_P_BODY_
}

mchar mMaxChar(mchar lhs, mchar rhs) {
	M_MAX_BODY_
}

// -- SChar:

const mschar *mMaxSCharP(const mschar *lhs, const mschar *rhs) {
	M_MAX_P_BODY_
}

mschar mMaxSChar(mschar lhs, mschar rhs) {
	M_MAX_BODY_
}

// -- UChar:

const muchar *mMaxUCharP(const muchar *lhs, const muchar *rhs) {
	M_MAX_P_BODY_
}

muchar mMaxUChar(muchar lhs, muchar rhs) {
	M_MAX_BODY_
}

// - Int:

// -- SInt:

const msint *mMaxSIntP(const msint *lhs, const msint *rhs) {
	M_MAX_P_BODY_
}

msint mMaxSInt(msint lhs, msint rhs) {
	M_MAX_BODY_
}

// -- USInt:

const musint *mMaxUSIntP(const musint *lhs, const musint *rhs) {
	M_MAX_P_BODY_
}

musint mMaxUSInt(musint lhs, musint rhs) {
	M_MAX_BODY_
}

// -- Int:

const mint *mMaxIntP(const mint *lhs, const mint *rhs) {
	M_MAX_P_BODY_
}

mint mMaxInt(mint lhs, mint rhs) {
	M_MAX_BODY_
}

// -- UInt:

const muint *mMaxUIntP(const muint *lhs, const muint *rhs) {
	M_MAX_P_BODY_
}

muint mMaxUInt(muint lhs, muint rhs) {
	M_MAX_BODY_
}

// -- LInt:

const mlint *mMaxLIntP(const mlint *lhs, const mlint *rhs) {
	M_MAX_P_BODY_
}

mlint mMaxLInt(mlint lhs, mlint rhs) {
	M_MAX_BODY_
}

// -- ULInt:

const mulint *mMaxULIntP(const mulint *lhs, const mulint *rhs) {
	M_MAX_P_BODY_
}

mulint mMaxULInt(mulint lhs, mulint rhs) {
	M_MAX_BODY_
}

// -- LLInt:

const mllint *mMaxLLIntP(const mllint *lhs, const mllint *rhs) {
	M_MAX_P_BODY_
}

mllint mMaxLLInt(mllint lhs, mllint rhs) {
	M_MAX_BODY_
}

// -- ULLInt:

const mullint *mMaxULLIntP(const mullint *lhs, const mullint *rhs) {
	M_MAX_P_BODY_
}

mullint mMaxULLInt(mullint lhs, mullint rhs) {
	M_MAX_BODY_
}

// - Float:

// -- Float:

const mfloat *mMaxFloatP(const mfloat *lhs, const mfloat *rhs) {
	M_MAX_P_BODY_
}

mfloat mMaxFloat(mfloat lhs, mfloat rhs) {
	M_MAX_BODY_
}

// -- Double:

const mdouble *mMaxDoubleP(const mdouble *lhs, const mdouble *rhs) {
	M_MAX_P_BODY_
}

mdouble mMaxDouble(mdouble lhs, mdouble rhs) {
	M_MAX_BODY_
}

// -- LDouble:

const mldouble *mMaxLDoubleP(const mldouble *lhs, const mldouble *rhs) {
	M_MAX_P_BODY_
}

mldouble mMaxLDouble(mldouble lhs, mldouble rhs) {
	M_MAX_BODY_
}

// - Fixed:

// -- Int8:

const mint8 *mMaxInt8P(const mint8 *lhs, const mint8 *rhs) {
	M_MAX_P_BODY_
}

mint8 mMaxInt8(mint8 lhs, mint8 rhs) {
	M_MAX_BODY_
}

// -- UInt8:

const muint8 *mMaxUInt8P(const muint8 *lhs, const muint8 *rhs) {
	M_MAX_P_BODY_
}

muint8 mMaxUInt8(muint8 lhs, muint8 rhs) {
	M_MAX_BODY_
}

// -- Int16:

const mint16 *mMaxInt16P(const mint16 *lhs, const mint16 *rhs) {
	M_MAX_P_BODY_
}

mint16 mMaxInt16(mint16 lhs, mint16 rhs) {
	M_MAX_BODY_
}

// -- UInt16:

const muint16 *mMaxUInt16P(const muint16 *lhs, const muint16 *rhs) {
	M_MAX_P_BODY_
}

muint16 mMaxUInt16(muint16 lhs, muint16 rhs) {
	M_MAX_BODY_
}

// -- Int32:

const mint32 *mMaxInt32P(const mint32 *lhs, const mint32 *rhs) {
	M_MAX_P_BODY_
}

mint32 mMaxInt32(mint32 lhs, mint32 rhs) {
	M_MAX_BODY_
}

// -- UInt32:

const muint32 *mMaxUInt32P(const muint32 *lhs, const muint32 *rhs) {
	M_MAX_P_BODY_
}

muint32 mMaxUInt32(muint32 lhs, muint32 rhs) {
	M_MAX_BODY_
}

// -- Int64:

const mint64 *mMaxInt64P(const mint64 *lhs, const mint64 *rhs) {
	M_MAX_P_BODY_
}

mint64 mMaxInt64(mint64 lhs, mint64 rhs) {
	M_MAX_BODY_
}

// -- UInt64:

const muint64 *mMaxUInt64P(const muint64 *lhs, const muint64 *rhs) {
	M_MAX_P_BODY_
}

muint64 mMaxUInt64(muint64 lhs, muint64 rhs) {
	M_MAX_BODY_
}

// - Fast:

// -- Fast8:

const mfast8 *mMaxFast8P(const mfast8 *lhs, const mfast8 *rhs) {
	M_MAX_P_BODY_
}

mfast8 mMaxFast8(mfast8 lhs, mfast8 rhs) {
	M_MAX_BODY_
}

// -- UFast8:

const mufast8 *mMaxUFast8P(const mufast8 *lhs, const mufast8 *rhs) {
	M_MAX_P_BODY_
}

mufast8 mMaxUFast8(mufast8 lhs, mufast8 rhs) {
	M_MAX_BODY_
}

// -- Fast16:

const mfast16 *mMaxFast16P(const mfast16 *lhs, const mfast16 *rhs) {
	M_MAX_P_BODY_
}

mfast16 mMaxFast16(mfast16 lhs, mfast16 rhs) {
	M_MAX_BODY_
}

// -- UFast16:

const mufast16 *mMaxUFast16P(const mufast16 *lhs, const mufast16 *rhs) {
	M_MAX_P_BODY_
}

mufast16 mMaxUFast16(mufast16 lhs, mufast16 rhs) {
	M_MAX_BODY_
}

// -- Fast32:

const mfast32 *mMaxFast32P(const mfast32 *lhs, const mfast32 *rhs) {
	M_MAX_P_BODY_
}

mfast32 mMaxFast32(mfast32 lhs, mfast32 rhs) {
	M_MAX_BODY_
}

// -- UFast32:

const mufast32 *mMaxUFast32P(const mufast32 *lhs, const mufast32 *rhs) {
	M_MAX_P_BODY_
}

mufast32 mMaxUFast32(mufast32 lhs, mufast32 rhs) {
	M_MAX_BODY_
}

// -- Fast64:

const mfast64 *mMaxFast64P(const mfast64 *lhs, const mfast64 *rhs) {
	M_MAX_P_BODY_
}

mfast64 mMaxFast64(mfast64 lhs, mfast64 rhs) {
	M_MAX_BODY_
}

// -- UFast64:

const mufast64 *mMaxUFast64P(const mufast64 *lhs, const mufast64 *rhs) {
	M_MAX_P_BODY_
}

mufast64 mMaxUFast64(mufast64 lhs, mufast64 rhs) {
	M_MAX_BODY_
}

// - Least:

// -- Least8:

const mleast8 *mMaxLeast8P(const mleast8 *lhs, const mleast8 *rhs) {
	M_MAX_P_BODY_
}

mleast8 mMaxLeast8(mleast8 lhs, mleast8 rhs) {
	M_MAX_BODY_
}

// -- ULeast8:

const muleast8 *mMaxULeast8P(const muleast8 *lhs, const muleast8 *rhs) {
	M_MAX_P_BODY_
}

muleast8 mMaxULeast8(muleast8 lhs, muleast8 rhs) {
	M_MAX_BODY_
}

// -- Least16:

const mleast16 *mMaxLeast16P(const mleast16 *lhs, const mleast16 *rhs) {
	M_MAX_P_BODY_
}

mleast16 mMaxLeast16(mleast16 lhs, mleast16 rhs) {
	M_MAX_BODY_
}

// -- ULeast16:

const muleast16 *mMaxULeast16P(const muleast16 *lhs, const muleast16 *rhs) {
	M_MAX_P_BODY_
}

muleast16 mMaxULeast16(muleast16 lhs, muleast16 rhs) {
	M_MAX_BODY_
}

// -- Least32:

const mleast32 *mMaxLeast32P(const mleast32 *lhs, const mleast32 *rhs) {
	M_MAX_P_BODY_
}

mleast32 mMaxLeast32(mleast32 lhs, mleast32 rhs) {
	M_MAX_BODY_
}

// -- ULeast32:

const muleast32 *mMaxULeast32P(const muleast32 *lhs, const muleast32 *rhs) {
	M_MAX_P_BODY_
}

muleast32 mMaxULeast32(muleast32 lhs, muleast32 rhs) {
	M_MAX_BODY_
}

// -- Least64:

const mleast64 *mMaxLeast64P(const mleast64 *lhs, const mleast64 *rhs) {
	M_MAX_P_BODY_
}

mleast64 mMaxLeast64(mleast64 lhs, mleast64 rhs) {
	M_MAX_BODY_
}

// -- ULeast64:

const muleast64 *mMaxULeast64P(const muleast64 *lhs, const muleast64 *rhs) {
	M_MAX_P_BODY_
}

muleast64 mMaxULeast64(muleast64 lhs, muleast64 rhs) {
	M_MAX_BODY_
}

// - Max:

// -- Max:

const mmax *mMaxMaxP(const mmax *lhs, const mmax *rhs) {
	M_MAX_P_BODY_
}

mmax mMaxMax(mmax lhs, mmax rhs) {
	M_MAX_BODY_
}

// -- UMax:

const mumax *mMaxUMaxP(const mumax *lhs, const mumax *rhs) {
	M_MAX_P_BODY_
}

mumax mMaxUMax(mumax lhs, mumax rhs) {
	M_MAX_BODY_
}

// - Size:

// -- SSize:

const mssize *mMaxSSizeP(const mssize *lhs, const mssize *rhs) {
	M_MAX_P_BODY_
}

mssize mMaxSSize(mssize lhs, mssize rhs) {
	M_MAX_BODY_
}

// -- Size:

const msize *mMaxSizeP(const msize *lhs, const msize *rhs) {
	M_MAX_P_BODY_
}

msize mMaxSize(msize lhs, msize rhs) {
	M_MAX_BODY_
}

// - Ptr:

// -- Ptr:

const mptr *mMaxPtrP(const mptr *lhs, const mptr *rhs) {
	M_MAX_P_BODY_
}

mptr mMaxPtr(mptr lhs, mptr rhs) {
	M_MAX_BODY_
}

// -- UPtr:

const muptr *mMaxUPtrP(const muptr *lhs, const muptr *rhs) {
	M_MAX_P_BODY_
}

muptr mMaxUPtr(muptr lhs, muptr rhs) {
	M_MAX_BODY_
}

// Cmp:

#define M_CMP_PR_BODY_                      \
    mAssertMsg(lhs, "<lhs> is null");       \
    mAssertMsg(rhs, "<rhs> is null");       \
                                            \
    return *rhs < *lhs ? -1 : *rhs != *lhs;

#define M_CMP_P_BODY_                       \
    mAssertMsg(lhs, "<lhs> is null");       \
    mAssertMsg(rhs, "<rhs> is null");       \
                                            \
    return *lhs < *rhs ? -1 : *lhs != *rhs;

#define M_CMP_R_BODY_ \
    return rhs < lhs ? -1 : rhs != lhs;

#define M_CMP_BODY_ \
    return lhs < rhs ? -1 : lhs != rhs;

// - Char:

// -- Char:

mint mCmpCharPR(const mchar *lhs, const mchar *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpCharP(const mchar *lhs, const mchar *rhs) {
	M_CMP_P_BODY_
}

mint mCmpCharR(mchar lhs, mchar rhs) {
	M_CMP_R_BODY_
}

mint mCmpChar(mchar lhs, mchar rhs) {
	M_CMP_BODY_
}

// -- SChar:

mint mCmpSCharPR(const mschar *lhs, const mschar *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpSCharP(const mschar *lhs, const mschar *rhs) {
	M_CMP_P_BODY_
}

mint mCmpSCharR(mschar lhs, mschar rhs) {
	M_CMP_R_BODY_
}

mint mCmpSChar(mschar lhs, mschar rhs) {
	M_CMP_BODY_
}

// -- UChar:

mint mCmpUCharPR(const muchar *lhs, const muchar *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUCharP(const muchar *lhs, const muchar *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUCharR(muchar lhs, muchar rhs) {
	M_CMP_R_BODY_
}

mint mCmpUChar(muchar lhs, muchar rhs) {
	M_CMP_BODY_
}

// - Int:

// -- SInt:

mint mCmpSIntPR(const msint *lhs, const msint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpSIntP(const msint *lhs, const msint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpSIntR(msint lhs, msint rhs) {
	M_CMP_R_BODY_
}

mint mCmpSInt(msint lhs, msint rhs) {
	M_CMP_BODY_
}

// -- USInt:

mint mCmpUSIntPR(const musint *lhs, const musint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUSIntP(const musint *lhs, const musint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUSIntR(musint lhs, musint rhs) {
	M_CMP_R_BODY_
}

mint mCmpUSInt(musint lhs, musint rhs) {
	M_CMP_BODY_
}

// -- Int:

mint mCmpIntPR(const mint *lhs, const mint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpIntP(const mint *lhs, const mint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpIntR(mint lhs, mint rhs) {
	M_CMP_R_BODY_
}

mint mCmpInt(mint lhs, mint rhs) {
	M_CMP_BODY_
}

// -- UInt:

mint mCmpUIntPR(const muint *lhs, const muint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUIntP(const muint *lhs, const muint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUIntR(muint lhs, muint rhs) {
	M_CMP_R_BODY_
}

mint mCmpUInt(muint lhs, muint rhs) {
	M_CMP_BODY_
}

// -- LInt:

mint mCmpLIntPR(const mlint *lhs, const mlint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpLIntP(const mlint *lhs, const mlint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpLIntR(mlint lhs, mlint rhs) {
	M_CMP_R_BODY_
}

mint mCmpLInt(mlint lhs, mlint rhs) {
	M_CMP_BODY_
}

// -- ULInt:

mint mCmpULIntPR(const mulint *lhs, const mulint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpULIntP(const mulint *lhs, const mulint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpULIntR(mulint lhs, mulint rhs) {
	M_CMP_R_BODY_
}

mint mCmpULInt(mulint lhs, mulint rhs) {
	M_CMP_BODY_
}

// -- LLInt:

mint mCmpLLIntPR(const mllint *lhs, const mllint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpLLIntP(const mllint *lhs, const mllint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpLLIntR(mllint lhs, mllint rhs) {
	M_CMP_R_BODY_
}

mint mCmpLLInt(mllint lhs, mllint rhs) {
	M_CMP_BODY_
}

// -- ULLInt:

mint mCmpULLIntPR(const mullint *lhs, const mullint *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpULLIntP(const mullint *lhs, const mullint *rhs) {
	M_CMP_P_BODY_
}

mint mCmpULLIntR(mullint lhs, mullint rhs) {
	M_CMP_R_BODY_
}

mint mCmpULLInt(mullint lhs, mullint rhs) {
	M_CMP_BODY_
}

// - Float:

// -- Float:

mint mCmpFloatPR(const mfloat *lhs, const mfloat *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpFloatP(const mfloat *lhs, const mfloat *rhs) {
	M_CMP_P_BODY_
}

mint mCmpFloatR(mfloat lhs, mfloat rhs) {
	M_CMP_R_BODY_
}

mint mCmpFloat(mfloat lhs, mfloat rhs) {
	M_CMP_BODY_
}

// -- Double:

mint mCmpDoublePR(const mdouble *lhs, const mdouble *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpDoubleP(const mdouble *lhs, const mdouble *rhs) {
	M_CMP_P_BODY_
}

mint mCmpDoubleR(mdouble lhs, mdouble rhs) {
	M_CMP_R_BODY_
}

mint mCmpDouble(mdouble lhs, mdouble rhs) {
	M_CMP_BODY_
}

// -- LDouble:

mint mCmpLDoublePR(const mldouble *lhs, const mldouble *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpLDoubleP(const mldouble *lhs, const mldouble *rhs) {
	M_CMP_P_BODY_
}

mint mCmpLDoubleR(mldouble lhs, mldouble rhs) {
	M_CMP_R_BODY_
}

mint mCmpLDouble(mldouble lhs, mldouble rhs) {
	M_CMP_BODY_
}

// - Fixed:

// -- Int8:

mint mCmpInt8PR(const mint8 *lhs, const mint8 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpInt8P(const mint8 *lhs, const mint8 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpInt8(mint8 lhs, mint8 rhs) {
	M_CMP_R_BODY_
}

mint mCmpInt8R(mint8 lhs, mint8 rhs) {
	M_CMP_BODY_
}

// -- UInt8:

mint mCmpUInt8PR(const muint8 *lhs, const muint8 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUInt8P(const muint8 *lhs, const muint8 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUInt8R(muint8 lhs, muint8 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUInt8(muint8 lhs, muint8 rhs) {
	M_CMP_BODY_
}

// -- Int16:

mint mCmpInt16PR(const mint16 *lhs, const mint16 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpInt16P(const mint16 *lhs, const mint16 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpInt16R(mint16 lhs, mint16 rhs) {
	M_CMP_R_BODY_
}

mint mCmpInt16(mint16 lhs, mint16 rhs) {
	M_CMP_BODY_
}

// -- UInt16:

mint mCmpUInt16PR(const muint16 *lhs, const muint16 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUInt16P(const muint16 *lhs, const muint16 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUInt16R(muint16 lhs, muint16 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUInt16(muint16 lhs, muint16 rhs) {
	M_CMP_BODY_
}

// -- Int32:

mint mCmpInt32PR(const mint32 *lhs, const mint32 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpInt32P(const mint32 *lhs, const mint32 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpInt32R(mint32 lhs, mint32 rhs) {
	M_CMP_R_BODY_
}

mint mCmpInt32(mint32 lhs, mint32 rhs) {
	M_CMP_BODY_
}

// -- UInt32:

mint mCmpUInt32PR(const muint32 *lhs, const muint32 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUInt32P(const muint32 *lhs, const muint32 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUInt32R(muint32 lhs, muint32 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUInt32(muint32 lhs, muint32 rhs) {
	M_CMP_BODY_
}

// -- Int64:

mint mCmpInt64PR(const mint64 *lhs, const mint64 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpInt64P(const mint64 *lhs, const mint64 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpInt64R(mint64 lhs, mint64 rhs) {
	M_CMP_R_BODY_
}

mint mCmpInt64(mint64 lhs, mint64 rhs) {
	M_CMP_BODY_
}

// -- UInt64:

mint mCmpUInt64PR(const muint64 *lhs, const muint64 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUInt64P(const muint64 *lhs, const muint64 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUInt64R(muint64 lhs, muint64 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUInt64(muint64 lhs, muint64 rhs) {
	M_CMP_BODY_
}

// - Fast:

// -- Fast8:

mint mCmpFast8PR(const mfast8 *lhs, const mfast8 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpFast8P(const mfast8 *lhs, const mfast8 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpFast8R(mfast8 lhs, mfast8 rhs) {
	M_CMP_R_BODY_
}

mint mCmpFast8(mfast8 lhs, mfast8 rhs) {
	M_CMP_BODY_
}

// -- UFast8:

mint mCmpUFast8PR(const mufast8 *lhs, const mufast8 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUFast8P(const mufast8 *lhs, const mufast8 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUFast8R(mufast8 lhs, mufast8 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUFast8(mufast8 lhs, mufast8 rhs) {
	M_CMP_BODY_
}

// -- Fast16:

mint mCmpFast16PR(const mfast16 *lhs, const mfast16 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpFast16P(const mfast16 *lhs, const mfast16 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpFast16R(mfast16 lhs, mfast16 rhs) {
	M_CMP_R_BODY_
}

mint mCmpFast16(mfast16 lhs, mfast16 rhs) {
	M_CMP_BODY_
}

// -- UFast16:

mint mCmpUFast16PR(const mufast16 *lhs, const mufast16 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUFast16P(const mufast16 *lhs, const mufast16 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUFast16R(mufast16 lhs, mufast16 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUFast16(mufast16 lhs, mufast16 rhs) {
	M_CMP_BODY_
}

// -- Fast32:

mint mCmpFast32PR(const mfast32 *lhs, const mfast32 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpFast32P(const mfast32 *lhs, const mfast32 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpFast32R(mfast32 lhs, mfast32 rhs) {
	M_CMP_R_BODY_
}

mint mCmpFast32(mfast32 lhs, mfast32 rhs) {
	M_CMP_BODY_
}

// -- UFast32:

mint mCmpUFast32PR(const mufast32 *lhs, const mufast32 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUFast32P(const mufast32 *lhs, const mufast32 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUFast32R(mufast32 lhs, mufast32 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUFast32(mufast32 lhs, mufast32 rhs) {
	M_CMP_BODY_
}

// -- Fast64:

mint mCmpFast64PR(const mfast64 *lhs, const mfast64 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpFast64P(const mfast64 *lhs, const mfast64 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpFast64R(mfast64 lhs, mfast64 rhs) {
	M_CMP_R_BODY_
}

mint mCmpFast64(mfast64 lhs, mfast64 rhs) {
	M_CMP_BODY_
}

// -- UFast64:

mint mCmpUFast64PR(const mufast64 *lhs, const mufast64 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUFast64P(const mufast64 *lhs, const mufast64 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUFast64R(mufast64 lhs, mufast64 rhs) {
	M_CMP_R_BODY_
}

mint mCmpUFast64(mufast64 lhs, mufast64 rhs) {
	M_CMP_BODY_
}

// - Least:

// -- Least8:

mint mCmpLeast8PR(const mleast8 *lhs, const mleast8 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpLeast8P(const mleast8 *lhs, const mleast8 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpLeast8R(mleast8 lhs, mleast8 rhs) {
	M_CMP_R_BODY_
}

mint mCmpLeast8(mleast8 lhs, mleast8 rhs) {
	M_CMP_BODY_
}

// -- ULeast8:

mint mCmpULeast8PR(const muleast8 *lhs, const muleast8 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpULeast8P(const muleast8 *lhs, const muleast8 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpULeast8R(muleast8 lhs, muleast8 rhs) {
	M_CMP_R_BODY_
}

mint mCmpULeast8(muleast8 lhs, muleast8 rhs) {
	M_CMP_BODY_
}

// -- Least16:

mint mCmpLeast16PR(const mleast16 *lhs, const mleast16 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpLeast16P(const mleast16 *lhs, const mleast16 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpLeast16R(mleast16 lhs, mleast16 rhs) {
	M_CMP_R_BODY_
}

mint mCmpLeast16(mleast16 lhs, mleast16 rhs) {
	M_CMP_BODY_
}

// -- ULeast16:

mint mCmpULeast16PR(const muleast16 *lhs, const muleast16 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpULeast16P(const muleast16 *lhs, const muleast16 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpULeast16R(muleast16 lhs, muleast16 rhs) {
	M_CMP_R_BODY_
}

mint mCmpULeast16(muleast16 lhs, muleast16 rhs) {
	M_CMP_BODY_
}

// -- Least32:

mint mCmpLeast32PR(const mleast32 *lhs, const mleast32 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpLeast32P(const mleast32 *lhs, const mleast32 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpLeast32R(mleast32 lhs, mleast32 rhs) {
	M_CMP_R_BODY_
}

mint mCmpLeast32(mleast32 lhs, mleast32 rhs) {
	M_CMP_BODY_
}

// -- ULeast32:

mint mCmpULeast32PR(const muleast32 *lhs, const muleast32 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpULeast32P(const muleast32 *lhs, const muleast32 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpULeast32R(muleast32 lhs, muleast32 rhs) {
	M_CMP_R_BODY_
}

mint mCmpULeast32(muleast32 lhs, muleast32 rhs) {
	M_CMP_BODY_
}

// -- Least64:

mint mCmpLeast64PR(const mleast64 *lhs, const mleast64 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpLeast64P(const mleast64 *lhs, const mleast64 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpLeast64R(mleast64 lhs, mleast64 rhs) {
	M_CMP_R_BODY_
}

mint mCmpLeast64(mleast64 lhs, mleast64 rhs) {
	M_CMP_BODY_
}

// -- ULeast64:

mint mCmpULeast64PR(const muleast64 *lhs, const muleast64 *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpULeast64P(const muleast64 *lhs, const muleast64 *rhs) {
	M_CMP_P_BODY_
}

mint mCmpULeast64R(muleast64 lhs, muleast64 rhs) {
	M_CMP_R_BODY_
}

mint mCmpULeast64(muleast64 lhs, muleast64 rhs) {
	M_CMP_BODY_
}

// - Max:

// -- Max:

mint mCmpMaxPR(const mmax *lhs, const mmax *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpMaxP(const mmax *lhs, const mmax *rhs) {
	M_CMP_P_BODY_
}

mint mCmpMaxR(mmax lhs, mmax rhs) {
	M_CMP_R_BODY_
}

mint mCmpMax(mmax lhs, mmax rhs) {
	M_CMP_BODY_
}

// -- UMax:

mint mCmpUMaxPR(const mumax *lhs, const mumax *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUMaxP(const mumax *lhs, const mumax *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUMaxR(mumax lhs, mumax rhs) {
	M_CMP_R_BODY_
}

mint mCmpUMax(mumax lhs, mumax rhs) {
	M_CMP_BODY_
}

// - Size:

// -- SSize:

mint mCmpSSizePR(const mssize *lhs, const mssize *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpSSizeP(const mssize *lhs, const mssize *rhs) {
	M_CMP_P_BODY_
}

mint mCmpSSizeR(mssize lhs, mssize rhs) {
	M_CMP_R_BODY_
}

mint mCmpSSize(mssize lhs, mssize rhs) {
	M_CMP_BODY_
}

// -- Size:

mint mCmpSizePR(const msize *lhs, const msize *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpSizeP(const msize *lhs, const msize *rhs) {
	M_CMP_P_BODY_
}

mint mCmpSizeR(msize lhs, msize rhs) {
	M_CMP_R_BODY_
}

mint mCmpSize(msize lhs, msize rhs) {
	M_CMP_BODY_
}

// - Ptr:

// -- Ptr:

mint mCmpPtrPR(const mptr *lhs, const mptr *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpPtrP(const mptr *lhs, const mptr *rhs) {
	M_CMP_P_BODY_
}

mint mCmpPtrR(mptr lhs, mptr rhs) {
	M_CMP_R_BODY_
}

mint mCmpPtr(mptr lhs, mptr rhs) {
	M_CMP_BODY_
}

// -- UPtr:

mint mCmpUPtrPR(const muptr *lhs, const muptr *rhs) {
	M_CMP_PR_BODY_
}

mint mCmpUPtrP(const muptr *lhs, const muptr *rhs) {
	M_CMP_P_BODY_
}

mint mCmpUPtrR(muptr lhs, muptr rhs) {
	M_CMP_R_BODY_
}

mint mCmpUPtr(muptr lhs, muptr rhs) {
	M_CMP_BODY_
}
