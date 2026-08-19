ShuckleIslandRemote_MapScripts::
# 3 "data/maps/ShuckleIslandRemote/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIslandRemote_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIslandRemote_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIslandRemote/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_REMOTE_STATE, 1, ShuckleIslandRemote_EventScript_CheckRareCandy
# 6 "data/maps/ShuckleIslandRemote/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_REMOTE_STATE, 2, ShuckleIslandRemote_EventScript_ClearSleepyTerrain
	.2byte 0


ShuckleIslandRemote_EventScript_CheckRareCandy::
# 31 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_HAVE_RARE_CANDY, ShuckleIslandRemote_EventScript_CheckRareCandy_2
ShuckleIslandRemote_EventScript_CheckRareCandy_1:
# 54 "data/maps/ShuckleIslandRemote/scripts.pory"
	special HealPlayerParty
# 55 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_REMOTE_STATE, 0
	end

ShuckleIslandRemote_EventScript_CheckRareCandy_2:
# 33 "data/maps/ShuckleIslandRemote/scripts.pory"
	checkmonitem 0, ITEM_RARE_CANDY
# 34 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandRemote_EventScript_CheckRareCandy_4
# 42 "data/maps/ShuckleIslandRemote/scripts.pory"
	checkmonitem 1, ITEM_RARE_CANDY
# 43 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandRemote_EventScript_CheckRareCandy_7
	goto ShuckleIslandRemote_EventScript_CheckRareCandy_1

ShuckleIslandRemote_EventScript_CheckRareCandy_4:
# 36 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_HAVE_RARE_CANDY
# 37 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_RARE_CANDY, 1
	goto ShuckleIslandRemote_EventScript_CheckRareCandy_1

ShuckleIslandRemote_EventScript_CheckRareCandy_7:
# 45 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_HAVE_RARE_CANDY
# 46 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_RARE_CANDY, 1
	goto ShuckleIslandRemote_EventScript_CheckRareCandy_1


ShuckleIslandRemote_EventScript_ClearSleepyTerrain::
# 63 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_REMOTE_STATE, 0
# 65 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_WON_BATTLE_4, ShuckleIslandRemote_EventScript_ClearSleepyTerrain_2
ShuckleIslandRemote_EventScript_ClearSleepyTerrain_1:
	end

ShuckleIslandRemote_EventScript_ClearSleepyTerrain_2:
# 67 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_PETREL_NO_DISGUISE
# 68 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeobject 14
# 71 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitemfrommon 0
# 72 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitemfrommon 1
# 73 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitem VAR_BATTLE4_BERRY
# 74 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitem ITEM_RARE_CANDY
# 75 "data/maps/ShuckleIslandRemote/scripts.pory"
	giveitemnojingle VAR_BATTLE4_BERRY
# 78 "data/maps/ShuckleIslandRemote/scripts.pory"
	indexspeciesinparty SPECIES_GALLADE
# 79 "data/maps/ShuckleIslandRemote/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 80 "data/maps/ShuckleIslandRemote/scripts.pory"
	getmonlevel VAR_TEMP_B
# 81 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 28
	goto_if_eq ShuckleIslandRemote_EventScript_ClearSleepyTerrain_4
	goto ShuckleIslandRemote_EventScript_ClearSleepyTerrain_1

ShuckleIslandRemote_EventScript_ClearSleepyTerrain_4:
# 84 "data/maps/ShuckleIslandRemote/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX
# 85 "data/maps/ShuckleIslandRemote/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 86 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq ShuckleIslandRemote_EventScript_ClearSleepyTerrain_6
	goto ShuckleIslandRemote_EventScript_ClearSleepyTerrain_1

ShuckleIslandRemote_EventScript_ClearSleepyTerrain_6:
# 88 "data/maps/ShuckleIslandRemote/scripts.pory"
	giveitemnojingle ITEM_RARE_CANDY
	goto ShuckleIslandRemote_EventScript_ClearSleepyTerrain_1


ShuckleIslandRemote_EventScript_ShuckleRocks::
# 103 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 105 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_HAVE_RARE_CANDY, ShuckleIslandRemote_EventScript_ShuckleRocks_2
# 117 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_ShuckleRocks_Text_0
# 118 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
ShuckleIslandRemote_EventScript_ShuckleRocks_1:
# 122 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
	end

