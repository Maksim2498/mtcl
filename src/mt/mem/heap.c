#include "heap.h"

#include <stdio.h>
#include <stdlib.h>

#include <mt/debug/assert.h>

static mvoid mNotEnoughtMemeory_();

mvoid *mAlloc(msize size) {
    mvoid *block = malloc(size);

    if (!block)
        mNotEnoughtMemeory_();

    return block;
}

mvoid *mCAlloc(msize n, msize size) {
    mvoid *block = calloc(n, size);

    if (!block)
        mNotEnoughtMemeory_();

    return block;
}

mvoid mRealloc(mvoid **block, msize newSize) {
    mAssertMsg(block, "<block> is null");

    mvoid *newBlock = realloc(*block, newSize);

    if (!newBlock)
        mNotEnoughtMemeory_();

    *block = newBlock;
}

mvoid mFree(mvoid *block) {
    free(block);
}

mvoid mNotEnoughtMemeory_() {
    fputs("Not enought memory\n", stderr);
    exit(EXIT_FAILURE);
}
