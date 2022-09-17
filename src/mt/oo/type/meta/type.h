#ifndef MT_OO_TYPE_META_TYPE_H
#define MT_OO_TYPE_META_TYPE_H

#include <mt/prim/def.h>
#include <mt/prim/limits.h>

#define MMTYPE_ID_INVALID M_SIZE_MAX

typedef msize MMTypeID;

typedef struct {
    MMTypeID  id;
    const mchar *name;
} MMType;

// ID:

MMTypeID mGetMTypeID(const MMType *type);

// Name:

const mchar *mGetMTypeName(const MMType *type);
mvoid mSetMTypeName(MMType *type, const mchar *name);

// Valid:

mbool mIsMTypeValid(const MMType *type);

#endif
