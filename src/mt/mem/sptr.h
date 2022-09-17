#ifndef MT_MEM_SPTR_H
#define MT_MEM_SPTR_H

#include <mt/prim/def.h>
#include <mt/attr.h>

struct MSPtrCounter_ {
    msize  refCount;
    msize  weakRefCount;
    mvoid *data;
};

typedef struct {
    struct MSPtrCounter_ *counter;
    mbool                 weak;
} MSPtr;

// New:

MSPtr mNewDSPtr(const mvoid *src, msize size);
MSPtr mNewCSPtr(msize size);
MSPtr mNewSPtr(msize size);
MSPtr mNewSPtrRef(MSPtr ptr);
MSPtr mNewSPtrWeakRef(MSPtr ptr);

// Free:

mvoid mFreeSPtr(MSPtr ptr);

// Data:

M_NULLABLE const mvoid *mGetSPtrDataC(const MSPtr ptr);
M_NULLABLE mvoid *mGetSPtrData(MSPtr ptr);

// Ref Count:

msize mGetSPtrRefCount(const MSPtr ptr);
msize mGetSPtrWeakRefCount(const MSPtr ptr);

// Misc:

mbool mIsSPtrStrong(const MSPtr ptr);
mbool mIsSPtrWeak(const MSPtr ptr);

// Valid:

mbool mIsSPtrValid(const MSPtr ptr);

#endif
