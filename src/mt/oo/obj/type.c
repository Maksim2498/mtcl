#include "type.h"

#include <mt/oo/type/meta/registry.h>

MMetaType *mGetObjectMetaType() {
    MMetaType *type = M_NULL;

    if (!type)
        type = mRegMetaType("MObject");

    return type;
}
