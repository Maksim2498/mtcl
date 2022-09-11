#include "term.h"

#include <stdlib.h>

#include <mt/mem/heap.h>

struct MAtExitHandler {
    MAtExitArg atExit;
    mvoid      *arg;
};

static struct MAtExitHandler *mHandlers_       = M_NULL;
static msize                 mHandlerCount_    = 0;
static msize                 mHandlerMaxCount_ = 16;

static mvoid mIncHandlers_();
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
    mIncHandlers_();

    const struct MAtExitHandler handler = {
        .atExit = atExit,
        .arg    = arg
    };

    mPushHandler_(handler);
}

mvoid mIncHandlers_() {
    if (!mHandlers_) {
        mInitHandlers_();
        return;
    }

    if (mHandlerCount_ == mHandlerMaxCount_)
        mDoubleHandlers_();
}

mvoid mInitHandlers_() {
    mHandlers_ = mNewN(struct MAtExitHandler, mHandlerMaxCount_);
    atexit(mAtExitProxy_);
}

mvoid mAtExitProxy_() {
    for (const struct MAtExitHandler *it  = mHandlers_, *end = it + mHandlerCount_; it != end; ++it) 
        it->atExit(it->arg); 

    mFree(mHandlers_);
}

mvoid mDoubleHandlers_() {
    mHandlerMaxCount_ *= 2; 
    mRenew(mHandlers_, struct MAtExitHandler, mHandlerMaxCount_);
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
