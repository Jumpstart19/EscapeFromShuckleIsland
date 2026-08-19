ShuckleIsland_MapScripts::
# 11 "data/maps/ShuckleIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShuckleIsland_EventScript_setBattle1NPCs
# 12 "data/maps/ShuckleIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShuckleIsland_EventScript_setBattle2NPCs
# 3 "data/maps/ShuckleIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIsland/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_STATE, 0, ShuckleIsland_EventScript_getMunchlax
# 6 "data/maps/ShuckleIsland/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_STATE, 2, ShuckleIsland_EventScript_setBattle1NPCs
# 7 "data/maps/ShuckleIsland/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_STATE, 4, ShuckleIsland_EventScript_setBattle2NPCs
	.2byte 0


ShuckleIsland_EventScript_getMunchlax::
# 38 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 39 "data/maps/ShuckleIsland/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_BATTLE_1
# 40 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_getMunchlax_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/ShuckleIsland/scripts.pory"
	waitmessage
# 42 "data/maps/ShuckleIsland/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
# 43 "data/maps/ShuckleIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIsland_EventScript_getMunchlax_Movement_0
# 44 "data/maps/ShuckleIsland/scripts.pory"
	waitmoncry
# 45 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 1, ShuckleIsland_EventScript_getMunchlax_Movement_1
# 46 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 47 "data/maps/ShuckleIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIsland_EventScript_getMunchlax_Movement_2
# 48 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 1, ShuckleIsland_EventScript_getMunchlax_Movement_3
# 49 "data/maps/ShuckleIsland/scripts.pory"
	playse SE_PIN
# 50 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 51 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 1, ShuckleIsland_EventScript_getMunchlax_Movement_4
# 52 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 53 "data/maps/ShuckleIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIsland_EventScript_getMunchlax_Movement_5
# 54 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 55 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Munchlax_text
# 56 "data/maps/ShuckleIsland/scripts.pory"
	givemon SPECIES_MUNCHLAX, 27, ITEM_NONE, ITEM_POKE_BALL, NATURE_IMPISH, 2, 0, 100, 0, 252, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_RECYCLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE
# 57 "data/maps/ShuckleIsland/scripts.pory"
	removeobject 1
# 58 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_RECEIVED_MUNCHLAX
# 59 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 60 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 61 "data/maps/ShuckleIsland/scripts.pory"
	special SetUnlockedPokedexFlags
# 62 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 63 "data/maps/ShuckleIsland/scripts.pory"
	special EnableNationalPokedex
# 64 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
ShuckleIsland_EventScript_getMunchlax_2:
# 66 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_TEMP_1, 493
	goto_if_le ShuckleIsland_EventScript_getMunchlax_3
# 73 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_STATE, 1
# 74 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_NUM_SMALL_HINTS, 0
# 75 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_NUM_MED_HINTS, 0
# 76 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_NUM_LARGE_HINTS, 0
# 77 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_NUM_SOLUTIONS, 0
# 78 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 79 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE01_GET
# 80 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE02_GET
# 81 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE03_GET
# 82 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE04_GET
# 83 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE05_GET
# 84 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE06_GET
# 85 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE07_GET
# 86 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_BADGE08_GET
# 87 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SETUP_BATTLE_1_NPCS
# 88 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SETUP_BATTLE_2_NPCS
# 89 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 9, 0x2FC, TRUE
# 90 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 9, 0x2FD, TRUE
# 91 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 10, 0x0AB, TRUE
# 92 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 10, 0x0AC, TRUE
# 93 "data/maps/ShuckleIsland/scripts.pory"
	special DrawWholeMapView
# 94 "data/maps/ShuckleIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_getMunchlax_Text_1
# 96 "data/maps/ShuckleIsland/scripts.pory"
	waitfanfare
# 97 "data/maps/ShuckleIsland/scripts.pory"
	closemessage
# 98 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 10, ShuckleIsland_EventScript_getMunchlax_Movement_6
# 99 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 100 "data/maps/ShuckleIsland/scripts.pory"
	removeobject 10
# 101 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	end

ShuckleIsland_EventScript_getMunchlax_3:
# 68 "data/maps/ShuckleIsland/scripts.pory"
	setseenmon VAR_TEMP_1
# 69 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto ShuckleIsland_EventScript_getMunchlax_2


ShuckleIsland_EventScript_setBattle1NPCs::
# 108 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_1, ShuckleIsland_EventScript_setBattle1NPCs_2
# 113 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set 0x64E, ShuckleIsland_EventScript_setBattle1NPCs_3
# 120 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_1_NPCS
# 121 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_WON_BATTLE_1A
# 122 "data/maps/ShuckleIsland/scripts.pory"
	cleartrainerflag TRAINER_TIMMY
# 123 "data/maps/ShuckleIsland/scripts.pory"
	indexspeciesinparty SPECIES_SHEDINJA
# 124 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_setBattle1NPCs_10
# 129 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_setBattle1NPCs_11
ShuckleIsland_EventScript_setBattle1NPCs_9:
# 135 "data/maps/ShuckleIsland/scripts.pory"
	removeitem VAR_BATTLE1_BERRY
# 136 "data/maps/ShuckleIsland/scripts.pory"
	GiveItemToMon 0, VAR_BATTLE1_BERRY
ShuckleIsland_EventScript_setBattle1NPCs_1:
# 140 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_SHUCKLE_ISLAND_STATE, 2
	goto_if_eq ShuckleIsland_EventScript_setBattle1NPCs_7
	return

ShuckleIsland_EventScript_setBattle1NPCs_2:
# 110 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SETUP_BATTLE_1_NPCS
	goto ShuckleIsland_EventScript_setBattle1NPCs_1

ShuckleIsland_EventScript_setBattle1NPCs_3:
# 115 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SETUP_BATTLE_1_NPCS
	goto ShuckleIsland_EventScript_setBattle1NPCs_1

ShuckleIsland_EventScript_setBattle1NPCs_7:
# 142 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_STATE, 1
	return

ShuckleIsland_EventScript_setBattle1NPCs_10:
# 126 "data/maps/ShuckleIsland/scripts.pory"
	takemon 0
	goto ShuckleIsland_EventScript_setBattle1NPCs_9

ShuckleIsland_EventScript_setBattle1NPCs_11:
# 131 "data/maps/ShuckleIsland/scripts.pory"
	takemon 1
	goto ShuckleIsland_EventScript_setBattle1NPCs_9


ShuckleIsland_EventScript_Sign1::
# 150 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 151 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Sign1_text, MSGBOX_SIGN
# 152 "data/maps/ShuckleIsland/scripts.pory"
	release
	end


ShuckleIsland_EventScript_Sign2::
# 159 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 160 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Sign2_text, MSGBOX_SIGN
# 161 "data/maps/ShuckleIsland/scripts.pory"
	release
	end


ShuckleIsland_EventScript_fatMan::
# 168 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 169 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 170 "data/maps/ShuckleIsland/scripts.pory"
	msgbox fatMan_text
# 171 "data/maps/ShuckleIsland/scripts.pory"
	release
	end


ShuckleIsland_EventScript_berryGuy::
# 178 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 179 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 181 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_BERRY_GUY_1, ShuckleIsland_EventScript_berryGuy_2
ShuckleIsland_EventScript_berryGuy_1:
# 198 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_1, ShuckleIsland_EventScript_berryGuy_5
# 226 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_berryGuy_Text_7
ShuckleIsland_EventScript_berryGuy_4:
# 230 "data/maps/ShuckleIsland/scripts.pory"
	release
	end

ShuckleIsland_EventScript_berryGuy_2:
# 183 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_BERRY_GUY_1
# 185 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_TM_GUY_1, ShuckleIsland_EventScript_berryGuy_8
# 192 "data/maps/ShuckleIsland/scripts.pory"
	msgbox berryGuyShortIntro_text
	goto ShuckleIsland_EventScript_berryGuy_1

ShuckleIsland_EventScript_berryGuy_5:
# 200 "data/maps/ShuckleIsland/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 202 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_0, ITEM_LIECHI_BERRY
# 203 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_1, ITEM_GANLON_BERRY
# 204 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_2, ITEM_SALAC_BERRY
# 205 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_3, ITEM_PETAYA_BERRY
# 206 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_4, ITEM_APICOT_BERRY
# 207 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_5, ITEM_LANSAT_BERRY
# 209 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 211 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_berryGuy_11
# 218 "data/maps/ShuckleIsland/scripts.pory"
	copyvar VAR_BATTLE1_BERRY, VAR_RESULT
# 219 "data/maps/ShuckleIsland/scripts.pory"
	giveitem VAR_BATTLE1_BERRY, 1
# 220 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_1
	goto ShuckleIsland_EventScript_berryGuy_4

ShuckleIsland_EventScript_berryGuy_8:
# 187 "data/maps/ShuckleIsland/scripts.pory"
	msgbox berryGuyIntro_text
	goto ShuckleIsland_EventScript_berryGuy_1

ShuckleIsland_EventScript_berryGuy_11:
# 213 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_berryGuy_Text_6
	goto ShuckleIsland_EventScript_berryGuy_4


ShuckleIsland_EventScript_TMGuy::
# 237 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 238 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 240 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_TM_GUY_1, ShuckleIsland_EventScript_TMGuy_2
ShuckleIsland_EventScript_TMGuy_1:
# 257 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_1, ShuckleIsland_EventScript_TMGuy_5
# 280 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_TMGuy_Text_3
ShuckleIsland_EventScript_TMGuy_4:
# 284 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	end

