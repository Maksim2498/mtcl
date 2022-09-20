#include "reg.h"

#include <mt/oo/type/reg.h>

#include "meta.h"

MOTypeID mGetMaxOTypeID() {
    return mGetMaxTypeID(MOBJ_MTYPE);
}

MOType *mGetOTypeByID(MOTypeID id) {
    return mGetTypeByID(MOBJ_MTYPE, id);
}

MOType *mGetOTypeByName(const mchar *name) {
    return mGetTypeByName(MOBJ_MTYPE, name);
}
