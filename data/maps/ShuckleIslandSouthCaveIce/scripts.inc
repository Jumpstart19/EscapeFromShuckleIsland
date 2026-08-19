ShuckleIslandSouthCaveIce_MapScripts::
# 3 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShuckleIslandSouthCaveIce_EventScript_SetFlags
# 5 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShuckleIslandSouthCaveIce_EventScript_OnLoad
	.byte 0


ShuckleIslandSouthCaveIce_EventScript_SetFlags::
# 29 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_DONT_REMOVE_OFFSCREEN_OBJECT
# 30 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_OBJECTS
# 31 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_BRENDAN
# 32 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_MAY
	return


ShuckleIslandSouthCaveIce_EventScript_OnLoad::
# 38 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_ICE_CAVE_BOULDER_1, 10
	goto_if_ne ShuckleIslandSouthCaveIce_EventScript_OnLoad_2
ShuckleIslandSouthCaveIce_EventScript_OnLoad_1:
# 44 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_ICE_CAVE_BOULDER_2, 10
	goto_if_ne ShuckleIslandSouthCaveIce_EventScript_OnLoad_4
	return

ShuckleIslandSouthCaveIce_EventScript_OnLoad_2:
# 40 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 38, 4, 0x396, TRUE
	goto ShuckleIslandSouthCaveIce_EventScript_OnLoad_1

ShuckleIslandSouthCaveIce_EventScript_OnLoad_4:
# 46 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 58, 5, 0x396, TRUE
# 47 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 59, 5, 0x396, TRUE
	return


ShuckleIslandSouthCaveIce_EventScript_Switch1::
# 56 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 57 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	checkobjectat 31, 9
# 59 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_Switch1_2
ShuckleIslandSouthCaveIce_EventScript_Switch1_1:
# 72 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	end

ShuckleIslandSouthCaveIce_EventScript_Switch1_2:
# 61 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 38, 4, 0x381, FALSE
# 62 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	playse SE_ICE_BREAK
# 63 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
# 64 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitse
# 65 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_ICE_CAVE_BOULDER_1, 10
# 66 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_ICE_STRENGTH_PUZZLE_1
# 67 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_REMOVE_ICE_STRENGTH_PUZZLE_1_CLEAR_BOULDER
# 68 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_HINT_NPC_ICE_PUZZLE_2
	goto ShuckleIslandSouthCaveIce_EventScript_Switch1_1


ShuckleIslandSouthCaveIce_EventScript_Switch2::
# 79 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 80 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	checkobjectat 52, 8
# 82 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_Switch2_2
ShuckleIslandSouthCaveIce_EventScript_Switch2_1:
# 106 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	end

ShuckleIslandSouthCaveIce_EventScript_Switch2_2:
# 84 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	checkobjectat 52, 11
# 86 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_Switch2_4
	goto ShuckleIslandSouthCaveIce_EventScript_Switch2_1

