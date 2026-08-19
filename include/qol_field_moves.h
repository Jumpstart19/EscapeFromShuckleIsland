u32 CanUseSurf(s16, s16, u8);
u32 CanUseSurfFromInteractedWater(void);
u32 UseSurf(u32);
void RemoveRelevantSurfFieldEffect(void);
void Task_SurfToolFieldEffect(u8 taskId);

u32 CanUseStrength(u8);
u32 UseStrength(u32, u8, u8, u8);

void ClearFieldMoveFlags(void);

enum FieldMoveActionSource
{
    FIELD_MOVE_FAIL,
    FIELD_MOVE_POKEMON,
    FIELD_MOVE_TOOL
};

// https://github.com/PokemonSanFran/pokeemerald/wiki/QoL-Field-Moves#developer-options
// When QOL_NO_MESSAGING is enabled, when the player uses a Field Move automatically for the first time on a map, a message or animation does not appear.
#define QOL_NO_MESSAGING