ShuckleIslandRemote_EventScript_ShuckleRocks_2:
# 107 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_REMOTE_STATE, 1
# 108 "data/maps/ShuckleIslandRemote/scripts.pory"
	setwildbattleextended SPECIES_SHUCKLE, 1, ITEM_RARE_CANDY, NATURE_DOCILE, 1, MON_ANY, 120, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WRAP, MOVE_NONE, MOVE_NONE, MOVE_NONE, TRUE
# 109 "data/maps/ShuckleIslandRemote/scripts.pory"
	playmoncry SPECIES_SHUCKLE, CRY_MODE_ENCOUNTER
# 110 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay 40
# 111 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmoncry
# 112 "data/maps/ShuckleIslandRemote/scripts.pory"
	dowildbattle
	goto ShuckleIslandRemote_EventScript_ShuckleRocks_1


ShuckleIslandRemote_EventScript_BerryGuy4::
# 129 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 130 "data/maps/ShuckleIslandRemote/scripts.pory"
	faceplayer
# 132 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_4, ShuckleIslandRemote_EventScript_BerryGuy4_5
ShuckleIslandRemote_EventScript_BerryGuy4_4:
# 137 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_4, ShuckleIslandRemote_EventScript_BerryGuy4_3
ShuckleIslandRemote_EventScript_BerryGuy4_1:
# 144 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_4, ShuckleIslandRemote_EventScript_BerryGuy4_9
# 191 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_4, ShuckleIslandRemote_EventScript_BerryGuy4_15
# 196 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SPOKE_MANNEQUIN, ShuckleIslandRemote_EventScript_BerryGuy4_16
# 204 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_13
ShuckleIslandRemote_EventScript_BerryGuy4_8:
# 210 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
	end

ShuckleIslandRemote_EventScript_BerryGuy4_2:
# 134 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_0
	goto ShuckleIslandRemote_EventScript_BerryGuy4_1

ShuckleIslandRemote_EventScript_BerryGuy4_3:
# 139 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SPOKE_MANNEQUIN
# 140 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_1
	goto ShuckleIslandRemote_EventScript_BerryGuy4_1

ShuckleIslandRemote_EventScript_BerryGuy4_5:
# 132 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_4, ShuckleIslandRemote_EventScript_BerryGuy4_2
	goto ShuckleIslandRemote_EventScript_BerryGuy4_4

ShuckleIslandRemote_EventScript_BerryGuy4_9:
# 146 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 148 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_BerryGuy4_Text_2, ITEM_LIECHI_BERRY
# 149 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_BerryGuy4_Text_3, ITEM_GANLON_BERRY
# 150 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_BerryGuy4_Text_4, ITEM_SALAC_BERRY
# 151 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_BerryGuy4_Text_5, ITEM_PETAYA_BERRY
# 152 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_BerryGuy4_Text_6, ITEM_APICOT_BERRY
# 153 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_BerryGuy4_Text_7, ITEM_LANSAT_BERRY
# 155 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 157 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandRemote_EventScript_BerryGuy4_12
# 173 "data/maps/ShuckleIslandRemote/scripts.pory"
	copyvar VAR_BATTLE4_BERRY, VAR_RESULT
# 174 "data/maps/ShuckleIslandRemote/scripts.pory"
	giveitem VAR_BATTLE4_BERRY, 1
# 175 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_4
# 176 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_4, ShuckleIslandRemote_EventScript_BerryGuy4_23
# 183 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_11
	goto ShuckleIslandRemote_EventScript_BerryGuy4_8

ShuckleIslandRemote_EventScript_BerryGuy4_12:
# 159 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_4, ShuckleIslandRemote_EventScript_BerryGuy4_20
# 166 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_9
	goto ShuckleIslandRemote_EventScript_BerryGuy4_8

ShuckleIslandRemote_EventScript_BerryGuy4_15:
# 193 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_10
	goto ShuckleIslandRemote_EventScript_BerryGuy4_8

ShuckleIslandRemote_EventScript_BerryGuy4_16:
# 198 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SPOKE_MANNEQUIN
# 199 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_12
	goto ShuckleIslandRemote_EventScript_BerryGuy4_8

ShuckleIslandRemote_EventScript_BerryGuy4_20:
# 161 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_8
	goto ShuckleIslandRemote_EventScript_BerryGuy4_8

ShuckleIslandRemote_EventScript_BerryGuy4_23:
# 178 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_BerryGuy4_Text_10
	goto ShuckleIslandRemote_EventScript_BerryGuy4_8