ShuckleIsland_EventScript_TMGuy_2:
# 242 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_TM_GUY_1
# 244 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_BERRY_GUY_1, ShuckleIsland_EventScript_TMGuy_8
# 251 "data/maps/ShuckleIsland/scripts.pory"
	msgbox TMGuyShortIntro_text
	goto ShuckleIsland_EventScript_TMGuy_1

ShuckleIsland_EventScript_TMGuy_5:
# 259 "data/maps/ShuckleIsland/scripts.pory"
	msgbox TMGuyPresentOptions_text
# 261 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_TMGuy_Text_0, ITEM_TM56
# 262 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_TMGuy_Text_1, ITEM_TM83
# 264 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 266 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_TMGuy_11
# 273 "data/maps/ShuckleIsland/scripts.pory"
	giveitem VAR_RESULT, 1
# 274 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_RECEIVED_TM_1
	goto ShuckleIsland_EventScript_TMGuy_4

ShuckleIsland_EventScript_TMGuy_8:
# 246 "data/maps/ShuckleIsland/scripts.pory"
	msgbox TMGuyIntro_text
	goto ShuckleIsland_EventScript_TMGuy_1

ShuckleIsland_EventScript_TMGuy_11:
# 268 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_TMGuy_Text_2
	goto ShuckleIsland_EventScript_TMGuy_4


ShuckleIsland_EventScript_resetNPC::
# 291 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 292 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 294 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_RESET_NPC, ShuckleIsland_EventScript_resetNPC_2
ShuckleIsland_EventScript_resetNPC_1:
# 301 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_1, ShuckleIsland_EventScript_resetNPC_7
ShuckleIsland_EventScript_resetNPC_6:
# 308 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_0
# 310 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_1, ShuckleIsland_EventScript_resetNPC_11
ShuckleIsland_EventScript_resetNPC_10:
# 316 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_1, ShuckleIsland_EventScript_resetNPC_14
ShuckleIsland_EventScript_resetNPC_13:
# 322 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_1, ShuckleIsland_EventScript_resetNPC_18
ShuckleIsland_EventScript_resetNPC_16:
# 328 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 330 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_resetNPC_21
# 337 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_5, MSGBOX_AUTOCLOSE
# 338 "data/maps/ShuckleIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 340 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_resetNPC_25
# 345 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_resetNPC_26
# 350 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIsland_EventScript_resetNPC_27
ShuckleIsland_EventScript_resetNPC_24:
# 357 "data/maps/ShuckleIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 358 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_6
ShuckleIsland_EventScript_resetNPC_4:
# 364 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	end

ShuckleIsland_EventScript_resetNPC_2:
# 296 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_RESET_NPC
# 297 "data/maps/ShuckleIsland/scripts.pory"
	msgbox resetNPCIntro_text
	goto ShuckleIsland_EventScript_resetNPC_1

ShuckleIsland_EventScript_resetNPC_5:
# 303 "data/maps/ShuckleIsland/scripts.pory"
	msgbox resetNPCNothingToReset_text
	goto ShuckleIsland_EventScript_resetNPC_4

ShuckleIsland_EventScript_resetNPC_7:
# 301 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_1, ShuckleIsland_EventScript_resetNPC_5
	goto ShuckleIsland_EventScript_resetNPC_6

ShuckleIsland_EventScript_resetNPC_11:
# 312 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_resetNPC_Text_1, 0
	goto ShuckleIsland_EventScript_resetNPC_10

ShuckleIsland_EventScript_resetNPC_14:
# 318 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_resetNPC_Text_2, 1
	goto ShuckleIsland_EventScript_resetNPC_13

ShuckleIsland_EventScript_resetNPC_17:
# 324 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_resetNPC_Text_3, 2
	goto ShuckleIsland_EventScript_resetNPC_16

ShuckleIsland_EventScript_resetNPC_18:
# 322 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_1, ShuckleIsland_EventScript_resetNPC_17
	goto ShuckleIsland_EventScript_resetNPC_16

ShuckleIsland_EventScript_resetNPC_21:
# 332 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_4
	goto ShuckleIsland_EventScript_resetNPC_4

ShuckleIsland_EventScript_resetNPC_25:
# 342 "data/maps/ShuckleIsland/scripts.pory"
	call ResetBerry_1
	goto ShuckleIsland_EventScript_resetNPC_24

ShuckleIsland_EventScript_resetNPC_26:
# 347 "data/maps/ShuckleIsland/scripts.pory"
	call ResetTM_1
	goto ShuckleIsland_EventScript_resetNPC_24

ShuckleIsland_EventScript_resetNPC_27:
# 352 "data/maps/ShuckleIsland/scripts.pory"
	call ResetTM_1
# 353 "data/maps/ShuckleIsland/scripts.pory"
	call ResetBerry_1
	goto ShuckleIsland_EventScript_resetNPC_24


ShuckleIsland_EventScript_hintNPC::
# 371 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 372 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 374 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIsland_EventScript_hintNPC_2
ShuckleIsland_EventScript_hintNPC_1:
# 381 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_hintNPC_Text_0
# 383 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIsland_EventScript_hintNPC_5
# 390 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_2, 0
ShuckleIsland_EventScript_hintNPC_4:
# 394 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_3, 1
# 395 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_4, 2
# 396 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_5, 3
# 398 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_1, ShuckleIsland_EventScript_hintNPC_11
ShuckleIsland_EventScript_hintNPC_8:
# 404 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 406 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_hintNPC_16
# 411 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_hintNPC_17
# 417 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_hintNPC_18
# 429 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIsland_EventScript_hintNPC_19
# 441 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIsland_EventScript_hintNPC_20
# 453 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIsland_EventScript_hintNPC_21
ShuckleIsland_EventScript_hintNPC_15:
# 489 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	end

ShuckleIsland_EventScript_hintNPC_2:
# 376 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 377 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIsland_EventScript_hintNPC_1

ShuckleIsland_EventScript_hintNPC_5:
# 385 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_1, 0
	goto ShuckleIsland_EventScript_hintNPC_4

ShuckleIsland_EventScript_hintNPC_9:
# 400 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_6, 4
	goto ShuckleIsland_EventScript_hintNPC_8

ShuckleIsland_EventScript_hintNPC_10:
# 398 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_LRG_HINT_BATTLE_1, ShuckleIsland_EventScript_hintNPC_9
	goto ShuckleIsland_EventScript_hintNPC_8

ShuckleIsland_EventScript_hintNPC_11:
# 398 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_1, ShuckleIsland_EventScript_hintNPC_10
	goto ShuckleIsland_EventScript_hintNPC_8

ShuckleIsland_EventScript_hintNPC_16:
# 408 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_17:
# 413 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCAboutHints_text
# 414 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_18:
# 419 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCBattle1SmallHint_text
# 421 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_1, ShuckleIsland_EventScript_hintNPC_28
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_19:
# 431 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCBattle1MedHint_text
# 433 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_1, ShuckleIsland_EventScript_hintNPC_30
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_20:
# 443 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCBattle1LargeHint_text
# 445 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_BATTLE_1, ShuckleIsland_EventScript_hintNPC_32
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_21:
# 455 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_1, ShuckleIsland_EventScript_hintNPC_35
# 462 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIsland_EventScript_hintNPC_34:
# 466 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_hintNPC_38
# 471 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_hintNPC_39
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_28:
# 423 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_1
# 424 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_30:
# 435 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_1
# 436 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_32:
# 447 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_LRG_HINT_BATTLE_1
# 448 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_35:
# 457 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIsland_EventScript_hintNPC_34

ShuckleIsland_EventScript_hintNPC_38:
# 468 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_hintNPC_Text_7
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_39:
# 473 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_1
# 474 "data/maps/ShuckleIsland/scripts.pory"
	callnative DrawMugshot
# 475 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_hintNPC_Text_8
# 476 "data/maps/ShuckleIsland/scripts.pory"
	callnative ClearMugshot
# 478 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_1, ShuckleIsland_EventScript_hintNPC_42
	goto ShuckleIsland_EventScript_hintNPC_15

ShuckleIsland_EventScript_hintNPC_42:
# 480 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_1
# 481 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIsland_EventScript_hintNPC_15


ShuckleIsland_EventScript_NewMechNPC::
# 496 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 497 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 499 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIsland_EventScript_NewMechNPC_2
ShuckleIsland_EventScript_NewMechNPC_1:
# 506 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_NewMechNPC_Text_0
# 508 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_NewMechNPC_Text_1, 0
# 510 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 512 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_NewMechNPC_5
# 517 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_NewMechNPC_6
ShuckleIsland_EventScript_NewMechNPC_4:
# 523 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	end

ShuckleIsland_EventScript_NewMechNPC_2:
# 501 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 502 "data/maps/ShuckleIsland/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIsland_EventScript_NewMechNPC_1

ShuckleIsland_EventScript_NewMechNPC_5:
# 514 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_NewMechNPC_Text_2
	goto ShuckleIsland_EventScript_NewMechNPC_4

ShuckleIsland_EventScript_NewMechNPC_6:
# 519 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_NewMechNPC_Text_3
	goto ShuckleIsland_EventScript_NewMechNPC_4


ShuckleIsland_EventScript_Battle1a::
# 530 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_1, ShuckleIsland_EventScript_Battle1a_1
# 539 "data/maps/ShuckleIsland/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Battle1a_Intro_Short_text, Battle1a_Lose_text, ShuckleIsland_EventScript_PostBattle1a
	return

ShuckleIsland_EventScript_Battle1a_1:
# 532 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_STARTED_BATTLE_1
# 533 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_1_NPCS
# 534 "data/maps/ShuckleIsland/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Battle1a_Intro_text, Battle1a_Lose_text, ShuckleIsland_EventScript_PostBattle1a
	return


ShuckleIsland_EventScript_PostBattle1a::
# 547 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 548 "data/maps/ShuckleIsland/scripts.pory"
	special HealPlayerParty
