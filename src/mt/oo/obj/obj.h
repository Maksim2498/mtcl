#ifndef MT_OO_OBJ_OBJ_H
#define MT_OO_OBJ_OBJ_H

#include <mt/mem/sptr.h>
#include <mt/prim/def.h>

#include "type.h"

typedef struct {
    MOType *type; 
    MSPtr   data;
} MObj;

#endif
