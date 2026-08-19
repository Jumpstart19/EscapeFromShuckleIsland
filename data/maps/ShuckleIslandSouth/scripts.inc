ShuckleIslandSouth_MapScripts::
# 3 "data/maps/ShuckleIslandSouth/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIslandSouth_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIslandSouth_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIslandSouth/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SOUTH_STATE, 1, ShuckleIslandSouth_EventScript_CheckBerryJuice
	.2byte 0


ShuckleIslandSouth_EventScript_CheckBerryJuice::
# 21 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_HAVE_BERRY_JUICE, ShuckleIslandSouth_EventScript_CheckBerryJuice_2
ShuckleIslandSouth_EventScript_CheckBerryJuice_1:
# 42 "data/maps/ShuckleIslandSouth/scripts.pory"
	special HealPlayerParty
# 43 "data/maps/ShuckleIslandSouth/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SOUTH_STATE, 0
# 44 "data/maps/ShuckleIslandSouth/scripts.pory"
	clearflag FLAG_MAKE_WILD_AI_SMART
	end

ShuckleIslandSouth_EventScript_CheckBerryJuice_2:
# 23 "data/maps/ShuckleIslandSouth/scripts.pory"
	checkmonitem 0, ITEM_BERRY_JUICE
# 24 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandSouth_EventScript_CheckBerryJuice_4
# 31 "data/maps/ShuckleIslandSouth/scripts.pory"
	checkmonitem 1, ITEM_BERRY_JUICE
# 32 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandSouth_EventScript_CheckBerryJuice_7
	goto ShuckleIslandSouth_EventScript_CheckBerryJuice_1

ShuckleIslandSouth_EventScript_CheckBerryJuice_4:
# 26 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_HAVE_BERRY_JUICE
	goto ShuckleIslandSouth_EventScript_CheckBerryJuice_1

ShuckleIslandSouth_EventScript_CheckBerryJuice_7:
# 34 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_HAVE_BERRY_JUICE
	goto ShuckleIslandSouth_EventScript_CheckBerryJuice_1


ShuckleIslandSouth_EventScript_Camper::
# 51 "data/maps/ShuckleIslandSouth/scripts.pory"
	lockall
# 52 "data/maps/ShuckleIslandSouth/scripts.pory"
	faceplayer
# 54 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_SPOKE_CAMPER, ShuckleIslandSouth_EventScript_Camper_2
# 60 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_HAVE_BERRY_JUICE, ShuckleIslandSouth_EventScript_Camper_7
ShuckleIslandSouth_EventScript_Camper_6:
# 66 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_GAVE_CAMPER_BERRY_JUICE, ShuckleIslandSouth_EventScript_Camper_4
# 115 "data/maps/ShuckleIslandSouth/scripts.pory"
	applymovement 1, ShuckleIslandSouth_EventScript_Camper_Movement_0
# 116 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_Camper_Text_4
# 117 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmessage
ShuckleIslandSouth_EventScript_Camper_1:
# 121 "data/maps/ShuckleIslandSouth/scripts.pory"
	releaseall
	end

ShuckleIslandSouth_EventScript_Camper_2:
# 56 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox Camper_Intro_Text
# 57 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_SPOKE_CAMPER
	goto ShuckleIslandSouth_EventScript_Camper_1

ShuckleIslandSouth_EventScript_Camper_3:
# 62 "data/maps/ShuckleIslandSouth/scripts.pory"
	applymovement 1, ShuckleIslandSouth_EventScript_Camper_Movement_0
# 63 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox Camper_Help_Text
	goto ShuckleIslandSouth_EventScript_Camper_1

ShuckleIslandSouth_EventScript_Camper_4:
# 68 "data/maps/ShuckleIslandSouth/scripts.pory"
	applymovement 1, ShuckleIslandSouth_EventScript_Camper_Movement_0
# 69 "data/maps/ShuckleIslandSouth/scripts.pory"
	checkitem ITEM_BERRY_JUICE
