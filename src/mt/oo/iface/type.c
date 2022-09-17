#include "type.h"

#include <mt/oo/type/meta/reg.h>

MMType *mGetIfaceMType() {
    static MMType *type = M_NULL;

    if (!type)
        type = mRegMType("MIface");

    return type;
}
