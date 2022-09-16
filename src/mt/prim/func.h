#ifndef MT_PRIM_FUNC_H
#define MT_PRIM_FUNC_H

#include <mt/generic.h>

#include "def.h"

// Min:

#define mMinG(lhs, rhs) mgeneric(lhs,                   \
                                 /* Int: */             \
                                 msint:    mMinSInt,    \
                                 musint:   mMinUSInt,   \
                                 mint:     mMinInt,     \
                                 muint:    mMinUInt,    \
                                 mlint:    mMinLInt,    \
                                 mulint:   mMinULInt,   \
                                 mllint:   mMinLLInt,   \
                                 mullint:  mMinULLInt,  \
                                 /* Float: */           \
                                 mfloat:   mMinFloat,   \
                                 mdouble:  mMinDouble,  \
                                 mldouble: mMinLDouble)(lhs, rhs)

// - Char:

// -- Char:
const mchar *mMinCharP(const mchar *lhs, const mchar *rhs);
mchar mMinChar(mchar lhs, mchar rhs);

// -- SChar:
const mschar *mMinSCharP(const mschar *lhs, const mschar *rhs);
mschar mMinSChar(mschar lhs, mschar rhs);

// -- UChar:
const muchar *mMinUCharP(const muchar *lhs, const muchar *rhs);
muchar mMinUChar(muchar lhs, muchar rhs);

// - Int:

// -- SInt:
const msint *mMinSIntP(const msint *lhs, const msint *rhs);
msint mMinSInt(msint lhs, msint rhs);

// -- USInt:
const musint *mMinUSIntP(const musint *lhs, const musint *rhs);
musint mMinUSInt(musint lhs, musint rhs);

// -- Int:
const mint *mMinIntP(const mint *lhs, const mint *rhs);
mint mMinInt(mint lhs, mint rhs);

// -- UInt:
const muint *mMinUIntP(const muint *lhs, const muint *rhs);
muint mMinUInt(muint lhs, muint rhs);

// -- LInt:
const mlint *mMinLIntP(const mlint *lhs, const mlint *rhs);
mlint mMinLInt(mlint lhs, mlint rhs);

// -- ULInt:
const mulint *mMinULIntP(const mulint *lhs, const mulint *rhs);
mulint mMinULInt(mulint lhs, mulint rhs);

// -- LLInt:
const mllint *mMinLLIntP(const mllint *lhs, const mllint *rhs);
mllint mMinLLInt(mllint lhs, mllint rhs);

// -- ULLInt:
const mullint *mMinULLIntP(const mullint *lhs, const mullint *rhs);
mullint mMinULLInt(mullint lhs, mullint rhs);

// - Float:

// -- Float:
const mfloat *mMinFloatP(const mfloat *lhs, const mfloat *rhs);
mfloat mMinFloat(mfloat lhs, mfloat rhs);

// -- Double:
const mdouble *mMinDoubleP(const mdouble *lhs, const mdouble *rhs);
mdouble mMinDouble(mdouble lhs, mdouble rhs);

// -- LDouble:
const mldouble *mMinLDoubleP(const mldouble *lhs, const mldouble *rhs);
mldouble mMinLDouble(mldouble lhs, mldouble rhs);

// - Fixed:

// -- Int8:
const mint8 *mMinInt8P(const mint8 *lhs, const mint8 *rhs);
mint8 mMinInt8(mint8 lhs, mint8 rhs);

// -- UInt8:
const muint8 *mMinUInt8P(const muint8 *lhs, const muint8 *rhs);
muint8 mMinUInt8(muint8 lhs, muint8 rhs);

// -- Int16:
const mint16 *mMinInt16P(const mint16 *lhs, const mint16 *rhs);
mint16 mMinInt16(mint16 lhs, mint16 rhs);

// -- UInt16:
const muint16 *mMinUInt16P(const muint16 *lhs, const muint16 *rhs);
muint16 mMinUInt16(muint16 lhs, muint16 rhs);

// -- Int32:
const mint32 *mMinInt32P(const mint32 *lhs, const mint32 *rhs);
mint32 mMinInt32(mint32 lhs, mint32 rhs);