# 70 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandSouth_EventScript_Camper_11
# 107 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_Camper_Text_3
# 108 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmessage
	goto ShuckleIslandSouth_EventScript_Camper_1

ShuckleIslandSouth_EventScript_Camper_7:
# 60 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_GAVE_CAMPER_BERRY_JUICE, ShuckleIslandSouth_EventScript_Camper_3
	goto ShuckleIslandSouth_EventScript_Camper_6

ShuckleIslandSouth_EventScript_Camper_11:
# 72 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_Camper_Text_0, MSGBOX_YESNO
# 73 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandSouth_EventScript_Camper_14
# 99 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_Camper_Text_2
# 100 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmessage
	goto ShuckleIslandSouth_EventScript_Camper_1

ShuckleIslandSouth_EventScript_Camper_14:
# 75 "data/maps/ShuckleIslandSouth/scripts.pory"
	removeitem ITEM_BERRY_JUICE, 1
# 76 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_GAVE_CAMPER_BERRY_JUICE
# 77 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_SETUP_WILD_SHUCKLE_NPCS
# 78 "data/maps/ShuckleIslandSouth/scripts.pory"
	clearflag FLAG_HAVE_BERRY_JUICE
# 79 "data/maps/ShuckleIslandSouth/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_REMOTE
# 80 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_Camper_Text_1
# 82 "data/maps/ShuckleIslandSouth/scripts.pory"
	specialvar VAR_TEMP_6, GetPlayerFacingDirection
# 83 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_TEMP_6, DIR_WEST
	goto_if_eq ShuckleIslandSouth_EventScript_Camper_17
# 91 "data/maps/ShuckleIslandSouth/scripts.pory"
	applymovement 1, ShuckleIslandSouth_EventScript_Camper_Movement_2
# 92 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmovement
	goto ShuckleIslandSouth_EventScript_Camper_1

ShuckleIslandSouth_EventScript_Camper_17:
# 85 "data/maps/ShuckleIslandSouth/scripts.pory"
	applymovement 1, ShuckleIslandSouth_EventScript_Camper_Movement_1
# 86 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmovement
	goto ShuckleIslandSouth_EventScript_Camper_1


ShuckleIslandSouth_EventScript_ShuckleRocks::
# 128 "data/maps/ShuckleIslandSouth/scripts.pory"
	lockall
# 130 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_set FLAG_SPOKE_CAMPER, ShuckleIslandSouth_EventScript_ShuckleRocks_7
ShuckleIslandSouth_EventScript_ShuckleRocks_5:
# 165 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_SPOKE_CAMPER, ShuckleIslandSouth_EventScript_ShuckleRocks_3
# 174 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_ShuckleRocks_Text_3
# 175 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmessage
ShuckleIslandSouth_EventScript_ShuckleRocks_1:
# 179 "data/maps/ShuckleIslandSouth/scripts.pory"
	releaseall
	end

ShuckleIslandSouth_EventScript_ShuckleRocks_2:
# 132 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_BOPPED_IT, ShuckleIslandSouth_EventScript_ShuckleRocks_11
# 150 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_ShuckleRocks_Text_1
# 151 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmessage
# 152 "data/maps/ShuckleIslandSouth/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SOUTH_STATE, 1
# 153 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_MAKE_WILD_AI_SMART
# 154 "data/maps/ShuckleIslandSouth/scripts.pory"
	clearflag FLAG_SETUP_WILD_SHUCKLE_NPCS
# 155 "data/maps/ShuckleIslandSouth/scripts.pory"
	setwildbattleextended SPECIES_SHUCKLE, 100, ITEM_BERRY_JUICE, NATURE_BRAVE, 0, MON_ANY, 0, 0, 0, 0, 0, 0, 31, 20, 31, 4, 31, 31, MOVE_ROCK_TOMB, MOVE_SAND_TOMB, MOVE_ROLLOUT, MOVE_NONE, FALSE
