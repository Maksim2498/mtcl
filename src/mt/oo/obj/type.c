#include "type.h"

#include <mt/oo/type/meta/registry.h>

MMType *mGetObjMType() {
    MMType *type = M_NULL;

    if (!type)
        type = mRegMType("MObject");

    return type;
}