ShuckleIslandSouthCaveIce_EventScript_Switch2_4:
# 88 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 58, 5, 0x381, FALSE
# 89 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 59, 5, 0x381, FALSE
# 90 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	playse SE_ICE_BREAK
# 91 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
# 92 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitse
# 93 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_ICE_CAVE_BOULDER_2, 10
# 94 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_ICE_STRENGTH_PUZZLE_2
# 95 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_REMOVE_ICE_STRENGTH_PUZZLE_2_CLEAR_BOULDER
# 96 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_HINT_NPC_ICE_PUZZLE_2
# 97 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_SETUP_BATTLE_4_NPCS
# 98 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_PETREL_BERRY_DISGUISE
# 99 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_PETREL_FEMALE_DISGUISE
# 100 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_PETREL_NO_DISGUISE
	goto ShuckleIslandSouthCaveIce_EventScript_Switch2_1


ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1::
# 113 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lock
# 114 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	faceplayer
# 116 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_2
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_1:
# 123 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_0
# 125 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_5
# 132 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_2, 0
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_4:
# 136 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_3, 1
# 138 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_set FLAG_MED_HINT_ICE_PUZZLE_1, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_9
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_8:
# 144 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 146 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_12
# 151 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_13
# 157 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_14
# 237 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_15
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11:
# 296 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	release
	end

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_2:
# 118 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 119 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_1

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_5:
# 127 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_1, 0
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_4

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_9:
# 140 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_4, 2
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_8

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_12:
# 148 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_13:
# 153 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCAboutHints_text
# 154 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_14:
# 159 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_MED_HINT_ICE_PUZZLE_1, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_21
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_20:
# 166 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	closemessage
# 168 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special SpawnCameraObject
# 169 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_ICE_PUZZLE_HINT_OBJECTS
# 170 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 11
# 171 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	checkplayergender
# 172 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_28
# 178 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_29
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_27:
# 184 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_ICE_STRENGTH_PUZZLE_1
# 185 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 1
# 186 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
# 187 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_37
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_1
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_36:
# 199 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitmovement
# 200 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearRedIce2NoSound
# 201 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearGreenIce2NoSound
# 202 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call SetOrangeIce2NoSound
# 203 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 205 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_5
# 206 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitmessage
# 208 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_OBJECTS
# 210 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_BRENDAN
# 211 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_MAY
# 212 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 11
# 213 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 12
# 214 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 16
# 215 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_ICE_STRENGTH_PUZZLE_1
# 216 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 1
# 217 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_44
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_3
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_43:
# 229 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitmovement
# 230 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearOrangeIce2NoSound
# 231 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call SetRedIce2NoSound
# 232 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special RemoveCameraObject
# 233 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	closemessage
# 234 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_15:
# 240 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_SOLUTION_ICE_PUZZLE_1, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_24
# 247 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_23:
# 251 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_32
# 256 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_33
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_21:
# 161 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_MED_HINT_ICE_PUZZLE_1
# 162 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_20

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_24:
# 242 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_23

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_28:
# 174 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_ICE_PUZZLE_HINT_BRENDAN
# 175 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 12
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_27

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_29:
# 180 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_ICE_PUZZLE_HINT_MAY
# 181 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 16
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_27

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_32:
# 253 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_6
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_33:
# 258 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ICE_1
# 259 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	callnative DrawMugshot
# 260 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_7
# 261 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	callnative ClearMugshot
# 263 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_ICE_STRENGTH_PUZZLE_1, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_41
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_40:
# 285 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_SOLUTION_ICE_PUZZLE_1, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_47
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_37:
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_0
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_36

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_41:
# 265 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_8, MSGBOX_YESNO
# 267 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_49
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_40

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_44:
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_2
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_43

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_47:
# 287 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_SOLUTION_ICE_PUZZLE_1
# 288 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_49:
# 269 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 38, 4, 0x381, FALSE
# 270 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	playse SE_ICE_BREAK
# 271 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitse
# 272 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_ICE_CAVE_BOULDER_1, 10
# 273 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_REMOVE_ICE_STRENGTH_PUZZLE_1_CLEAR_BOULDER
# 274 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 1
# 275 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
# 276 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_ICE_STRENGTH_PUZZLE_1
# 277 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_HINT_NPC_ICE_PUZZLE_2
# 279 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_9
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_40


ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2::
# 303 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lock
# 304 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	faceplayer
# 306 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_2
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_1:
# 313 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_0
# 315 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_5
# 322 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_2, 0
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_4:
# 326 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_3, 1
# 328 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_set FLAG_MED_HINT_ICE_PUZZLE_2, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_9
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_8:
# 334 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 336 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_12
# 341 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_13
# 347 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_14
# 444 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_15
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11:
# 509 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	release
	end

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_2:
# 308 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 309 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_1

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_5:
# 317 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_1, 0
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_4

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_9:
# 330 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	dynmultipush ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_4, 2
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_8

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_12:
# 338 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_13:
# 343 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCAboutHints_text
# 344 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_14:
# 349 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_MED_HINT_ICE_PUZZLE_2, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_21
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_20:
# 356 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_TO_BLACK
# 357 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	closemessage
# 358 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special SpawnCameraObject
# 359 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_ICE_PUZZLE_HINT_OBJECTS
# 360 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 14
# 361 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 15
# 362 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	checkplayergender
# 363 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_28
# 369 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_29
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_27:
# 375 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 13
# 376 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_ICE_STRENGTH_PUZZLE_2
# 377 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 2
# 378 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 5
# 379 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
# 380 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_TEMP_9, 4
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_37
# 386 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_TEMP_8, 38
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_38
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_2
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_36:
# 398 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitmovement
# 399 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearRedIce2NoSound
# 400 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearOrangeIce2NoSound
# 401 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call SetGreenIce2NoSound
# 402 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 404 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_5
# 405 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitmessage
# 407 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_TO_BLACK
# 408 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_OBJECTS
# 409 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_BRENDAN
# 410 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_ICE_PUZZLE_HINT_MAY
# 411 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 14
# 412 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 15
# 413 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 13
# 414 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 17
# 415 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_ICE_STRENGTH_PUZZLE_2
# 416 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 2
# 417 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 5
# 418 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_TEMP_9, 4
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_46
# 424 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_TEMP_8, 38
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_47
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_5
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_45:
# 436 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitmovement
# 437 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearGreenIce2NoSound
# 438 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call SetRedIce2NoSound
# 439 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special RemoveCameraObject
# 440 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	closemessage
# 441 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_15:
# 447 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_SOLUTION_ICE_PUZZLE_2, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_24
# 454 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_23:
# 458 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_32
# 463 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_33
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_21:
# 351 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_MED_HINT_ICE_PUZZLE_2
# 352 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_20

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_24:
# 449 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_23

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_28:
# 365 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_ICE_PUZZLE_HINT_BRENDAN
# 366 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 13
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_27

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_29:
# 371 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_CLEAR_ICE_PUZZLE_HINT_MAY
# 372 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addobject 17
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_27

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_32:
# 460 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_6
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_33:
# 465 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ICE_2
# 466 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	callnative DrawMugshot
# 467 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Text_0
# 468 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	callnative ClearMugshot
# 470 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_ICE_STRENGTH_PUZZLE_2, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_43
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_42:
# 498 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_SOLUTION_ICE_PUZZLE_2, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_51
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_37:
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_0
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_36

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_38:
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_1
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_36

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_43:
# 472 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_8, MSGBOX_YESNO
# 474 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_53
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_42

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_46:
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_3
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_45

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_47:
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_4
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_45

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_51:
# 500 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_SOLUTION_ICE_PUZZLE_2
# 501 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_11

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_53:
# 476 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 58, 5, 0x381, FALSE
# 477 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 59, 5, 0x381, FALSE
# 478 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	playse SE_ICE_BREAK
# 479 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	waitse
# 480 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setvar VAR_ICE_CAVE_BOULDER_2, 10
# 481 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_REMOVE_ICE_STRENGTH_PUZZLE_2_CLEAR_BOULDER
# 482 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 2
# 483 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	removeobject 5
# 484 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
# 485 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_ICE_STRENGTH_PUZZLE_2
# 486 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_SETUP_BATTLE_4_NPCS
# 487 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_PETREL_BERRY_DISGUISE
# 488 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_PETREL_FEMALE_DISGUISE
# 489 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_PETREL_NO_DISGUISE
# 490 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_CLEAR_HINT_NPC_ICE_PUZZLE_2
# 492 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Text_1
	goto ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_42


