#ifndef MT_OO_OBJ_REG_H
#define MT_OO_OBJ_REG_H

#include <mt/oo/type/type.h>
#include <mt/prim/def.h>
#include <mt/attr.h>

#include "type.h"

// Max ID:

MOTypeID mGetMaxOTypeID();

// Find:

M_NULLABLE MOType *mGetOTypeByID(MOTypeID id);
M_NULLABLE MOType *mGetOTypeByName(const mchar *name);

#endif
