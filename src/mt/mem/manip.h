#ifndef MT_MEM_MANIP_H
#define MT_MEM_MANIP_H

#include <mt/prim/def.h>

const mvoid *mFindMemC(const mvoid *dst, msize n, muchar t);
mvoid *mFindMem(mvoid *dst, msize n, muchar t);
mvoid mZeroMem(mvoid *dst, msize n);
mvoid mSetMem(mvoid *dst, msize n, muchar c);
mvoid mCopyMem(mvoid *restrict dst, const mvoid *restrict src, msize n);
mvoid mMoveMem(mvoid *dst, mvoid *src, msize n);

#endif
