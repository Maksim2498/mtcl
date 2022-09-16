#include "term.h"

#include <stdlib.h>

#include <mt/mem/heap.h>

struct MAtExitHandler {
    MAtExitArg  atExit;
    mvoid      *arg;
};

static struct MAtExitHandler *mHandlers_        = M_NULL;
static msize                  mHandlerCount_    = 0;
static msize                  mHandlerMaxCount_ = 16;

static mvoid mPrepareHandlers_();
static mvoid mInitHandlers_();
static mvoid mAtExitProxy_();
static mvoid mDoubleHandlers_();
static mvoid mPushHandler_(const struct MAtExitHandler handler);

mvoid mAtExit(MAtExitArg atExit) {
    mAtExitArg((MAtExitArg) atExit, M_NULL);
}

mvoid mAtExitArgC(MAtExitArgC atExit, const mvoid *arg) {
    mAtExitArg((MAtExitArg) atExit, (mvoid *) arg);
}

mvoid mAtExitArg(MAtExitArg atExit, mvoid *arg) {
    mPrepareHandlers_();

    const struct MAtExitHandler handler = {
        .atExit = atExit,
        .arg    = arg
    };

    mPushHandler_(handler);
}

mvoid mPrepareHandlers_() {
    if (!mHandlers_)
        mInitHandlers_();
    else if (mHandlerCount_ == mHandlerMaxCount_)
        mDoubleHandlers_();
}

mvoid mInitHandlers_() {
    mHandlers_ = mNewN(struct MAtExitHandler, mHandlerMaxCount_);
    atexit(mAtExitProxy_);
}

mvoid mAtExitProxy_() {
    const struct MAtExitHandler *rbegin = mHandlers_ + mHandlerCount_ - 1;
    const struct MAtExitHandler *rend   = mHandlers_ - 1;

    for (const struct MAtExitHandler *it = rbegin; it != rend; --it) 
        it->atExit(it->arg); 

    mFree(mHandlers_);
}

mvoid mDoubleHandlers_() {
    mHandlerMaxCount_ *= 2; 
    mRenew(mHandlers_, mHandlerMaxCount_);
}

mvoid mPushHandler_(const struct MAtExitHandler handler) {
    mHandlers_[mHandlerCount_++] = handler;
}

mvoid mExit(mint code) {
    exit(code);
}

mvoid mAbort() {
    abort();
}