# 549 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Battle1a_PostBattle_text
# 550 "data/maps/ShuckleIsland/scripts.pory"
	givemon SPECIES_SHEDINJA, 30, ITEM_CUSTAP_BERRY, ITEM_POKE_BALL, NATURE_BRAVE, 0, 2, 0, 252, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE, MOVE_NONE
# 551 "data/maps/ShuckleIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 552 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_PostBattle1a_Text_0
# 553 "data/maps/ShuckleIsland/scripts.pory"
	waitfanfare
# 554 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 6, ShuckleIsland_EventScript_PostBattle1a_Movement_0
# 555 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 556 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Battle1a_PostBattle2_text
# 557 "data/maps/ShuckleIsland/scripts.pory"
	waitmessage
# 558 "data/maps/ShuckleIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIsland_EventScript_getMunchlax_Movement_0
# 559 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 6, ShuckleIsland_EventScript_PostBattle1a_Movement_1
# 560 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_PostBattle1a_Text_1
# 561 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 562 "data/maps/ShuckleIsland/scripts.pory"
	removeobject 6
# 563 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_WON_BATTLE_1A
# 564 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
# 565 "data/maps/ShuckleIsland/scripts.pory"
	call ShuckleIsland_EventScript_Battle1b
	return


ShuckleIsland_EventScript_Battle1b::
# 571 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 572 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 7, ShuckleIsland_EventScript_Battle1b_Movement_0
# 573 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 574 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_STATE, 2
# 575 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
# 576 "data/maps/ShuckleIsland/scripts.pory"
	trainerbattle_single TRAINER_JOHNNY, Battle1b_Intro_text, Battle1b_Lose_text, ShuckleIsland_EventScript_PostBattle1b
	return


ShuckleIsland_EventScript_PostBattle1b::
# 582 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 583 "data/maps/ShuckleIsland/scripts.pory"
	special HealPlayerParty
# 584 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Battle1b_PostBattle_text
# 585 "data/maps/ShuckleIsland/scripts.pory"
	indexspeciesinparty SPECIES_SHEDINJA
# 586 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_PostBattle1b_2
# 591 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_PostBattle1b_3
ShuckleIsland_EventScript_PostBattle1b_1:
# 596 "data/maps/ShuckleIsland/scripts.pory"
	givemon SPECIES_GALLADE, 28, ITEM_NONE, ITEM_POKE_BALL, NATURE_LONELY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SKILL_SWAP, MOVE_MIMIC, MOVE_NONE, MOVE_NONE
# 597 "data/maps/ShuckleIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 598 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_PostBattle1b_Text_0
# 599 "data/maps/ShuckleIsland/scripts.pory"
	waitfanfare
# 600 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 7, ShuckleIsland_EventScript_getMunchlax_Movement_0
# 601 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 602 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_PostBattle1b_Text_1, MSGBOX_AUTOCLOSE
# 603 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 7, ShuckleIsland_EventScript_PostBattle1b_Movement_0
# 604 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 605 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_PostBattle1b_Text_2, MSGBOX_AUTOCLOSE
# 606 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 7, ShuckleIsland_EventScript_PostBattle1b_Movement_1
# 607 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 608 "data/maps/ShuckleIsland/scripts.pory"
	removeobject 7
# 609 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_WON_BATTLE_1B
# 610 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 9, 0x2FC, TRUE
# 611 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 9, 0x2FD, TRUE
# 612 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 10, 0x0AB, TRUE
# 613 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 10, 0x0AC, TRUE
# 614 "data/maps/ShuckleIsland/scripts.pory"
	special DrawWholeMapView
# 615 "data/maps/ShuckleIsland/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_BATTLE_2
# 616 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	return

ShuckleIsland_EventScript_PostBattle1b_2:
# 588 "data/maps/ShuckleIsland/scripts.pory"
	takemon 0
	goto ShuckleIsland_EventScript_PostBattle1b_1

ShuckleIsland_EventScript_PostBattle1b_3:
# 593 "data/maps/ShuckleIsland/scripts.pory"
	takemon 1
	goto ShuckleIsland_EventScript_PostBattle1b_1


ShuckleIsland_EventScript_setBattle2NPCs::
# 622 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_2, ShuckleIsland_EventScript_setBattle2NPCs_2
# 632 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set 0x6E1, ShuckleIsland_EventScript_setBattle2NPCs_3
# 639 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_2_NPCS
# 640 "data/maps/ShuckleIsland/scripts.pory"
	removeitemfrommon 0
# 641 "data/maps/ShuckleIsland/scripts.pory"
	removeitemfrommon 1
# 642 "data/maps/ShuckleIsland/scripts.pory"
	removeitem VAR_BATTLE2_BERRY
# 643 "data/maps/ShuckleIsland/scripts.pory"
	giveitemnojingle VAR_BATTLE2_BERRY, 1
# 644 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 9, 0x2FC, TRUE
# 645 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 9, 0x2FD, TRUE
# 646 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 10, 0x0AB, TRUE
# 647 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 10, 0x0AC, TRUE
# 648 "data/maps/ShuckleIsland/scripts.pory"
	special DrawWholeMapView
ShuckleIsland_EventScript_setBattle2NPCs_1:
# 652 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_SHUCKLE_ISLAND_STATE, 4
	goto_if_eq ShuckleIsland_EventScript_setBattle2NPCs_7
	return

ShuckleIsland_EventScript_setBattle2NPCs_2:
# 624 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SETUP_BATTLE_2_NPCS
# 625 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 9, 0x2FC, TRUE
# 626 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 9, 0x2FD, TRUE
# 627 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 10, 0x0AB, TRUE
# 628 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 10, 0x0AC, TRUE
# 629 "data/maps/ShuckleIsland/scripts.pory"
	special DrawWholeMapView
	goto ShuckleIsland_EventScript_setBattle2NPCs_1

ShuckleIsland_EventScript_setBattle2NPCs_3:
# 634 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SETUP_BATTLE_2_NPCS
	goto ShuckleIsland_EventScript_setBattle2NPCs_1

ShuckleIsland_EventScript_setBattle2NPCs_7:
# 654 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_STATE, 3
	return


ShuckleIsland_EventScript_FocusPunchTutor::
# 662 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 664 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_FOCUS_PUNCH_TUTOR, ShuckleIsland_EventScript_FocusPunchTutor_2
ShuckleIsland_EventScript_FocusPunchTutor_1:
# 673 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_FOCUS_PUNCH, ShuckleIsland_EventScript_FocusPunchTutor_5
# 705 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_WON_BATTLE_2, ShuckleIsland_EventScript_FocusPunchTutor_6
# 713 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 714 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_FocusPunchTutor_Text_3
ShuckleIsland_EventScript_FocusPunchTutor_4:
# 718 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 11, ShuckleIsland_EventScript_getMunchlax_Movement_0
# 719 "data/maps/ShuckleIsland/scripts.pory"
	release
	end

ShuckleIsland_EventScript_FocusPunchTutor_2:
# 666 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_FOCUS_PUNCH_TUTOR
# 667 "data/maps/ShuckleIsland/scripts.pory"
	msgbox FocusPunchTutorIntro1_text
# 668 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 669 "data/maps/ShuckleIsland/scripts.pory"
	msgbox FocusPunchTutorIntro2_text
	goto ShuckleIsland_EventScript_FocusPunchTutor_1

ShuckleIsland_EventScript_FocusPunchTutor_5:
# 675 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 676 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_FocusPunchTutor_Text_0, MSGBOX_YESNO
# 678 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIsland_EventScript_FocusPunchTutor_10
# 700 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_FocusPunchTutor_Text_2
	goto ShuckleIsland_EventScript_FocusPunchTutor_4

ShuckleIsland_EventScript_FocusPunchTutor_6:
# 707 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 708 "data/maps/ShuckleIsland/scripts.pory"
	msgbox FocusPunchTutorPostBattle2_text
	goto ShuckleIsland_EventScript_FocusPunchTutor_4

ShuckleIsland_EventScript_FocusPunchTutor_10:
# 680 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_FocusPunchTutor_Text_1
# 681 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_PUNCH
# 682 "data/maps/ShuckleIsland/scripts.pory"
	special ChooseMonForMoveTutor
# 683 "data/maps/ShuckleIsland/scripts.pory"
	waitstate
# 685 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_FocusPunchTutor_13
# 692 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_FOCUS_PUNCH
# 693 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_FocusPunchTutor_Text_3
	goto ShuckleIsland_EventScript_FocusPunchTutor_4

ShuckleIsland_EventScript_FocusPunchTutor_13:
# 687 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_FocusPunchTutor_Text_2
	goto ShuckleIsland_EventScript_FocusPunchTutor_4


ShuckleIsland_EventScript_berryGuy2::
# 726 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 727 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 729 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_BERRY_GUY_2, ShuckleIsland_EventScript_berryGuy2_2
ShuckleIsland_EventScript_berryGuy2_1:
# 736 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_2, ShuckleIsland_EventScript_berryGuy2_5
# 764 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_berryGuy_Text_7
ShuckleIsland_EventScript_berryGuy2_4:
# 768 "data/maps/ShuckleIsland/scripts.pory"
	release
	end

ShuckleIsland_EventScript_berryGuy2_2:
# 731 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_BERRY_GUY_2
# 732 "data/maps/ShuckleIsland/scripts.pory"
	msgbox berryGuyIntro2_text
	goto ShuckleIsland_EventScript_berryGuy2_1

