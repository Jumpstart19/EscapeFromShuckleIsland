#include "global.h"
#include "palette.h"
#include "field_control_avatar.h"
#include "event_scripts.h"
#include "field_screen_effect.h"
#include "field_player_avatar.h"
#include "fldeff_misc.h"
#include "item.h"
#include "field_control_avatar.h"
#include "map_name_popup.h"
#include "constants/items.h"
#include "fldeff.h"
#include "overworld.h"
#include "region_map.h"
#include "item_use.h"
#include "item.h"
#include "constants/items.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "party_menu.h"
#include "constants/vars.h"
#include "constants/flags.h"
#include "event_data.h"
#include "qol_field_moves.h"
#include "constants/songs.h"
#include "sound.h"
#include "script.h"
#include "event_object_movement.h"
#include "constants/event_objects.h"
#include "field_weather.h"
#include "constants/field_effects.h"
#include "metatile_behavior.h"
#include "fieldmap.h"
#include "item_menu.h"
#include "constants/map_types.h"
#include "constants/party_menu.h"

//static u8 CreateUseToolTask(void);
//static void Task_UseTool_Init(u8);
static void LockPlayerAndLoadMon(void);

#define tState      data[0]
#define tFallOffset data[1]
#define tTotalFall  data[2]

//static u8 CreateUseToolTask(void)
//{
//    GetXYCoordsOneStepInFrontOfPlayer(&gPlayerFacingPosition.x, &gPlayerFacingPosition.y);
//    return CreateTask(Task_UseTool_Init, 8);
//}

/*
static void Task_UseTool_Init(u8 taskId)
{
    LockPlayerFieldControls();
    gPlayerAvatar.preventStep = TRUE;

        gFieldEffectArguments[1] = GetPlayerFacingDirection();
        if (gFieldEffectArguments[1] == DIR_SOUTH)
            gFieldEffectArguments[2] = 0;
        if (gFieldEffectArguments[1] == DIR_NORTH)
            gFieldEffectArguments[2] = 1;
        if (gFieldEffectArguments[1] == DIR_WEST)
            gFieldEffectArguments[2] = 2;
        if (gFieldEffectArguments[1] == DIR_EAST)
            gFieldEffectArguments[2] = 3;
        ObjectEventSetGraphicsId(&gObjectEvents[gPlayerAvatar.objectEventId], GetPlayerAvatarGraphicsIdByCurrentState());
        StartSpriteAnim(&gSprites[gPlayerAvatar.spriteId], gFieldEffectArguments[2]);

    gTasks[taskId].func = Task_DoFieldMove_RunFunc;
}
*/

static void LockPlayerAndLoadMon(void)
{
    LockPlayerFieldControls();
    gFieldEffectArguments[0] = gSpecialVar_Result;
}

// Surf
u32 CanUseSurf(s16 x, s16 y, u8 collision)
{
    bool32 bagHasItem, collisionHasMismatch;

    if (!IsPlayerFacingSurfableFishableWater())
        return FIELD_MOVE_FAIL;

    collisionHasMismatch = (collision == COLLISION_ELEVATION_MISMATCH);

    if (!collisionHasMismatch)
        return FIELD_MOVE_FAIL;

    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
        return FIELD_MOVE_FAIL;

    if (GetObjectEventIdByPosition(x, y, 1) != OBJECT_EVENTS_COUNT)
        return FIELD_MOVE_FAIL;

    //monHasMove = PartyHasMonLearnsKnowsFieldMove(ITEM_HM03);
    bagHasItem = CheckBagHasItem(ITEM_SURF_TOOL,1);
    //playerHasBadge = FlagGet(FLAG_BADGE05_GET);

    if (!bagHasItem)
        return FIELD_MOVE_FAIL;

    return bagHasItem ? FIELD_MOVE_TOOL : FIELD_MOVE_POKEMON;
}

u32 CanUseSurfFromInteractedWater()
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;

    return CanUseSurf(x,y,COLLISION_ELEVATION_MISMATCH);
}

u8 FldEff_UseSurfTool(void)
{
    CreateTask(Task_SurfToolFieldEffect, 0);
    Overworld_ClearSavedMusic();
    Overworld_ChangeMusicTo(MUS_SURF);
    return FALSE;
}

static void SurfToolFieldEffect_CheckHeldMovementStatus(struct Task *task)
{
    struct ObjectEvent *objectEvent;
    objectEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    if (ObjectEventCheckHeldMovementStatus(objectEvent))
        task->tState++;
}