# 156 "data/maps/ShuckleIslandSouth/scripts.pory"
	playmoncry SPECIES_SHUCKLE, CRY_MODE_ENCOUNTER
# 157 "data/maps/ShuckleIslandSouth/scripts.pory"
	delay 40
# 158 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmoncry
# 159 "data/maps/ShuckleIslandSouth/scripts.pory"
	dowildbattle
	goto ShuckleIslandSouth_EventScript_ShuckleRocks_1

ShuckleIslandSouth_EventScript_ShuckleRocks_3:
# 167 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_ShuckleRocks_Text_2
# 168 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitmessage
	goto ShuckleIslandSouth_EventScript_ShuckleRocks_1

ShuckleIslandSouth_EventScript_ShuckleRocks_6:
# 130 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_GAVE_CAMPER_BERRY_JUICE, ShuckleIslandSouth_EventScript_ShuckleRocks_2
	goto ShuckleIslandSouth_EventScript_ShuckleRocks_5

ShuckleIslandSouth_EventScript_ShuckleRocks_7:
# 130 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_HAVE_BERRY_JUICE, ShuckleIslandSouth_EventScript_ShuckleRocks_6
	goto ShuckleIslandSouth_EventScript_ShuckleRocks_5

ShuckleIslandSouth_EventScript_ShuckleRocks_11:
# 134 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_ShuckleRocks_Text_0, MSGBOX_YESNO
# 136 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandSouth_EventScript_ShuckleRocks_14
# 143 "data/maps/ShuckleIslandSouth/scripts.pory"
	call ShuckleIslandSouth_EventScript_BopItFail
	goto ShuckleIslandSouth_EventScript_ShuckleRocks_1

ShuckleIslandSouth_EventScript_ShuckleRocks_14:
# 138 "data/maps/ShuckleIslandSouth/scripts.pory"
	call ShuckleIslandSouth_EventScript_BopItSuccess
	goto ShuckleIslandSouth_EventScript_ShuckleRocks_1


ShuckleIslandSouth_EventScript_BopItSuccess::
# 186 "data/maps/ShuckleIslandSouth/scripts.pory"
	lock
# 188 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitse
# 189 "data/maps/ShuckleIslandSouth/scripts.pory"
	playse SE_SUCCESS
# 190 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitse
# 192 "data/maps/ShuckleIslandSouth/scripts.pory"
	switch VAR_BOP_IT_SUCCESSES
# 194 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 0, ShuckleIslandSouth_EventScript_BopItSuccess_3
# 197 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 1, ShuckleIslandSouth_EventScript_BopItSuccess_4
# 200 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 2, ShuckleIslandSouth_EventScript_BopItSuccess_5
# 203 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 3, ShuckleIslandSouth_EventScript_BopItSuccess_6
# 206 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 4, ShuckleIslandSouth_EventScript_BopItSuccess_7
ShuckleIslandSouth_EventScript_BopItSuccess_1:
# 211 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandSouth_EventScript_BopItSuccess_13
ShuckleIslandSouth_EventScript_BopItSuccess_12:
# 216 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandSouth_EventScript_BopItSuccess_10
# 224 "data/maps/ShuckleIslandSouth/scripts.pory"
	setvar VAR_BOP_IT_SUCCESSES, 0
# 225 "data/maps/ShuckleIslandSouth/scripts.pory"
	call ShuckleIslandSouth_EventScript_BopItFail
ShuckleIslandSouth_EventScript_BopItSuccess_8:
# 229 "data/maps/ShuckleIslandSouth/scripts.pory"
	release
	return

ShuckleIslandSouth_EventScript_BopItSuccess_3:
# 195 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItSuccess_Text_0, MSGBOX_YESNO
	goto ShuckleIslandSouth_EventScript_BopItSuccess_1