ShuckleIsland_EventScript_berryGuy2_5:
# 738 "data/maps/ShuckleIsland/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 740 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_0, ITEM_LIECHI_BERRY
# 741 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_1, ITEM_GANLON_BERRY
# 742 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_2, ITEM_SALAC_BERRY
# 743 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_3, ITEM_PETAYA_BERRY
# 744 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_4, ITEM_APICOT_BERRY
# 745 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_berryGuy_Text_5, ITEM_LANSAT_BERRY
# 747 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 749 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_berryGuy2_8
# 756 "data/maps/ShuckleIsland/scripts.pory"
	copyvar VAR_BATTLE2_BERRY, VAR_RESULT
# 757 "data/maps/ShuckleIsland/scripts.pory"
	giveitem VAR_BATTLE2_BERRY, 1
# 758 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_2
	goto ShuckleIsland_EventScript_berryGuy2_4

ShuckleIsland_EventScript_berryGuy2_8:
# 751 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_berryGuy_Text_6
	goto ShuckleIsland_EventScript_berryGuy2_4


ShuckleIsland_EventScript_resetNPC2::
# 775 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 776 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 778 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_RESET_NPC, ShuckleIsland_EventScript_resetNPC2_2
ShuckleIsland_EventScript_resetNPC2_1:
# 785 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_2, ShuckleIsland_EventScript_resetNPC2_7
ShuckleIsland_EventScript_resetNPC2_6:
# 792 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_0
# 794 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_2, ShuckleIsland_EventScript_resetNPC2_11
ShuckleIsland_EventScript_resetNPC2_10:
# 800 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_FOCUS_PUNCH, ShuckleIsland_EventScript_resetNPC2_14
ShuckleIsland_EventScript_resetNPC2_13:
# 806 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_2, ShuckleIsland_EventScript_resetNPC2_18
ShuckleIsland_EventScript_resetNPC2_16:
# 812 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 814 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_resetNPC2_21
# 821 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_5, MSGBOX_AUTOCLOSE
# 822 "data/maps/ShuckleIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 824 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_resetNPC2_25
# 829 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_resetNPC2_26
# 834 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIsland_EventScript_resetNPC2_27
ShuckleIsland_EventScript_resetNPC2_24:
# 841 "data/maps/ShuckleIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 842 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_6
ShuckleIsland_EventScript_resetNPC2_4:
# 848 "data/maps/ShuckleIsland/scripts.pory"
	release
	end

ShuckleIsland_EventScript_resetNPC2_2:
# 780 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_RESET_NPC
# 781 "data/maps/ShuckleIsland/scripts.pory"
	msgbox resetNPCIntro_text
	goto ShuckleIsland_EventScript_resetNPC2_1

ShuckleIsland_EventScript_resetNPC2_5:
# 787 "data/maps/ShuckleIsland/scripts.pory"
	msgbox resetNPCNothingToReset_text
	goto ShuckleIsland_EventScript_resetNPC2_4

ShuckleIsland_EventScript_resetNPC2_7:
# 785 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_FOCUS_PUNCH, ShuckleIsland_EventScript_resetNPC2_5
	goto ShuckleIsland_EventScript_resetNPC2_6

ShuckleIsland_EventScript_resetNPC2_11:
# 796 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_resetNPC_Text_1, 0
	goto ShuckleIsland_EventScript_resetNPC2_10

ShuckleIsland_EventScript_resetNPC2_14:
# 802 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_resetNPC2_Text_0, 1
	goto ShuckleIsland_EventScript_resetNPC2_13

ShuckleIsland_EventScript_resetNPC2_17:
# 808 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_resetNPC_Text_3, 2
	goto ShuckleIsland_EventScript_resetNPC2_16

ShuckleIsland_EventScript_resetNPC2_18:
# 806 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_FOCUS_PUNCH, ShuckleIsland_EventScript_resetNPC2_17
	goto ShuckleIsland_EventScript_resetNPC2_16

ShuckleIsland_EventScript_resetNPC2_21:
# 816 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_resetNPC_Text_4
	goto ShuckleIsland_EventScript_resetNPC2_4

ShuckleIsland_EventScript_resetNPC2_25:
# 826 "data/maps/ShuckleIsland/scripts.pory"
	call ResetBerry_2
	goto ShuckleIsland_EventScript_resetNPC2_24

ShuckleIsland_EventScript_resetNPC2_26:
# 831 "data/maps/ShuckleIsland/scripts.pory"
	call ResetFocusPunch
	goto ShuckleIsland_EventScript_resetNPC2_24

ShuckleIsland_EventScript_resetNPC2_27:
# 836 "data/maps/ShuckleIsland/scripts.pory"
	call ResetBerry_2
# 837 "data/maps/ShuckleIsland/scripts.pory"
	call ResetFocusPunch
	goto ShuckleIsland_EventScript_resetNPC2_24


ShuckleIsland_EventScript_hintNPC2::
# 855 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 856 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 858 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIsland_EventScript_hintNPC2_2
ShuckleIsland_EventScript_hintNPC2_1:
# 865 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_hintNPC_Text_0
# 867 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIsland_EventScript_hintNPC2_5
# 874 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_2, 0
ShuckleIsland_EventScript_hintNPC2_4:
# 878 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_3, 1
# 879 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_4, 2
# 880 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_5, 3
# 882 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_11
ShuckleIsland_EventScript_hintNPC2_8:
# 888 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 890 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_16
# 895 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_17
# 901 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_18
# 913 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_19
# 925 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_20
# 937 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_21
ShuckleIsland_EventScript_hintNPC2_15:
# 973 "data/maps/ShuckleIsland/scripts.pory"
	release
	end

ShuckleIsland_EventScript_hintNPC2_2:
# 860 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 861 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIsland_EventScript_hintNPC2_1

ShuckleIsland_EventScript_hintNPC2_5:
# 869 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_1, 0
	goto ShuckleIsland_EventScript_hintNPC2_4

ShuckleIsland_EventScript_hintNPC2_9:
# 884 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_hintNPC_Text_6, 4
	goto ShuckleIsland_EventScript_hintNPC2_8

ShuckleIsland_EventScript_hintNPC2_10:
# 882 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_LRG_HINT_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_9
	goto ShuckleIsland_EventScript_hintNPC2_8

ShuckleIsland_EventScript_hintNPC2_11:
# 882 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_10
	goto ShuckleIsland_EventScript_hintNPC2_8

ShuckleIsland_EventScript_hintNPC2_16:
# 892 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_17:
# 897 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCAboutHints_text
# 898 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_18:
# 903 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCBattle2SmallHint_text
# 905 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_28
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_19:
# 915 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCBattle2MedHint_text
# 917 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_30
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_20:
# 927 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCBattle2LargeHint_text
# 929 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_32
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_21:
# 939 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_35
# 946 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIsland_EventScript_hintNPC2_34:
# 950 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_38
# 955 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIsland_EventScript_hintNPC2_39
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_28:
# 907 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_2
# 908 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_30:
# 919 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_2
# 920 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_32:
# 931 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_LRG_HINT_BATTLE_2
# 932 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_35:
# 941 "data/maps/ShuckleIsland/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIsland_EventScript_hintNPC2_34

ShuckleIsland_EventScript_hintNPC2_38:
# 952 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_hintNPC_Text_7
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_39:
# 957 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_2
# 958 "data/maps/ShuckleIsland/scripts.pory"
	callnative DrawMugshot
# 959 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_hintNPC2_Text_0
# 960 "data/maps/ShuckleIsland/scripts.pory"
	callnative ClearMugshot
# 962 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_2, ShuckleIsland_EventScript_hintNPC2_42
	goto ShuckleIsland_EventScript_hintNPC2_15

ShuckleIsland_EventScript_hintNPC2_42:
# 964 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_2
# 965 "data/maps/ShuckleIsland/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIsland_EventScript_hintNPC2_15


ShuckleIsland_EventScript_NewMechNPC2::
# 980 "data/maps/ShuckleIsland/scripts.pory"
	lock
# 981 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 983 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIsland_EventScript_NewMechNPC2_2
ShuckleIsland_EventScript_NewMechNPC2_1:
# 990 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_NewMechNPC_Text_0
# 992 "data/maps/ShuckleIsland/scripts.pory"
	dynmultipush ShuckleIsland_EventScript_NewMechNPC2_Text_0, 0
# 994 "data/maps/ShuckleIsland/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 996 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIsland_EventScript_NewMechNPC2_5
# 1001 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIsland_EventScript_NewMechNPC2_6
ShuckleIsland_EventScript_NewMechNPC2_4:
# 1007 "data/maps/ShuckleIsland/scripts.pory"
	release
	end

ShuckleIsland_EventScript_NewMechNPC2_2:
# 985 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 986 "data/maps/ShuckleIsland/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIsland_EventScript_NewMechNPC2_1

ShuckleIsland_EventScript_NewMechNPC2_5:
# 998 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_NewMechNPC_Text_2
	goto ShuckleIsland_EventScript_NewMechNPC2_4

ShuckleIsland_EventScript_NewMechNPC2_6:
# 1003 "data/maps/ShuckleIsland/scripts.pory"
	msgbox minunAI_text
	goto ShuckleIsland_EventScript_NewMechNPC2_4


ShuckleIsland_EventScript_Battle2_Amy::
# 1014 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 1015 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 1017 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_WON_BATTLE_2, ShuckleIsland_EventScript_Battle2_Amy_1
# 1025 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_STATE, 4
# 1026 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
# 1028 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_2, ShuckleIsland_EventScript_Battle2_Amy_4
# 1037 "data/maps/ShuckleIsland/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Battle2_Amy_Intro_text, Battle2_Lose_text, Not_Enough_text, ShuckleIsland_EventScript_PostBattle2
	return

ShuckleIsland_EventScript_Battle2_Amy_1:
# 1019 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Battle2_Post_Battle_text, MSGBOX_AUTOCLOSE
# 1020 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	return