// -- UInt32:
const muint32 *mMinUInt32P(const muint32 *lhs, const muint32 *rhs);
muint32 mMinUInt32(muint32 lhs, muint32 rhs);

// -- Int64:
const mint64 *mMinInt64P(const mint64 *lhs, const mint64 *rhs);
mint64 mMinInt64(mint64 lhs, mint64 rhs);

// -- UInt64:
const muint64 *mMinUInt64P(const muint64 *lhs, const muint64 *rhs);
muint64 mMinUInt64(muint64 lhs, muint64 rhs);

// - Fast:

// -- Fast8:
const mfast8 *mMinFast8P(const mfast8 *lhs, const mfast8 *rhs);
mfast8 mMinFast8(mfast8 lhs, mfast8 rhs);

// -- UFast8:
const mufast8 *mMinUFast8P(const mufast8 *lhs, const mufast8 *rhs);
mufast8 mMinUFast8(mufast8 lhs, mufast8 rhs);

// -- Fast16:
const mfast16 *mMinFast16P(const mfast16 *lhs, const mfast16 *rhs);
mfast16 mMinFast16(mfast16 lhs, mfast16 rhs);

// -- UFast16:
const mufast16 *mMinUFast16P(const mufast16 *lhs, const mufast16 *rhs);
mufast16 mMinUFast16(mufast16 lhs, mufast16 rhs);

// -- Fast32:
const mfast32 *mMinFast32P(const mfast32 *lhs, const mfast32 *rhs);
mfast32 mMinFast32(mfast32 lhs, mfast32 rhs);

// -- UFast32:
const mufast32 *mMinUFast32P(const mufast32 *lhs, const mufast32 *rhs);
mufast32 mMinUFast32(mufast32 lhs, mufast32 rhs);

// -- Fast64:
const mfast64 *mMinFast64P(const mfast64 *lhs, const mfast64 *rhs);
mfast64 mMinFast64(mfast64 lhs, mfast64 rhs);

// -- UFast64:
const mufast64 *mMinUFast64P(const mufast64 *lhs, const mufast64 *rhs);
mufast64 mMinUFast64(mufast64 lhs, mufast64 rhs);

// - Least:

// -- Least8:
const mleast8 *mMinLeast8P(const mleast8 *lhs, const mleast8 *rhs);
mleast8 mMinLeast8(mleast8 lhs, mleast8 rhs);

// -- ULeast8:
const muleast8 *mMinULeast8P(const muleast8 *lhs, const muleast8 *rhs);
muleast8 mMinULeast8(muleast8 lhs, muleast8 rhs);

// -- Least16:
const mleast16 *mMinLeast16P(const mleast16 *lhs, const mleast16 *rhs);
mleast16 mMinLeast16(mleast16 lhs, mleast16 rhs);

// -- ULeast16:
const muleast16 *mMinULeast16P(const muleast16 *lhs, const muleast16 *rhs);
muleast16 mMinULeast16(muleast16 lhs, muleast16 rhs);

// -- Least32:
const mleast32 *mMinLeast32P(const mleast32 *lhs, const mleast32 *rhs);
mleast32 mMinLeast32(mleast32 lhs, mleast32 rhs);

// -- ULeast32:
const muleast32 *mMinULeast32P(const muleast32 *lhs, const muleast32 *rhs);
muleast32 mMinULeast32(muleast32 lhs, muleast32 rhs);

// -- Least64:
const mleast64 *mMinLeast64P(const mleast64 *lhs, const mleast64 *rhs);
mleast64 mMinLeast64(mleast64 lhs, mleast64 rhs);

// -- ULeast64:
const muleast64 *mMinULeast64P(const muleast64 *lhs, const muleast64 *rhs);
muleast64 mMinULeast64(muleast64 lhs, muleast64 rhs);

// - Max:

// -- Max:
const mmax *mMinMaxP(const mmax *lhs, const mmax *rhs);
mmax mMinMax(mmax lhs, mmax rhs);

// -- UMax:
const mumax *mMinUMaxP(const mumax *lhs, const mumax *rhs);
mumax mMinUMax(mumax lhs, mumax rhs);

// - Size:

