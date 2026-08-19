ShuckleIslandCaveIceF1_MapScripts::
# 9 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs
# 3 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIslandCaveIceF1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIslandCaveIceF1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_ICE_CAVE_STATE, 2, ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs
	.2byte 0


ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs::
# 27 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_2
# 32 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set 0x502, ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_3
# 39 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_3_NPCS
# 40 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitemfrommon 0
# 41 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitemfrommon 1
# 42 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitem VAR_BATTLE3_BERRY
# 43 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	giveitemnojingle VAR_BATTLE3_BERRY, 1
# 44 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_RECEIVED_AIR_BALLOON, ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_10
ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_9:
# 50 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_RECEIVED_UNNERVE_CAPSULE, ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_12
ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_1:
# 59 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_SHUCKLE_ISLAND_ICE_CAVE_STATE, 2
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_7
	return

ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_2:
# 29 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_SETUP_BATTLE_3_NPCS
	goto ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_1

ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_3:
# 34 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_SETUP_BATTLE_3_NPCS
	goto ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_1

ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_7:
# 61 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_ICE_CAVE_STATE, 1
	return

ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_10:
# 46 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitem ITEM_AIR_BALLOON
# 47 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	giveitemnojingle ITEM_AIR_BALLOON, 1
	goto ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_9

ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_12:
# 52 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitem ITEM_UNNERVE_CAPSULE
# 53 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	giveitemnojingle ITEM_UNNERVE_CAPSULE, 1
	goto ShuckleIslandCaveIceF1_EventScript_setBattle3NPCs_1


ShuckleIslandCaveIceF1_EventScript_giveAirBalloon::
# 69 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 70 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	giveitem ITEM_AIR_BALLOON, 1
# 71 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeobject 1
# 72 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_RECEIVED_AIR_BALLOON
# 73 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	end


ShuckleIslandCaveIceF1_EventScript_giveUnnerveCapsule::
# 80 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 81 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	giveitem ITEM_UNNERVE_CAPSULE, 1
# 82 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeobject 11
# 83 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_RECEIVED_UNNERVE_CAPSULE
# 84 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	end


ShuckleIslandCaveIceF1_EventScript_berryGuy3::
# 91 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 92 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	faceplayer
# 94 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_MET_BERRY_GUY_ICE_CAVE, ShuckleIslandCaveIceF1_EventScript_berryGuy3_2
ShuckleIslandCaveIceF1_EventScript_berryGuy3_1:
# 101 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_3, ShuckleIslandCaveIceF1_EventScript_berryGuy3_5
# 129 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_8
ShuckleIslandCaveIceF1_EventScript_berryGuy3_4:
# 133 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	end

ShuckleIslandCaveIceF1_EventScript_berryGuy3_2:
# 96 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_MET_BERRY_GUY_ICE_CAVE
# 97 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_0
	goto ShuckleIslandCaveIceF1_EventScript_berryGuy3_1

ShuckleIslandCaveIceF1_EventScript_berryGuy3_5:
# 103 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 105 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_1, ITEM_LIECHI_BERRY
# 106 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_2, ITEM_GANLON_BERRY
# 107 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_3, ITEM_SALAC_BERRY
# 108 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_4, ITEM_PETAYA_BERRY
# 109 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_5, ITEM_APICOT_BERRY
# 110 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_6, ITEM_LANSAT_BERRY
# 112 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 114 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_berryGuy3_8
# 121 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	copyvar VAR_BATTLE3_BERRY, VAR_RESULT
# 122 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	giveitem VAR_BATTLE3_BERRY, 1
# 123 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_3
	goto ShuckleIslandCaveIceF1_EventScript_berryGuy3_4

ShuckleIslandCaveIceF1_EventScript_berryGuy3_8:
# 116 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_7
	goto ShuckleIslandCaveIceF1_EventScript_berryGuy3_4


