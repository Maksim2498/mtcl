#ifndef MT_OO_TYPE_TYPED_H
#define MT_OO_TYPE_TYPED_H

#include <mt/prim/def.h>

#include "type.h"

typedef mvoid MTyped;

// Type:

const MType *mGetTypeC(const MTyped *typed);
MType *mGetType(MTyped *typed);

// Valid:

mbool mIsTypeValid(const MTyped *typed);

#endif
