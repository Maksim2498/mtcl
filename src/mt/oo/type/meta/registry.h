#ifndef MT_OO_TYPE_META_REGISTRY_H
#define MT_OO_TYPE_META_REGISTRY_H

#include <mt/prim/def.h>
#include <mt/attr.h>

#include "type.h"

// Reg:

MMetaType *mRegMetaType(const mchar *name);

// Misc:

MMetaTypeID mGetMaxMetaTypeID();

// Find:

M_NULLABLE MMetaType *mGetMetaTypeByID(MMetaTypeID id);
M_NULLABLE MMetaType *mGetMetaTypeByName(const mchar *name);

#endif