ShuckleIsland_EventScript_Battle2_Amy_4:
# 1030 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_STARTED_BATTLE_2
# 1031 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_2_NPCS
# 1032 "data/maps/ShuckleIsland/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Battle2_Intro_text, Battle2_Lose_text, Not_Enough_text, ShuckleIsland_EventScript_PostBattle2
	return


ShuckleIsland_EventScript_Battle2_Liv::
# 1047 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 1048 "data/maps/ShuckleIsland/scripts.pory"
	faceplayer
# 1050 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_WON_BATTLE_2, ShuckleIsland_EventScript_Battle2_Liv_1
# 1058 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_STATE, 4
# 1059 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
# 1061 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_2, ShuckleIsland_EventScript_Battle2_Liv_4
# 1070 "data/maps/ShuckleIsland/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Battle2_Liv_Intro_text, Battle2_Lose_text, Not_Enough_text, ShuckleIsland_EventScript_PostBattle2
	return

ShuckleIsland_EventScript_Battle2_Liv_1:
# 1052 "data/maps/ShuckleIsland/scripts.pory"
	msgbox Battle2_Post_Battle_text, MSGBOX_AUTOCLOSE
# 1053 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	return

ShuckleIsland_EventScript_Battle2_Liv_4:
# 1063 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_STARTED_BATTLE_2
# 1064 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_2_NPCS
# 1065 "data/maps/ShuckleIsland/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Battle2_Intro_text, Battle2_Lose_text, Not_Enough_text, ShuckleIsland_EventScript_PostBattle2
	return


ShuckleIsland_EventScript_PostBattle2::
# 1080 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 1081 "data/maps/ShuckleIsland/scripts.pory"
	special HealPlayerParty
# 1082 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 9, 0x11C, FALSE
# 1083 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 9, 0x11C, FALSE
# 1084 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 44, 10, 0x124, FALSE
# 1085 "data/maps/ShuckleIsland/scripts.pory"
	setmetatile 45, 10, 0x124, FALSE
# 1086 "data/maps/ShuckleIsland/scripts.pory"
	special DrawWholeMapView
# 1087 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_WON_BATTLE_2
# 1088 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_SETUP_BATTLE_3_NPCS
# 1089 "data/maps/ShuckleIsland/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_CAVE_ICE_F1
# 1090 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	return


ShuckleIsland_EventScript_Brothers::
# 1097 "data/maps/ShuckleIsland/scripts.pory"
	lockall
# 1099 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_SAILOR_DIED, ShuckleIsland_EventScript_Brothers_12
ShuckleIsland_EventScript_Brothers_10:
# 1119 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_TEMP_1A, ShuckleIsland_EventScript_Brothers_3
# 1119 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_set FLAG_TEMP_1D, ShuckleIsland_EventScript_Brothers_3
# 1141 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_TEMP_1B, ShuckleIsland_EventScript_Brothers_4
# 1158 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_TEMP_1C, ShuckleIsland_EventScript_Brothers_5
# 1177 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_TEMP_1D
# 1178 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_TEMP_1E
# 1179 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1180 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1181 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_17
# 1182 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1183 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1184 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_18
# 1185 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1186 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1187 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_19
# 1188 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_3
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_4
# 1190 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1191 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_getMunchlax_Movement_0
# 1192 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_getMunchlax_Movement_0
# 1193 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
ShuckleIsland_EventScript_Brothers_1:
# 1197 "data/maps/ShuckleIsland/scripts.pory"
	releaseall
	return

ShuckleIsland_EventScript_Brothers_2:
# 1101 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_TEMP_1E
# 1102 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1103 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1104 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_0
# 1105 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1106 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1107 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_1
# 1108 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1109 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1110 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_2
# 1111 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1112 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1113 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_3
# 1114 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1115 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1116 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_4
	goto ShuckleIsland_EventScript_Brothers_1

ShuckleIsland_EventScript_Brothers_3:
# 1121 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_TEMP_1A
# 1122 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_TEMP_1B
# 1123 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_TEMP_1C
# 1124 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_TEMP_1D
# 1125 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1126 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1127 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_5
# 1128 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1129 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1130 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_6
# 1131 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_1
# 1132 "data/maps/ShuckleIsland/scripts.pory"
	playse SE_PIN
# 1133 "data/maps/ShuckleIsland/scripts.pory"
	waitse
# 1134 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_7
# 1135 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_2
# 1136 "data/maps/ShuckleIsland/scripts.pory"
	playse SE_LEDGE
# 1137 "data/maps/ShuckleIsland/scripts.pory"
	waitse
# 1138 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_8
	goto ShuckleIsland_EventScript_Brothers_1

ShuckleIsland_EventScript_Brothers_4:
# 1143 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_TEMP_1B
# 1144 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1145 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1146 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_9
# 1147 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1148 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1149 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_10
# 1150 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1151 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1152 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_11
# 1153 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1154 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1155 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_12
	goto ShuckleIsland_EventScript_Brothers_1

ShuckleIsland_EventScript_Brothers_5:
# 1160 "data/maps/ShuckleIsland/scripts.pory"
	setflag FLAG_TEMP_1C
# 1161 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1162 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1163 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_13
# 1164 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1165 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1166 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_14
# 1167 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 15, ShuckleIsland_EventScript_Brothers_Movement_0
# 1168 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1169 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_15
# 1170 "data/maps/ShuckleIsland/scripts.pory"
	applymovement 14, ShuckleIsland_EventScript_Brothers_Movement_0
# 1171 "data/maps/ShuckleIsland/scripts.pory"
	waitmovement
# 1172 "data/maps/ShuckleIsland/scripts.pory"
	msgbox ShuckleIsland_EventScript_Brothers_Text_16
	goto ShuckleIsland_EventScript_Brothers_1

ShuckleIsland_EventScript_Brothers_12:
# 1099 "data/maps/ShuckleIsland/scripts.pory"
	goto_if_unset FLAG_TEMP_1E, ShuckleIsland_EventScript_Brothers_2
	goto ShuckleIsland_EventScript_Brothers_10


ResetBerry_1::
# 1203 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_RECEIVED_BERRY_1
# 1204 "data/maps/ShuckleIsland/scripts.pory"
	removeitemfrommon 0
# 1205 "data/maps/ShuckleIsland/scripts.pory"
	removeitem VAR_BATTLE1_BERRY
# 1206 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_BATTLE1_BERRY, 0
	return


ResetTM_1::
# 1212 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_RECEIVED_TM_1
# 1213 "data/maps/ShuckleIsland/scripts.pory"
	removeitemfrommon 0
# 1214 "data/maps/ShuckleIsland/scripts.pory"
	removeallitem ITEM_TM17
# 1215 "data/maps/ShuckleIsland/scripts.pory"
	removeallitem ITEM_TM56
# 1216 "data/maps/ShuckleIsland/scripts.pory"
	removeallitem ITEM_TM83
# 1217 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 0, MOVE_RECYCLE
# 1218 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 1, MOVE_DEFENSE_CURL
# 1219 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 2, MOVE_NONE
# 1220 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 3, MOVE_NONE
# 1221 "data/maps/ShuckleIsland/scripts.pory"
	removeitem VAR_BATTLE1_BERRY
# 1222 "data/maps/ShuckleIsland/scripts.pory"
	GiveItemToMon 0, VAR_BATTLE1_BERRY
	return


ResetBerry_2::
# 1228 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_RECEIVED_BERRY_2
# 1229 "data/maps/ShuckleIsland/scripts.pory"
	removeitemfrommon 0
# 1230 "data/maps/ShuckleIsland/scripts.pory"
	removeitemfrommon 1
# 1231 "data/maps/ShuckleIsland/scripts.pory"
	removeitem VAR_BATTLE2_BERRY
# 1232 "data/maps/ShuckleIsland/scripts.pory"
	setvar VAR_BATTLE2_BERRY, 0
	return


ResetFocusPunch::
# 1238 "data/maps/ShuckleIsland/scripts.pory"
	clearflag FLAG_FOCUS_PUNCH
# 1240 "data/maps/ShuckleIsland/scripts.pory"
	indexspeciesinparty SPECIES_MUNCHLAX
# 1241 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResetFocusPunch_1
# 1254 "data/maps/ShuckleIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ResetFocusPunch_2
	return

ResetFocusPunch_1:
# 1243 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 0, MOVE_RECYCLE
# 1244 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 1, MOVE_DEFENSE_CURL
# 1245 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 2, MOVE_NATURAL_GIFT
# 1246 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 3, MOVE_NONE
# 1248 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 0, MOVE_SKILL_SWAP
# 1249 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 1, MOVE_MIMIC
# 1250 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 2, MOVE_NONE
# 1251 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 3, MOVE_NONE
	return

ResetFocusPunch_2:
# 1256 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 0, MOVE_RECYCLE
# 1257 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 1, MOVE_DEFENSE_CURL
# 1258 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 2, MOVE_NATURAL_GIFT
# 1259 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 1, 3, MOVE_NONE
# 1261 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 0, MOVE_SKILL_SWAP
# 1262 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 1, MOVE_MIMIC
# 1263 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 2, MOVE_NONE
# 1264 "data/maps/ShuckleIsland/scripts.pory"
	setmonmove 0, 3, MOVE_NONE
	return


# 43 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_getMunchlax_Movement_0:
# 43 "data/maps/ShuckleIsland/scripts.pory"
	face_right
	step_end

# 45 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_getMunchlax_Movement_1:
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 45 "data/maps/ShuckleIsland/scripts.pory"
	face_player
	step_end

# 47 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_getMunchlax_Movement_2:
# 47 "data/maps/ShuckleIsland/scripts.pory"
	face_left
	step_end