ShuckleIslandSouth_EventScript_BopItSuccess_4:
# 198 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItSuccess_Text_1, MSGBOX_YESNO
	goto ShuckleIslandSouth_EventScript_BopItSuccess_1

ShuckleIslandSouth_EventScript_BopItSuccess_5:
# 201 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItSuccess_Text_2, MSGBOX_YESNO
	goto ShuckleIslandSouth_EventScript_BopItSuccess_1

ShuckleIslandSouth_EventScript_BopItSuccess_6:
# 204 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItSuccess_Text_3, MSGBOX_YESNO
	goto ShuckleIslandSouth_EventScript_BopItSuccess_1

ShuckleIslandSouth_EventScript_BopItSuccess_7:
# 207 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItSuccess_Text_4, MSGBOX_YESNO
	goto ShuckleIslandSouth_EventScript_BopItSuccess_1

ShuckleIslandSouth_EventScript_BopItSuccess_9:
# 213 "data/maps/ShuckleIslandSouth/scripts.pory"
	call ShuckleIslandSouth_EventScript_BopItFinalSuccess
	goto ShuckleIslandSouth_EventScript_BopItSuccess_8

ShuckleIslandSouth_EventScript_BopItSuccess_10:
# 218 "data/maps/ShuckleIslandSouth/scripts.pory"
	addvar VAR_BOP_IT_SUCCESSES, 1
# 219 "data/maps/ShuckleIslandSouth/scripts.pory"
	call ShuckleIslandSouth_EventScript_BopItSuccess
	goto ShuckleIslandSouth_EventScript_BopItSuccess_8

ShuckleIslandSouth_EventScript_BopItSuccess_13:
# 211 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_BOP_IT_SUCCESSES, 4
	goto_if_eq ShuckleIslandSouth_EventScript_BopItSuccess_9
	goto ShuckleIslandSouth_EventScript_BopItSuccess_12


ShuckleIslandSouth_EventScript_BopItFail::
# 235 "data/maps/ShuckleIslandSouth/scripts.pory"
	lock
# 237 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitse
# 238 "data/maps/ShuckleIslandSouth/scripts.pory"
	playse SE_FAILURE
# 239 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitse
# 241 "data/maps/ShuckleIslandSouth/scripts.pory"
	switch VAR_BOP_IT_FAILS
# 243 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 0, ShuckleIslandSouth_EventScript_BopItFail_3
# 246 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 1, ShuckleIslandSouth_EventScript_BopItFail_4
# 249 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 2, ShuckleIslandSouth_EventScript_BopItFail_5
# 252 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 3, ShuckleIslandSouth_EventScript_BopItFail_6
# 255 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 4, ShuckleIslandSouth_EventScript_BopItFail_7
# 258 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 5, ShuckleIslandSouth_EventScript_BopItFail_8
# 261 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 6, ShuckleIslandSouth_EventScript_BopItFail_9
# 264 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 7, ShuckleIslandSouth_EventScript_BopItFail_10
# 267 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 8, ShuckleIslandSouth_EventScript_BopItFail_11
# 270 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 9, ShuckleIslandSouth_EventScript_BopItFail_12
# 273 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 10, ShuckleIslandSouth_EventScript_BopItFail_13
# 276 "data/maps/ShuckleIslandSouth/scripts.pory"
	case 11, ShuckleIslandSouth_EventScript_BopItFail_14
ShuckleIslandSouth_EventScript_BopItFail_1:
# 281 "data/maps/ShuckleIslandSouth/scripts.pory"
	addvar VAR_BOP_IT_FAILS, 1
# 283 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_BOP_IT_FAILS, 11
	goto_if_gt ShuckleIslandSouth_EventScript_BopItFail_16
ShuckleIslandSouth_EventScript_BopItFail_15:
# 289 "data/maps/ShuckleIslandSouth/scripts.pory"
	release
	return