ShuckleIslandCaveIceF1_EventScript_resetNPC3::
# 140 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 141 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	faceplayer
# 143 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_SPOKE_RESET_NPC, ShuckleIslandCaveIceF1_EventScript_resetNPC3_2
ShuckleIslandCaveIceF1_EventScript_resetNPC3_1:
# 150 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_3, ShuckleIslandCaveIceF1_EventScript_resetNPC3_5
# 157 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_0
# 159 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_3, ShuckleIslandCaveIceF1_EventScript_resetNPC3_9
ShuckleIslandCaveIceF1_EventScript_resetNPC3_8:
# 165 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 167 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_resetNPC3_11
# 174 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_3, MSGBOX_AUTOCLOSE
# 175 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 177 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_resetNPC3_15
ShuckleIslandCaveIceF1_EventScript_resetNPC3_14:
# 183 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 184 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_4
ShuckleIslandCaveIceF1_EventScript_resetNPC3_4:
# 190 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	end

ShuckleIslandCaveIceF1_EventScript_resetNPC3_2:
# 145 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_SPOKE_RESET_NPC
# 146 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox resetNPCIntro_text
	goto ShuckleIslandCaveIceF1_EventScript_resetNPC3_1

ShuckleIslandCaveIceF1_EventScript_resetNPC3_5:
# 152 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox resetNPCNothingToReset_text
	goto ShuckleIslandCaveIceF1_EventScript_resetNPC3_4

ShuckleIslandCaveIceF1_EventScript_resetNPC3_9:
# 161 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_1, 0
	goto ShuckleIslandCaveIceF1_EventScript_resetNPC3_8

ShuckleIslandCaveIceF1_EventScript_resetNPC3_11:
# 169 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_2
	goto ShuckleIslandCaveIceF1_EventScript_resetNPC3_4

ShuckleIslandCaveIceF1_EventScript_resetNPC3_15:
# 179 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call ResetBerry_3
	goto ShuckleIslandCaveIceF1_EventScript_resetNPC3_14


ShuckleIslandCaveIceF1_EventScript_hintNPC3::
# 197 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 198 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	faceplayer
# 200 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandCaveIceF1_EventScript_hintNPC3_2
ShuckleIslandCaveIceF1_EventScript_hintNPC3_1:
# 207 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_0
# 209 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandCaveIceF1_EventScript_hintNPC3_5
# 216 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_2, 0
ShuckleIslandCaveIceF1_EventScript_hintNPC3_4:
# 220 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_3, 1
# 221 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_4, 2
# 222 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_5, 3
# 224 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_11
ShuckleIslandCaveIceF1_EventScript_hintNPC3_8:
# 230 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 232 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_16
# 237 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_17
# 243 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_18
# 255 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_19
# 267 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_20
# 279 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_21
ShuckleIslandCaveIceF1_EventScript_hintNPC3_15:
# 315 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	end

ShuckleIslandCaveIceF1_EventScript_hintNPC3_2:
# 202 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 203 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_1

ShuckleIslandCaveIceF1_EventScript_hintNPC3_5:
# 211 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_1, 0
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_4

ShuckleIslandCaveIceF1_EventScript_hintNPC3_9:
# 226 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_6, 4
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_8

ShuckleIslandCaveIceF1_EventScript_hintNPC3_10:
# 224 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_LRG_HINT_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_9
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_8

ShuckleIslandCaveIceF1_EventScript_hintNPC3_11:
# 224 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_10
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_8

ShuckleIslandCaveIceF1_EventScript_hintNPC3_16:
# 234 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_17:
# 239 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox hintNPCAboutHints_text
# 240 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_18:
# 245 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox hintNPCBattle3SmallHint_text
# 247 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_28
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_19:
# 257 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox hintNPCBattle3MedHint_text
# 259 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_30
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_20:
# 269 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox hintNPCBattle3LargeHint_text
# 271 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_32
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_21:
# 281 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_35
# 288 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandCaveIceF1_EventScript_hintNPC3_34:
# 292 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_38
# 297 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandCaveIceF1_EventScript_hintNPC3_39
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_28:
# 249 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_3
# 250 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_30:
# 261 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_3
# 262 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_32:
# 273 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_LRG_HINT_BATTLE_3
# 274 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_35:
# 283 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_34

ShuckleIslandCaveIceF1_EventScript_hintNPC3_38:
# 294 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_7
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_39:
# 299 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_3
# 300 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	callnative DrawMugshot
# 301 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_8
# 302 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	callnative ClearMugshot
# 304 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_hintNPC3_42
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15

