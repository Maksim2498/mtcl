#include "sptr.h"

#include <mt/debug/assert.h>
#include <mt/debug/if.h>

#include "heap.h"
#include "manip.h"

MSPtr mNewDSPtr(const mvoid *src, msize size) {
    MSPtr ptr   = mNewSPtr(size);
    mvoid *data = mGetSPtrData(ptr);

    mCopyMem(data, src, size);

    return ptr;
}

MSPtr mNewCSPtr(msize size) {
    MSPtr ptr   = mNewSPtr(size);
    mvoid *data = mGetSPtrData(ptr);

    mZeroMem(data, size);

    return ptr;
}

MSPtr mNewSPtr(msize size) {
    struct MSPtrCounter_ *counter = mNew(struct MSPtrCounter_);
    
    *counter = (struct MSPtrCounter_) {
        .refCount     = 1,
        .weakRefCount = 0,
        .data         = mAlloc(size)
    };

    return (MSPtr) {
        .counter = counter,
        .weak    = false
    };
}

MSPtr mNewSPtrRef(MSPtr ptr) {
    mAssertMsg(mIsSPtrValid(ptr), "<ptr> is invalid");
    ++ptr.counter->refCount; 
    ptr.weak = false;
    return ptr;
}

MSPtr mNewSPtrWeakRef(MSPtr ptr) {
    mAssertMsg(mIsSPtrValid(ptr), "<ptr> is invalid");
    ++ptr.counter->weakRefCount; 
    ptr.weak = true;
    return ptr;
}

mvoid mFreeSPtr(MSPtr ptr) {
    mAssertMsg(mIsSPtrValid(ptr), "<ptr> is invalid");

    if (ptr.weak) {
        --ptr.counter->weakRefCount;
        mIfDebug(ptr.counter = M_NULL); 
        return;
    }

    if (--ptr.counter->refCount) 
        return;

    mFree(ptr.counter->data); 
    ptr.counter->data = M_NULL;
    
    if (ptr.counter->weakRefCount)
        return;

    mFree(ptr.counter);
    mIfDebug(ptr.counter = M_NULL); 
}

const mvoid *mGetSPtrDataC(const MSPtr ptr) {
    return mGetSPtrData((MSPtr) ptr);
}

mvoid *mGetSPtrData(MSPtr ptr) {
    mAssertMsg(mIsSPtrValid(ptr), "<ptr> is invalid");
    return ptr.counter->data;
}

msize mGetSPtrRefCount(const MSPtr ptr) {
    mAssertMsg(mIsSPtrValid(ptr), "<ptr> is invalid");
    return ptr.counter->refCount;
}

msize mGetSPtrWeakRefCount(const MSPtr ptr) {
    mAssertMsg(mIsSPtrValid(ptr), "<ptr> is invalid");
    return ptr.counter->weakRefCount;
}

mbool mIsSPtrStrong(const MSPtr ptr) {
    return !mIsSPtrWeak(ptr);
}

mbool mIsSPtrWeak(const MSPtr ptr) {
    mAssertMsg(mIsSPtrValid(ptr), "<ptr> is invalid");
    return ptr.weak;
}

mbool mIsSPtrValid(const MSPtr ptr) {
    // Has counter
    if (!ptr.counter)
        return false;

    // Ref count and weak ref count cannot be both zero 
    if (!ptr.counter->refCount && !ptr.counter->weakRefCount)
        return false;

    // Ref count and data cannot be null at the same time
    if ((mbool) ptr.counter->refCount != (mbool) ptr.counter->data)
        return false;

    // When ref count is zero and weak ref count isn't zero data cannot be null
    if (!ptr.counter->refCount && ptr.counter->weakRefCount && !ptr.counter->data)
        return false;

    // Cannot be weak when weak ref count is zero
    if (ptr.weak && !ptr.counter->weakRefCount)
        return false;

    // Cannot be strong when ref count is zero
    if (!ptr.weak && !ptr.counter->refCount)
        return false;

    return true;
}