ShuckleIslandRemote_EventScript_MoveTutor4::
# 217 "data/maps/ShuckleIslandRemote/scripts.pory"
	lock
# 218 "data/maps/ShuckleIslandRemote/scripts.pory"
	faceplayer
# 220 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SPOKE_MOVE_TUTOR_4, ShuckleIslandRemote_EventScript_MoveTutor4_2
ShuckleIslandRemote_EventScript_MoveTutor4_1:
# 227 "data/maps/ShuckleIslandRemote/scripts.pory"
	call ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon
# 229 "data/maps/ShuckleIslandRemote/scripts.pory"
	release
	end

ShuckleIslandRemote_EventScript_MoveTutor4_2:
# 222 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SPOKE_MOVE_TUTOR_4
# 223 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox moveTutorIntro
	goto ShuckleIslandRemote_EventScript_MoveTutor4_1


ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon::
# 236 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_0
# 237 "data/maps/ShuckleIslandRemote/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 238 "data/maps/ShuckleIslandRemote/scripts.pory"
	special ChooseMonForMoveRelearner
# 239 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitstate
# 240 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_1
# 245 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_0x8005, NO
	goto_if_eq ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_2
# 252 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_3
# 253 "data/maps/ShuckleIslandRemote/scripts.pory"
	special TeachMoveRelearnerMove
# 254 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitstate
# 255 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_6
# 262 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_1, MSGBOX_AUTOCLOSE
	return

ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_1:
# 242 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_1, MSGBOX_AUTOCLOSE
	return

ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_2:
# 247 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_2, MSGBOX_AUTOCLOSE
	return

ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_6:
# 257 "data/maps/ShuckleIslandRemote/scripts.pory"
	call ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon
	return


ShuckleIslandRemote_EventScript_resetNPC4::
# 272 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 273 "data/maps/ShuckleIslandRemote/scripts.pory"
	faceplayer
# 275 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SPOKE_RESET_NPC, ShuckleIslandRemote_EventScript_resetNPC4_2
ShuckleIslandRemote_EventScript_resetNPC4_1:
# 282 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_resetNPC4_Text_0
# 284 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_resetNPC4_Text_1, 0
# 286 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_4, ShuckleIslandRemote_EventScript_resetNPC4_5
ShuckleIslandRemote_EventScript_resetNPC4_4:
# 293 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 295 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandRemote_EventScript_resetNPC4_8
# 302 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_resetNPC4_Text_5, MSGBOX_AUTOCLOSE
# 303 "data/maps/ShuckleIslandRemote/scripts.pory"
	fadescreen FADE_TO_BLACK
# 305 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandRemote_EventScript_resetNPC4_12
# 310 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandRemote_EventScript_resetNPC4_13
# 315 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandRemote_EventScript_resetNPC4_14
ShuckleIslandRemote_EventScript_resetNPC4_11:
# 322 "data/maps/ShuckleIslandRemote/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 323 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_resetNPC4_Text_6
ShuckleIslandRemote_EventScript_resetNPC4_7:
# 327 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
	end

ShuckleIslandRemote_EventScript_resetNPC4_2:
# 277 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SPOKE_RESET_NPC
# 278 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox resetNPCIntro_text
	goto ShuckleIslandRemote_EventScript_resetNPC4_1

ShuckleIslandRemote_EventScript_resetNPC4_5:
# 288 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_resetNPC4_Text_2, 1
# 289 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_resetNPC4_Text_3, 2
	goto ShuckleIslandRemote_EventScript_resetNPC4_4

ShuckleIslandRemote_EventScript_resetNPC4_8:
# 297 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_resetNPC4_Text_4
	goto ShuckleIslandRemote_EventScript_resetNPC4_7

ShuckleIslandRemote_EventScript_resetNPC4_12:
# 307 "data/maps/ShuckleIslandRemote/scripts.pory"
	call resetRareCandy
	goto ShuckleIslandRemote_EventScript_resetNPC4_11

ShuckleIslandRemote_EventScript_resetNPC4_13:
# 312 "data/maps/ShuckleIslandRemote/scripts.pory"
	call resetBerry_4
	goto ShuckleIslandRemote_EventScript_resetNPC4_11

ShuckleIslandRemote_EventScript_resetNPC4_14:
# 317 "data/maps/ShuckleIslandRemote/scripts.pory"
	call resetRareCandy
# 318 "data/maps/ShuckleIslandRemote/scripts.pory"
	call resetBerry_4
	goto ShuckleIslandRemote_EventScript_resetNPC4_11