ShuckleIslandSouth_EventScript_BopItFail_3:
# 244 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_0
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_4:
# 247 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_1
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_5:
# 250 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_2
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_6:
# 253 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_3
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_7:
# 256 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_4
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_8:
# 259 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_5
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_9:
# 262 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_6
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_10:
# 265 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_7
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_11:
# 268 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_8
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_12:
# 271 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_9
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_13:
# 274 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_10
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_14:
# 277 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFail_Text_11
	goto ShuckleIslandSouth_EventScript_BopItFail_1

ShuckleIslandSouth_EventScript_BopItFail_16:
# 285 "data/maps/ShuckleIslandSouth/scripts.pory"
	setvar VAR_BOP_IT_FAILS, 0
	goto ShuckleIslandSouth_EventScript_BopItFail_15


ShuckleIslandSouth_EventScript_BopItFinalSuccess::
# 295 "data/maps/ShuckleIslandSouth/scripts.pory"
	lock
# 297 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitse
# 298 "data/maps/ShuckleIslandSouth/scripts.pory"
	applymovement 1, ShuckleIslandSouth_EventScript_BopItFinalSuccess_Movement_0
# 299 "data/maps/ShuckleIslandSouth/scripts.pory"
	playse SE_PIN
# 300 "data/maps/ShuckleIslandSouth/scripts.pory"
	waitse
# 301 "data/maps/ShuckleIslandSouth/scripts.pory"
	delay 30
# 302 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_BopItFinalSuccess_Text_0
# 303 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_BOPPED_IT
# 305 "data/maps/ShuckleIslandSouth/scripts.pory"
	release
	end


ShuckleIslandSouth_EventScript_hintNPCWildShuckle::
# 312 "data/maps/ShuckleIslandSouth/scripts.pory"
	lockall
# 313 "data/maps/ShuckleIslandSouth/scripts.pory"
	faceplayer
# 315 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_BOPPED_IT, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_2
# 323 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_5
ShuckleIslandSouth_EventScript_hintNPCWildShuckle_4:
# 330 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_1
# 332 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_8
# 339 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_3, 0
ShuckleIslandSouth_EventScript_hintNPCWildShuckle_7:
# 343 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_4, 1
# 344 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_5, 2
# 345 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_6, 3
# 347 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_set FLAG_SM_HINT_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_14
ShuckleIslandSouth_EventScript_hintNPCWildShuckle_11:
# 353 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 355 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_19
# 360 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_20
# 366 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_21
# 378 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_22
# 390 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_23
# 402 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_24
ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18:
# 438 "data/maps/ShuckleIslandSouth/scripts.pory"
	releaseall
	end

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_2:
# 317 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_0
# 318 "data/maps/ShuckleIslandSouth/scripts.pory"
	releaseall
	end

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_5:
# 325 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 326 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_4

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_8:
# 334 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_2, 0
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_7

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_12:
# 349 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_7, 4
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_11

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_13:
# 347 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_set FLAG_LRG_HINT_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_12
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_11

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_14:
# 347 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_set FLAG_MED_HINT_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_13
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_11

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_19:
# 357 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_20:
# 362 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox hintNPCAboutHints_text
# 363 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_21:
# 368 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox hintNPCWildShuckleSmallHint_text
# 370 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_SM_HINT_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_31
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_22:
# 380 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox hintNPCWildShuckleMedHint_text
# 382 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_MED_HINT_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_33
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_23:
# 392 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox hintNPCWildShuckleLargeHint_text
# 394 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_35
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_24:
# 404 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_SOLUTION_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_38
# 411 "data/maps/ShuckleIslandSouth/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandSouth_EventScript_hintNPCWildShuckle_37:
# 415 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_41
# 420 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouth_EventScript_hintNPCWildShuckle_42
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_31:
# 372 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_SM_HINT_WILD_SHUCKLE
# 373 "data/maps/ShuckleIslandSouth/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_33:
# 384 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_MED_HINT_WILD_SHUCKLE
# 385 "data/maps/ShuckleIslandSouth/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_35:
# 396 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_LRG_HINT_WILD_SHUCKLE
# 397 "data/maps/ShuckleIslandSouth/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_38:
# 406 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_37

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_41:
# 417 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_8
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_42:
# 422 "data/maps/ShuckleIslandSouth/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_WILD
# 423 "data/maps/ShuckleIslandSouth/scripts.pory"
	callnative DrawMugshot