// -- SSize:
const mssize *mMinSSizeP(const mssize *lhs, const mssize *rhs);
mssize mMinSSize(mssize lhs, mssize rhs);

// -- Size:
const msize *mMinSizeP(const msize *lhs, const msize *rhs);
msize mMinSize(msize lhs, msize rhs);

// - Ptr:

// -- Ptr:
const mptr *mMinPtrP(const mptr *lhs, const mptr *rhs);
mptr mMinPtr(mptr lhs, mptr rhs);

// -- UPtr:
const muptr *mMinUPtrP(const muptr *lhs, const muptr *rhs);
muptr mMinUPtr(muptr lhs, muptr rhs);

// Max:

#define mMaxG(lhs, rhs) mgeneric(lhs,                   \
                                 /* Int: */             \
                                 msint:    mMaxSInt,    \
                                 musint:   mMaxUSInt,   \
                                 mint:     mMaxInt,     \
                                 muint:    mMaxUInt,    \
                                 mlint:    mMaxLInt,    \
                                 mulint:   mMaxULInt,   \
                                 mllint:   mMaxLLInt,   \
                                 mullint:  mMaxULLInt,  \
                                 /* Float: */           \
                                 mfloat:   mMaxFloat,   \
                                 mdouble:  mMaxDouble,  \
                                 mldouble: mMaxLDouble)(lhs, rhs)

// - Char:

// -- Char:
const mchar *mMaxCharP(const mchar *lhs, const mchar *rhs);
mchar mMaxChar(mchar lhs, mchar rhs);

// -- SChar:
const mschar *mMaxSCharP(const mschar *lhs, const mschar *rhs);
mschar mMaxSChar(mschar lhs, mschar rhs);

// -- UChar:
const muchar *mMaxUCharP(const muchar *lhs, const muchar *rhs);
muchar mMaxUChar(muchar lhs, muchar rhs);

// - Int:

// -- SInt:
const msint *mMaxSIntP(const msint *lhs, const msint *rhs);
msint mMaxSInt(msint lhs, msint rhs);

// -- USInt:
const musint *mMaxUSIntP(const musint *lhs, const musint *rhs);
musint mMaxUSInt(musint lhs, musint rhs);

// -- Int:
const mint *mMaxIntP(const mint *lhs, const mint *rhs);
mint mMaxInt(mint lhs, mint rhs);

// -- UInt:
const muint *mMaxUIntP(const muint *lhs, const muint *rhs);
muint mMaxUInt(muint lhs, muint rhs);

// -- LInt:
const mlint *mMaxLIntP(const mlint *lhs, const mlint *rhs);
mlint mMaxLInt(mlint lhs, mlint rhs);

// -- ULInt:
const mulint *mMaxULIntP(const mulint *lhs, const mulint *rhs);
mulint mMaxULInt(mulint lhs, mulint rhs);

// -- LLInt:
const mllint *mMaxLLIntP(const mllint *lhs, const mllint *rhs);
mllint mMaxLLInt(mllint lhs, mllint rhs);

// -- ULLInt:
const mullint *mMaxULLIntP(const mullint *lhs, const mullint *rhs);
mullint mMaxULLInt(mullint lhs, mullint rhs);

// - Float:

// -- Float:
const mfloat *mMaxFloatP(const mfloat *lhs, const mfloat *rhs);
mfloat mMaxFloat(mfloat lhs, mfloat rhs);

// -- Double:
const mdouble *mMaxDoubleP(const mdouble *lhs, const mdouble *rhs);
mdouble mMaxDouble(mdouble lhs, mdouble rhs);

// -- LDouble:
const mldouble *mMaxLDoubleP(const mldouble *lhs, const mldouble *rhs);
mldouble mMaxLDouble(mldouble lhs, mldouble rhs);

// - Fixed:

// -- Int8:
const mint8 *mMaxInt8P(const mint8 *lhs, const mint8 *rhs);
mint8 mMaxInt8(mint8 lhs, mint8 rhs);

// -- UInt8:
const muint8 *mMaxUInt8P(const muint8 *lhs, const muint8 *rhs);
muint8 mMaxUInt8(muint8 lhs, muint8 rhs);

