#ifndef MT_DEBUG_ASSERT_H
#define MT_DEBUG_ASSERT_H

#include <mt/prim/def.h>

#ifdef M_NO_DEBUG
    #define mAssert(ignore) ((mvoid) 0)
    #define mAssertMsg(ignore, ignore) ((mvoid) 0)
#else
    #define mAssert(expr) mAssert_(expr, #expr, __FILE__, __func__, __LINE__)
    mvoid mAssert_(mbool res, const mchar *expr, const char *file, const char *func, msize line);
    mvoid mAssertMsg(mbool res, const mchar *msg);
#endif

#endif
