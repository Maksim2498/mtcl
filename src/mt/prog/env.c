#include "env.h"

#include <stdlib.h>

#include <mt/debug/assert.h>

const mchar *mGetEnv(const mchar *name) {
    mAssertMsg(name, "<name> is null");
    return getenv(name);
}