ShuckleIslandSouthCaveIce_EventScript_IceSwitch::
# 516 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_TEMP_A, ShuckleIslandSouthCaveIce_EventScript_IceSwitch_1
# 524 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	goto_if_unset FLAG_TEMP_B, ShuckleIslandSouthCaveIce_EventScript_IceSwitch_2
# 533 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_TEMP_A
# 534 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	clearflag FLAG_TEMP_B
# 535 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearGreenIce2
# 536 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call SetRedIce2
	return

ShuckleIslandSouthCaveIce_EventScript_IceSwitch_1:
# 518 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_TEMP_A
# 519 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearRedIce2
# 520 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call SetOrangeIce2
	return

ShuckleIslandSouthCaveIce_EventScript_IceSwitch_2:
# 526 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setflag FLAG_TEMP_B
# 527 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call ClearOrangeIce2
# 528 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	call SetGreenIce2
	return


ShuckleIslandSouthCaveIce_EventScript_SignWarp::
# 545 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lock
# 546 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	msgbox SignWarp_text, MSGBOX_SIGN
# 547 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	release
	end


SetRedIce2::
# 554 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 555 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 10, 0x39C, FALSE
# 556 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 8, 0x39C, FALSE
# 557 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 28, 9, 0x39C, FALSE
# 558 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 12, 10, 0x39C, FALSE
# 559 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 11, 0x39C, FALSE
# 560 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 7, 0x39C, FALSE
# 561 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 6, 0x39C, FALSE
# 562 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 12, 0x39C, FALSE
# 564 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 22, 9, 0x393, FALSE
# 565 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 9, 0x393, FALSE
# 567 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	playse SE_SWITCH
# 568 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
# 569 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	delay 30
# 570 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	return


