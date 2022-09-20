#ifndef MT_OO_TYPE_REGISTRY_H
#define MT_OO_TYPE_REGISTRY_H

#include <mt/prim/def.h>
#include <mt/attr.h>

#include "meta/type.h"
#include "desc.h"
#include "type.h"

// Reg:

MType *mRegType(const struct MTypeDesc *desc);
MType *mRegTypeD(const struct MTypeDescD *desc);

// Max ID:

MTypeID mGetMaxTypeID(const MMType *metaType);

// Find:

M_NULLABLE MType *mGetTypeByID(const MMType *mType, MTypeID id);
M_NULLABLE MType *mGetTypeByName(const MMType *mType, const mchar *name);

#endif