# 424 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_9
# 425 "data/maps/ShuckleIslandSouth/scripts.pory"
	callnative ClearMugshot
# 427 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_SOLUTION_WILD_SHUCKLE, ShuckleIslandSouth_EventScript_hintNPCWildShuckle_45
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_45:
# 429 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_SOLUTION_WILD_SHUCKLE
# 430 "data/maps/ShuckleIslandSouth/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandSouth_EventScript_hintNPCWildShuckle_18


ShuckleIslandSouth_EventScript_NewMechWildShuckle::
# 445 "data/maps/ShuckleIslandSouth/scripts.pory"
	lockall
# 446 "data/maps/ShuckleIslandSouth/scripts.pory"
	faceplayer
# 448 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_BOPPED_IT, ShuckleIslandSouth_EventScript_NewMechWildShuckle_2
# 456 "data/maps/ShuckleIslandSouth/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIslandSouth_EventScript_NewMechWildShuckle_5
ShuckleIslandSouth_EventScript_NewMechWildShuckle_4:
# 463 "data/maps/ShuckleIslandSouth/scripts.pory"
	call NewMechNPCWildShuckleChoices
# 465 "data/maps/ShuckleIslandSouth/scripts.pory"
	releaseall
	end

ShuckleIslandSouth_EventScript_NewMechWildShuckle_2:
# 450 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_0
# 451 "data/maps/ShuckleIslandSouth/scripts.pory"
	releaseall
	end

ShuckleIslandSouth_EventScript_NewMechWildShuckle_5:
# 458 "data/maps/ShuckleIslandSouth/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 459 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIslandSouth_EventScript_NewMechWildShuckle_4


NewMechNPCWildShuckleChoices::
# 472 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox NewMechNPCWildShuckleChoices_Text_0
# 474 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush NewMechNPCWildShuckleChoices_Text_1, 0
# 475 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush NewMechNPCWildShuckleChoices_Text_2, 1
# 476 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultipush NewMechNPCWildShuckleChoices_Text_3, 2
# 478 "data/maps/ShuckleIslandSouth/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 480 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq NewMechNPCWildShuckleChoices_1
# 485 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMechNPCWildShuckleChoices_2
# 491 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewMechNPCWildShuckleChoices_3
# 497 "data/maps/ShuckleIslandSouth/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewMechNPCWildShuckleChoices_4
	return

NewMechNPCWildShuckleChoices_1:
# 482 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox NewMechNPCWildShuckleChoices_Text_4
	return

NewMechNPCWildShuckleChoices_2:
# 487 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox wildRun_text
# 488 "data/maps/ShuckleIslandSouth/scripts.pory"
	call NewMechNPCWildShuckleChoices
	return

NewMechNPCWildShuckleChoices_3:
# 493 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox NewMechNPCWildShuckleChoices_Text_5
# 494 "data/maps/ShuckleIslandSouth/scripts.pory"
	call NewMechNPCWildShuckleChoices
	return

NewMechNPCWildShuckleChoices_4:
# 499 "data/maps/ShuckleIslandSouth/scripts.pory"
	msgbox ShuckleAI_text
# 500 "data/maps/ShuckleIslandSouth/scripts.pory"
	call NewMechNPCWildShuckleChoices
	return


# 62 "data/maps/ShuckleIslandSouth/scripts.pory"
ShuckleIslandSouth_EventScript_Camper_Movement_0:
# 62 "data/maps/ShuckleIslandSouth/scripts.pory"
	face_player
	step_end