ClearRedIce2::
# 576 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 577 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 10, 0x397, FALSE
# 578 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 8, 0x397, FALSE
# 579 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 28, 9, 0x397, FALSE
# 580 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 12, 10, 0x397, FALSE
# 581 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 11, 0x397, FALSE
# 582 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 7, 0x397, FALSE
# 583 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 6, 0x397, FALSE
# 584 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 12, 0x397, FALSE
# 585 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	return


SetOrangeIce2::
# 591 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 592 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 8, 0x39D, FALSE
# 593 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 21, 12, 0x39D, FALSE
# 594 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 11, 9, 0x39D, FALSE
# 595 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 7, 0x39D, FALSE
# 596 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 12, 0x39D, FALSE
# 597 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 8, 0x39D, FALSE
# 598 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 12, 0x39D, FALSE
# 600 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 22, 9, 0x394, FALSE
# 601 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 9, 0x394, FALSE
# 603 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	playse SE_SWITCH
# 604 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
# 605 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	delay 30
# 606 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	return


ClearOrangeIce2::
# 612 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 613 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 8, 0x35F, FALSE
# 614 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 21, 12, 0x35F, FALSE
# 615 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 11, 9, 0x35F, FALSE
# 616 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 7, 0x35F, FALSE
# 617 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 12, 0x35F, FALSE
# 618 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 8, 0x35F, FALSE
# 619 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 12, 0x35F, FALSE
# 620 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	return


SetGreenIce2::
# 626 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 627 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 12, 0x39B, FALSE
# 628 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 6, 0x39B, FALSE
# 629 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 27, 10, 0x39B, FALSE
# 630 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 44, 8, 0x39B, FALSE
# 631 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 6, 0x39B, FALSE
# 632 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 12, 0x39B, FALSE
# 634 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 22, 9, 0x395, FALSE
# 635 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 9, 0x395, FALSE
# 637 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	playse SE_SWITCH
# 638 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
# 639 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	delay 30
# 640 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	return


ClearGreenIce2::
# 646 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	lockall
# 647 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 12, 0x364, FALSE
# 648 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 6, 0x364, FALSE
# 649 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 27, 10, 0x364, FALSE
# 650 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 44, 8, 0x364, FALSE
# 651 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 6, 0x364, FALSE
# 652 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 12, 0x364, FALSE
# 653 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	releaseall
	return


SetRedIce2NoSound::
# 659 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 10, 0x39C, FALSE
# 660 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 8, 0x39C, FALSE
# 661 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 28, 9, 0x39C, FALSE
# 662 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 12, 10, 0x39C, FALSE
# 663 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 11, 0x39C, FALSE
# 664 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 7, 0x39C, FALSE
# 665 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 6, 0x39C, FALSE
# 666 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 12, 0x39C, FALSE
# 668 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 22, 9, 0x393, FALSE
# 669 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 9, 0x393, FALSE
# 671 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
	return


