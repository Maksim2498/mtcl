#include "sys.h"

#include <stdlib.h>

mint mSys(const mchar *cmd) {
    return system(cmd);
}
