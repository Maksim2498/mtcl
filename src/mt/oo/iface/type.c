#include "type.h"

#include <mt/oo/type/meta/registry.h>

MMType *mGetIfaceMType() {
    MMType *type = M_NULL;

    if (!type)
        type = mRegMType("MIface");

    return type;
}
