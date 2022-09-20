#ifndef MT_OO_IFACE_IFACE_H
#define MT_OO_IFACE_IFACE_H

#include <mt/prim/def.h>

#include "type.h"

typedef struct {
    MIType *type;
    mvoid  *vTable;
} MIface;

#endif
