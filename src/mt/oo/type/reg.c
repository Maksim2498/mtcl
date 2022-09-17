#include "reg.h"

#include <mt/debug/assert.h>
#include <mt/mem/heap.h>
#include <mt/prog/term.h>
#include <mt/cstr.h>

#ifndef M_DEFAULT_TYPE_SUB_REG_MAX_COUNT
#define M_DEFAULT_TYPE_SUB_REG_MAX_COUNT 16
#endif

struct MSubReg_ {
    MType **types;
    msize   count;
    msize   maxCount;
};

static struct MSubReg_ *mSubRegs_      = M_NULL;
static msize            mSubRegsCount_ = 0;

static struct MSubReg_ *mGetOrCreateSubReg_(const MMType *metaType);
static mvoid mFreeSubRegs_();
static mvoid mFreeSubReg_(struct MSubReg_ *subReg);
static MType *mCreateType_(struct MSubReg_ *subReg, const struct MTypeDescD *desc);
static mvoid mPushType_(struct MSubReg_ *subReg, MType *type);
static struct MSubReg_ *mGetSubReg_(const MMType *metaType);

MType *mRegType(const struct MTypeDesc *desc) { 
    const struct MTypeDescD descD = mTypeDescToD(desc);
    return mRegTypeD(&descD);
}

MType *mRegTypeD(const struct MTypeDescD *desc) {
    mAssertMsg(mIsTypeDescDValid(desc), "<desc> is invalid");	

    struct MSubReg_ *subReg = mGetOrCreateSubReg_(desc->type);
    MType           *type   = mCreateType_(subReg, desc); 

    mPushType_(subReg, type);

    return type;
}

struct MSubReg_ *mGetOrCreateSubReg_(const MMType *mType) {
    const MMTypeID metaTypeID = mGetMaxTypeID(mType);

    if (!mSubRegs_)
        mAtExit(mFreeSubRegs_);        

    if (metaTypeID >= mSubRegsCount_) {
        msize newCount = metaTypeID + 1;

        mRenew(mSubRegs_, newCount);

        for (msize i = mSubRegsCount_; i < newCount; ++i)
            mSubRegs_[i] = (struct MSubReg_) {
                .types    = mNewN(MType *, M_DEFAULT_TYPE_SUB_REG_MAX_COUNT),
                .count    = 0,
                .maxCount = M_DEFAULT_TYPE_SUB_REG_MAX_COUNT
            };

        mSubRegsCount_ = newCount;
    }

    return mSubRegs_ + metaTypeID;
}

mvoid mFreeSubRegs_() {
    for (struct MSubReg_ *it = mSubRegs_, *end = it + mSubRegsCount_; it != end; ++it)
        mFreeSubReg_(it);

    mFree(mSubRegs_);
}

mvoid mFreeSubReg_(struct MSubReg_ *subReg) {
    for (MType **it = subReg->types, **end = it + subReg->count; it != end; ++it) {
        MType *type = *it; 
        mDeinitType(type);
        mFree(type);
    }
}

static MType *mCreateType_(struct MSubReg_ *subReg, const struct MTypeDescD *desc) {
    msize          typeSize = desc->dataSize + sizeof(struct MType_);
    struct MType_ *type     = mAlloc(typeSize);

    *type = (struct MType_) {
        .type   = desc->type,
        .id     = subReg->count,
        .name   = desc->name,
        .size   = typeSize,
        .deinit = desc->deinit
    };

    return type;
}

mvoid mPushType_(struct MSubReg_ *subReg, MType *type) {
    if (subReg->count == subReg->maxCount) {
        subReg->maxCount *= 2;
        mRenew(subReg->types, subReg->maxCount);
    }

    subReg->types[subReg->count++] = type;
}

MTypeID mGetMaxTypeID(const MMType *metaType) {
    mAssertMsg(mIsMTypeValid(metaType), "<metaType> is invalid");
    
    struct MSubReg_ *subReg = mGetSubReg_(metaType);

    if (!subReg)
        return MTYPE_ID_INVALID;

    return subReg->count ? subReg->count - 1 
                         : MTYPE_ID_INVALID;
}

MType *mGetTypeByID(const MMType *mType, MTypeID id) {
    mAssertMsg(mIsMTypeValid(mType), "<metaType> is invalid");
	
    struct MSubReg_ *subReg = mGetSubReg_(mType);

    if (!subReg)
        return M_NULL;

    return subReg->count > id ? subReg->types[id]
                              : M_NULL;
}

MType *mGetTypeByName(const MMType *mType, const mchar *name) {
    mAssertMsg(mIsMTypeValid(mType), "<mType> is invalid");
    mAssertMsg(name,                 "<name> is null");

    struct MSubReg_ *subReg = mGetSubReg_(mType);

    if (!subReg)
        return M_NULL;

    for (MType **it = subReg->types, **end = it + subReg->count; it != end; ++it) {
        MType       *type     = *it;
        const mchar *typeName = mGetTypeName(type);

        if (!mCmpCStr(typeName, name))
            return type;
    }

    return M_NULL;
}

struct MSubReg_ *mGetSubReg_(const MMType *mType) {
    const MMTypeID metaTypeID = mGetMTypeID(mType);

    if (metaTypeID >= mSubRegsCount_)
        return M_NULL;

    return mSubRegs_ + metaTypeID;
}
