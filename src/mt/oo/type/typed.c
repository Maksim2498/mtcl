#include "typed.h"

#include <mt/debug/assert.h>

const MType *mGetTypeC(const MTyped *typed) {
    return mGetType((MTyped *) typed);
}

MType *mGetType(MTyped *typed) {
    mAssertMsg(mIsTypeValid(typed), "<typed> is invalid");
    return *(MType **) typed;
}

mbool mIsTypeValid(const MTyped *typed) {
    return typed
        && mIsTypeValid(*(MType **) typed);
}
