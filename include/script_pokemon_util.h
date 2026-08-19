#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(u16 species, u8 level, u16 item);
u8 ScriptGiveEgg(u16 species);
void CreateScriptedWildMon(u16 species, u8 level, u16 item);
void CreateScriptedWildMonExtended(u16 species, u8 level, u16 item, u16 nature, u8 abilityNum, u8 gender, u16 hpEv, u16 atkEv, u16 defEv, u16 speedEv, u16 spAtkEv, u16 spDefEv, u16 hpIv, u16 atkIv, u16 defIv, u16 speedIv, u16 spAtkIv, u16 spDefIv, u16 move1, u16 move2, u16 move3, u16 move4, u8 shinyMode);
void CreateScriptedDoubleWildMon(u16 species, u8 level, u16 item, u16 species2, u8 level2, u16 item2);
void CreateScriptedDoubleWildMonExtended(u16 species, u8 level, u16 item, u16 nature, u8 abilityNum, u8 gender, u16 hpEv, u16 atkEv, u16 defEv, u16 speedEv, u16 spAtkEv, u16 spDefEv, u16 hpIv, u16 atkIv, u16 defIv, u16 speedIv, u16 spAtkIv, u16 spDefIv, u16 move1, u16 move2, u16 move3, u16 move4, u8 shinyMode, u16 species2, u8 level2, u16 item2, u16 nature2, u8 abilityNum2, u8 gender2, u16 hpEv2, u16 atkEv2, u16 defEv2, u16 speedEv2, u16 spAtkEv2, u16 spDefEv2, u16 hpIv2, u16 atkIv2, u16 defIv2, u16 speedIv2, u16 spAtkIv2, u16 spDefIv2, u16 move12, u16 move22, u16 move32, u16 move42, u8 shinyMode2);
void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