resetBerry_4::
# 334 "data/maps/ShuckleIslandRemote/scripts.pory"
	clearflag FLAG_RECEIVED_BERRY_4
# 335 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitemfrommon 0
# 336 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitemfrommon 1
# 337 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitem VAR_BATTLE4_BERRY
# 338 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_BATTLE4_BERRY, 0
	return


resetRareCandy::
# 345 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitemfrommon 0
# 346 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitemfrommon 1
# 347 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitem VAR_BATTLE4_BERRY
# 348 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeitem ITEM_RARE_CANDY
# 349 "data/maps/ShuckleIslandRemote/scripts.pory"
	giveitemnojingle VAR_BATTLE4_BERRY
# 350 "data/maps/ShuckleIslandRemote/scripts.pory"
	giveitemnojingle ITEM_RARE_CANDY
# 353 "data/maps/ShuckleIslandRemote/scripts.pory"
	indexspeciesinparty SPECIES_GALLADE
# 354 "data/maps/ShuckleIslandRemote/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 355 "data/maps/ShuckleIslandRemote/scripts.pory"
	getmonlevel VAR_TEMP_B
# 356 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 29
	goto_if_eq resetRareCandy_2
resetRareCandy_1:
# 364 "data/maps/ShuckleIslandRemote/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX
# 365 "data/maps/ShuckleIslandRemote/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 366 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_ne resetRareCandy_4
	return

resetRareCandy_2:
# 358 "data/maps/ShuckleIslandRemote/scripts.pory"
	takemon2 VAR_TEMP_B
# 359 "data/maps/ShuckleIslandRemote/scripts.pory"
	givemon SPECIES_GALLADE, 28, ITEM_NONE, ITEM_POKE_BALL, NATURE_LONELY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SKILL_SWAP, MOVE_MIMIC, MOVE_FOCUS_PUNCH, MOVE_TRICK
	goto resetRareCandy_1

resetRareCandy_4:
# 368 "data/maps/ShuckleIslandRemote/scripts.pory"
	takemon2 VAR_TEMP_B
# 369 "data/maps/ShuckleIslandRemote/scripts.pory"
	givemon SPECIES_MUNCHLAX, 27, ITEM_NONE, ITEM_POKE_BALL, NATURE_IMPISH, 2, 0, 100, 0, 252, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_RECYCLE, MOVE_DEFENSE_CURL, MOVE_NATURAL_GIFT, MOVE_NONE
	return


ShuckleIslandRemote_EventScript_hintNPC4::
# 378 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 379 "data/maps/ShuckleIslandRemote/scripts.pory"
	faceplayer
# 381 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandRemote_EventScript_hintNPC4_2
ShuckleIslandRemote_EventScript_hintNPC4_1:
# 388 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_hintNPC4_Text_0
# 390 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandRemote_EventScript_hintNPC4_5
# 397 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_hintNPC4_Text_2, 0
ShuckleIslandRemote_EventScript_hintNPC4_4:
# 401 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_hintNPC4_Text_3, 1
# 402 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_hintNPC4_Text_4, 2
# 403 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_hintNPC4_Text_5, 3
# 405 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_11
ShuckleIslandRemote_EventScript_hintNPC4_8:
# 411 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 413 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_16
# 418 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_17
# 424 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_18
# 436 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_19
# 448 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_20
# 460 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_21
ShuckleIslandRemote_EventScript_hintNPC4_15:
# 496 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
	end

ShuckleIslandRemote_EventScript_hintNPC4_2:
# 383 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 384 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandRemote_EventScript_hintNPC4_1

ShuckleIslandRemote_EventScript_hintNPC4_5:
# 392 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_hintNPC4_Text_1, 0
	goto ShuckleIslandRemote_EventScript_hintNPC4_4

ShuckleIslandRemote_EventScript_hintNPC4_9:
# 407 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush ShuckleIslandRemote_EventScript_hintNPC4_Text_6, 4
	goto ShuckleIslandRemote_EventScript_hintNPC4_8

ShuckleIslandRemote_EventScript_hintNPC4_10:
# 405 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_set FLAG_LRG_HINT_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_9
	goto ShuckleIslandRemote_EventScript_hintNPC4_8

ShuckleIslandRemote_EventScript_hintNPC4_11:
# 405 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_10
	goto ShuckleIslandRemote_EventScript_hintNPC4_8

