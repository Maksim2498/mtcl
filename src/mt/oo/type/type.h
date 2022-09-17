#ifndef MT_OO_TYPE_TYPE_H
#define MT_OO_TYPE_TYPE_H

#include <mt/prim/def.h>
#include <mt/prim/limits.h>

#include "meta/type.h"

#define MTYPE_ID_INVALID M_SIZE_MAX

typedef msize MTypeID;
typedef mvoid MType;
typedef mvoid (*MDeinitType)(MType *);

struct MType_ {
    MMType   *type; 
    MTypeID      id;
    const mchar *name;
    msize        size;
    MDeinitType  deinit;
};

// Meta:

MMType *mGetTypeTypeC(const MType *type);
MMType *mGetTypeType(MType *type);

// ID:

MTypeID mGetTypeID(const MType *type);

// Name:

const mchar *mGetTypeName(const MType *type);
mvoid mSetTypeName(MType *type, const mchar *name);

// Data:

msize mGetTypeDataSize(const MType *type);
msize mGetTypeSize(const MType *type);
const mvoid *mGetTypeDataC(const MType *type);
mvoid *mGetTypeData(MType *type);

// Deinit:

mvoid mDeinitType(MType *type);
MDeinitType mGetTypeDeiniter(const MType *type);

// Valid:

mbool mIsTypeValid(const MType *type);

#endif
