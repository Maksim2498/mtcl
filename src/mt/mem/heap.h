#ifndef MT_MEM_HEAP_H
#define MT_MEM_HEAP_H

#include <mt/prim/def.h>

#define mNew(typeOrVal)      mAlloc(sizeof(typeOrVal))
#define mNewN(typeOrVal, n)  mAlloc((n) * sizeof(typeOrVal))
#define mNewC(typeOrVal)     mCAlloc(sizeof(typeOrVal))
#define mNewCN(typeOrVal, n) mCAlloc((n) * sizeof(typeOrVal))
#define mRenew(block, n)     mRealloc((mvoid **) &(block), (n) * sizeof(*(block)))

mvoid *mAlloc(msize size);
mvoid *mCAlloc(msize n, msize size);
mvoid mRealloc(mvoid **block, msize newSize);
mvoid mFree(mvoid *block);

#endif
