#ifndef MT_OO_TYPE_DESC_H
#define MT_OO_TYPE_DESC_H

#include <mt/prim/def.h>

#include "meta/type.h"
#include "type.h"

struct MTypeDesc {
    MMType      *type;
    const mchar *name;
};

struct MTypeDescD {
    MMType      *type;
    const mchar *name;
    msize        dataSize;
    const mvoid *data;
    MDeinitType  deinit;
};

// Convertion:

struct MTypeDescD mTypeDescToD(const struct MTypeDesc *desc);

// Valid:

mbool mIsTypeDescDValid(const struct MTypeDescD *desc);
mbool mIsTypeDescValid(const struct MTypeDesc *desc);

#endif
