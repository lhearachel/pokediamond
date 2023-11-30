#ifndef POKEDIAMOND_BLACKOUT_H
#define POKEDIAMOND_BLACKOUT_H

#include "global.h"
#include "field_system.h"
#include "message_format.h"
#include "msgdata.h"
#include "task.h"

typedef struct BlackoutScreenEnvironment {
    s32 state;
    FieldSystem *fieldSystem;
    BgConfig *bgConfig;
    Window window;
    MsgData *msgData;
    MessageFormat *msgFmt;
} BlackoutScreenEnvironment;


#endif //POKEDIAMOND_BLACKOUT_H
