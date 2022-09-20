#include "meta.h"

#include <mt/oo/type/meta/reg.h>

MMType *mGetObjMType() {
    static MMType *type = M_NULL;

    if (!type)
        type = mRegMType("MObject");

    return type;
}