ShuckleIslandRemote_EventScript_hintNPC4_16:
# 415 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_17:
# 420 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox hintNPCAboutHints_text
# 421 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_18:
# 426 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox hintNPCBattle4SmallHint_text
# 428 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_28
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_19:
# 438 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox hintNPCBattle4MedHint_text
# 440 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_30
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_20:
# 450 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox hintNPCBattle4LargeHint_text
# 452 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_32
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_21:
# 462 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_35
# 469 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandRemote_EventScript_hintNPC4_34:
# 473 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_38
# 478 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandRemote_EventScript_hintNPC4_39
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_28:
# 430 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_4
# 431 "data/maps/ShuckleIslandRemote/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_30:
# 442 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_4
# 443 "data/maps/ShuckleIslandRemote/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_32:
# 454 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_LRG_HINT_BATTLE_4
# 455 "data/maps/ShuckleIslandRemote/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_35:
# 464 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandRemote_EventScript_hintNPC4_34

ShuckleIslandRemote_EventScript_hintNPC4_38:
# 475 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_hintNPC4_Text_7
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_39:
# 480 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_4
# 481 "data/maps/ShuckleIslandRemote/scripts.pory"
	callnative DrawMugshot
# 482 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_hintNPC4_Text_8
# 483 "data/maps/ShuckleIslandRemote/scripts.pory"
	callnative ClearMugshot
# 485 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_4, ShuckleIslandRemote_EventScript_hintNPC4_42
	goto ShuckleIslandRemote_EventScript_hintNPC4_15

ShuckleIslandRemote_EventScript_hintNPC4_42:
# 487 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_4
# 488 "data/maps/ShuckleIslandRemote/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandRemote_EventScript_hintNPC4_15


ShuckleIslandRemote_EventScript_NewMechNPC4::
# 503 "data/maps/ShuckleIslandRemote/scripts.pory"
	lock
# 504 "data/maps/ShuckleIslandRemote/scripts.pory"
	faceplayer
# 506 "data/maps/ShuckleIslandRemote/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIslandRemote_EventScript_NewMechNPC4_2
ShuckleIslandRemote_EventScript_NewMechNPC4_1:
# 513 "data/maps/ShuckleIslandRemote/scripts.pory"
	call NewMechNPC4Choices
# 515 "data/maps/ShuckleIslandRemote/scripts.pory"
	release
	end

ShuckleIslandRemote_EventScript_NewMechNPC4_2:
# 508 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 509 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIslandRemote_EventScript_NewMechNPC4_1


NewMechNPC4Choices::
# 522 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox NewMechNPC4Choices_Text_0
# 524 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush NewMechNPC4Choices_Text_1, 0
# 525 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush NewMechNPC4Choices_Text_2, 1
# 526 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush NewMechNPC4Choices_Text_3, 2
# 527 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultipush NewMechNPC4Choices_Text_4, 3
# 529 "data/maps/ShuckleIslandRemote/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 531 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq NewMechNPC4Choices_1
# 536 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMechNPC4Choices_2
# 542 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewMechNPC4Choices_3
# 548 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewMechNPC4Choices_4
# 554 "data/maps/ShuckleIslandRemote/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewMechNPC4Choices_5
	return

NewMechNPC4Choices_1:
# 533 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox NewMechNPC4Choices_Text_5
	return

NewMechNPC4Choices_2:
# 538 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox secondAbilities_text
# 539 "data/maps/ShuckleIslandRemote/scripts.pory"
	call NewMechNPC4Choices
	return

NewMechNPC4Choices_3:
# 544 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox maxPressure_text
# 545 "data/maps/ShuckleIslandRemote/scripts.pory"
	call NewMechNPC4Choices
	return

NewMechNPC4Choices_4:
# 550 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox sleepyTerrain_text
# 551 "data/maps/ShuckleIslandRemote/scripts.pory"
	call NewMechNPC4Choices
	return

NewMechNPC4Choices_5:
# 556 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox sleepTalk_text
# 557 "data/maps/ShuckleIslandRemote/scripts.pory"
	call NewMechNPC4Choices
	return


ShuckleIslandRemote_EventScript_StartBattle4::
# 565 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 566 "data/maps/ShuckleIslandRemote/scripts.pory"
	clearflag FLAG_CLEAR_PETREL_BERRY_DISGUISE
# 567 "data/maps/ShuckleIslandRemote/scripts.pory"
	addobject 15
