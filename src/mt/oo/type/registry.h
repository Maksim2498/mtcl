#ifndef MT_OO_TYPE_REGISTRY_H
#define MT_OO_TYPE_REGISTRY_H

#include <mt/prim/def.h>
#include <mt/meta.h>

#include "meta/type.h"
#include "desc.h"
#include "type.h"

// Reg:

MType *mRegType(const struct MTypeDesc *desc);
MType *mRegTypeD(const struct MTypeDescD *desc);

// Misc:

MTypeID mGetMaxTypeID(const MMetaType *metaType);

// Find:

M_NULLABLE MType *mGetTypeByID(const MMetaType *metaType, MTypeID id);
M_NULLABLE MType *mGetTypeByName(const MMetaType *metaType, const mchar *name);

#endif
