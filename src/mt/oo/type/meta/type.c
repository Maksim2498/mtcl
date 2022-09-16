#include "type.h"

#include <mt/debug/assert.h>

MMetaTypeID mGetMetaTypeID(const MMetaType *type) {
    mAssertMsg(mIsMetaTypeValid(type), "<type> is invalid");
    return type->id;
}

const mchar *mGetMetaTypeName(const MMetaType *type) {
    mAssertMsg(mIsMetaTypeValid(type), "<type> is invalid");
    return type->name;
}

mvoid mSetMetaTypeName(MMetaType *type, const mchar *name) {
    mAssertMsg(mIsMetaTypeValid(type), "<type> is invalid");
    mAssertMsg(name,                   "<name> is null");
    type->name = name;
}

mbool mIsMetaTypeValid(const MMetaType *type) {
    return type
        && type->name;
}