// -- Int16:
const mint16 *mMaxInt16P(const mint16 *lhs, const mint16 *rhs);
mint16 mMaxInt16(mint16 lhs, mint16 rhs);

// -- UInt16:
const muint16 *mMaxUInt16P(const muint16 *lhs, const muint16 *rhs);
muint16 mMaxUInt16(muint16 lhs, muint16 rhs);

// -- Int32:
const mint32 *mMaxInt32P(const mint32 *lhs, const mint32 *rhs);
mint32 mMaxInt32(mint32 lhs, mint32 rhs);

// -- UInt32:
const muint32 *mMaxUInt32P(const muint32 *lhs, const muint32 *rhs);
muint32 mMaxUInt32(muint32 lhs, muint32 rhs);

// -- Int64:
const mint64 *mMaxInt64P(const mint64 *lhs, const mint64 *rhs);
mint64 mMaxInt64(mint64 lhs, mint64 rhs);

// -- UInt64:
const muint64 *mMaxUInt64P(const muint64 *lhs, const muint64 *rhs);
muint64 mMaxUInt64(muint64 lhs, muint64 rhs);

// - Fast:

// -- Fast8:
const mfast8 *mMaxFast8P(const mfast8 *lhs, const mfast8 *rhs);
mfast8 mMaxFast8(mfast8 lhs, mfast8 rhs);

// -- UFast8:
const mufast8 *mMaxUFast8P(const mufast8 *lhs, const mufast8 *rhs);
mufast8 mMaxUFast8(mufast8 lhs, mufast8 rhs);

// -- Fast16:
const mfast16 *mMaxFast16P(const mfast16 *lhs, const mfast16 *rhs);
mfast16 mMaxFast16(mfast16 lhs, mfast16 rhs);

// -- UFast16:
const mufast16 *mMaxUFast16P(const mufast16 *lhs, const mufast16 *rhs);
mufast16 mMaxUFast16(mufast16 lhs, mufast16 rhs);

// -- Fast32:
const mfast32 *mMaxFast32P(const mfast32 *lhs, const mfast32 *rhs);
mfast32 mMaxFast32(mfast32 lhs, mfast32 rhs);

// -- UFast32:
const mufast32 *mMaxUFast32P(const mufast32 *lhs, const mufast32 *rhs);
mufast32 mMaxUFast32(mufast32 lhs, mufast32 rhs);

// -- Fast64:
const mfast64 *mMaxFast64P(const mfast64 *lhs, const mfast64 *rhs);
mfast64 mMaxFast64(mfast64 lhs, mfast64 rhs);

// -- UFast64:
const mufast64 *mMaxUFast64P(const mufast64 *lhs, const mufast64 *rhs);
mufast64 mMaxUFast64(mufast64 lhs, mufast64 rhs);

// - Least:

// -- Least8:
const mleast8 *mMaxLeast8P(const mleast8 *lhs, const mleast8 *rhs);
mleast8 mMaxLeast8(mleast8 lhs, mleast8 rhs);

// -- ULeast8:
const muleast8 *mMaxULeast8P(const muleast8 *lhs, const muleast8 *rhs);
muleast8 mMaxULeast8(muleast8 lhs, muleast8 rhs);

// -- Least16:
const mleast16 *mMaxLeast16P(const mleast16 *lhs, const mleast16 *rhs);
mleast16 mMaxLeast16(mleast16 lhs, mleast16 rhs);

// -- ULeast16:
const muleast16 *mMaxULeast16P(const muleast16 *lhs, const muleast16 *rhs);
muleast16 mMaxULeast16(muleast16 lhs, muleast16 rhs);

// -- Least32:
const mleast32 *mMaxLeast32P(const mleast32 *lhs, const mleast32 *rhs);
mleast32 mMaxLeast32(mleast32 lhs, mleast32 rhs);

// -- ULeast32:
const muleast32 *mMaxULeast32P(const muleast32 *lhs, const muleast32 *rhs);
muleast32 mMaxULeast32(muleast32 lhs, muleast32 rhs);