# 48 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_getMunchlax_Movement_3:
# 48 "data/maps/ShuckleIsland/scripts.pory"
	emote_exclamation_mark
# 48 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 48 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 48 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 48 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
	step_end

# 51 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_getMunchlax_Movement_4:
# 51 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 51 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 51 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 51 "data/maps/ShuckleIsland/scripts.pory"
	face_down
	step_end

# 53 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_getMunchlax_Movement_5:
# 53 "data/maps/ShuckleIsland/scripts.pory"
	face_up
	step_end

# 98 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_getMunchlax_Movement_6:
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	face_right
# 98 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 98 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 98 "data/maps/ShuckleIsland/scripts.pory"
	face_left
# 98 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 98 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 98 "data/maps/ShuckleIsland/scripts.pory"
	face_up
# 98 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 98 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_up
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_up
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_up
# 98 "data/maps/ShuckleIsland/scripts.pory"
	walk_up
	step_end

# 554 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_PostBattle1a_Movement_0:
# 554 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 554 "data/maps/ShuckleIsland/scripts.pory"
	face_up
	step_end

# 559 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_PostBattle1a_Movement_1:
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
# 559 "data/maps/ShuckleIsland/scripts.pory"
	walk_fast_right
	step_end

# 572 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_Battle1b_Movement_0:
# 572 "data/maps/ShuckleIsland/scripts.pory"
	walk_down
# 572 "data/maps/ShuckleIsland/scripts.pory"
	walk_down
# 572 "data/maps/ShuckleIsland/scripts.pory"
	face_left
	step_end

# 603 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_PostBattle1b_Movement_0:
# 603 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 603 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 603 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
	step_end

# 606 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_PostBattle1b_Movement_1:
# 606 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 606 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 606 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 606 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
# 606 "data/maps/ShuckleIsland/scripts.pory"
	walk_right
	step_end

# 1102 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_Brothers_Movement_0:
# 1102 "data/maps/ShuckleIsland/scripts.pory"
	walk_in_place_right
# 1102 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1102 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
	step_end

# 1131 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_Brothers_Movement_1:
# 1131 "data/maps/ShuckleIsland/scripts.pory"
	emote_exclamation_mark
# 1131 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1131 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
	step_end

# 1135 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_Brothers_Movement_2:
# 1135 "data/maps/ShuckleIsland/scripts.pory"
	jump_in_place_right
# 1135 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1135 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
	step_end

# 1188 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_Brothers_Movement_3:
# 1188 "data/maps/ShuckleIsland/scripts.pory"
	face_down
	step_end

# 1189 "data/maps/ShuckleIsland/scripts.pory"
ShuckleIsland_EventScript_Brothers_Movement_4:
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	face_down
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
# 1189 "data/maps/ShuckleIsland/scripts.pory"
	delay_16
	step_end

ShuckleIsland_EventScript_getMunchlax_Text_0:
# 40 "data/maps/ShuckleIsland/scripts.pory"
	.string "You awaken on a strange island.$"

ShuckleIsland_EventScript_getMunchlax_Text_1:
# 95 "data/maps/ShuckleIsland/scripts.pory"
	.string "Munchlax joined your party!$"

ShuckleIsland_EventScript_berryGuy_Text_0:
# 202 "data/maps/ShuckleIsland/scripts.pory"
	.string "Liechi Berry$"

ShuckleIsland_EventScript_berryGuy_Text_1:
# 203 "data/maps/ShuckleIsland/scripts.pory"
	.string "Ganlon Berry$"

ShuckleIsland_EventScript_berryGuy_Text_2:
# 204 "data/maps/ShuckleIsland/scripts.pory"
	.string "Salac Berry$"

ShuckleIsland_EventScript_berryGuy_Text_3:
# 205 "data/maps/ShuckleIsland/scripts.pory"
	.string "Petaya Berry$"

ShuckleIsland_EventScript_berryGuy_Text_4:
# 206 "data/maps/ShuckleIsland/scripts.pory"
	.string "Apicot Berry$"

ShuckleIsland_EventScript_berryGuy_Text_5:
# 207 "data/maps/ShuckleIsland/scripts.pory"
	.string "Lansat Berry$"

ShuckleIsland_EventScript_berryGuy_Text_6:
# 213 "data/maps/ShuckleIsland/scripts.pory"
	.string "Come back when you know\nwhich berry you want!$"

ShuckleIsland_EventScript_berryGuy_Text_7:
# 226 "data/maps/ShuckleIsland/scripts.pory"
	.string "I hope you make good use of that berry!$"

ShuckleIsland_EventScript_TMGuy_Text_0:
# 261 "data/maps/ShuckleIsland/scripts.pory"
	.string "TM56 Fling$"

ShuckleIsland_EventScript_TMGuy_Text_1:
# 262 "data/maps/ShuckleIsland/scripts.pory"
	.string "TM83 Natural Gift$"

ShuckleIsland_EventScript_TMGuy_Text_2:
# 268 "data/maps/ShuckleIsland/scripts.pory"
	.string "Come back when you know\nwhich TM you want!$"

ShuckleIsland_EventScript_TMGuy_Text_3:
# 280 "data/maps/ShuckleIsland/scripts.pory"
	.string "Teach that TM to Munchlax and\ndefeat those brothers!$"

ShuckleIsland_EventScript_resetNPC_Text_0:
# 308 "data/maps/ShuckleIsland/scripts.pory"
	.string "What would you like to reset?\n(Press B to exit)$"

ShuckleIsland_EventScript_resetNPC_Text_1:
# 312 "data/maps/ShuckleIsland/scripts.pory"
	.string "Reset Berry$"

ShuckleIsland_EventScript_resetNPC_Text_2:
# 318 "data/maps/ShuckleIsland/scripts.pory"
	.string "Reset TM$"

ShuckleIsland_EventScript_resetNPC_Text_3:
# 324 "data/maps/ShuckleIsland/scripts.pory"
	.string "Reset All$"

ShuckleIsland_EventScript_resetNPC_Text_4:
# 332 "data/maps/ShuckleIsland/scripts.pory"
	.string "Come back if you would ever\nlike to reset your actions!$"

ShuckleIsland_EventScript_resetNPC_Text_5:
# 337 "data/maps/ShuckleIsland/scripts.pory"
	.string "One moment while I reset your actions.$"

ShuckleIsland_EventScript_resetNPC_Text_6:
# 358 "data/maps/ShuckleIsland/scripts.pory"
	.string "Your actions have been reset!$"

ShuckleIsland_EventScript_hintNPC_Text_0:
# 381 "data/maps/ShuckleIsland/scripts.pory"
	.string "Now then, what hints can I offer you?\n(Press B to exit)$"

ShuckleIsland_EventScript_hintNPC_Text_1:
# 385 "data/maps/ShuckleIsland/scripts.pory"
	.string "About Hints (read me!)$"

ShuckleIsland_EventScript_hintNPC_Text_2:
# 390 "data/maps/ShuckleIsland/scripts.pory"
	.string "About Hints$"

ShuckleIsland_EventScript_hintNPC_Text_3:
# 394 "data/maps/ShuckleIsland/scripts.pory"
	.string "Small Hint$"

ShuckleIsland_EventScript_hintNPC_Text_4:
# 395 "data/maps/ShuckleIsland/scripts.pory"
	.string "Medium Hint$"

ShuckleIsland_EventScript_hintNPC_Text_5:
# 396 "data/maps/ShuckleIsland/scripts.pory"
	.string "Large Hint$"

ShuckleIsland_EventScript_hintNPC_Text_6:
# 400 "data/maps/ShuckleIsland/scripts.pory"
	.string "Solution$"

ShuckleIsland_EventScript_hintNPC_Text_7:
# 468 "data/maps/ShuckleIsland/scripts.pory"
	.string "Understood.\pKeep trying, and come back\nif you feel you need the solution.$"

ShuckleIsland_EventScript_hintNPC_Text_8:
# 475 "data/maps/ShuckleIsland/scripts.pory"
	.string "https://youtu.be/MW4LPPMXSjE$"

ShuckleIsland_EventScript_NewMechNPC_Text_0:
# 506 "data/maps/ShuckleIsland/scripts.pory"
	.string "Now then, what new mechanics do\nyou want explained? (Press B to exit)$"

ShuckleIsland_EventScript_NewMechNPC_Text_1:
# 508 "data/maps/ShuckleIsland/scripts.pory"
	.string "Skill Swap$"

ShuckleIsland_EventScript_NewMechNPC_Text_2:
# 514 "data/maps/ShuckleIsland/scripts.pory"
	.string "Stop by if you ever want\nthe new mechanics explained again!$"

ShuckleIsland_EventScript_NewMechNPC_Text_3:
# 519 "data/maps/ShuckleIsland/scripts.pory"
	.string "Skill Swap can now be used\nto swap the ability Wonder Guard.$"

ShuckleIsland_EventScript_PostBattle1a_Text_0:
# 552 "data/maps/ShuckleIsland/scripts.pory"
	.string "You received Timmy's Shedinja…\nbut you don't feel great about it.$"

ShuckleIsland_EventScript_PostBattle1a_Text_1:
# 560 "data/maps/ShuckleIsland/scripts.pory"
	.string "WAAAAAAH!$"

ShuckleIsland_EventScript_PostBattle1b_Text_0:
# 598 "data/maps/ShuckleIsland/scripts.pory"
	.string "You returned Timmy's Shedinja\nand received Johnny's Gallade!$"

ShuckleIsland_EventScript_PostBattle1b_Text_1:
# 602 "data/maps/ShuckleIsland/scripts.pory"
	.string "HEY TIMMY, I GOT YOUR SHEDINJA BACK!$"