# 569 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_StartBattle4_Text_0
# 570 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
# 571 "data/maps/ShuckleIslandRemote/scripts.pory"
	closemessage
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	applymovement 15, ShuckleIslandRemote_EventScript_StartBattle4_Movement_0
# 574 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmovement
# 576 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox petrelText1
# 577 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
# 579 "data/maps/ShuckleIslandRemote/scripts.pory"
	applymovement 15, ShuckleIslandRemote_EventScript_StartBattle4_Movement_1
# 580 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmovement
# 582 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox ShuckleIslandRemote_EventScript_StartBattle4_Text_1
# 583 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
# 585 "data/maps/ShuckleIslandRemote/scripts.pory"
	applymovement 15, ShuckleIslandRemote_EventScript_StartBattle4_Movement_2
# 586 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmovement
# 588 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox petrelText2
# 589 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	applymovement 15, ShuckleIslandRemote_EventScript_StartBattle4_Movement_3
# 592 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmovement
# 594 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_PETREL_BERRY_DISGUISE
# 595 "data/maps/ShuckleIslandRemote/scripts.pory"
	clearflag FLAG_CLEAR_PETREL_FEMALE_DISGUISE
# 596 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeobject 15
# 597 "data/maps/ShuckleIslandRemote/scripts.pory"
	addobject 16
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	applymovement 16, ShuckleIslandRemote_EventScript_StartBattle4_Movement_4
# 600 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmovement
# 602 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox petrelText3
# 603 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
# 605 "data/maps/ShuckleIslandRemote/scripts.pory"
	applymovement 16, ShuckleIslandRemote_EventScript_StartBattle4_Movement_3
# 606 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmovement
# 608 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_PETREL_FEMALE_DISGUISE
# 609 "data/maps/ShuckleIslandRemote/scripts.pory"
	clearflag FLAG_CLEAR_PETREL_NO_DISGUISE
# 610 "data/maps/ShuckleIslandRemote/scripts.pory"
	removeobject 16
# 611 "data/maps/ShuckleIslandRemote/scripts.pory"
	addobject 14
# 613 "data/maps/ShuckleIslandRemote/scripts.pory"
	applymovement 14, ShuckleIslandRemote_EventScript_StartBattle4_Movement_4
# 614 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmovement
# 616 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_RARE_CANDY, 0
# 617 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, STARTING_STATUS_SLEEPY_TERRAIN
# 618 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_REMOTE_STATE, 2
# 619 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_STARTED_BATTLE_4
# 620 "data/maps/ShuckleIslandRemote/scripts.pory"
	clearflag FLAG_SETUP_BATTLE_4_NPCS
# 621 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
# 622 "data/maps/ShuckleIslandRemote/scripts.pory"
	trainerbattle_single TRAINER_PETREL, petrelText4, Battle4_Lose_text, ShuckleIslandRemote_EventScript_PostBattle4Early
	end


ShuckleIslandRemote_EventScript_ContinueBattle4::
# 629 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 630 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, STARTING_STATUS_SLEEPY_TERRAIN
# 631 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_REMOTE_STATE, 2
# 632 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
# 633 "data/maps/ShuckleIslandRemote/scripts.pory"
	trainerbattle_single TRAINER_PETREL, Battle4_Start_text, Battle4_Lose_text, ShuckleIslandRemote_EventScript_PostBattle4
	end


ShuckleIslandRemote_EventScript_PostBattle4Early::
# 640 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 642 "data/maps/ShuckleIslandRemote/scripts.pory"
	special HealPlayerParty
# 644 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, 0
# 646 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_PETREL_NO_DISGUISE
# 648 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_WON_BATTLE_4
# 649 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SETUP_BATTLE_4_NPCS
# 650 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_PRIOR_BATTLE_4_NPCS
# 651 "data/maps/ShuckleIslandRemote/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_3
# 653 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox postBattle4_text
# 654 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
# 656 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_5_NPCS
# 657 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_CELL_DOOR
# 658 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_5_START_GRUNT
# 661 "data/maps/ShuckleIslandRemote/scripts.pory"
	warp MAP_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F, 58, 15
# 663 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
	end


ShuckleIslandRemote_EventScript_PostBattle4::
# 670 "data/maps/ShuckleIslandRemote/scripts.pory"
	lockall
# 672 "data/maps/ShuckleIslandRemote/scripts.pory"
	special HealPlayerParty