ShuckleIslandCaveIceF1_EventScript_hintNPC3_42:
# 306 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_3
# 307 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandCaveIceF1_EventScript_hintNPC3_15


ShuckleIslandCaveIceF1_EventScript_NewMechNPC3::
# 322 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lock
# 323 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	faceplayer
# 325 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIslandCaveIceF1_EventScript_NewMechNPC3_2
ShuckleIslandCaveIceF1_EventScript_NewMechNPC3_1:
# 332 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
# 334 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	release
	end

ShuckleIslandCaveIceF1_EventScript_NewMechNPC3_2:
# 327 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 328 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIslandCaveIceF1_EventScript_NewMechNPC3_1


ShuckleIslandCaveIceF1_EventScript_Battle3::
# 341 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 342 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	faceplayer
# 343 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_ICE_CAVE_STATE, 2
# 344 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_CAVE_ICE_F1
# 346 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_3, ShuckleIslandCaveIceF1_EventScript_Battle3_1
# 356 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_3_NPCS
# 357 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
# 358 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, Battle3_Short_text, Battle3_Lose_text, ShuckleIslandCaveIceF1_EventScript_PostBattle3
	return

ShuckleIslandCaveIceF1_EventScript_Battle3_1:
# 348 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_STARTED_BATTLE_3
# 349 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_3_NPCS
# 350 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
# 351 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, Battle3_Intro_text, Battle3_Lose_text, ShuckleIslandCaveIceF1_EventScript_PostBattle3
	return


ShuckleIslandCaveIceF1_EventScript_PostBattle3::
# 366 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 367 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	special HealPlayerParty
# 368 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox Battle3_PostBattle_text
# 369 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	waitmessage
# 370 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	closemessage
# 371 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	applymovement 6, ShuckleIslandCaveIceF1_EventScript_PostBattle3_Movement_0
# 372 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	waitmovement
# 373 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	playse SE_EXIT
# 374 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeobject 6
# 375 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	waitse
# 376 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_WON_BATTLE_3
# 377 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_CAVE_STATE, 1
# 378 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_3_NPCS
# 379 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_HIDE_FISHERMAN
# 380 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_SOUTH
# 381 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	delay 30
# 382 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	return


ShuckleIslandCaveIceF1_EventScript_SignIce::
# 388 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lock
# 389 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox SignIce_text, MSGBOX_SIGN
# 390 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	release
	end


ShuckleIslandCaveIceF1_EventScript_IceSwitch::
# 397 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_TEMP_A, ShuckleIslandCaveIceF1_EventScript_IceSwitch_1
# 405 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_unset FLAG_TEMP_B, ShuckleIslandCaveIceF1_EventScript_IceSwitch_2
# 414 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	clearflag FLAG_TEMP_A
# 415 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	clearflag FLAG_TEMP_B
# 416 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call ClearGreenIce
# 417 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call SetRedIce
	return

ShuckleIslandCaveIceF1_EventScript_IceSwitch_1:
# 399 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_TEMP_A
# 400 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call ClearRedIce
# 401 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call SetOrangeIce
	return

ShuckleIslandCaveIceF1_EventScript_IceSwitch_2:
# 407 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setflag FLAG_TEMP_B
# 408 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call ClearOrangeIce
# 409 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call SetGreenIce
	return


ResetBerry_3::
# 426 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	clearflag FLAG_RECEIVED_BERRY_3
# 427 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitemfrommon 0
# 428 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitemfrommon 1
# 429 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitem VAR_BATTLE3_BERRY
# 430 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setvar VAR_BATTLE3_BERRY, 0
# 431 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_RECEIVED_AIR_BALLOON, ResetBerry_3_1
	return

ResetBerry_3_1:
# 433 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	removeitem ITEM_AIR_BALLOON
# 434 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	giveitemnojingle ITEM_AIR_BALLOON, 1
	return


