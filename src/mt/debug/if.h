#ifndef MT_DEBUG_IF_H
#define MT_DEBUG_IF_H

#ifdef M_NO_DEBUG
    #define mIfDebug(...) ((void) 0)
#else
    #define mIfDebug(...) __VA_ARGS__
#endif
    
#endif
