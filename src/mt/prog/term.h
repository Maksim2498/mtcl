#ifndef MT_PROG_TERM_H
#define MT_PROG_TERM_H

#include <mt/prim/def.h>
#include <mt/meta.h>

#define M_EXIT_SUCCESS 0
#define M_EXIT_FAILURE 1

typedef mvoid (*MAtExit)();
typedef mvoid (*MAtExitArgC)(const mvoid *);
typedef mvoid (*MAtExitArg)(mvoid *);

mvoid mAtExit(MAtExitArg atExit);
mvoid mAtExitArgC(MAtExitArgC atExit, const mvoid *arg);
mvoid mAtExitArg(MAtExitArg atExit, mvoid *arg);
M_NO_RETURN mvoid mExit(mint code);
M_NO_RETURN mvoid mAbort();

#endif