// -- Least64:
const mleast64 *mMaxLeast64P(const mleast64 *lhs, const mleast64 *rhs);
mleast64 mMaxLeast64(mleast64 lhs, mleast64 rhs);

// -- ULeast64:
const muleast64 *mMaxULeast64P(const muleast64 *lhs, const muleast64 *rhs);
muleast64 mMaxULeast64(muleast64 lhs, muleast64 rhs);

// - Max:

// -- Max:
const mmax *mMaxMaxP(const mmax *lhs, const mmax *rhs);
mmax mMaxMax(mmax lhs, mmax rhs);

// -- UMax:
const mumax *mMaxUMaxP(const mumax *lhs, const mumax *rhs);
mumax mMaxUMax(mumax lhs, mumax rhs);

// - Size:

// -- SSize:
const mssize *mMaxSSizeP(const mssize *lhs, const mssize *rhs);
mssize mMaxSSize(mssize lhs, mssize rhs);

// -- Size:
const msize *mMaxSizeP(const msize *lhs, const msize *rhs);
msize mMaxSize(msize lhs, msize rhs);

// - Ptr:

// -- Ptr:
const mptr *mMaxPtrP(const mptr *lhs, const mptr *rhs);
mptr mMaxPtr(mptr lhs, mptr rhs);

// -- UPtr:
const muptr *mMaxUPtrP(const muptr *lhs, const muptr *rhs);
muptr mMaxUPtr(muptr lhs, muptr rhs);

// Cmp:

#define mCmpG(lhs, rhs) mgeneric(lhs,                   \
                                 /* Int: */             \
                                 msint:    mCmpSInt,    \
                                 musint:   mCmpUSInt,   \
                                 mint:     mCmpInt,     \
                                 muint:    mCmpUInt,    \
                                 mlint:    mCmpLInt,    \
                                 mulint:   mCmpULInt,   \
                                 mllint:   mCmpLLInt,   \
                                 mullint:  mCmpULLInt,  \
                                 /* Float: */           \
                                 mfloat:   mCmpFloat,   \
                                 mdouble:  mCmpDouble,  \
                                 mldouble: mCmpLDouble)(lhs, rhs)

// - Char:

// -- Char:
mint mCmpCharPR(const mchar *lhs, const mchar *rhs);
mint mCmpCharP(const mchar *lhs, const mchar *rhs);
mint mCmpCharR(mchar lhs, mchar rhs);
mint mCmpChar(mchar lhs, mchar rhs);

// -- SChar:
mint mCmpSCharPR(const mschar *lhs, const mschar *rhs);
mint mCmpSCharP(const mschar *lhs, const mschar *rhs);
mint mCmpSCharR(mschar lhs, mschar rhs);
mint mCmpSChar(mschar lhs, mschar rhs);

// -- UChar:
mint mCmpUCharPR(const muchar *lhs, const muchar *rhs);
mint mCmpUCharP(const muchar *lhs, const muchar *rhs);
mint mCmpUCharR(muchar lhs, muchar rhs);
mint mCmpUChar(muchar lhs, muchar rhs);

// - Int:

// -- SInt:
mint mCmpSIntPR(const msint *lhs, const msint *rhs);
mint mCmpSIntP(const msint *lhs, const msint *rhs);
mint mCmpSIntR(msint lhs, msint rhs);
mint mCmpSInt(msint lhs, msint rhs);

// -- USInt:
mint mCmpUSIntPR(const musint *lhs, const musint *rhs);
mint mCmpUSIntP(const musint *lhs, const musint *rhs);
mint mCmpUSIntR(musint lhs, musint rhs);
mint mCmpUSInt(musint lhs, musint rhs);

// -- Int:
mint mCmpIntPR(const mint *lhs, const mint *rhs);
mint mCmpIntP(const mint *lhs, const mint *rhs);
mint mCmpIntR(mint lhs, mint rhs);
mint mCmpInt(mint lhs, mint rhs);

// -- UInt:
mint mCmpUIntPR(const muint *lhs, const muint *rhs);
mint mCmpUIntP(const muint *lhs, const muint *rhs);
mint mCmpUIntR(muint lhs, muint rhs);
mint mCmpUInt(muint lhs, muint rhs);

