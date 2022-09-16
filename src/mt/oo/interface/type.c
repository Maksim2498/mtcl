#include "type.h"

#include <mt/oo/type/meta/registry.h>

MMetaType *mGetInterfaceMetaType() {
    MMetaType *type = M_NULL;

    if (!type)
        type = mRegMetaType("MInterface");

    return type;
}
