#ifndef MT_PRIM_CTYPE_H
#define MT_PRIM_CTYPE_H

#include "def.h"

mbool mIsCharAlnum(mchar c);
mbool mIsCharAlpha(mchar c);
mbool mIsCharLower(mchar c);
mbool mIsCharUpper(mchar c);
mbool mIsCharDigit(mchar c);
mbool mIsCharXDigit(mchar c);
mbool mIsCharControl(mchar c);
mbool mIsCharGraph(mchar c);
mbool mIsCharSpace(mchar c);
mbool mIsCharBlank(mchar c);
mbool mIsCharPrint(mchar c);
mbool mIsCharPunct(mchar c);

mchar mCharToLower(mchar c);
mchar mCharToUpper(mchar c);

#endif
