#include "reg.h"

#include <mt/oo/type/reg.h>

#include "meta.h"

MITypeID mGetMaxITypeID() {
    return mGetMaxTypeID(MIFACE_MTYPE);
}

MIType *mGetITypeByID(MITypeID id) {
    return mGetTypeByID(MIFACE_MTYPE, id);
}

MIType *mGetITypeByName(const mchar *name) {
    return mGetTypeByName(MIFACE_MTYPE, name);
}
