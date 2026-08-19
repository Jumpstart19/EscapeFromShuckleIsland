#include "global.h"
#include "play_time.h"
#include "fake_rtc.h"
#include "event_data.h"
#include "field_player_avatar.h"
#include "string_util.h"

enum
{
    STOPPED,
    RUNNING,
    MAXED_OUT
};

static u8 sPlayTimeCounterState;

void PlayTimeCounter_Reset(void)
{
    sPlayTimeCounterState = STOPPED;

    gSaveBlock2Ptr->playTimeHours = 0;
    gSaveBlock2Ptr->playTimeMinutes = 0;
    gSaveBlock2Ptr->playTimeSeconds = 0;
    gSaveBlock2Ptr->playTimeVBlanks = 0;
}

void PlayTimeCounter_Start(void)
{
    sPlayTimeCounterState = RUNNING;

    if (gSaveBlock2Ptr->playTimeHours > 999)
        PlayTimeCounter_SetToMax();
}

void PlayTimeCounter_Stop(void)
{
    sPlayTimeCounterState = STOPPED;
}

void PlayTimeCounter_Update(void)
{
    if (sPlayTimeCounterState != RUNNING)
        return;

    gSaveBlock2Ptr->playTimeVBlanks++;
    UpdateSpinData();

    if (gSaveBlock2Ptr->playTimeVBlanks < 60)
        return;

    gSaveBlock2Ptr->playTimeVBlanks = 0;
    gSaveBlock2Ptr->playTimeSeconds++;
    FakeRtc_TickTimeForward();

    if (gSaveBlock2Ptr->playTimeSeconds < 60)
        return;

    gSaveBlock2Ptr->playTimeSeconds = 0;
    gSaveBlock2Ptr->playTimeMinutes++;

    if (gSaveBlock2Ptr->playTimeMinutes < 60)
        return;

    gSaveBlock2Ptr->playTimeMinutes = 0;
    gSaveBlock2Ptr->playTimeHours++;

    if (gSaveBlock2Ptr->playTimeHours > 999)
        PlayTimeCounter_SetToMax();
}

void PlayTimeCounter_SetToMax(void)
{
    sPlayTimeCounterState = MAXED_OUT;

    gSaveBlock2Ptr->playTimeHours = 999;
    gSaveBlock2Ptr->playTimeMinutes = 59;
    gSaveBlock2Ptr->playTimeSeconds = 59;
    gSaveBlock2Ptr->playTimeVBlanks = 59;
}

void BufferPlaytime(void)
{
    u16 hours;
    u16 minutes;

    if (VarGet(VAR_FINISH_TIME_HOURS) == 0 && VarGet(VAR_FINISH_TIME_MINUTES) == 0)
    {
        // Get current playtime
        hours = gSaveBlock2Ptr->playTimeHours;
        minutes = gSaveBlock2Ptr->playTimeMinutes;

        if (hours > 99)
            hours = 99;
        if (minutes > 59)
            minutes = 59;

        VarSet(VAR_FINISH_TIME_HOURS, hours);
        VarSet(VAR_FINISH_TIME_MINUTES, minutes);
    }
    else
    {
        hours = VarGet(VAR_FINISH_TIME_HOURS);
        minutes = VarGet(VAR_FINISH_TIME_MINUTES);
    }

    ConvertIntToDecimalStringN(gStringVar1, hours, STR_CONV_MODE_LEADING_ZEROS, 2);
    ConvertIntToDecimalStringN(gStringVar2, minutes, STR_CONV_MODE_LEADING_ZEROS, 2);

}

void BufferAdjustedTime(void)
{
    u16 hours;
    u16 minutes;

    // Get playtime at finish
    hours = VarGet(VAR_FINISH_TIME_HOURS);
    minutes = VarGet(VAR_FINISH_TIME_MINUTES);

    // Adjust for hints and solutions used
    hours += VarGet(VAR_NUM_SOLUTIONS);
    minutes += (2 * VarGet(VAR_NUM_SMALL_HINTS)) + (10 * VarGet(VAR_NUM_MED_HINTS)) + (20 * VarGet(VAR_NUM_LARGE_HINTS));

    // Simplify
    hours += minutes/60;
    minutes = minutes % 60;

    // Subtract 3 hours if beat Jumpstart
    if (FlagGet(FLAG_BEAT_JUMPSTART))
    {
        if (hours < 3)
        {
            hours = 0;
            minutes = 0;
        }
        else
        {
            hours -= 3;
        }
    }

    if (hours > 99)
	    hours = 99;
    if (minutes > 59)
        minutes = 59;

    ConvertIntToDecimalStringN(gStringVar1, hours, STR_CONV_MODE_LEADING_ZEROS, 2);
    ConvertIntToDecimalStringN(gStringVar2, minutes, STR_CONV_MODE_LEADING_ZEROS, 2);

}

void BufferHints(void)
{
    u8 n1;
    u8 n2;
    u8 n3;

    if (VarGet(VAR_NUM_SMALL_HINTS) < 10)
        n1 = 1;
    else
        n1 = 2;

    if (VarGet(VAR_NUM_MED_HINTS) < 10)
        n2 = 1;
    else
        n2 = 2;

    if (VarGet(VAR_NUM_LARGE_HINTS) < 10)
        n3 = 1;
    else
        n3 = 2;

    ConvertIntToDecimalStringN(gStringVar1, VarGet(VAR_NUM_SMALL_HINTS), STR_CONV_MODE_RIGHT_ALIGN, n1);
    ConvertIntToDecimalStringN(gStringVar2, VarGet(VAR_NUM_MED_HINTS), STR_CONV_MODE_RIGHT_ALIGN, n2);
    ConvertIntToDecimalStringN(gStringVar3, VarGet(VAR_NUM_LARGE_HINTS), STR_CONV_MODE_RIGHT_ALIGN, n3);
}

void BufferSolutions(void)
{
    u8 n;

    if (VarGet(VAR_NUM_SOLUTIONS) < 10)
        n = 1;
    else
        n = 2;
    
    ConvertIntToDecimalStringN(gStringVar1, VarGet(VAR_NUM_SOLUTIONS), STR_CONV_MODE_RIGHT_ALIGN, n);
}
