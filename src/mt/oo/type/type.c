#include "type.h"

#include <mt/debug/assert.h>

MMetaType *mGetTypeTypeC(const MType *type) {
    return mGetTypeType((MType *) type);	
}

MMetaType *mGetTypeType(MType *type) {
    mAssertMsg(mIsTypeValid(type), "<type> is invalid");	
    return ((const struct MType_ *) type)->type;	
}

MTypeID mGetTypeID(const MType *type) {
    mAssertMsg(mIsTypeValid(type), "<type> is invalid");	
    return ((const struct MType_ *) type)->id;	
}

const mchar *mGetTypeName(const MType *type) {
    mAssertMsg(mIsTypeValid(type), "<type> is invalid");	
    return ((const struct MType_ *) type)->name;	
}

mvoid mSetTypeName(MType *type, const mchar *name) {
    mAssertMsg(mIsTypeValid(type), "<type> is invalid");	
    mAssertMsg(name,               "<name> is null");
    ((struct MType_ *) type)->name = name;	
}

msize mGetTypeDataSize(const MType *type) {
    return mGetTypeSize(type) - sizeof(MType);
}

msize mGetTypeSize(const MType *type) {
    mAssertMsg(mIsTypeValid(type), "<type> is invalid");	
    return ((const struct MType_ *) type)->size;	
}

const mvoid *mGetTypeDataC(const MType *type) {
    return mGetTypeData((MType *) type);	
}

mvoid *mGetTypeData(MType *type) {
    mAssertMsg(mIsTypeValid(type), "<type> is invalid");	
    return type + sizeof(MType);
}

mvoid mDeinitType(MType *type) {
    MDeinitType deinit = mGetTypeDeiniter(type);

    if (deinit)
        deinit(type);
}

MDeinitType mGetTypeDeiniter(const MType *type) {
    mAssertMsg(mIsTypeValid(type), "<type> is invalid");	
    return ((const struct MType_ *) type)->deinit;	
}

mbool mIsTypeValid(const MType *type) {
    const struct MType_ *type_ = type;

    return type_
        && type_->type
        && type_->name
        && type_->size >= sizeof(MType);
}