ShuckleIsland_EventScript_PostBattle1b_Text_2:
# 605 "data/maps/ShuckleIsland/scripts.pory"
	.string "I should probably teach him how to\nproperly choose held items sometime…$"

ShuckleIsland_EventScript_FocusPunchTutor_Text_0:
# 676 "data/maps/ShuckleIsland/scripts.pory"
	.string "Now then, should I teach Focus Punch\nto one of your Pokémon?$"

ShuckleIsland_EventScript_FocusPunchTutor_Text_1:
# 680 "data/maps/ShuckleIsland/scripts.pory"
	.string "Alright, which Pokémon\nshould learn Focus Punch?$"

ShuckleIsland_EventScript_FocusPunchTutor_Text_2:
# 687 "data/maps/ShuckleIsland/scripts.pory"
	.string "Alright, well you know where to find me\nif you change your mind.\pNot like we're going anywhere…$"

ShuckleIsland_EventScript_FocusPunchTutor_Text_3:
# 693 "data/maps/ShuckleIsland/scripts.pory"
	.string "Now give those girls a solid punching!\pEr…I mean their Pokémon…$"

ShuckleIsland_EventScript_resetNPC2_Text_0:
# 802 "data/maps/ShuckleIsland/scripts.pory"
	.string "Reset Focus Punch$"

ShuckleIsland_EventScript_hintNPC2_Text_0:
# 959 "data/maps/ShuckleIsland/scripts.pory"
	.string "https://youtu.be/cGvrpLpmC9A$"

ShuckleIsland_EventScript_NewMechNPC2_Text_0:
# 992 "data/maps/ShuckleIsland/scripts.pory"
	.string "Minun AI$"

ShuckleIsland_EventScript_Brothers_Text_0:
# 1104 "data/maps/ShuckleIsland/scripts.pory"
	.string "So, Timmy? What did you end up doing\nwith that Lagging Tail?$"

ShuckleIsland_EventScript_Brothers_Text_1:
# 1107 "data/maps/ShuckleIsland/scripts.pory"
	.string "I couldn't find a good use for it,\nso I gave the tail to a sailor.\pI thought he would look good with it.$"

ShuckleIsland_EventScript_Brothers_Text_2:
# 1110 "data/maps/ShuckleIsland/scripts.pory"
	.string "Well, did he?$"

ShuckleIsland_EventScript_Brothers_Text_3:
# 1113 "data/maps/ShuckleIsland/scripts.pory"
	.string "No, he didn't. But don't worry.\pI don't think anyone will have to\nsee that ugly tail ever again!$"

ShuckleIsland_EventScript_Brothers_Text_4:
# 1116 "data/maps/ShuckleIsland/scripts.pory"
	.string "Whatever you say, Timmy…$"

ShuckleIsland_EventScript_Brothers_Text_5:
# 1127 "data/maps/ShuckleIsland/scripts.pory"
	.string "Hey, did you actually give away your\nGallade just to get my Shedinja back?$"

ShuckleIsland_EventScript_Brothers_Text_6:
# 1130 "data/maps/ShuckleIsland/scripts.pory"
	.string "Kind of. It was an extra Gallade I had\nthat I didn't even EV train.$"

ShuckleIsland_EventScript_Brothers_Text_7:
# 1134 "data/maps/ShuckleIsland/scripts.pory"
	.string "Wow, you're training an Eevee?\nWhat do you want it to evolve into?\pBased on all those pictures you have,\nI guess you want a Vaporeon?$"

ShuckleIsland_EventScript_Brothers_Text_8:
# 1138 "data/maps/ShuckleIsland/scripts.pory"
	.string "Timmy! I told you to stay out\nof my private drawer!$"

ShuckleIsland_EventScript_Brothers_Text_9:
# 1146 "data/maps/ShuckleIsland/scripts.pory"
	.string "So now do you see why it could be good\nto give your Shedinja a choice item?$"

ShuckleIsland_EventScript_Brothers_Text_10:
# 1149 "data/maps/ShuckleIsland/scripts.pory"
	.string "No! Why would I want to lock my Shedinja\ninto only using a single move?$"

ShuckleIsland_EventScript_Brothers_Text_11:
# 1152 "data/maps/ShuckleIsland/scripts.pory"
	.string "Timmy, your Shedinja\nonly knows Bug Bite…$"

ShuckleIsland_EventScript_Brothers_Text_12:
# 1155 "data/maps/ShuckleIsland/scripts.pory"
	.string "Ok! I'll give my Shedinja Choice Specs.\nThanks, Johnny!$"

ShuckleIsland_EventScript_Brothers_Text_13:
# 1163 "data/maps/ShuckleIsland/scripts.pory"
	.string "So, now do you understand why your\nShedinja shouldn't hold a Custap Berry?$"

ShuckleIsland_EventScript_Brothers_Text_14:
# 1166 "data/maps/ShuckleIsland/scripts.pory"
	.string "Because it doesn't like\nthe sweet flavor of the berry?$"

ShuckleIsland_EventScript_Brothers_Text_15:
# 1169 "data/maps/ShuckleIsland/scripts.pory"
	.string "Well, that's technically true,\nbut it's not the reason-$"

ShuckleIsland_EventScript_Brothers_Text_16:
# 1172 "data/maps/ShuckleIsland/scripts.pory"
	.string "Haha! I got something right!$"

ShuckleIsland_EventScript_Brothers_Text_17:
# 1181 "data/maps/ShuckleIsland/scripts.pory"
	.string "Do you think they got the\nTimmy, Johnny, Spike reference?$"

ShuckleIsland_EventScript_Brothers_Text_18:
# 1184 "data/maps/ShuckleIsland/scripts.pory"
	.string "Probably not. I don't even get it!$"

ShuckleIsland_EventScript_Brothers_Text_19:
# 1187 "data/maps/ShuckleIsland/scripts.pory"
	.string "Yeah, and they're probably\ntoo lazy to look it up.\pLet's just hope they're not as lazy\nabout looking up things on Bulbapedia.$"

Munchlax_text::
# 1270 "data/maps/ShuckleIsland/scripts.pory"
	.string "Munchlax looks tired and unsettled,\n"
	.string "as if it were being chased.\p"
	.string "It seems to feel safe with you, though.\p"
	.string "In fact…$"

Sign1_text::
# 1279 "data/maps/ShuckleIsland/scripts.pory"
	.string "Escape From Shuckle Island\n"
	.string "Mechanics and Tips:\p"
	.string "1) All mechanics, movesets, types, etc.\n"
	.string "follow Gen IV rules.\p"
	.string "2) ALL forms of randomness\n"
	.string "have been removed.\p"
	.string "This includes: opponent move selection,\n"
	.string "move accuracies, secondary effects,\l"
	.string "move/effect durations, and more!\p"
	.string "3) Most battles use custom trainer AI.\p"
	.string "Where necessary, an NPC will explain\n"
	.string "the AI behavior for the nearby battle.\p"
	.string "4) Battles do not award EXP or EVs.\p"
	.string "Fixed EV and IV values can be viewed on\n"
	.string "the skills summary page by pressing A.\p"
	.string "5) All damage rolls deal maximum damage.\p"
	.string "This can be helpful if you ever\n"
	.string "want to run a damage calculation!\p"
	.string "6) Save states are never required.\n"
	.string "An NPC can reset any choices you make.\p"
	.string "7) When stuck, look up Gen IV mechanics\n"
	.string "for all relevant moves on Bulbapedia.$"

Sign2_text::
# 1306 "data/maps/ShuckleIsland/scripts.pory"
	.string "There are no hidden items in this game.\p"
	.string "But feel free to waste your time\n"
	.string "by pressing A on everything!$"

fatMan_text::
# 1314 "data/maps/ShuckleIsland/scripts.pory"
	.string "Hmm, your Munchlax…\n"
	.string "It has such a strange ability!\p"
	.string "I've only ever seen Munchlax with\n"
	.string "Pickup or Thick Fat before.\p"
	.string "Could this be the Munchlax\n"
	.string "Team Shuckle is after?$"

berryGuyIntro_text::
# 1325 "data/maps/ShuckleIsland/scripts.pory"
	.string "I'm just a simple a berry salesman\n"
	.string "trying to leave this island,\l"
	.string "but two brothers won't let anyone pass!\p"
	.string "I'll let you take a berry from my supply\n"
	.string "if you think it will aid you in battle.$"

berryGuyShortIntro_text::
# 1335 "data/maps/ShuckleIsland/scripts.pory"
	.string "I'm just a simple a berry salesman\n"
	.string "trying to leave this island,\l"
	.string "but two brothers won't let anyone pass!\p"
	.string "I'll let you take a berry from my supply\n"
	.string "if you think it will aid you in battle.$"

berryGuyPresentOptions_text::
# 1345 "data/maps/ShuckleIsland/scripts.pory"
	.string "Take a berry, but choose carefully!\n"
	.string "You can only take one. (Press B to exit)$"

TMGuyIntro_text::
# 1352 "data/maps/ShuckleIsland/scripts.pory"
	.string "Hey there! I'm a wandering TM salesman.\p"
	.string "I can give you a TM to help you defeat\n"
	.string "the brothers blocking the nearby path.$"

TMGuyShortIntro_text::
# 1360 "data/maps/ShuckleIsland/scripts.pory"
	.string "Hey there! I'm a wandering TM salesman.\p"
	.string "I can give you a TM to help you defeat\n"
	.string "the brothers blocking the nearby path.$"

TMGuyPresentOptions_text::
# 1368 "data/maps/ShuckleIsland/scripts.pory"
	.string "Take a TM, but choose carefully!\n"
	.string "You can only take one. (Press B to exit)$"