# 674 "data/maps/ShuckleIslandRemote/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, 0
# 676 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_WON_BATTLE_4
# 677 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_SETUP_BATTLE_4_NPCS
# 678 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_PRIOR_BATTLE_4_NPCS
# 679 "data/maps/ShuckleIslandRemote/scripts.pory"
	setrespawn HEAL_LOCATION_BATTLE_5
# 681 "data/maps/ShuckleIslandRemote/scripts.pory"
	msgbox postBattle4_text
# 682 "data/maps/ShuckleIslandRemote/scripts.pory"
	waitmessage
# 684 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_5_NPCS
# 685 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_CELL_DOOR
# 686 "data/maps/ShuckleIslandRemote/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_5_START_GRUNT
# 689 "data/maps/ShuckleIslandRemote/scripts.pory"
	warp MAP_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F, 58, 15
# 691 "data/maps/ShuckleIslandRemote/scripts.pory"
	releaseall
	end


# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
ShuckleIslandRemote_EventScript_StartBattle4_Movement_0:
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
# 573 "data/maps/ShuckleIslandRemote/scripts.pory"
	walk_fast_left
	step_end

# 579 "data/maps/ShuckleIslandRemote/scripts.pory"
ShuckleIslandRemote_EventScript_StartBattle4_Movement_1:
# 579 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 579 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_16
	step_end

# 585 "data/maps/ShuckleIslandRemote/scripts.pory"
ShuckleIslandRemote_EventScript_StartBattle4_Movement_2:
# 585 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 585 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_16
	step_end

# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
ShuckleIslandRemote_EventScript_StartBattle4_Movement_3:
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 591 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
	step_end

# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
ShuckleIslandRemote_EventScript_StartBattle4_Movement_4:
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_1
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_2
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_4
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_up
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_right
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_down
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	face_left
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_8
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_16
# 599 "data/maps/ShuckleIslandRemote/scripts.pory"
	delay_16
	step_end

ShuckleIslandRemote_EventScript_ShuckleRocks_Text_0:
# 117 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "The Shuckle in these rocks seem to\nhave retreated for the time being.$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_0:
# 134 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "You shouldn't be here.\nWill you leave if I give you a berry?$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_1:
# 140 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "It's just a mannequin. But it seems like\nit wants to give you a berry.$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_2:
# 148 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Liechi Berry$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_3:
# 149 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Ganlon Berry$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_4:
# 150 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Salac Berry$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_5:
# 151 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Petaya Berry$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_6:
# 152 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Apicot Berry$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_7:
# 153 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Lansat Berry$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_8:
# 161 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Berry, no berry. I don't care. Whatever\ngets you out of here the fastest.$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_9:
# 166 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "The mannequin is unperturbed\nby your indecisiveness.$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_10:
# 178 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Ok, you got your berry. Now scram!$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_11:
# 183 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "You take your berry,\nawaiting a response.\pBut the mannequin says nothing.$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_12:
# 199 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "It's just a mannequin,\nand it says nothing.\pIt is, after all, just a mannequin.$"

ShuckleIslandRemote_EventScript_BerryGuy4_Text_13:
# 204 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "The mannequin says nothing.\pIt is, after all, just a mannequin.$"

ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_0:
# 236 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "So, which Pokémon needs tutoring?$"

ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_1:
# 242 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Come back if you ever want your\nPokémon to learn any new moves!$"

ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_2:
# 247 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Sorry…\pIt doesn't appear as if I have any move\nI can teach that Pokémon.$"

ShuckleIslandRemote_EventScript_MoveTutor4_WhichMon_Text_3:
# 252 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Which move should I teach?$"

ShuckleIslandRemote_EventScript_resetNPC4_Text_0:
# 282 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "What would you like to reset?\n(Press B to exit)$"

ShuckleIslandRemote_EventScript_resetNPC4_Text_1:
# 284 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Reset Rare Candy$"

ShuckleIslandRemote_EventScript_resetNPC4_Text_2:
# 288 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Reset Berry$"

ShuckleIslandRemote_EventScript_resetNPC4_Text_3:
# 289 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Reset All$"

ShuckleIslandRemote_EventScript_resetNPC4_Text_4:
# 297 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Come back if you would ever\nlike to reset your actions!$"

ShuckleIslandRemote_EventScript_resetNPC4_Text_5:
# 302 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "One moment while I reset your actions.$"

