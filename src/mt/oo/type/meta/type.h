#ifndef MT_OO_TYPE_META_TYPE_H
#define MT_OO_TYPE_META_TYPE_H

#include <mt/prim/def.h>
#include <mt/prim/limits.h>

#define MMETA_TYPE_ID_INVALID M_SIZE_MAX

typedef msize MMetaTypeID;

typedef struct {
    MMetaTypeID  id;
    const mchar *name;
} MMetaType;

// ID:

MMetaTypeID mGetMetaTypeID(const MMetaType *type);

// Name:

const mchar *mGetMetaTypeName(const MMetaType *type);
mvoid mSetMetaTypeName(MMetaType *type, const mchar *name);

// Valid:

mbool mIsMetaTypeValid(const MMetaType *type);

#endif
