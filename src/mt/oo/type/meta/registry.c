#include "registry.h"

#include <mt/debug/assert.h>
#include <mt/mem/heap.h>
#include <mt/prog/term.h>
#include <mt/cstr.h>

static MMetaType *mMetaTypes_        = M_NULL;
static msize      mMetaTypeCount_    = 0;
static msize      mMetaTypeMaxCount_ = 2;

static mvoid mPrepareMetaTypes_();
static mvoid mInitMetaTypes_();
static mvoid mDoubleMetaTypes_();

MMetaType *mRegMetaType(const mchar *name) {
    mAssertMsg(name, "<name> is null");

    mPrepareMetaTypes_();

    mMetaTypes_[mMetaTypeCount_] = (MMetaType) {
        .id   = mMetaTypeCount_,
        .name = name
    };

    return mMetaTypes_ + mMetaTypeCount_++;
}

mvoid mPrepareMetaTypes_() {
    if (!mMetaTypes_)
        mInitMetaTypes_();
    else if (mMetaTypeCount_ == mMetaTypeMaxCount_)
        mDoubleMetaTypes_();
}

mvoid mInitMetaTypes_() {
    mMetaTypes_ = mNewN(MMetaType, mMetaTypeMaxCount_);
    mAtExitArg(mFree, mMetaTypes_);
}

mvoid mDoubleMetaTypes_() {
    mMetaTypeMaxCount_ *= 2;
    mRenew(mMetaTypes_, mMetaTypeMaxCount_);
}

MMetaType *mGetMetaTypeByID(MMetaTypeID id) {
    const MMetaTypeID maxID = mGetMaxMetaTypeID();

    return MMETA_TYPE_ID_INVALID == maxID ? M_NULL
                                          : mMetaTypes_ + id;
}

MMetaTypeID mGetMaxMetaTypeID() {
    return mMetaTypeCount_ ? mMetaTypeCount_ - 1 : MMETA_TYPE_ID_INVALID;
}

MMetaType *mGetMetaTypeByName(const mchar *name) {
    mAssertMsg(name, "<name> is null");

    for (MMetaType *it = mMetaTypes_, *end = it + mMetaTypeCount_; it != end; ++it)
        if (!mCmpCStr(it->name, name))
            return it;
    
    return M_NULL;
}