static void (*const sSurfToolFieldEffectFuncs[])(struct Task *) = {
    SurfFieldEffect_Init,
    SurfToolFieldEffect_CheckHeldMovementStatus,
    SurfFieldEffect_JumpOnSurfBlob,
    SurfFieldEffect_End,
};

void Task_SurfToolFieldEffect(u8 taskId)
{
    sSurfToolFieldEffectFuncs[gTasks[taskId].tState](&gTasks[taskId]);
}

u32 UseSurf(u32 fieldMoveStatus)
{
	HideMapNamePopUpWindow();
	ForcePlayerToPerformMovementAction();
	LockPlayerAndLoadMon();
#ifdef QOL_NO_MESSAGING
	FlagSet(FLAG_SYS_USE_SURF);
#endif //QOL_NO_MESSAGING

	if (FlagGet(FLAG_SYS_USE_SURF))
		ScriptContext_SetupScript(EventScript_UseSurfFieldEffect);
	else if(fieldMoveStatus == FIELD_MOVE_POKEMON)
		ScriptContext_SetupScript(EventScript_UseSurfMove);
	else if(fieldMoveStatus == FIELD_MOVE_TOOL)
		ScriptContext_SetupScript(EventScript_UseSurfTool);

	FlagSet(FLAG_SYS_USE_SURF);
	return COLLISION_START_SURFING;
}

void RemoveRelevantSurfFieldEffect(void)
{
    if (FieldEffectActiveListContains(FLDEFF_USE_SURF))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_SURF);
        DestroyTask(FindTaskIdByFunc(Task_SurfFieldEffect));
    }
    else if(FieldEffectActiveListContains(FLDEFF_USE_SURF_TOOL))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_SURF_TOOL);
        DestroyTask(FindTaskIdByFunc(Task_SurfToolFieldEffect));
    }
}

// Strength

u32 CanUseStrength(u8 collision)
{
    bool32 playerUsedStrength, collisionEvent, bagHasItem;

    if (!CheckObjectGraphicsInFrontOfPlayer(OBJ_EVENT_GFX_PUSHABLE_BOULDER))
        return FIELD_MOVE_FAIL;

    playerUsedStrength = FlagGet(FLAG_SYS_USE_STRENGTH);
    if (playerUsedStrength)
        return FIELD_MOVE_FAIL;

    collisionEvent = (collision == COLLISION_OBJECT_EVENT);
    if (!collisionEvent)
        return FIELD_MOVE_FAIL;

    //monHasMove = PartyHasMonLearnsKnowsFieldMove(ITEM_HM04);
    bagHasItem = CheckBagHasItem(ITEM_STRENGTH_TOOL,1);
    //playerHasBadge = FlagGet(FLAG_BADGE04_GET);

    if (!bagHasItem)
        return FIELD_MOVE_FAIL;

    return bagHasItem ? FIELD_MOVE_TOOL : FIELD_MOVE_POKEMON;
}

u32 UseStrength(u32 fieldMoveStatus, u8 x, u8 y, u8 direction)
{
#ifdef QOL_NO_MESSAGING
    FlagSet(FLAG_SYS_USE_STRENGTH);
#endif
    HideMapNamePopUpWindow();
    LockPlayerAndLoadMon();

    if (FlagGet(FLAG_SYS_USE_STRENGTH))
    {
        ScriptContext_SetupScript(EventScript_PushBoulderScript);
        return COLLISION_PUSHED_BOULDER;
    }

    FlagSet(FLAG_SYS_USE_STRENGTH);

    if(fieldMoveStatus == FIELD_MOVE_POKEMON)
        ScriptContext_SetupScript(EventScript_UseStrength);
    else
        ScriptContext_SetupScript(EventScript_UseStrengthTool);

    return COLLISION_PUSHED_BOULDER;
}

void PushBoulderFromScript(void)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;
    s16 direction = playerObjEvent->movementDirection;

    MoveCoords(direction, &x, &y);
    TryPushBoulder(x, y,direction);
}

void ClearFieldMoveFlags(void)
{
    //FlagClear(FLAG_SYS_USE_CUT);
    FlagClear(FLAG_SYS_USE_SURF);
    //FlagClear(FLAG_SYS_USE_ROCK_SMASH);
    //FlagClear(FLAG_SYS_USE_WATERFALL);
}