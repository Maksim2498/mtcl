#ifndef MT_OO_IFACE_REGISTRY_H
#define MT_OO_IFACE_REGISTRY_H

#include <mt/oo/type/type.h>
#include <mt/prim/def.h>
#include <mt/attr.h>

#include "type.h"

// Max ID:

MITypeID mGetMaxITypeID();

// Find:

M_NULLABLE MIType *mGetITypeByID(MITypeID id);
M_NULLABLE MIType *mGetITypeByName(const mchar *name);

#endif
