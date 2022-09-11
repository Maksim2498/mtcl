#include "assert.h"

#ifndef M_NO_DEBUG
    #include <stdio.h>
    #include <stdlib.h>

    mvoid mAssert_(mbool res, const mchar *expr, const char *file, const char *func, msize line) {
        if (res)
            return;
    
        fprintf(stderr, "%s:%zu: %s: Assertion `%s` failed.", file, line, func, expr);
        abort();
    }

    mvoid mAssertMsg(mbool res, const mchar *msg) {
        if (res)
            return;

        fprintf(stderr, "Assertion failed: %s\n", msg);
        abort();
    }
#endif
