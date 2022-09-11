#include "ctype.h"

#include <ctype.h>

mbool mIsCharAlnum(mchar c) {
    return isalnum(c);
}

mbool mIsCharAlpha(mchar c) {
    return isalpha(c);
}

mbool mIsCharLower(mchar c) {
    return islower(c);
}

mbool mIsCharUpper(mchar c) {
    return isupper(c);
}

mbool mIsCharDigit(mchar c) {
    return isdigit(c);
}

mbool mIsCharXDigit(mchar c) {
    return isxdigit(c);
}

mbool mIsCharControl(mchar c) {
    return iscntrl(c);
}

mbool mIsCharGraph(mchar c) {
    return isgraph(c);
}

mbool mIsCharSpace(mchar c) {
    return isspace(c);
}

mbool mIsCharBlank(mchar c) {
    return isblank(c);
}

mbool mIsCharPrint(mchar c) {
    return isprint(c);
}

mbool mIsCharPunct(mchar c) {
    return ispunct(c);
}

mchar mCharToLower(mchar c) {
    return tolower(c);
}

mchar mCharToUpper(mchar c) {
    return toupper(c);
}
