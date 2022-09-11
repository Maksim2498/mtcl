#include "env.h"

#include <stdlib.h>

const mchar *mGetEnv(const mchar *name) {
    return getenv(name);
}