ClearRedIce2NoSound::
# 677 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 10, 0x397, FALSE
# 678 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 8, 0x397, FALSE
# 679 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 28, 9, 0x397, FALSE
# 680 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 12, 10, 0x397, FALSE
# 681 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 11, 0x397, FALSE
# 682 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 7, 0x397, FALSE
# 683 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 6, 0x397, FALSE
# 684 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 12, 0x397, FALSE
	return


SetOrangeIce2NoSound::
# 690 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 8, 0x39D, FALSE
# 691 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 21, 12, 0x39D, FALSE
# 692 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 11, 9, 0x39D, FALSE
# 693 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 7, 0x39D, FALSE
# 694 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 12, 0x39D, FALSE
# 695 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 8, 0x39D, FALSE
# 696 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 12, 0x39D, FALSE
# 698 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 22, 9, 0x394, FALSE
# 699 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 9, 0x394, FALSE
# 701 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
	return


ClearOrangeIce2NoSound::
# 707 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 8, 0x35F, FALSE
# 708 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 21, 12, 0x35F, FALSE
# 709 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 11, 9, 0x35F, FALSE
# 710 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 41, 7, 0x35F, FALSE
# 711 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 43, 12, 0x35F, FALSE
# 712 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 8, 0x35F, FALSE
# 713 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 12, 0x35F, FALSE
	return


SetGreenIce2NoSound::
# 719 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 12, 0x39B, FALSE
# 720 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 6, 0x39B, FALSE
# 721 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 27, 10, 0x39B, FALSE
# 722 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 44, 8, 0x39B, FALSE
# 723 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 6, 0x39B, FALSE
# 724 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 12, 0x39B, FALSE
# 726 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 22, 9, 0x395, FALSE
# 727 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 47, 9, 0x395, FALSE
# 729 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	special DrawWholeMapView
	return


ClearGreenIce2NoSound::
# 735 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 18, 12, 0x364, FALSE
# 736 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 26, 6, 0x364, FALSE
# 737 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 27, 10, 0x364, FALSE
# 738 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 44, 8, 0x364, FALSE
# 739 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 48, 6, 0x364, FALSE
# 740 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	setmetatile 49, 12, 0x364, FALSE
	return


# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_0:
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 190 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
	step_end

# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_1:
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 196 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
	step_end

# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_2:
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 220 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
	step_end

# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Movement_3:
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 226 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
	step_end

# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_0:
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 383 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
	step_end

# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_1:
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 389 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
	step_end

# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_2:
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_down
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
# 395 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_right
	step_end

# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_3:
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 421 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
	step_end

# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_4:
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 427 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
	step_end

# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Movement_5:
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_up
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
# 433 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	walk_faster_left
	step_end

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_0:
# 123 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Now then, what hints can I offer you?\n(Press B to exit)$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_1:
# 127 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "About Hints (read me!)$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_2:
# 132 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "About Hints$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_3:
# 136 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Medium Hint$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_4:
# 140 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Solution$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_5:
# 205 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Can you get the puzzle to this state?$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_6:
# 253 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Understood.\pKeep trying, and come back\nif you feel you need the solution.$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_7:
# 260 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "https://youtu.be/RO2lxSzn1xk$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_8:
# 265 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Would you also like me to auto-solve\nthe puzzle for you?$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle1_Text_9:
# 279 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Alright! I've cleared the rock\nblocking the next puzzle for you.$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Text_0:
# 467 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "https://youtu.be/hLiB4hj2E_0$"

ShuckleIslandSouthCaveIce_EventScript_hintNPCIcePuzzle2_Text_1:
# 492 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Alright! I've cleared the rocks\nblocking the exit for you.$"

SignWarp_text::
# 744 "data/maps/ShuckleIslandSouthCaveIce/scripts.pory"
	.string "Use the warp panels below to\n"
	.string "quickly reset the ice puzzle.$"
