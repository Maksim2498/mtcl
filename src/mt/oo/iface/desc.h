#ifndef MT_OO_IFACE_DESC_H
#define MT_OO_IFACE_DESC_H

#include <mt/prim/def.h>

#include "type.h"

struct MIfaceDesc {
    const mchar *name;
    const mvoid *vTable;
    msize        vTableSize;
};

struct MIfaceDescD {
    const mchar         *name;
    const mvoid         *vTable;
    msize                vTableSize;
    const MIType * const depends;
    msize                dependsCount;
};

#endif