# 85 "data/maps/ShuckleIslandSouth/scripts.pory"
ShuckleIslandSouth_EventScript_Camper_Movement_1:
# 85 "data/maps/ShuckleIslandSouth/scripts.pory"
	walk_left
# 85 "data/maps/ShuckleIslandSouth/scripts.pory"
	face_down
	step_end

# 91 "data/maps/ShuckleIslandSouth/scripts.pory"
ShuckleIslandSouth_EventScript_Camper_Movement_2:
# 91 "data/maps/ShuckleIslandSouth/scripts.pory"
	walk_right
# 91 "data/maps/ShuckleIslandSouth/scripts.pory"
	face_down
	step_end

# 298 "data/maps/ShuckleIslandSouth/scripts.pory"
ShuckleIslandSouth_EventScript_BopItFinalSuccess_Movement_0:
# 298 "data/maps/ShuckleIslandSouth/scripts.pory"
	face_player
# 298 "data/maps/ShuckleIslandSouth/scripts.pory"
	emote_question_mark
	step_end

ShuckleIslandSouth_EventScript_Camper_Text_0:
# 72 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Wow, you managed to get a Berry Juice!\nCan I have it?$"

ShuckleIslandSouth_EventScript_Camper_Text_1:
# 80 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Ahh! That hits the spot!\nHere, I'll step out of the way for you.$"

ShuckleIslandSouth_EventScript_Camper_Text_2:
# 99 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Do you want me to tell everyone\nwhat you did to that Shuckle?$"

ShuckleIslandSouth_EventScript_Camper_Text_3:
# 107 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "You can't give me the Berry Juice if\nyour Pokémon is holding it!$"

ShuckleIslandSouth_EventScript_Camper_Text_4:
# 116 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Thanks again for the Berry Juice!$"

ShuckleIslandSouth_EventScript_ShuckleRocks_Text_0:
# 134 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "There's something yellow\nsquirming in the rocks.\pBop it?$"

ShuckleIslandSouth_EventScript_ShuckleRocks_Text_1:
# 150 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "The wild Shuckle attacked!$"

ShuckleIslandSouth_EventScript_ShuckleRocks_Text_2:
# 167 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "It's a rugged rock, but a Pokémon\nmay be able to smash it.\pThough you get the feeling that's not\nwhat you should be doing here.$"

ShuckleIslandSouth_EventScript_ShuckleRocks_Text_3:
# 174 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "The Shuckle in these rocks seem to\nhave retreated for the time being.$"

ShuckleIslandSouth_EventScript_BopItSuccess_Text_0:
# 195 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Pull it?$"

ShuckleIslandSouth_EventScript_BopItSuccess_Text_1:
# 198 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Twist it?$"

ShuckleIslandSouth_EventScript_BopItSuccess_Text_2:
# 201 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Flick it?$"

ShuckleIslandSouth_EventScript_BopItSuccess_Text_3:
# 204 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Pull it again?$"

ShuckleIslandSouth_EventScript_BopItSuccess_Text_4:
# 207 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Pull it harder?$"

ShuckleIslandSouth_EventScript_BopItFail_Text_0:
# 244 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "High score!\pIs not what just happened.$"

ShuckleIslandSouth_EventScript_BopItFail_Text_1:
# 247 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "I know.\pIt ain't easy.$"

ShuckleIslandSouth_EventScript_BopItFail_Text_2:
# 250 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Yow…try harder!$"

ShuckleIslandSouth_EventScript_BopItFail_Text_3:
# 253 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Hey, you win!\pNOT.$"

ShuckleIslandSouth_EventScript_BopItFail_Text_4:
# 256 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "You're out!$"

ShuckleIslandSouth_EventScript_BopItFail_Text_5:
# 259 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Uh, first time playing?$"

ShuckleIslandSouth_EventScript_BopItFail_Text_6:
# 262 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Focus, concentrate.$"

