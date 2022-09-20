#ifndef MT_OO_TYPE_META_REGISTRY_H
#define MT_OO_TYPE_META_REGISTRY_H

#include <mt/prim/def.h>
#include <mt/attr.h>

#include "type.h"

// Reg:

MMType *mRegMType(const mchar *name);

// Max ID:

MMTypeID mGetMaxMTypeID();

// Find:

M_NULLABLE MMType *mGetMTypeByID(MMTypeID id);
M_NULLABLE MMType *mGetMTypeByName(const mchar *name);

#endif