NewMechNPC3Choices::
# 442 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox NewMechNPC3Choices_Text_0
# 444 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush NewMechNPC3Choices_Text_1, 0
# 445 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush NewMechNPC3Choices_Text_2, 1
# 446 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush NewMechNPC3Choices_Text_3, 2
# 447 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush NewMechNPC3Choices_Text_4, 3
# 449 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_RECEIVED_AIR_BALLOON, NewMechNPC3Choices_2
NewMechNPC3Choices_1:
# 454 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	goto_if_set FLAG_RECEIVED_UNNERVE_CAPSULE, NewMechNPC3Choices_5
NewMechNPC3Choices_4:
# 460 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush NewMechNPC3Choices_Text_7, 6
# 462 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 464 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq NewMechNPC3Choices_7
# 469 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMechNPC3Choices_8
# 475 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewMechNPC3Choices_9
# 481 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewMechNPC3Choices_10
# 487 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewMechNPC3Choices_11
# 493 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq NewMechNPC3Choices_12
# 499 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq NewMechNPC3Choices_13
# 505 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq NewMechNPC3Choices_14
	return

NewMechNPC3Choices_2:
# 451 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush NewMechNPC3Choices_Text_5, 4
	goto NewMechNPC3Choices_1

NewMechNPC3Choices_5:
# 456 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	dynmultipush NewMechNPC3Choices_Text_6, 5
	goto NewMechNPC3Choices_4

NewMechNPC3Choices_7:
# 466 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox NewMechNPC3Choices_Text_8
	return

NewMechNPC3Choices_8:
# 471 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox secondAbilities_text
# 472 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
	return

NewMechNPC3Choices_9:
# 477 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox upload_text
# 478 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
	return

NewMechNPC3Choices_10:
# 483 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox conversion2_text
# 484 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
	return

NewMechNPC3Choices_11:
# 489 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox NewMechNPC3Choices_Text_9
# 490 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
	return

NewMechNPC3Choices_12:
# 495 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox airBalloon_text
# 496 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
	return

NewMechNPC3Choices_13:
# 501 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox unnerveCapsule_text
# 502 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
	return

NewMechNPC3Choices_14:
# 507 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	msgbox porygonZAI_text
# 508 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	call NewMechNPC3Choices
	return


SetRedIce::
# 516 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 517 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 4, 11, 0x39C, FALSE
# 518 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 6, 11, 0x39C, FALSE
# 519 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 2, 13, 0x39C, FALSE
# 520 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 16, 11, 0x39C, FALSE
# 521 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 17, 1, 0x39C, FALSE
# 522 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 18, 4, 0x39C, FALSE
# 523 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 24, 2, 0x39C, FALSE
# 524 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 25, 3, 0x39C, FALSE
# 525 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 25, 13, 0x39C, FALSE
# 526 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 26, 7, 0x39C, FALSE
# 528 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 5, 12, 0x393, FALSE
# 529 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 15, 1, 0x393, FALSE
# 530 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 20, 11, 0x393, FALSE
# 531 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 23, 6, 0x393, FALSE
# 533 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	playse SE_SWITCH
# 534 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	special DrawWholeMapView
# 535 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	delay 30
# 536 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	return


ClearRedIce::
# 542 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 543 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 4, 11, 0x397, FALSE
# 544 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 6, 11, 0x397, FALSE
# 545 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 2, 13, 0x397, FALSE
# 546 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 16, 11, 0x397, FALSE
# 547 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 17, 1, 0x397, FALSE
# 548 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 18, 4, 0x397, FALSE
# 549 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 24, 2, 0x397, FALSE
# 550 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 25, 3, 0x397, FALSE
# 551 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 25, 13, 0x397, FALSE
# 552 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 26, 7, 0x397, FALSE
# 553 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	return


SetOrangeIce::
# 559 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 560 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 4, 13, 0x39D, FALSE
# 561 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 6, 13, 0x39D, FALSE
# 562 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 4, 17, 0x39D, FALSE
# 563 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 14, 4, 0x39D, FALSE
# 564 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 15, 8, 0x39D, FALSE
# 565 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 17, 12, 0x39D, FALSE
# 566 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 18, 12, 0x39D, FALSE
# 567 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 20, 8, 0x39D, FALSE
# 568 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 24, 9, 0x39D, FALSE
# 570 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 5, 12, 0x394, FALSE
# 571 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 15, 1, 0x394, FALSE
# 572 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 20, 11, 0x394, FALSE
# 573 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 23, 6, 0x394, FALSE
# 575 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	playse SE_SWITCH
# 576 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	special DrawWholeMapView
# 577 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	delay 30
# 578 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	return


