#include "type.h"

#include <mt/debug/assert.h>

MMTypeID mGetMTypeID(const MMType *type) {
    mAssertMsg(mIsMTypeValid(type), "<type> is invalid");
    return type->id;
}

const mchar *mGetMTypeName(const MMType *type) {
    mAssertMsg(mIsMTypeValid(type), "<type> is invalid");
    return type->name;
}

mvoid mSetMTypeName(MMType *type, const mchar *name) {
    mAssertMsg(mIsMTypeValid(type), "<type> is invalid");
    mAssertMsg(name,                "<name> is null");
    type->name = name;
}

mbool mIsMTypeValid(const MMType *type) {
    return type
        && type->name;
}
