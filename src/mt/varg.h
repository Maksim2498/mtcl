#ifndef MT_VARG_H
#define MT_VARG_H

#include <stdarg.h>

typedef va_list MVArg;

#define mInitVArg(varg, arg)  va_start(varg, arg)
#define mNextVArg(varg, type) va_arg(varg, type)
#define mCopyVArg(dst, src)   va_copy(dst, src)
#define mDeinitVArg(varg)     va_end(varg)

#endif