ClearOrangeIce::
# 584 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 585 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 4, 13, 0x35F, FALSE
# 586 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 6, 13, 0x35F, FALSE
# 587 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 4, 17, 0x35F, FALSE
# 588 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 14, 4, 0x35F, FALSE
# 589 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 15, 8, 0x35F, FALSE
# 590 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 17, 12, 0x35F, FALSE
# 591 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 18, 12, 0x35F, FALSE
# 592 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 20, 8, 0x35F, FALSE
# 593 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 24, 9, 0x35F, FALSE
# 594 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	return


SetGreenIce::
# 600 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 601 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 2, 17, 0x39B, FALSE
# 602 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 3, 12, 0x39B, FALSE
# 603 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 14, 5, 0x39B, FALSE
# 604 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 15, 9, 0x39B, FALSE
# 605 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 17, 10, 0x39B, FALSE
# 606 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 22, 11, 0x39B, FALSE
# 607 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 21, 2, 0x39B, FALSE
# 608 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 21, 3, 0x39B, FALSE
# 609 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 23, 4, 0x39B, FALSE
# 610 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 26, 12, 0x39B, FALSE
# 612 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 5, 12, 0x395, FALSE
# 613 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 15, 1, 0x395, FALSE
# 614 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 20, 11, 0x395, FALSE
# 615 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 23, 6, 0x395, FALSE
# 617 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	playse SE_SWITCH
# 618 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	special DrawWholeMapView
# 619 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	delay 30
# 620 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	return


ClearGreenIce::
# 626 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	lockall
# 627 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 2, 17, 0x364, FALSE
# 628 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 3, 12, 0x364, FALSE
# 629 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 14, 5, 0x364, FALSE
# 630 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 15, 9, 0x364, FALSE
# 631 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 17, 10, 0x364, FALSE
# 632 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 22, 11, 0x364, FALSE
# 633 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 21, 2, 0x364, FALSE
# 634 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 21, 3, 0x364, FALSE
# 635 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 23, 4, 0x364, FALSE
# 636 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	setmetatile 26, 12, 0x364, FALSE
# 637 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	releaseall
	return


# 371 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
ShuckleIslandCaveIceF1_EventScript_PostBattle3_Movement_0:
# 371 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	walk_right
	step_end

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_0:
# 97 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Hmm? What am I doing here?\pWell, I'm just making sure you have\na berry, of course!$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_1:
# 105 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Liechi Berry$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_2:
# 106 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Ganlon Berry$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_3:
# 107 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Salac Berry$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_4:
# 108 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Petaya Berry$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_5:
# 109 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Apicot Berry$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_6:
# 110 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Lansat Berry$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_7:
# 116 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Come back when you know\nwhich berry you want!$"

ShuckleIslandCaveIceF1_EventScript_berryGuy3_Text_8:
# 129 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "I hope you make good use of that berry!$"

ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_0:
# 157 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "What would you like to reset?\n(Press B to exit)$"

ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_1:
# 161 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Reset Berry$"

ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_2:
# 169 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Come back if you would ever\nlike to reset your actions!$"

ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_3:
# 174 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "One moment while I reset your actions.$"

ShuckleIslandCaveIceF1_EventScript_resetNPC3_Text_4:
# 184 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Your actions have been reset!$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_0:
# 207 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Now then, what hints can I offer you?\n(Press B to exit)$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_1:
# 211 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "About Hints (read me!)$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_2:
# 216 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "About Hints$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_3:
# 220 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Small Hint$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_4:
# 221 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Medium Hint$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_5:
# 222 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Large Hint$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_6:
# 226 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Solution$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_7:
# 294 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Understood.\pKeep trying, and come back\nif you feel you need the solution.$"

ShuckleIslandCaveIceF1_EventScript_hintNPC3_Text_8:
# 301 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "https://youtu.be/dYSb-NrPJVg$"

NewMechNPC3Choices_Text_0:
# 442 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Now then, what new mechanics do\nyou want explained? (Press B to exit)$"