ShuckleIslandSouth_EventScript_BopItFail_Text_7:
# 265 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Listen, do it, repeat.$"

ShuckleIslandSouth_EventScript_BopItFail_Text_8:
# 268 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Come on, you can do this.$"

ShuckleIslandSouth_EventScript_BopItFail_Text_9:
# 271 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Do it the same but, uh, better!$"

ShuckleIslandSouth_EventScript_BopItFail_Text_10:
# 274 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "I remember my first time playing Bop It!$"

ShuckleIslandSouth_EventScript_BopItFail_Text_11:
# 277 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Fair enough.\pThe camper is right there, and this\nisn't helping you beat the allegations.$"

ShuckleIslandSouth_EventScript_BopItFinalSuccess_Text_0:
# 302 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Uh, what are you doing to that Shuckle?\pUsually we just go up to the rocks\nand the Shuckle attack…$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_0:
# 317 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "They're being quiet right now.\nMaybe they'll have more to say soon?$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_1:
# 330 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Now then, what hints can I offer you?\n(Press B to exit)$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_2:
# 334 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "About Hints (read me!)$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_3:
# 339 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "About Hints$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_4:
# 343 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Small Hint$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_5:
# 344 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Medium Hint$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_6:
# 345 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Large Hint$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_7:
# 349 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Solution$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_8:
# 417 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Understood.\pKeep trying, and come back\nif you feel you need the solution.$"

ShuckleIslandSouth_EventScript_hintNPCWildShuckle_Text_9:
# 424 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "https://youtu.be/9BBGabKeHy4$"

NewMechNPCWildShuckleChoices_Text_0:
# 472 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Now then, what new mechanics do\nyou want explained? (Press B to exit)$"

NewMechNPCWildShuckleChoices_Text_1:
# 474 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Running From Wild Battles$"

NewMechNPCWildShuckleChoices_Text_2:
# 475 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Trapping Moves$"

NewMechNPCWildShuckleChoices_Text_3:
# 476 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Shuckle AI$"

NewMechNPCWildShuckleChoices_Text_4:
# 482 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Stop by if you ever want\nthe new mechanics explained again!$"

NewMechNPCWildShuckleChoices_Text_5:
# 493 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Damaging trapping moves now deal\ndamage on their release turn.$"

Camper_Intro_Text::
# 506 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Team Shuckle asked me to guard this\n"
	.string "cave, but I didn't expect a sandstorm!\p"
	.string "Where is all the sand even coming from?\n"
	.string "We're in the middle of the ocean!\p"
	.string "Anyway, I'm parched. So tell you what…\p"
	.string "I'll let you pass if you get me a\n"
	.string "Berry Juice from a Shuckle in the rocks.$"

Camper_Help_Text::
# 518 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "The Shuckle here are tough, so I\n"
	.string "recommend taking the juice and running.\p"
	.string "Just make sure your own Pokémon\n"
	.string "don't get thirsty and drink it first!$"

hintNPCWildShuckleSmallHint_text::
# 527 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Even though speed no longer affects\n"
	.string "running, could speed still be important?$"

hintNPCWildShuckleMedHint_text::
# 534 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Can both of your Pokemon hold the\n"
	.string "Berry Juice during the battle?$"

hintNPCWildShuckleLargeHint_text::
# 541 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Munchlax must use Defense Curl before\n"
	.string "Shuckle's first attack on Munchlax.$"

wildRun_text::
# 548 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Speed no longer affects your odds\n"
	.string "of running from wild battles.\p"
	.string "You'll always be able to escape!$"

ShuckleAI_text::
# 556 "data/maps/ShuckleIslandSouth/scripts.pory"
	.string "Shuckle will always use Sand Tomb if its\n"
	.string "opponent isn't trapped by the move.\p"
	.string "Otherwise, Shuckle defaults to using\n"
	.string "its highest damaging move.$"