resetNPCIntro_text::
# 1375 "data/maps/ShuckleIsland/scripts.pory"
	.string "Do you find yourself wishing you could\n"
	.string "redo one of your previous choices?\p"
	.string "If so, I can help! I can reset various\n"
	.string "actions you've made with other NPCs.$"

resetNPCNothingToReset_text::
# 1384 "data/maps/ShuckleIsland/scripts.pory"
	.string "Oh, it seems you haven't made any\n"
	.string "resettable choices yet…\p"
	.string "Don't worry about making mistakes.\n"
	.string "Just try something!\p"
	.string "You can always come back here\n"
	.string "and reset whenever you want.$"

hintNPCIntro_text::
# 1395 "data/maps/ShuckleIsland/scripts.pory"
	.string "Solving puzzles can be difficult, right?\p"
	.string "If you ever find yourself stuck and in\n"
	.string "need of a hint, please come talk to me.$"

hintNPCRefusedHint_text::
# 1403 "data/maps/ShuckleIsland/scripts.pory"
	.string "Don't be shy about taking hints.\p"
	.string "You may even end up saving time\n"
	.string "if you're truly stuck on a puzzle!$"

hintNPCAboutHints_text::
# 1411 "data/maps/ShuckleIsland/scripts.pory"
	.string "Each puzzle provides hints that add to\n"
	.string "your final completion time (your score).\p"
	.string "Small hints provide a small nudge\n"
	.string "in the right direction\l"
	.string "and add 2 minutes to your final time.\p"
	.string "Medium hints strongly point towards\n"
	.string "part of the solution\l"
	.string "and add 10 minutes to your final time.\p"
	.string "Large hints explicitly reveal\n"
	.string "part of the solution\l"
	.string "and add 20 minutes to your final time.\p"
	.string "The complete solution to a battle will\n"
	.string "never be fully covered by all 3 hints.\p"
	.string "If all hints are used, you can view\n"
	.string "a solution, adding 1 hour to your time.$"

hintNPCBattle1SmallHint_text::
# 1431 "data/maps/ShuckleIsland/scripts.pory"
	.string "You can defeat the first brother\n"
	.string "with either of the two TMs.\p"
	.string "However, only one TM allows you to\n"
	.string "defeat the second brother.$"

hintNPCBattle1MedHint_text::
# 1440 "data/maps/ShuckleIsland/scripts.pory"
	.string "Recycle has unique mechanics in Gen IV.\p"
	.string "There are ways a Pokémon can recycle a\n"
	.string "berry it neither held nor consumed!$"

hintNPCBattle1LargeHint_text::
# 1448 "data/maps/ShuckleIsland/scripts.pory"
	.string "The older brother's Shedinja must\n"
	.string "be defeated by using Natural Gift\l"
	.string "while holding a Custap berry.$"

hintNPCSolution_text::
# 1456 "data/maps/ShuckleIsland/scripts.pory"
	.string "If you're truly stuck, I can provide\n"
	.string "a link to a solution video.\p"
	.string "This will add 1 hour to your final time.\n"
	.string "Do you still want to see the solution?$"

newMechNPCIntro_text::
# 1465 "data/maps/ShuckleIsland/scripts.pory"
	.string "Throughout this escape room, there are\n"
	.string "some minor changes to game mechanics.\p"
	.string "I'll provide information about these\n"
	.string "changes as well as custom trainer AI.$"

Battle1a_Intro_text::
# 1474 "data/maps/ShuckleIsland/scripts.pory"
	.string "Nobody is getting through while\n"
	.string "me and my brother are on guard!\p"
	.string "Good thing I just powered up my\n"
	.string "Shedinja by giving it a tail!\p"
	.string "Now, prepare to lose, mister!$"

Battle1a_Lose_text::
# 1484 "data/maps/ShuckleIsland/scripts.pory"
	.string "WAAAAAAH!\n"
	.string "Why didn't the tail work?$"

Battle1a_Intro_Short_text::
# 1491 "data/maps/ShuckleIsland/scripts.pory"
	.string "By giving it a tail,\n"
	.string "I've made my Shedinja unstoppable!$"

Battle1a_PostBattle_text::
# 1498 "data/maps/ShuckleIsland/scripts.pory"
	.string "Sniff…sniff…\n"
	.string "I knew that tail was a stupid idea!\p"
	.string "I don't even want my Shedinja anymore,\n"
	.string "so just take it!\p"
	.string "I even gave it a berry that I'm sure\n"
	.string "it can use super well.$"

Battle1a_PostBattle2_text::
# 1509 "data/maps/ShuckleIsland/scripts.pory"
	.string "HEY BIG BRO!\p"
	.string "You can have my stupid tail.\n"
	.string "But don't give it to your Shedinja!\p"
	.string "Now go and teach this meanie a lesson!$"

Battle1b_Intro_text::
# 1518 "data/maps/ShuckleIsland/scripts.pory"
	.string "Are you picking on my little bro?\p"
	.string "Well if you mess with my brother,\n"
	.string "you have to deal with me!\p"
	.string "FOR TIMMY!$"

Battle1b_Lose_text::
# 1527 "data/maps/ShuckleIsland/scripts.pory"
	.string "Wow, you really are a Spike!$"

Battle1b_PostBattle_text::
# 1533 "data/maps/ShuckleIsland/scripts.pory"
	.string "Hey man, I'm just trying to\n"
	.string "look out for my brother, ok?\p"
	.string "I'm sure he didn't mean to give you\n"
	.string "his Shedinja, so can I have it back?\p"
	.string "I'll even give you my Gallade in return.$"

FocusPunchTutorIntro1_text::
# 1543 "data/maps/ShuckleIsland/scripts.pory"
	.string "FOCUS…\p"
	.string "...\p"
	.string "…PUNCH!\p"
	.string "Hmm, maybe I needed to focus more?$"

FocusPunchTutorIntro2_text::
# 1552 "data/maps/ShuckleIsland/scripts.pory"
	.string "Can you show me the power of\n"
	.string "Focus Punch so I can clear the path?\p"
	.string "Maybe you can use Focus Punch\n"
	.string "on those girls to the south.\p"
	.string "What? No! I'm not asking you to\n"
	.string "punch small children!\p"
	.string "Use Focus Punch to help\n"
	.string "defeat them in a Pokémon battle!$"

FocusPunchTutorPostBattle2_text::
# 1565 "data/maps/ShuckleIsland/scripts.pory"
	.string "I was able to clear the path after\n"
	.string "watching you pummel those girls!\p"
	.string "Don't worry, I let everyone know\n"
	.string "it was all thanks to you\l"
	.string "throwing Focus Punches at children!$"

berryGuyIntro2_text::
# 1575 "data/maps/ShuckleIsland/scripts.pory"
	.string "Unbelievable!\p"
	.string "That TM salesman charged straight for\n"
	.string "the cave and triggered a rockslide!\p"
	.string "If you think it would help here,\n"
	.string "I could let you use another berry.$"

hintNPCBattle2SmallHint_text::
# 1585 "data/maps/ShuckleIsland/scripts.pory"
	.string "Start with the basics: which Pokémon\n"
	.string "should learn Focus Punch?\p"
	.string "Can you win if Munchlax holds a berry?\n"
	.string "Also, which enemy must you KO first?$"

hintNPCBattle2MedHint_text::
# 1594 "data/maps/ShuckleIsland/scripts.pory"
	.string "You'll never win this battle with\n"
	.string "Focus Punch's low priority.\p"
	.string "Is there any way to use Focus Punch\n"
	.string "with normal priority, even once?$"

hintNPCBattle2LargeHint_text::
# 1603 "data/maps/ShuckleIsland/scripts.pory"
	.string "Gallade's first move must be\n"
	.string "using Skill Swap on Munchlax.\p"
	.string "This will use a new move and change the\n"
	.string "HP at which Gallade consumes its berry\l"
	.string "(two berries give valid solutions).$"

Battle2_Post_Battle_text::
# 1613 "data/maps/ShuckleIsland/scripts.pory"
	.string "Wow, I guess you really like\n"
	.string "picking on children, huh?$"

Battle2_Intro_text::
# 1620 "data/maps/ShuckleIsland/scripts.pory"
	.string "Hey, we've heard about you!\n"
	.string "You bullied our friend Timmy!\p"
	.string "We'll show you not to mess with\n"
	.string "the kids of Shuckle Island!$"

Battle2_Lose_text::
# 1629 "data/maps/ShuckleIsland/scripts.pory"
	.string "WEE-OOO-WEE-OOO! ALERT! ALERT!\n"
	.string "WE HAVE A VERIFIED CHILD BEATER HERE!$"

Not_Enough_text::
# 1636 "data/maps/ShuckleIsland/scripts.pory"
	.string "Uhh…you shouldn't be able to see this.\p"
	.string "You must have broken something, so you\n"
	.string "should let the dev know what happened.$"

Battle2_Amy_Intro_text::
# 1644 "data/maps/ShuckleIsland/scripts.pory"
	.string "Hah! You're neither fast nor\n"
	.string "defensive enough to outlast my Minun!$"

Battle2_Liv_Intro_text::
# 1651 "data/maps/ShuckleIsland/scripts.pory"
	.string "Yeah, that's the Munchlax that\n"
	.string "bullied Timmy. Plusle, attack!$"

minunAI_text::
# 1658 "data/maps/ShuckleIsland/scripts.pory"
	.string "Minun will always use Last Resort to\n"
	.string "target Gallade, if it can do so.\p"
	.string "Minun will then prioritize using Encore\n"
	.string "to lock an enemy into Focus Punch.\p"
	.string "Otherwise, Minun will use Helping Hand.$"