ShuckleIslandRemote_EventScript_resetNPC4_Text_6:
# 323 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Your actions have been reset!$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_0:
# 388 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Now then, what hints can I offer you?\n(Press B to exit)$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_1:
# 392 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "About Hints (read me!)$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_2:
# 397 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "About Hints$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_3:
# 401 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Small Hint$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_4:
# 402 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Medium Hint$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_5:
# 403 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Large Hint$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_6:
# 407 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Solution$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_7:
# 475 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Understood.\pKeep trying, and come back\nif you feel you need the solution.$"

ShuckleIslandRemote_EventScript_hintNPC4_Text_8:
# 482 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "https://youtu.be/yTULg83YfBw$"

NewMechNPC4Choices_Text_0:
# 522 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Now then, what new mechanics do\nyou want explained? (Press B to exit)$"

NewMechNPC4Choices_Text_1:
# 524 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Second Abilities$"

NewMechNPC4Choices_Text_2:
# 525 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Max Pressure$"

NewMechNPC4Choices_Text_3:
# 526 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Sleepy Terrain$"

NewMechNPC4Choices_Text_4:
# 527 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Sleep Talk$"

NewMechNPC4Choices_Text_5:
# 533 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Stop by if you ever want\nthe new mechanics explained again!$"

ShuckleIslandRemote_EventScript_StartBattle4_Text_0:
# 569 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "What are you doing to those Shuckle?$"

ShuckleIslandRemote_EventScript_StartBattle4_Text_1:
# 582 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "I guess you can't leave grunt work\nto grunts these days.$"

moveTutorIntro::
# 696 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Hey there! I'm a move tutor.\p"
	.string "I can teach your Pokémon any moves\n"
	.string "they have already learned,\l"
	.string "as well as a few new moves!$"

hintNPCBattle4SmallHint_text::
# 705 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Pay attention, as you must sequence\n"
	.string "properly before the battle even begins!$"

hintNPCBattle4MedHint_text::
# 712 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "You can adjust your moveset to ensure\n"
	.string "a move is called by Sleep Talk.\p"
	.string "But don't think that means you can just\n"
	.string "sleep the whole battle!$"

hintNPCBattle4LargeHint_text::
# 721 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Either of your Pokémon can hold an\n"
	.string "offense-boosting berry for this fight.\p"
	.string "You'll also need the damage output from\n"
	.string "both of Snorlax's sound-based moves.$"

maxPressure_text::
# 730 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Max Pressure drains all PP from the\n"
	.string "enemy's move, regardless of targeting.$"

sleepyTerrain_text::
# 737 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Sleepy Terrain makes all Pokémon fall\n"
	.string "asleep at the end of each turn.\p"
	.string "Sleeping Pokémon won't wake naturally.$"

sleepTalk_text::
# 745 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Sleep Talk now calls the first move in\n"
	.string "the following list that the user knows:\p"
	.string "Swallow, Snore, Recycle, Defense Curl,\n"
	.string "Natural Gift, Skill Swap, Trick,\l"
	.string "Nightmare, Swift, X-Scissor.$"

petrelText1::
# 755 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "You've been a real nuisance since you\n"
	.string "arrived on this island, you know that?\p"
	.string "I spent so much time giving you berries\n"
	.string "to see if your Munchlax had Gluttony.\p"
	.string "I paid off that Black Belt\n"
	.string "to block your path with a boulder.\p"
	.string "I redirected you to encounter\n"
	.string "one of our Grunts in the ice caverns.$"

petrelText2::
# 768 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "And now you're terrorizing\n"
	.string "our precious Shuckle!\p"
	.string "So you leave me no choice\n"
	.string "but to deal with you myself!\p"
	.string "Hmm, you don't understand how a berry\n"
	.string "merchant factors into all this?\p"
	.string "Well maybe THIS will explain everything!$"

petrelText3::
# 780 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Ah, whoops. That's for my date\n"
	.string "with Big Blue tonight.\p"
	.string "Ahem--\p"
	.string "Maybe THIS will explain everything!$"

petrelText4::
# 789 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Your actions require involvement from\n"
	.string "the highest ranks in Team Shuckle.\p"
	.string "Now, prepare to sleep with the fishes!$"

Battle4_Lose_text::
# 797 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Hmph.$"

Battle4_Start_text::
# 803 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Don't sleep on the power\n"
	.string "of this terrain!$"

postBattle4_text::
# 810 "data/maps/ShuckleIslandRemote/scripts.pory"
	.string "Why you…\p"
	.string "That's it! You're too dangerous to\n"
	.string "leave wandering around the island.\p"
	.string "You're coming with me!$"