// -- LInt:
mint mCmpLIntPR(const mlint *lhs, const mlint *rhs);
mint mCmpLIntP(const mlint *lhs, const mlint *rhs);
mint mCmpLIntR(mlint lhs, mlint rhs);
mint mCmpLInt(mlint lhs, mlint rhs);

// -- ULInt:
mint mCmpULIntPR(const mulint *lhs, const mulint *rhs);
mint mCmpULIntP(const mulint *lhs, const mulint *rhs);
mint mCmpULIntR(mulint lhs, mulint rhs);
mint mCmpULInt(mulint lhs, mulint rhs);

// -- LLInt:
mint mCmpLLIntPR(const mllint *lhs, const mllint *rhs);
mint mCmpLLIntP(const mllint *lhs, const mllint *rhs);
mint mCmpLLIntR(mllint lhs, mllint rhs);
mint mCmpLLInt(mllint lhs, mllint rhs);

// -- ULLInt:
mint mCmpULLIntPR(const mullint *lhs, const mullint *rhs);
mint mCmpULLIntP(const mullint *lhs, const mullint *rhs);
mint mCmpULLIntR(mullint lhs, mullint rhs);
mint mCmpULLInt(mullint lhs, mullint rhs);

// - Float:

// -- Float:
mint mCmpFloatPR(const mfloat *lhs, const mfloat *rhs);
mint mCmpFloatP(const mfloat *lhs, const mfloat *rhs);
mint mCmpFloatR(mfloat lhs, mfloat rhs);
mint mCmpFloat(mfloat lhs, mfloat rhs);

// -- Double:
mint mCmpDoublePR(const mdouble *lhs, const mdouble *rhs);
mint mCmpDoubleP(const mdouble *lhs, const mdouble *rhs);
mint mCmpDoubleR(mdouble lhs, mdouble rhs);
mint mCmpDouble(mdouble lhs, mdouble rhs);

// -- LDouble:
mint mCmpLDoublePR(const mldouble *lhs, const mldouble *rhs);
mint mCmpLDoubleP(const mldouble *lhs, const mldouble *rhs);
mint mCmpLDoubleR(mldouble lhs, mldouble rhs);
mint mCmpLDouble(mldouble lhs, mldouble rhs);

// - Fixed:

// -- Int8:
mint mCmpInt8PR(const mint8 *lhs, const mint8 *rhs);
mint mCmpInt8P(const mint8 *lhs, const mint8 *rhs);
mint mCmpInt8(mint8 lhs, mint8 rhs);
mint mCmpInt8R(mint8 lhs, mint8 rhs);

// -- UInt8:
mint mCmpUInt8PR(const muint8 *lhs, const muint8 *rhs);
mint mCmpUInt8P(const muint8 *lhs, const muint8 *rhs);
mint mCmpUInt8R(muint8 lhs, muint8 rhs);
mint mCmpUInt8(muint8 lhs, muint8 rhs);

// -- Int16:
mint mCmpInt16PR(const mint16 *lhs, const mint16 *rhs);
mint mCmpInt16P(const mint16 *lhs, const mint16 *rhs);
mint mCmpInt16R(mint16 lhs, mint16 rhs);
mint mCmpInt16(mint16 lhs, mint16 rhs);

// -- UInt16:
mint mCmpUInt16PR(const muint16 *lhs, const muint16 *rhs);
mint mCmpUInt16P(const muint16 *lhs, const muint16 *rhs);
mint mCmpUInt16R(muint16 lhs, muint16 rhs);
mint mCmpUInt16(muint16 lhs, muint16 rhs);

// -- Int32:
mint mCmpInt32PR(const mint32 *lhs, const mint32 *rhs);
mint mCmpInt32P(const mint32 *lhs, const mint32 *rhs);
mint mCmpInt32R(mint32 lhs, mint32 rhs);
mint mCmpInt32(mint32 lhs, mint32 rhs);

// -- UInt32:
mint mCmpUInt32PR(const muint32 *lhs, const muint32 *rhs);
mint mCmpUInt32P(const muint32 *lhs, const muint32 *rhs);
mint mCmpUInt32R(muint32 lhs, muint32 rhs);
mint mCmpUInt32(muint32 lhs, muint32 rhs);

