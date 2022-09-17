#include "registry.h"

#include <mt/debug/assert.h>
#include <mt/mem/heap.h>
#include <mt/prog/term.h>
#include <mt/cstr.h>

static MMType *mMTypes_        = M_NULL;
static msize   mMTypeCount_    = 0;
static msize   mMTypeMaxCount_ = 2;

static mvoid mPrepareMetaTypes_();
static mvoid mInitMetaTypes_();
static mvoid mDoubleMetaTypes_();

MMType *mRegMType(const mchar *name) {
    mAssertMsg(name, "<name> is null");

    mPrepareMetaTypes_();

    mMTypes_[mMTypeCount_] = (MMType) {
        .id   = mMTypeCount_,
        .name = name
    };

    return mMTypes_ + mMTypeCount_++;
}

mvoid mPrepareMetaTypes_() {
    if (!mMTypes_)
        mInitMetaTypes_();
    else if (mMTypeCount_ == mMTypeMaxCount_)
        mDoubleMetaTypes_();
}

mvoid mInitMetaTypes_() {
    mMTypes_ = mNewN(MMType, mMTypeMaxCount_);
    mAtExitArg(mFree, mMTypes_);
}

mvoid mDoubleMetaTypes_() {
    mMTypeMaxCount_ *= 2;
    mRenew(mMTypes_, mMTypeMaxCount_);
}

MMType *mGetMTypeByID(MMTypeID id) {
    const MMTypeID maxID = mGetMaxMTypeID();

    return MMTYPE_ID_INVALID == maxID ? M_NULL
                                      : mMTypes_ + id;
}

MMTypeID mGetMaxMTypeID() {
    return mMTypeCount_ ? mMTypeCount_ - 1 : MMTYPE_ID_INVALID;
}

MMType *mGetMTypeByName(const mchar *name) {
    mAssertMsg(name, "<name> is null");

    for (MMType *it = mMTypes_, *end = it + mMTypeCount_; it != end; ++it)
        if (!mCmpCStr(it->name, name))
            return it;
    
    return M_NULL;
}
