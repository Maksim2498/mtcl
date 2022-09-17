#include "desc.h"

#include <mt/debug/assert.h>

struct MTypeDescD mTypeDescToD(const struct MTypeDesc *desc) {
    return (struct MTypeDescD) {
        .type     = desc->type,
        .name     = desc->name,
        .dataSize = 0,
        .data     = M_NULL,
        .deinit   = M_NULL
    };
}

mbool mIsTypeDescDValid(const struct MTypeDescD *desc) {
    return mIsTypeDescValid((const struct MTypeDesc *) desc)
        && (!desc->dataSize || desc->data);
}

mbool mIsTypeDescValid(const struct MTypeDesc *desc) {
    return desc
        && mIsMTypeValid(desc->type)
        && desc->name;
}