// -- Int64:
mint mCmpInt64PR(const mint64 *lhs, const mint64 *rhs);
mint mCmpInt64P(const mint64 *lhs, const mint64 *rhs);
mint mCmpInt64R(mint64 lhs, mint64 rhs);
mint mCmpInt64(mint64 lhs, mint64 rhs);

// -- UInt64:
mint mCmpUInt64PR(const muint64 *lhs, const muint64 *rhs);
mint mCmpUInt64P(const muint64 *lhs, const muint64 *rhs);
mint mCmpUInt64R(muint64 lhs, muint64 rhs);
mint mCmpUInt64(muint64 lhs, muint64 rhs);

// - Fast:

// -- Fast8:
mint mCmpFast8PR(const mfast8 *lhs, const mfast8 *rhs);
mint mCmpFast8P(const mfast8 *lhs, const mfast8 *rhs);
mint mCmpFast8R(mfast8 lhs, mfast8 rhs);
mint mCmpFast8(mfast8 lhs, mfast8 rhs);

// -- UFast8:
mint mCmpUFast8PR(const mufast8 *lhs, const mufast8 *rhs);
mint mCmpUFast8P(const mufast8 *lhs, const mufast8 *rhs);
mint mCmpUFast8R(mufast8 lhs, mufast8 rhs);
mint mCmpUFast8(mufast8 lhs, mufast8 rhs);

// -- Fast16:
mint mCmpFast16PR(const mfast16 *lhs, const mfast16 *rhs);
mint mCmpFast16P(const mfast16 *lhs, const mfast16 *rhs);
mint mCmpFast16R(mfast16 lhs, mfast16 rhs);
mint mCmpFast16(mfast16 lhs, mfast16 rhs);

// -- UFast16:
mint mCmpUFast16PR(const mufast16 *lhs, const mufast16 *rhs);
mint mCmpUFast16P(const mufast16 *lhs, const mufast16 *rhs);
mint mCmpUFast16R(mufast16 lhs, mufast16 rhs);
mint mCmpUFast16(mufast16 lhs, mufast16 rhs);

// -- Fast32:
mint mCmpFast32PR(const mfast32 *lhs, const mfast32 *rhs);
mint mCmpFast32P(const mfast32 *lhs, const mfast32 *rhs);
mint mCmpFast32R(mfast32 lhs, mfast32 rhs);
mint mCmpFast32(mfast32 lhs, mfast32 rhs);

// -- UFast32:
mint mCmpUFast32PR(const mufast32 *lhs, const mufast32 *rhs);
mint mCmpUFast32P(const mufast32 *lhs, const mufast32 *rhs);
mint mCmpUFast32R(mufast32 lhs, mufast32 rhs);
mint mCmpUFast32(mufast32 lhs, mufast32 rhs);

// -- Fast64:
mint mCmpFast64PR(const mfast64 *lhs, const mfast64 *rhs);
mint mCmpFast64P(const mfast64 *lhs, const mfast64 *rhs);
mint mCmpFast64R(mfast64 lhs, mfast64 rhs);
mint mCmpFast64(mfast64 lhs, mfast64 rhs);

// -- UFast64:
mint mCmpUFast64PR(const mufast64 *lhs, const mufast64 *rhs);
mint mCmpUFast64P(const mufast64 *lhs, const mufast64 *rhs);
mint mCmpUFast64R(mufast64 lhs, mufast64 rhs);
mint mCmpUFast64(mufast64 lhs, mufast64 rhs);

// - Least:

// -- Least8:
mint mCmpLeast8PR(const mleast8 *lhs, const mleast8 *rhs);
mint mCmpLeast8P(const mleast8 *lhs, const mleast8 *rhs);
mint mCmpLeast8R(mleast8 lhs, mleast8 rhs);
mint mCmpLeast8(mleast8 lhs, mleast8 rhs);

// -- ULeast8:
mint mCmpULeast8PR(const muleast8 *lhs, const muleast8 *rhs);
mint mCmpULeast8P(const muleast8 *lhs, const muleast8 *rhs);
mint mCmpULeast8R(muleast8 lhs, muleast8 rhs);
mint mCmpULeast8(muleast8 lhs, muleast8 rhs);