NewMechNPC3Choices_Text_1:
# 444 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Second Abilities$"

NewMechNPC3Choices_Text_2:
# 445 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Upload$"

NewMechNPC3Choices_Text_3:
# 446 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Conversion 2$"

NewMechNPC3Choices_Text_4:
# 447 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Natural Gift$"

NewMechNPC3Choices_Text_5:
# 451 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Air Balloon$"

NewMechNPC3Choices_Text_6:
# 456 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Unnerve Capsule$"

NewMechNPC3Choices_Text_7:
# 460 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Porygon-Z AI$"

NewMechNPC3Choices_Text_8:
# 466 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Stop by if you ever want\nthe new mechanics explained again!$"

NewMechNPC3Choices_Text_9:
# 489 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Natural Gift now makes contact.$"

hintNPCBattle3SmallHint_text::
# 641 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Start by figuring out how you're going\n"
	.string "to deal with Lapras.\p"
	.string "Even if you're immune to its 2 damaging\n"
	.string "attacks, you faint to Perish song.\p"
	.string "Can anything be done\n"
	.string "about Perish Song?$"

hintNPCBattle3MedHint_text::
# 653 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Losing HP from Pain Split will not\n"
	.string "pop a Pokémon's held Air Balloon.$"

hintNPCBattle3LargeHint_text::
# 660 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Gallade should begin its fight\n"
	.string "against Lapras with 44 HP.\p"
	.string "After one move, Gallade should be\n"
	.string "immune to all of Lapras's attacks.$"

secondAbilities_text::
# 669 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Some Pokémon have additional abilities!\p"
	.string "These function normally, except\n"
	.string "they can't be swapped with Skill Swap.$"

upload_text::
# 677 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "When a Pokémon with the ability Upload\n"
	.string "faints, it uploads its current type.\p"
	.string "The next move used by an ally then\n"
	.string "becomes that type until switching out.$"

conversion2_text::
# 686 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Conversion 2 now changes the user's\n"
	.string "type to a single, guaranteed type.\p"
	.string "Type changes are as follows\n"
	.string "(Last Dmg Type --> New User Type):\p"
	.string "Grass --> Fire\n"
	.string "Ice --> Water\p"
	.string "Fighting --> Flying\n"
	.string "Poison --> Rock\p"
	.string "Ground --> Grass\n"
	.string "Flying --> Electric\p"
	.string "Normal --> Steel\n"
	.string "Water --> Dragon$"

porygonZAI_text::
# 703 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Porygon-Z will only and always use\n"
	.string "Pain Split when it is below half max HP\l"
	.string "and its opponent has more HP.\p"
	.string "Otherwise, Porygon-Z will default to\n"
	.string "using Conversion 2, if it still has PP.$"

airBalloon_text::
# 713 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "A held Air Balloon will now also pop when\n"
	.string "the holder receives indirect damage,\l"
	.string "such as from Rocky Helmet recoil.$"

unnerveCapsule_text::
# 721 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "This changes the selected Pokémon's\n"
	.string "ability to Unnerve when used in battle.\p"
	.string "The ability change is lost when the\n"
	.string "Pokémon switches out.$"

Battle3_Intro_text::
# 730 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "So, you're the one who's been\n"
	.string "harboring that rogue Munchlax?\p"
	.string "Surely you know how much Team Shuckle\n"
	.string "has been looking for that, right?\p"
	.string "Now, hand over the Munchlax before\n"
	.string "I take it from you by force!$"

Battle3_Short_text::
# 741 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Hand over that Munchlax or\n"
	.string "prepare to face the music!$"

Battle3_Lose_text::
# 748 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "Aww shucks!$"

Battle3_PostBattle_text::
# 754 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "You want to leave this island, right?\n"
	.string "Then heed my advice.\p"
	.string "Take that Munchlax with you and stay\n"
	.string "out of Team Shuckle's way!\p"
	.string "The next time you interfere with us…\n"
	.string "Let's just say things won't go as well.$"

SignIce_text::
# 765 "data/maps/ShuckleIslandCaveIceF1/scripts.pory"
	.string "There's an invisible bridge to the\n"
	.string "right over the adjacent ice puzzle.\p"
	.string "Use it to get a better view!$"