// -- Least16:
mint mCmpLeast16PR(const mleast16 *lhs, const mleast16 *rhs);
mint mCmpLeast16P(const mleast16 *lhs, const mleast16 *rhs);
mint mCmpLeast16R(mleast16 lhs, mleast16 rhs);
mint mCmpLeast16(mleast16 lhs, mleast16 rhs);

// -- ULeast16:
mint mCmpULeast16PR(const muleast16 *lhs, const muleast16 *rhs);
mint mCmpULeast16P(const muleast16 *lhs, const muleast16 *rhs);
mint mCmpULeast16R(muleast16 lhs, muleast16 rhs);
mint mCmpULeast16(muleast16 lhs, muleast16 rhs);

// -- Least32:
mint mCmpLeast32PR(const mleast32 *lhs, const mleast32 *rhs);
mint mCmpLeast32P(const mleast32 *lhs, const mleast32 *rhs);
mint mCmpLeast32R(mleast32 lhs, mleast32 rhs);
mint mCmpLeast32(mleast32 lhs, mleast32 rhs);

// -- ULeast32:
mint mCmpULeast32PR(const muleast32 *lhs, const muleast32 *rhs);
mint mCmpULeast32P(const muleast32 *lhs, const muleast32 *rhs);
mint mCmpULeast32R(muleast32 lhs, muleast32 rhs);
mint mCmpULeast32(muleast32 lhs, muleast32 rhs);

// -- Least64:
mint mCmpLeast64PR(const mleast64 *lhs, const mleast64 *rhs);
mint mCmpLeast64P(const mleast64 *lhs, const mleast64 *rhs);
mint mCmpLeast64R(mleast64 lhs, mleast64 rhs);
mint mCmpLeast64(mleast64 lhs, mleast64 rhs);

// -- ULeast64:
mint mCmpULeast64PR(const muleast64 *lhs, const muleast64 *rhs);
mint mCmpULeast64P(const muleast64 *lhs, const muleast64 *rhs);
mint mCmpULeast64R(muleast64 lhs, muleast64 rhs);
mint mCmpULeast64(muleast64 lhs, muleast64 rhs);

// - Max:

// -- Max:
mint mCmpMaxPR(const mmax *lhs, const mmax *rhs);
mint mCmpMaxP(const mmax *lhs, const mmax *rhs);
mint mCmpMaxR(mmax lhs, mmax rhs);
mint mCmpMax(mmax lhs, mmax rhs);

// -- UMax:
mint mCmpUMaxPR(const mumax *lhs, const mumax *rhs);
mint mCmpUMaxP(const mumax *lhs, const mumax *rhs);
mint mCmpUMaxR(mumax lhs, mumax rhs);
mint mCmpUMax(mumax lhs, mumax rhs);

// - Size:

// -- SSize:
mint mCmpSSizePR(const mssize *lhs, const mssize *rhs);
mint mCmpSSizeP(const mssize *lhs, const mssize *rhs);
mint mCmpSSizeR(mssize lhs, mssize rhs);
mint mCmpSSize(mssize lhs, mssize rhs);

// -- Size:
mint mCmpSizePR(const msize *lhs, const msize *rhs);
mint mCmpSizeP(const msize *lhs, const msize *rhs);
mint mCmpSizeR(msize lhs, msize rhs);
mint mCmpSize(msize lhs, msize rhs);

// - Ptr:

// -- Ptr:
mint mCmpPtrPR(const mptr *lhs, const mptr *rhs);
mint mCmpPtrP(const mptr *lhs, const mptr *rhs);
mint mCmpPtrR(mptr lhs, mptr rhs);
mint mCmpPtr(mptr lhs, mptr rhs);

// -- UPtr:
mint mCmpUPtrPR(const muptr *lhs, const muptr *rhs);
mint mCmpUPtrP(const muptr *lhs, const muptr *rhs);
mint mCmpUPtrR(muptr lhs, muptr rhs);
mint mCmpUPtr(muptr lhs, muptr rhs);

#endif
