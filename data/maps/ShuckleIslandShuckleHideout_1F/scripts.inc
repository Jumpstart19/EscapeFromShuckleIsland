ShuckleIslandShuckleHideout_1F_MapScripts::
# 3 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIslandShuckleHideout_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIslandShuckleHideout_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 0, ShuckleIslandShuckleHideout_1F_EventScript_inCell
# 6 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 100, ShuckleIslandShuckleHideout_1F_EventScript_setSnorlax2
# 7 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 200, ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed
	.2byte 0


ShuckleIslandShuckleHideout_1F_EventScript_inCell::
# 62 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 63 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_inCell_Text_0
# 64 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 65 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 66 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_0
# 67 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 68 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 14, ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_1
# 69 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 70 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hideoutIntro_text
# 71 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 72 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 73 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 14, ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_2
# 74 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 75 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 58, 12, 0x259, TRUE
# 76 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special DrawWholeMapView
# 77 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_SWITCH
# 78 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 79 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	clearflag FLAG_CLEAR_CELL_DOOR
# 80 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addobject 46
# 81 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay 40
# 82 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 14, ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_3
# 83 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 84 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CLEAR_INTRO_GRUNT
# 85 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeobject 14
# 87 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_GALLADE
# 88 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 90 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_inCell_2
# 98 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_GRUDGE, MOVE_NONE, MOVE_NONE, MOVE_NONE
# 99 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_NONE, MOVE_NONE
ShuckleIslandShuckleHideout_1F_EventScript_inCell_1:
# 103 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
# 104 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 1
# 105 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_inCell_2:
# 92 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_GRUDGE, MOVE_NONE, MOVE_NONE, MOVE_NONE
# 93 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_NONE, MOVE_NONE
	goto ShuckleIslandShuckleHideout_1F_EventScript_inCell_1


ShuckleIslandShuckleHideout_1F_EventScript_setSnorlax2::
# 112 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 113 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX
# 114 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 115 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_ne ShuckleIslandShuckleHideout_1F_EventScript_setSnorlax2_2
ShuckleIslandShuckleHideout_1F_EventScript_setSnorlax2_1:
# 120 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 1
# 121 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_1F_EventScript_setSnorlax2_2:
# 117 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setsnorlax2 VAR_TEMP_B
	goto ShuckleIslandShuckleHideout_1F_EventScript_setSnorlax2_1


ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed::
# 128 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 129 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX
# 130 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 131 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_ne ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_2
ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_1:
# 136 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_BATTLE_6_HINT_NPC_TEXT, ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_5
ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_4:
# 153 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitemfrommon 0
# 154 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitemfrommon 1
# 155 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitem VAR_BATTLE6_BERRY
# 156 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	giveitemnojingle VAR_BATTLE6_BERRY
# 157 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SITRUS_BERRY, ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_8
ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_7:
# 163 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 20
# 164 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B1F_STATE, 1
# 165 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_2:
# 133 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setsnorlax2 VAR_TEMP_B
	goto ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_1

ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_5:
# 138 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 21, ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_Movement_0
# 139 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 140 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_Movement_1
# 141 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 142 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPC6message_text
# 143 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 145 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 21, ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_Movement_2
# 146 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 147 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_0
# 148 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 150 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_BATTLE_6_HINT_NPC_TEXT
	goto ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_4

ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_8:
# 159 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitem ITEM_SITRUS_BERRY
# 160 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	giveitemnojingle ITEM_SITRUS_BERRY
	goto ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_7


ShuckleIslandShuckleHideout_1F_EventScript_cellSign::
# 172 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 173 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_STARTED_BATTLE_5, ShuckleIslandShuckleHideout_1F_EventScript_cellSign_2
# 180 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellSign2_text, MSGBOX_SIGN
ShuckleIslandShuckleHideout_1F_EventScript_cellSign_1:
# 183 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_READ_CELL_SIGN
# 184 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_cellSign_2:
# 175 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellSign_text, MSGBOX_SIGN
	goto ShuckleIslandShuckleHideout_1F_EventScript_cellSign_1


ShuckleIslandShuckleHideout_1F_EventScript_cellDoor::
# 191 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 193 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_READ_CELL_SIGN, ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_2
# 200 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoor1_text, MSGBOX_YESNO
# 201 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_5
# 274 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoorNo1_text
ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_1:
# 280 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_2:
# 195 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoorNoSign_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_5:
# 203 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_M_FLATTER
# 204 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 205 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoor2_text, MSGBOX_YESNO
# 206 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_8
# 267 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoorNo2_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_8:
# 208 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_M_FLATTER
# 209 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 210 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoor3_text, MSGBOX_YESNO
# 211 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_11
# 260 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoorNo3_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_11:
# 213 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_M_FLATTER
# 214 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 215 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox cellDoor4_text
# 216 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 217 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 218 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 219 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 220 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	clearflag FLAG_CLEAR_BATTLE_5_START_GRUNT
# 221 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addobject 13
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 13, ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_Movement_0
# 223 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 224 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_Text_0
# 225 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 226 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 227 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CLEAR_CELL_DOOR
# 228 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeobject 46
# 229 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 58, 12, 0x228, FALSE
# 230 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special DrawWholeMapView
# 231 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_SWITCH
# 232 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 13, ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_Movement_1
# 234 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 235 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 236 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 13, ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_1
# 237 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 238 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox battle5Grunt_text
# 239 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 240 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_STARTED_BATTLE_5
# 241 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	clearflag FLAG_CLEAR_BATTLE_5_NPCS
# 242 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_5_START_GRUNT
# 243 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	clearflag FLAG_CLEAR_INTRO_GRUNT
# 244 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addobject 14
# 245 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeobject 13
# 246 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_3
# 247 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX
# 248 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 249 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_ne ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_15
ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_14:
# 254 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 100
# 255 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, battle5Intro_text, battle5Lose_text, ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5
	goto ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_15:
# 251 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setsnorlax2 VAR_TEMP_B
	goto ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_14


ShuckleIslandShuckleHideout_1F_EventScript_ContinueBattle5::
# 287 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 100
# 288 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, battle5IntroShort_text, battle5Lose_text, ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5
	return


ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5::
# 294 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 296 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_5_NPCS
# 297 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CLEAR_INTRO_GRUNT
# 299 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox postBattle5_1_text
# 300 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 301 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 303 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 14, ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5_Movement_0
# 304 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 305 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 307 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox postBattle5_2_text
# 308 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 309 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 14, ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5_Movement_1
# 312 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 314 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeobject 14
# 315 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeobject 45
# 317 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 9, 6, 0x31C, TRUE
# 318 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 10, 6, 0x31D, TRUE
# 319 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 11, 6, 0x31E, TRUE
# 320 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special DrawWholeMapView
# 321 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_6_NPCS
# 322 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
# 323 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_2
# 325 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5::
# 332 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 333 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 335 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_2
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_1:
# 342 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_0
# 344 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_5
# 351 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_2, 0
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_4:
# 355 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_3, 1
# 356 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_4, 2
# 358 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_5, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_10
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_8:
# 364 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 366 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_14
# 371 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_15
# 377 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_16
# 389 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_17
# 401 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_18
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13:
# 437 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_2:
# 337 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 338 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_1

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_5:
# 346 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_1, 0
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_4

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_9:
# 360 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_5, 3
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_8

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_10:
# 358 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_5, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_9
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_8

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_14:
# 368 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_15:
# 373 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCAboutHints_text
# 374 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_16:
# 379 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCBattle5SmallHint_text
# 381 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_5, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_24
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_17:
# 391 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCBattle5MedHint_text
# 393 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_5, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_26
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_18:
# 403 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_5, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_29
# 410 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_28:
# 414 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_32
# 419 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_33
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_24:
# 383 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_5
# 384 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_26:
# 395 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_5
# 396 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_29:
# 405 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_28

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_32:
# 416 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_6
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_33:
# 421 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_5
# 422 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	callnative DrawMugshot
# 423 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_7
# 424 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	callnative ClearMugshot
# 426 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_5, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_36
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_36:
# 428 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_5
# 429 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_13


ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC5::
# 444 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 445 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 447 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC5_2
ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC5_1:
# 454 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC5Choices
# 456 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC5_2:
# 449 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 450 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC5_1


NewMechNPC5Choices::
# 463 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC5Choices_Text_0
# 465 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC5Choices_Text_1, 0
# 466 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC5Choices_Text_2, 1
# 467 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC5Choices_Text_3, 2
# 468 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC5Choices_Text_4, 3
# 470 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 472 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq NewMechNPC5Choices_1
# 477 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMechNPC5Choices_2
# 483 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewMechNPC5Choices_3
# 489 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewMechNPC5Choices_4
# 495 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewMechNPC5Choices_5
	return

NewMechNPC5Choices_1:
# 474 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC5Choices_Text_5
	return

NewMechNPC5Choices_2:
# 479 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox secondAbilities_text
# 480 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC5Choices
	return

NewMechNPC5Choices_3:
# 485 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox satedBelch_text
# 486 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC5Choices
	return

NewMechNPC5Choices_4:
# 491 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox anodyne_text
# 492 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC5Choices
	return

NewMechNPC5Choices_5:
# 497 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC5Choices_Text_6
# 498 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC5Choices
	return


ShuckleIslandShuckleHideout_1F_EventScript_BlockStairs::
# 506 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 507 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 509 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox blockStairs_text
# 511 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_1F_EventScript_HariyamaDmgCalc::
# 518 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 520 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PC_ON
# 521 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_HariyamaDmgCalc_Text_0
# 522 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 524 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call HariyamaDmgCalcOptions
# 526 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


HariyamaDmgCalcOptions::
# 533 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hariyamaDmgCalcIntro_text
# 535 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush HariyamaDmgCalcOptions_Text_0, 0
# 536 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush HariyamaDmgCalcOptions_Text_1, 1
# 538 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 540 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq HariyamaDmgCalcOptions_1
# 547 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HariyamaDmgCalcOptions_2
# 555 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HariyamaDmgCalcOptions_3
	return

HariyamaDmgCalcOptions_1:
# 542 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PC_OFF
# 543 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox dmgCalcClose_text
# 544 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	return

HariyamaDmgCalcOptions_2:
# 549 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 550 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	displayhariyamasnorlaxdmgcalc
# 551 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitbbuttonpress
# 552 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call HariyamaDmgCalcOptions
	return

HariyamaDmgCalcOptions_3:
# 557 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 558 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	displayhariyamagalladedmgcalc
# 559 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitbbuttonpress
# 560 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call HariyamaDmgCalcOptions
	return


ShuckleIslandShuckleHideout_1F_EventScript_GiveSitrusBerry::
# 568 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 569 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 570 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeobject 6
# 571 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_RECEIVED_SITRUS_BERRY
# 572 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor::
# 579 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 581 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_CAMPER_CELL_START, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_7
ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_5:
# 587 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_CAMPER_CELL_FINISH, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_4
ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_1:
# 607 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_CAMPER_CELL_FINISH, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_18
ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_16:
# 620 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_CAMPER_CELL_FINISH, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_15
ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_14:
# 625 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_WON_BATTLE_7, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_13
ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_10:
# 631 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_2:
# 583 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox camperCell1_text
# 584 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CAMPER_CELL_START
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_3:
# 589 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox camperCell2_text, MSGBOX_YESNO
# 591 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_21
# 601 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox camperCell2N_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_4:
# 587 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_WON_BATTLE_7, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_3
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_7:
# 581 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_WON_BATTLE_7, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_2
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_5

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_11:
# 609 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox camperCell3_text, MSGBOX_YESNO
# 611 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_24
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_10

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_12:
# 622 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox camperCellPost_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_10

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_13:
# 627 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox campercellGone_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_10

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_15:
# 620 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_WON_BATTLE_7, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_12
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_14

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_18:
# 607 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_WON_BATTLE_7, ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_11
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_16

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_21:
# 593 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_M_FLATTER
# 594 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 595 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox camperCell2Y_text
# 596 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_CAMPER_CELL_FINISH
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_1

ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_24:
# 613 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_M_FLATTER
# 614 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 615 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox camperCell3Y_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_CamperCellDoor_10


ShuckleIslandShuckleHideout_1F_EventScript_BerrySign::
# 638 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 639 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_BerrySign_Text_0
# 640 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_Petrel::
# 647 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 648 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 650 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_WON_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_Petrel_2
# 705 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_PETREL_PRE_BATTLE_7, ShuckleIslandShuckleHideout_1F_EventScript_Petrel_9
ShuckleIslandShuckleHideout_1F_EventScript_Petrel_8:
# 712 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_7, ShuckleIslandShuckleHideout_1F_EventScript_Petrel_14
# 751 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_20
ShuckleIslandShuckleHideout_1F_EventScript_Petrel_1:
# 757 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_2:
# 652 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_PETREL_PRE_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_Petrel_6
ShuckleIslandShuckleHideout_1F_EventScript_Petrel_5:
# 659 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_6, ShuckleIslandShuckleHideout_1F_EventScript_Petrel_11
# 698 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_18
	goto ShuckleIslandShuckleHideout_1F_EventScript_Petrel_1

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_6:
# 654 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox petrelBattle6Intro_text
# 655 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_PETREL_PRE_BATTLE_6
	goto ShuckleIslandShuckleHideout_1F_EventScript_Petrel_5

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_9:
# 707 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox petrelBattle7Intro_text
# 708 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_PETREL_PRE_BATTLE_7
	goto ShuckleIslandShuckleHideout_1F_EventScript_Petrel_8

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_11:
# 661 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 663 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_0, ITEM_OCCA_BERRY
# 664 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_1, ITEM_PASSHO_BERRY
# 665 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_2, ITEM_WACAN_BERRY
# 666 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_3, ITEM_RINDO_BERRY
# 667 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_4, ITEM_YACHE_BERRY
# 668 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_5, ITEM_CHOPLE_BERRY
# 669 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_6, ITEM_KEBIA_BERRY
# 670 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_7, ITEM_SHUCA_BERRY
# 671 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_8, ITEM_COBA_BERRY
# 672 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_9, ITEM_PAYAPA_BERRY
# 673 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_10, ITEM_TANGA_BERRY
# 674 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_11, ITEM_CHARTI_BERRY
# 675 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_12, ITEM_KASIB_BERRY
# 676 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_13, ITEM_HABAN_BERRY
# 677 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_14, ITEM_COLBUR_BERRY
# 678 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_15, ITEM_BABIRI_BERRY
# 679 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_16, ITEM_CHILAN_BERRY
# 681 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 683 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_Petrel_17
# 690 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_BATTLE6_BERRY, VAR_RESULT
# 691 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	giveitem VAR_BATTLE6_BERRY, 1
# 692 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_6
	goto ShuckleIslandShuckleHideout_1F_EventScript_Petrel_1

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_14:
# 714 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 716 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_0, ITEM_OCCA_BERRY
# 717 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_1, ITEM_PASSHO_BERRY
# 718 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_2, ITEM_WACAN_BERRY
# 719 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_3, ITEM_RINDO_BERRY
# 720 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_4, ITEM_YACHE_BERRY
# 721 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_5, ITEM_CHOPLE_BERRY
# 722 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_6, ITEM_KEBIA_BERRY
# 723 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_7, ITEM_SHUCA_BERRY
# 724 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_8, ITEM_COBA_BERRY
# 725 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_9, ITEM_PAYAPA_BERRY
# 726 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_10, ITEM_TANGA_BERRY
# 727 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_11, ITEM_CHARTI_BERRY
# 728 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_12, ITEM_KASIB_BERRY
# 729 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_13, ITEM_HABAN_BERRY
# 730 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_14, ITEM_COLBUR_BERRY
# 731 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_15, ITEM_BABIRI_BERRY
# 732 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_16, ITEM_CHILAN_BERRY
# 734 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 736 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_Petrel_20
# 743 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_BATTLE7_BERRY, VAR_RESULT
# 744 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	giveitem VAR_BATTLE7_BERRY, 1
# 745 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_7
	goto ShuckleIslandShuckleHideout_1F_EventScript_Petrel_1

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_17:
# 685 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_17
	goto ShuckleIslandShuckleHideout_1F_EventScript_Petrel_1

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_20:
# 738 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_19
	goto ShuckleIslandShuckleHideout_1F_EventScript_Petrel_1


ShuckleIslandShuckleHideout_1F_EventScript_SpinningGrunts::
# 764 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 765 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox spinningGrunts_text
# 766 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_BlackPaint::
# 773 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 774 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 775 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox blackPaint_text
# 776 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_1F_EventScript_TrashCan::
# 783 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 784 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_TrashCan_Text_0, MSGBOX_SIGN
# 785 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_TrashCanGrunt::
# 792 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 793 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox trashCanGrunt_text
# 794 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_Hazing::
# 801 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 802 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 803 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Hazing_Text_0
# 804 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt::
# 811 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 813 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	specialvar VAR_TEMP_6, GetPlayerFacingDirection
# 814 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_6, DIR_NORTH
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_2
# 819 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_6, DIR_SOUTH
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_3
# 826 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox peripheral_text
ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_1:
# 830 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_2:
# 816 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_Text_0
	goto ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_1

ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_3:
# 821 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_Text_1
	goto ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_1


ShuckleIslandShuckleHideout_1F_EventScript_WarpPanelGrunt::
# 837 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 839 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox warpPanelGrunt_text
# 840 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 841 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 843 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 11, ShuckleIslandShuckleHideout_1F_EventScript_WarpPanelGrunt_Movement_0
# 844 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay 30
# 845 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 846 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay 30
# 847 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_WARP_IN
# 848 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 849 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_WARP_PANEL_GRUNT
# 850 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeobject 11
# 851 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay 30
# 852 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 854 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 3
# 856 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt1::
# 863 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 865 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 10, ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5_Movement_0
# 866 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 867 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 868 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 10, ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt1_Movement_0
# 869 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 870 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox peripheral_text
# 872 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 4
# 874 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt2::
# 881 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 883 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 10, ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5_Movement_0
# 884 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 885 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 886 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 10, ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt2_Movement_0
# 887 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 888 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox peripheral_text
# 890 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 4
# 892 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt3::
# 899 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 901 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 10, ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5_Movement_0
# 902 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 903 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 10, ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt3_Movement_0
# 905 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 906 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox peripheral_text
# 908 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 4
# 910 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels::
# 917 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 919 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Text_0
# 920 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 921 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 922 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 8, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_0
# 923 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 9, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_0
# 924 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 925 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 927 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Text_1
# 928 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 929 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 9, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 8, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_2
# 932 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 935 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Text_2
# 936 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 937 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 938 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 8, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_0
# 939 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 9, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_0
# 940 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PIN
# 941 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 942 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 8, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_1
# 943 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 9, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_2
# 944 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 8, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_3
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	applymovement 9, ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_4
# 947 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmovement
# 950 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 2
# 952 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_Regirock::
# 959 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 960 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	showmonpic SPECIES_REGIROCK, 10, 3
# 961 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_NORMAL
# 962 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Regirock_Text_0
# 963 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmoncry
# 964 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 965 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 966 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	hidemonpic
# 967 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_Registeel::
# 974 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 975 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	showmonpic SPECIES_REGISTEEL, 10, 3
# 976 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_NORMAL
# 977 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Registeel_Text_0
# 978 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmoncry
# 979 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 980 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 981 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	hidemonpic
# 982 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_Regice::
# 989 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 990 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	showmonpic SPECIES_REGICE, 10, 3
# 991 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_NORMAL
# 992 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_Regice_Text_0
# 993 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmoncry
# 994 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitmessage
# 995 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 996 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	hidemonpic
# 997 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle::
# 1004 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 1006 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SOLVED_REGI_RIDDLE, ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_2
# 1064 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_4
ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1:
# 1068 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_2:
# 1008 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox regiRiddle_text
# 1009 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
# 1010 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call Common_ShowEasyChatScreen
# 1011 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 1013 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_5
	goto ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_5:
# 1015 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, NOT_SPECIAL_PHRASE
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_7
# 1022 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, PHRASE_REGIROCK
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_8
# 1022 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, PHRASE_REGISTEEL
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_8
# 1022 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, PHRASE_REGICE
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_8
# 1029 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, PHRASE_SHUCKLE
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_9
# 1029 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, PHRASE_SNORLAX
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_9
# 1036 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, PHRASE_BAGON
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_10
# 1043 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_0x8004, PHRASE_SABLEYE
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_11
	goto ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_7:
# 1017 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_FAILURE
# 1018 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_0
# 1019 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	goto ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_8:
# 1024 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_FAILURE
# 1025 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_1
# 1026 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	goto ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_9:
# 1031 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_FAILURE
# 1032 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_2
# 1033 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	goto ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_10:
# 1038 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_FAILURE
# 1039 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_3
# 1040 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	goto ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_11:
# 1045 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_SUCCESS
# 1046 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 1047 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay 30
# 1048 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_SWITCH
# 1049 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 1050 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 9, 6, 0x2CB, TRUE
# 1051 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 10, 6, 0x2CC, FALSE
# 1052 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 11, 6, 0x2CD, TRUE
# 1053 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special DrawWholeMapView
# 1054 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SOLVED_REGI_RIDDLE
# 1055 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 6
	goto ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_1


ShuckleIslandShuckleHideout_1F_EventScript_ResetDoor::
# 1075 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 9, 6, 0x31C, TRUE
# 1076 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 10, 6, 0x31D, TRUE
# 1077 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmetatile 11, 6, 0x31E, TRUE
# 1078 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special DrawWholeMapView
# 1079 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 5
	end


ShuckleIslandShuckleHideout_1F_EventScript_ResetResetDoor::
# 1086 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 4
	end


ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6::
# 1093 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 1094 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 1097 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SPOKE_MOVE_TUTOR_6, ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_2
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_1:
# 1104 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_TAUGHT_SNORLAX_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_5
# 1104 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_TAUGHT_GALLADE_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_5
# 1111 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_Text_0
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_4:
# 1115 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_2:
# 1099 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SPOKE_MOVE_TUTOR_6
# 1100 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox moveTutor6Intro_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_1

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_5:
# 1106 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_4


ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon::
# 1122 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_Text_0
# 1124 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_TAUGHT_SNORLAX_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_2
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_1:
# 1130 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_TAUGHT_GALLADE_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_5
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_4:
# 1136 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1138 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_7
# 1143 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_8
# 1148 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_9
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_2:
# 1126 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush HariyamaDmgCalcOptions_Text_0, 0
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_1

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_5:
# 1132 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush HariyamaDmgCalcOptions_Text_1, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_4

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_7:
# 1140 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_Text_1
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_8:
# 1145 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_9:
# 1150 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade
	return


ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax::
# 1158 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_0
# 1160 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_1, 0
# 1161 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_2, 1
# 1163 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1165 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_1
# 1170 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_2
# 1193 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_3
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_1:
# 1167 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_2:
# 1172 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX2
# 1173 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 1175 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_8
# 1182 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_PROTECT, MOVE_NONE
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_7:
# 1186 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
# 1187 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_TAUGHT_SNORLAX_MOVE
# 1188 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse MUS_LEVEL_UP
# 1189 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_3
# 1190 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_3:
# 1195 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX2
# 1196 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 1198 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_12
# 1205 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_BELLY_DRUM, MOVE_NONE
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_11:
# 1209 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
# 1210 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_TAUGHT_SNORLAX_MOVE
# 1211 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse MUS_LEVEL_UP
# 1212 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_4
# 1213 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_8:
# 1177 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_PROTECT, MOVE_NONE
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_7

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_12:
# 1200 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_BELLY_DRUM, MOVE_NONE
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_11


ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade::
# 1221 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_0
# 1223 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_1, 0
# 1224 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_1, 1
# 1226 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1228 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_1
# 1233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_2
# 1256 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_3
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_1:
# 1230 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_2:
# 1235 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_GALLADE
# 1236 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 1238 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_8
# 1245 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_GRUDGE, MOVE_PROTECT, MOVE_NONE, MOVE_NONE
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_7:
# 1249 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
# 1250 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_TAUGHT_GALLADE_MOVE
# 1251 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse MUS_LEVEL_UP
# 1252 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_2
# 1253 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_3:
# 1258 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_GALLADE
# 1259 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 1261 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_12
# 1268 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_GRUDGE, MOVE_CHARM, MOVE_NONE, MOVE_NONE
ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_11:
# 1272 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
# 1273 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_TAUGHT_GALLADE_MOVE
# 1274 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse MUS_LEVEL_UP
# 1275 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_3
# 1276 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	return

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_8:
# 1240 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_GRUDGE, MOVE_PROTECT, MOVE_NONE, MOVE_NONE
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_7

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_12:
# 1263 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_GRUDGE, MOVE_CHARM, MOVE_NONE, MOVE_NONE
	goto ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_11


ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6::
# 1284 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 1285 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 1287 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SPOKE_RESET_NPC, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_2
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_1:
# 1294 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_6, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_7
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_6:
# 1301 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_0
# 1303 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_6, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_13
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_12:
# 1309 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_TAUGHT_SNORLAX_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_16
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_15:
# 1315 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_TAUGHT_GALLADE_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_19
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_18:
# 1321 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_TAUGHT_SNORLAX_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_23
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_21:
# 1327 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_6, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_29
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_26:
# 1333 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1335 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_33
# 1342 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_7, MSGBOX_AUTOCLOSE
# 1343 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1345 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_37
# 1350 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_38
# 1355 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_39
# 1360 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_40
# 1366 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_41
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_36:
# 1374 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1375 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_8
ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_4:
# 1381 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_2:
# 1289 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SPOKE_RESET_NPC
# 1290 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox resetNPCIntro_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_1

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_5:
# 1296 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox resetNPCNothingToReset_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_4

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_7:
# 1294 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_TAUGHT_SNORLAX_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_9
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_6

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_9:
# 1294 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_TAUGHT_GALLADE_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_5
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_6

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_13:
# 1305 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_1, 0
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_12

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_16:
# 1311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_2, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_19:
# 1317 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_3, 2
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_18

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_22:
# 1323 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_4, 3
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_21

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_23:
# 1321 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_TAUGHT_GALLADE_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_22
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_21

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_27:
# 1329 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_5, 4
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_26

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_28:
# 1327 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_TAUGHT_GALLADE_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_27
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_26

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_29:
# 1327 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_TAUGHT_SNORLAX_MOVE, ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_28
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_26

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_33:
# 1337 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_6
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_4

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_37:
# 1347 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetBerry_6
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_36

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_38:
# 1352 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetMoveTutor_Snorlax
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_36

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_39:
# 1357 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetMoveTutor_Gallade
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_36

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_40:
# 1362 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetMoveTutor_Snorlax
# 1363 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetMoveTutor_Gallade
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_36

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_41:
# 1368 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetBerry_6
# 1369 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetMoveTutor_Snorlax
# 1370 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call ResetMoveTutor_Gallade
	goto ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_36


ResetBerry_6::
# 1388 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	clearflag FLAG_RECEIVED_BERRY_6
# 1389 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitemfrommon 0
# 1390 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitemfrommon 1
# 1392 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SITRUS_BERRY, ResetBerry_6_2
ResetBerry_6_1:
# 1399 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitem VAR_BATTLE6_BERRY
# 1400 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_BATTLE6_BERRY, 0
	return

ResetBerry_6_2:
# 1394 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	removeitem ITEM_SITRUS_BERRY
# 1395 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	giveitemnojingle ITEM_SITRUS_BERRY
	goto ResetBerry_6_1


ResetMoveTutor_Snorlax::
# 1406 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	clearflag FLAG_TAUGHT_SNORLAX_MOVE
# 1408 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX2
# 1409 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 1411 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ResetMoveTutor_Snorlax_2
# 1416 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq ResetMoveTutor_Snorlax_3
ResetMoveTutor_Snorlax_1:
# 1422 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
	return

ResetMoveTutor_Snorlax_2:
# 1413 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_NONE, MOVE_NONE
	goto ResetMoveTutor_Snorlax_1

ResetMoveTutor_Snorlax_3:
# 1418 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_NONE, MOVE_NONE
	goto ResetMoveTutor_Snorlax_1


ResetMoveTutor_Gallade::
# 1428 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	clearflag FLAG_TAUGHT_GALLADE_MOVE
# 1430 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	indexspeciesinparty SPECIES_GALLADE
# 1431 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 1433 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ResetMoveTutor_Gallade_2
# 1438 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq ResetMoveTutor_Gallade_3
ResetMoveTutor_Gallade_1:
# 1444 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	special HealPlayerParty
	return

ResetMoveTutor_Gallade_2:
# 1435 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 0, MOVE_GRUDGE, MOVE_NONE, MOVE_NONE, MOVE_NONE
	goto ResetMoveTutor_Gallade_1

ResetMoveTutor_Gallade_3:
# 1440 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setmonmoves 1, MOVE_GRUDGE, MOVE_NONE, MOVE_NONE, MOVE_NONE
	goto ResetMoveTutor_Gallade_1


ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6::
# 1450 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 1451 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 1453 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_2
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_1:
# 1460 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_0
# 1462 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_5
# 1469 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_2, 0
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_4:
# 1473 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_3, 1
# 1474 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_4, 2
# 1475 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_Text_0, 3
# 1477 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_11
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_8:
# 1483 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1485 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_16
# 1490 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_17
# 1496 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_18
# 1508 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_19
# 1520 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_20
# 1532 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_21
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15:
# 1568 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_2:
# 1455 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 1456 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_1

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_5:
# 1464 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_1, 0
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_4

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_9:
# 1479 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_5, 4
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_8

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_10:
# 1477 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_LRG_HINT_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_9
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_8

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_11:
# 1477 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_10
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_8

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_16:
# 1487 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_17:
# 1492 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCAboutHints_text
# 1493 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_18:
# 1498 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCBattle6SmallHint_text
# 1500 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_28
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_19:
# 1510 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCBattle6MedHint_text
# 1512 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_30
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_20:
# 1522 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCBattle6LrgHint_text
# 1524 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_32
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_21:
# 1534 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_35
# 1541 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_34:
# 1545 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_38
# 1550 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_39
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_28:
# 1502 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_6
# 1503 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_30:
# 1514 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_6
# 1515 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_32:
# 1526 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_LRG_HINT_BATTLE_6
# 1527 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_35:
# 1536 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_34

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_38:
# 1547 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_6
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_39:
# 1552 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_6
# 1553 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	callnative DrawMugshot
# 1554 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_Text_1
# 1555 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	callnative ClearMugshot
# 1557 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_6, ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_42
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_42:
# 1559 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_6
# 1560 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_15


ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC6::
# 1575 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock
# 1576 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	faceplayer
# 1578 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC6_2
ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC6_1:
# 1585 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
# 1587 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC6_2:
# 1580 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 1581 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIslandShuckleHideout_1F_EventScript_NewMechNPC6_1


NewMechNPC6Choices::
# 1594 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC5Choices_Text_0
# 1596 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC5Choices_Text_1, 0
# 1597 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC5Choices_Text_2, 1
# 1598 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC6Choices_Text_0, 2
# 1599 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC6Choices_Text_1, 3
# 1600 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC6Choices_Text_2, 4
# 1601 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC6Choices_Text_3, 5
# 1602 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_1, 6
# 1603 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_1, 7
# 1604 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush NewMechNPC6Choices_Text_4, 8
# 1606 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1608 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq NewMechNPC6Choices_1
# 1613 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMechNPC6Choices_2
# 1619 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewMechNPC6Choices_3
# 1625 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewMechNPC6Choices_4
# 1631 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewMechNPC6Choices_5
# 1637 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq NewMechNPC6Choices_6
# 1643 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq NewMechNPC6Choices_7
# 1649 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq NewMechNPC6Choices_8
# 1655 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq NewMechNPC6Choices_9
# 1661 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq NewMechNPC6Choices_10
	return

NewMechNPC6Choices_1:
# 1610 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC5Choices_Text_5
	return

NewMechNPC6Choices_2:
# 1615 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox secondAbilities_text
# 1616 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_3:
# 1621 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox satedBelch_text
# 1622 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_4:
# 1627 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox sableyeAbilities_text
# 1628 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_5:
# 1633 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox fastFinish_text
# 1634 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_6:
# 1639 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox sableyeAI_text
# 1640 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_7:
# 1645 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC6Choices_Text_5
# 1646 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_8:
# 1651 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC6Choices_Text_6
# 1652 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_9:
# 1657 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC6Choices_Text_7
# 1658 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return

NewMechNPC6Choices_10:
# 1663 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox NewMechNPC6Choices_Text_8
# 1664 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call NewMechNPC6Choices
	return


ShuckleIslandShuckleHideout_1F_EventScript_RegigigasDmgCalc::
# 1672 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 1674 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PC_ON
# 1675 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_RegigigasDmgCalc_Text_0
# 1676 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 1678 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call RegigigasDmgCalcOptions
# 1680 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


RegigigasDmgCalcOptions::
# 1687 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox regigigasDmgCalcIntro_text
# 1689 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_DMG_CALC_INFO_BATTLE_6, RegigigasDmgCalcOptions_2
# 1696 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush RegigigasDmgCalcOptions_Text_1, 0
RegigigasDmgCalcOptions_1:
# 1700 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush RegigigasDmgCalcOptions_Text_2, 1
# 1701 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush RegigigasDmgCalcOptions_Text_3, 2
# 1703 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1705 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq RegigigasDmgCalcOptions_5
# 1712 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RegigigasDmgCalcOptions_6
# 1719 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RegigigasDmgCalcOptions_7
# 1727 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RegigigasDmgCalcOptions_8
	return

RegigigasDmgCalcOptions_2:
# 1691 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush RegigigasDmgCalcOptions_Text_0, 0
	goto RegigigasDmgCalcOptions_1

RegigigasDmgCalcOptions_5:
# 1707 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PC_OFF
# 1708 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox dmgCalcClose_text
# 1709 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	return

RegigigasDmgCalcOptions_6:
# 1714 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_DMG_CALC_INFO_BATTLE_6
# 1715 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox dmgCalcTableUsageBattle6_text
# 1716 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call RegigigasDmgCalcOptions
	return

RegigigasDmgCalcOptions_7:
# 1721 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 1722 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	displayregigigassnorlaxsuperpowerdmgcalc
# 1723 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitbbuttonpress
# 1724 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call RegigigasDmgCalcOptions
	return

RegigigasDmgCalcOptions_8:
# 1729 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox preCrushGrip_text
# 1730 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 1731 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	displayregigigassnorlaxcrushgripdmgcalc
# 1732 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitbbuttonpress
# 1733 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call RegigigasDmgCalcOptions
	return


ShuckleIslandShuckleHideout_1F_EventScript_SableyeDmgCalc::
# 1741 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lockall
# 1743 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PC_ON
# 1744 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_1F_EventScript_SableyeDmgCalc_Text_0
# 1745 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
# 1747 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call SableyeDmgCalcOptions
# 1749 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	releaseall
	end


SableyeDmgCalcOptions::
# 1756 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox sableyeDmgCalcIntro_text
# 1758 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	goto_if_unset FLAG_DMG_CALC_INFO_BATTLE_6, SableyeDmgCalcOptions_2
# 1765 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush RegigigasDmgCalcOptions_Text_1, 0
SableyeDmgCalcOptions_1:
# 1769 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush HariyamaDmgCalcOptions_Text_0, 1
# 1770 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush HariyamaDmgCalcOptions_Text_1, 2
# 1772 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1774 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq SableyeDmgCalcOptions_5
# 1781 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeDmgCalcOptions_6
# 1788 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeDmgCalcOptions_7
# 1796 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SableyeDmgCalcOptions_8
	return

SableyeDmgCalcOptions_2:
# 1760 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	dynmultipush RegigigasDmgCalcOptions_Text_0, 0
	goto SableyeDmgCalcOptions_1

SableyeDmgCalcOptions_5:
# 1776 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	playse SE_PC_OFF
# 1777 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox dmgCalcClose_text
# 1778 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitse
	return

SableyeDmgCalcOptions_6:
# 1783 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	setflag FLAG_DMG_CALC_INFO_BATTLE_6
# 1784 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	msgbox dmgCalcTableUsageBattle6_text
# 1785 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call SableyeDmgCalcOptions
	return

SableyeDmgCalcOptions_7:
# 1790 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 1791 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	displaysableyesnorlaxdmgcalc
# 1792 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitbbuttonpress
# 1793 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call SableyeDmgCalcOptions
	return

SableyeDmgCalcOptions_8:
# 1798 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	closemessage
# 1799 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	displaysableyegalladedmgcalc
# 1800 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	waitbbuttonpress
# 1801 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	call SableyeDmgCalcOptions
	return


# 66 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_0:
# 66 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
	step_end

# 68 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_1:
# 68 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_2:
# 73 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_up
# 73 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_up
# 73 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
	step_end

# 82 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_inCell_Movement_3:
# 82 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_up
# 82 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_up
# 82 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_up
# 82 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_up
	step_end

# 138 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_Movement_0:
# 138 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_down
# 138 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
	step_end

# 140 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_Movement_1:
# 140 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
	step_end

# 145 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_battle6Failed_Movement_2:
# 145 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_up
# 145 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
	step_end

# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_Movement_0:
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 222 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
	step_end

# 233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_Movement_1:
# 233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	emote_exclamation_mark
# 233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_16
# 233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_16
# 233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_16
# 233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_16
	step_end

# 303 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5_Movement_0:
# 303 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_PostBattle5_Movement_1:
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_up
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_left
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
# 311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_fast_down
	step_end

# 843 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_WarpPanelGrunt_Movement_0:
# 843 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_left
# 843 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_left
# 843 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_left
	step_end

# 868 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt1_Movement_0:
# 868 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock_facing_direction
# 868 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 868 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 868 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	unlock_facing_direction
	step_end

# 886 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt2_Movement_0:
# 886 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock_facing_direction
# 886 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 886 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 886 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 886 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	unlock_facing_direction
	step_end

# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt3_Movement_0:
# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	lock_facing_direction
# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	walk_right
# 904 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	unlock_facing_direction
	step_end

# 922 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_0:
# 922 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	emote_exclamation_mark
# 922 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
	step_end

# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_1:
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 930 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
	step_end

# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_2:
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 931 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
	step_end

# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_3:
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 945 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
	step_end

# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Movement_4:
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_1
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_2
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_4
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_up
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_left
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_down
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	face_right
# 946 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	delay_8
	step_end

ShuckleIslandShuckleHideout_1F_EventScript_inCell_Text_0:
# 63 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "You're brought to a…prison cell?$"

ShuckleIslandShuckleHideout_1F_EventScript_cellDoor_Text_0:
# 224 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "What's going on in here?$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_0:
# 342 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Now then, what hints can I offer you?\n(Press B to exit)$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_1:
# 346 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "About Hints (read me!)$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_2:
# 351 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "About Hints$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_3:
# 355 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Small Hint$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_4:
# 356 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Medium Hint$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_5:
# 360 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Solution$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_6:
# 416 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Understood.\pKeep trying, and come back\nif you feel you need the solution.$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC5_Text_7:
# 423 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "https://youtu.be/wzfsDlxxXwY$"

NewMechNPC5Choices_Text_0:
# 463 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Now then, what new mechanics do\nyou want explained? (Press B to exit)$"

NewMechNPC5Choices_Text_1:
# 465 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Second Abilities$"

NewMechNPC5Choices_Text_2:
# 466 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Sated Belch$"

NewMechNPC5Choices_Text_3:
# 467 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Anodyne$"

NewMechNPC5Choices_Text_4:
# 468 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Hariyama AI$"

NewMechNPC5Choices_Text_5:
# 474 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Stop by if you ever want\nthe new mechanics explained again!$"

NewMechNPC5Choices_Text_6:
# 497 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Hariyama will always use its strongest\nmove against its current opponent.$"

ShuckleIslandShuckleHideout_1F_EventScript_HariyamaDmgCalc_Text_0:
# 521 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "LOADING HARIYAMA DAMAGE CALCULATOR…$"

HariyamaDmgCalcOptions_Text_0:
# 535 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Snorlax$"

HariyamaDmgCalcOptions_Text_1:
# 536 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Gallade$"

ShuckleIslandShuckleHideout_1F_EventScript_BerrySign_Text_0:
# 639 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "DAYS WITHOUT MUNCHLAX INCIDENT:\n0$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_0:
# 663 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Occa Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_1:
# 664 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Passho Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_2:
# 665 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Wacan Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_3:
# 666 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Rindo Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_4:
# 667 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Yache Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_5:
# 668 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Chople Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_6:
# 669 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Kebia Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_7:
# 670 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Shuca Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_8:
# 671 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Coba Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_9:
# 672 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Payapa Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_10:
# 673 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Tanga Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_11:
# 674 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Charti Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_12:
# 675 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Kasib Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_13:
# 676 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Haban Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_14:
# 677 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Colbur Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_15:
# 678 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Babiri Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_16:
# 679 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Chilan Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_17:
# 685 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "So, I guess you're resigned to\nlosing to Big Blue then?\pNot that I think a single berry would\nhave made much of a difference.$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_18:
# 698 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "I hope you chose the right berry\nfor your sake, kid.$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_19:
# 738 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "I don't blame you. I doubt a single\nberry would make a difference.$"

ShuckleIslandShuckleHideout_1F_EventScript_Petrel_Text_20:
# 751 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "I'd say good luck, but you don't realize\nwhat you're going up against.\pYou don't stand a chance.$"

ShuckleIslandShuckleHideout_1F_EventScript_TrashCan_Text_0:
# 784 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "It's full of trash.\pIt's a trash can. What did you expect?$"

ShuckleIslandShuckleHideout_1F_EventScript_Hazing_Text_0:
# 803 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Hah! We're hazing the new recruits!$"

ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_Text_0:
# 816 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The grunt strains to only look at you\nfrom the corners of his eyes.\pHis eyes are completely bugging out.$"

ShuckleIslandShuckleHideout_1F_EventScript_PeripheralGrunt_Text_1:
# 821 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The grunt strains to look at you\nfrom the corners of his eyes.\pHe's failing, and he knows it.$"

ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Text_0:
# 919 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "GRUNTS!$"

ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Text_1:
# 927 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "A STRONG WIND BLOWS!$"

ShuckleIslandShuckleHideout_1F_EventScript_Pinwheels_Text_2:
# 935 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "…FROM THE OTHER DIRECTION!$"

ShuckleIslandShuckleHideout_1F_EventScript_Regirock_Text_0:
# 962 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The Rock Peak Pokémon:\nRegirock$"

ShuckleIslandShuckleHideout_1F_EventScript_Registeel_Text_0:
# 977 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The Iron Pokémon:\nRegisteel$"

ShuckleIslandShuckleHideout_1F_EventScript_Regice_Text_0:
# 992 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The Iceberg Pokémon:\nRegice$"

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_0:
# 1018 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Try again.$"

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_1:
# 1025 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Come on. You're not even trying here.$"

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_2:
# 1032 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "You're just guessing at this point.\nIt's embarrassing.$"

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_3:
# 1039 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "That's very clever.\nBut oh so wrong.$"

ShuckleIslandShuckleHideout_1F_EventScript_RegiRiddle_Text_4:
# 1064 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "There's nothing more for you\nto do here.$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_Text_0:
# 1111 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "I hope you taught your Pokémon\nthe correct moves!$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_Text_0:
# 1122 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "So, which Pokémon needs tutoring?$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMon_Text_1:
# 1140 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Come back if you ever want your\nPokémon to learn any new moves!$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_0:
# 1158 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Which move should I teach Snorlax?$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_1:
# 1160 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Protect$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_2:
# 1161 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Belly Drum$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_3:
# 1189 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Your Snorlax learned Protect!$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveSnorlax_Text_4:
# 1212 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Your Snorlax learned Belly Drum!$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_0:
# 1221 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Which move should I teach Gallade?$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_1:
# 1224 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Charm$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_2:
# 1252 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Your Gallade learned Protect!$"

ShuckleIslandShuckleHideout_1F_EventScript_MoveTutor6_WhichMoveGallade_Text_3:
# 1275 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Your Gallade learned Charm!$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_0:
# 1301 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "What would you like to reset?\n(Press B to exit)$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_1:
# 1305 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Reset Berry$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_2:
# 1311 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Reset Snorlax Moves$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_3:
# 1317 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Reset Gallade Moves$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_4:
# 1323 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Reset All Moves$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_5:
# 1329 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Reset All$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_6:
# 1337 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Come back if you would ever\nlike to reset your actions!$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_7:
# 1342 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "One moment while I reset your actions.$"

ShuckleIslandShuckleHideout_1F_EventScript_resetNPC6_Text_8:
# 1375 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Your actions have been reset!$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_Text_0:
# 1475 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Large Hint$"

ShuckleIslandShuckleHideout_1F_EventScript_hintNPC6_Text_1:
# 1554 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "https://youtu.be/IF9p-G3HQsc$"

NewMechNPC6Choices_Text_0:
# 1598 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Sableye's Abilities$"

NewMechNPC6Choices_Text_1:
# 1599 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Fast Finish$"

NewMechNPC6Choices_Text_2:
# 1600 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Sableye AI$"

NewMechNPC6Choices_Text_3:
# 1601 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Regigigas AI$"

NewMechNPC6Choices_Text_4:
# 1604 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Trick Room$"

NewMechNPC6Choices_Text_5:
# 1645 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Regigigas will always target Snorlax\nwith its strongest attack.$"

NewMechNPC6Choices_Text_6:
# 1651 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Charm fails if it is used on a Pokémon\nmore than twice during a battle.$"

NewMechNPC6Choices_Text_7:
# 1657 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Protect fails if used consecutively.$"

NewMechNPC6Choices_Text_8:
# 1663 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Trick Room now also prevents Pokémon\nfrom using Struggle.$"

ShuckleIslandShuckleHideout_1F_EventScript_RegigigasDmgCalc_Text_0:
# 1675 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "LOADING REGIGIGAS DAMAGE CALCULATOR…$"

RegigigasDmgCalcOptions_Text_0:
# 1691 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Damage Calc Table Usage (new info!)$"

RegigigasDmgCalcOptions_Text_1:
# 1696 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Damage Calc Table Usage$"

RegigigasDmgCalcOptions_Text_2:
# 1700 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Superpower$"

RegigigasDmgCalcOptions_Text_3:
# 1701 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Crush Grip$"

ShuckleIslandShuckleHideout_1F_EventScript_SableyeDmgCalc_Text_0:
# 1744 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "LOADING SABLEYE DAMAGE CALCULATOR…$"

hideoutIntro_text::
# 1807 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Well, kid, you've really been causing\n"
	.string "some trouble, haven't you?\p"
	.string "This cell should ensure you can't\n"
	.string "interfere with our plans.\p"
	.string "And just to be sure, we taught your\n"
	.string "Pokémon more…“appropriate” moves.\p"
	.string "Good luck trying to beat anyone now!$"

cellSign_text::
# 1819 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "It says the door is voice activated,\n"
	.string "and any human voice can open the door.\p"
	.string "...\p"
	.string "...\p"
	.string "So…\p"
	.string "It seems you won't be getting out of\n"
	.string "here by yourself.$"

cellSign2_text::
# 1831 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "It says the door is voice activated,\n"
	.string "and any human voice can open the door.\p"
	.string "That's how the guard opened the door.\n"
	.string "Exactly as you planned, right?$"

cellDoorNoSign_text::
# 1840 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "You're too large to fit through the\n"
	.string "gaps between the metal bars.$"

cellDoor1_text::
# 1847 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "You know there must be a way out, but\n"
	.string "it feels like there's no solution here.\p"
	.string "Maybe you could try…banging your head\n"
	.string "on the metal bars?$"

cellDoor2_text::
# 1856 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "You hear a loud, hollow-sounding hum\n"
	.string "resonate throughout the cell.\p"
	.string "Was the noise the bars or…your skull?\p"
	.string "After all, you did just willingly bang\n"
	.string "your head against solid metal.\p"
	.string "Maybe you could try again?$"

cellDoor3_text::
# 1867 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Yup, you'll definitely suffer some\n"
	.string "brain damage from that one.\p"
	.string "Surely one more solid head bang\n"
	.string "must be the solution, right?$"

cellDoor4_text::
# 1876 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Well, the good news is you can no longer\n"
	.string "feel any pain in your head.\p"
	.string "But you're also starting to feel dizzy.\p"
	.string "Maybe this wasn't such a good idea…$"

cellDoorNo1_text::
# 1885 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The obvious choice. But making obvious\n"
	.string "choices hasn't gotten you this far.$"

cellDoorNo2_text::
# 1892 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "That's too reasonable for someone who\n"
	.string "bangs their head hoping it's a solution.$"

cellDoorNo3_text::
# 1899 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Your brain thanks you, but your\n"
	.string "position in the cell remains unchanged.$"

battle5Grunt_text::
# 1906 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Why you…\p"
	.string "You must think you're funny, huh?\n"
	.string "Making all this-\p"
	.string "...\p"
	.string "...\p"
	.string "Oh…\p"
	.string "Are you…okay?\p"
	.string "You look so bad I almost feel sorry.\p"
	.string "But why did you decide to bang your\n"
	.string "head against the bars?\p"
	.string "You realize you could have achieved the\n"
	.string "same result using your hands, right?$"

battle5Intro_text::
# 1923 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Well, I'm not one for sympathy.\p"
	.string "And trying to escape our cells means\n"
	.string "you need to be taught a lesson!\p"
	.string "Have fun trying to win with no\n"
	.string "damaging moves!$"

battle5IntroShort_text::
# 1933 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "You better not be one to hold a grudge\n"
	.string "for your limited moveset!$"

battle5Lose_text::
# 1940 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "What was that?!\p"
	.string "I have to alert Big Blue immediately!$"

postBattle5_1_text::
# 1947 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "When did Snorlax get another ability?\p"
	.string "And how would you have even obtained\n"
	.string "one of our rare ca-$"

postBattle5_2_text::
# 1955 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Forget I said anything.\n"
	.string "Not that it matters at this point.\p"
	.string "I'm sure the boss will find a suitable\n"
	.string "way to deal with you.\p"
	.string "Enjoy your final moments with Snorlax!$"

hintNPCBattle5SmallHint_text::
# 1965 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Which move's PP must Grudge drain?\p"
	.string "Under what conditions is Gallade\n"
	.string "targeted by this move?$"

hintNPCBattle5MedHint_text::
# 1973 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The simplest solution involves\n"
	.string "maximizing consecutive Stockpile uses.$"

satedBelch_text::
# 1980 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Whenever a Pokémon with Sated Belch\n"
	.string "is healed by any means in battle,\p"
	.string "all opponents take damage equal to\n"
	.string "half the amount of healed HP.$"

anodyne_text::
# 1989 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "When a Pokémon with Anodyne uses\n"
	.string "Struggle, the move is a One-Hit KO,\l"
	.string "and the user takes no recoil damage.\p"
	.string "No damage is received when the Pokémon\n"
	.string "is targeted by the move Struggle.$"

blockStairs_text::
# 1999 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Nice try, but the boss isn't letting\n"
	.string "you leave.$"

hariyamaDmgCalcIntro_text::
# 2006 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "For which Pokémon would you like to see\n"
	.string "the damage of Hariyama's attacks?$"

dmgCalcClose_text::
# 2013 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "SHUTTING DOWN DAMAGE CALCULATOR…$"

camperCell1_text::
# 2019 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Is that the camper from earlier?\p"
	.string "Team Shuckle must have found out\n"
	.string "that he let you pass…\p"
	.string "Well, at least he can't tell anyone\n"
	.string "what you did to those Shuckle now!$"

camperCell2_text::
# 2029 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Come on, surely you don't want to…\n"
	.string "bang you head on the bars?$"

camperCell2Y_text::
# 2036 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "What's a bit more brain damage?\p"
	.string "...\p"
	.string "…did the camper not hear anything!?$"

camperCell2N_text::
# 2044 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The logical choice.\n"
	.string "Solutions are rarely reused.$"

camperCell3_text::
# 2051 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Any further banging is likely pointless.\n"
	.string "Bang your head on the bars again?$"

camperCell3Y_text::
# 2058 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "You're officially a masochist.\n"
	.string "No, there's no achievement for that.$"

camperCellPost_text::
# 2065 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The camper is gone…\p"
	.string "It probably had nothing to do with\n"
	.string "your head banging.$"

campercellGone_text::
# 2073 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The camper is gone…\p"
	.string "At least Team Shuckle freed him before\n"
	.string "they left!$"

petrelBattle6Intro_text::
# 2081 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "I've got to hand it to you, kid.\p"
	.string "Not many people could get the boss's\n"
	.string "attention while inside one of our cells.\p"
	.string "Oh, you still want a berry?\n"
	.string "You know what? Fine, go ahead.\p"
	.string "Let's say it's for old times' sake.$"

spinningGrunts_text::
# 2092 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The grunt seems extremely nauseous.\n"
	.string "Best not to interrupt them.$"

blackPaint_text::
# 2099 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Careful! There's black paint over there!\p"
	.string "It's not wet, but it makes it look like\n"
	.string "there's a hole in the floor.$"

trashCanGrunt_text::
# 2107 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The grunt stares at the trash can and\n"
	.string "sees an image of how his boss views him.$"

peripheral_text::
# 2114 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The grunt stares at you intensely\n"
	.string "using his peripheral vision.$"

warpPanelGrunt_text::
# 2121 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "I'm not sure why I need to check if\n"
	.string "these warp panels are working properly,\l"
	.string "but I should be happy I got an easy job.\p"
	.string "Things have been tough, so I'm glad this\n"
	.string "task won't cause any emotional trauma.$"

regiRiddle_text::
# 2131 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "These Regis three, in their seven eyes,\n"
	.string "each hide one number of the prize.\p"
	.string "The first is the count on left, or right,\n"
	.string "that stares upon you as you fight.\p"
	.string "2) Through any three a line divides.\n"
	.string "Then take the difference of the sides.\p"
	.string "From the last its number you can pry\n"
	.string "by subtracting from X those on the Y.\p"
	.string "These digits combined point to the Dex\n"
	.string "to one whose three eyes can perplex.\p"
	.string "For while two shine of blue that's pale,\n"
	.string "the third only appears at its tail.\p"
	.string "WHO AM I?$"

moveTutor6Intro_text::
# 2149 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "My current move selection is limited\n"
	.string "and only contains non-damaging moves.\p"
	.string "Also, I can only teach each Pokémon\n"
	.string "a single move, so choose carefully!$"

hintNPCBattle6SmallHint_text::
# 2158 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Carefully consider the damage calcs\n"
	.string "for Regigigas's Crush Grip on Snorlax.\p"
	.string "These imply just two move sequences\n"
	.string "Snorlax could use after Fast Finish.\p"
	.string "One of these sequences can be ruled\n"
	.string "out using other damage calc tables.\p"
	.string "You can also deduce what moves Snorlax\n"
	.string "must use while Slow Start is active.$"

hintNPCBattle6MedHint_text::
# 2171 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Snorlax cannot survive both Sableye's\n"
	.string "Punishment and Regigigas's Crush Grip.\p"
	.string "Can you avoid taking damage from one of\n"
	.string "these attacks with Fast Finish active?$"

hintNPCBattle6LrgHint_text::
# 2180 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Gallade must use Charm on Snorlax\n"
	.string "after it uses Belly Drum to prevent\l"
	.string "Sableye from seeing a KO on Snorlax.\p"
	.string "Snorlax can minimize damage the turn it\n"
	.string "uses Belly Drum by being at +3 DEF\l"
	.string "and having Sableye use Psych Up.$"

sableyeAbilities_text::
# 2191 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Prankster takes precedence over Stall.\p"
	.string "Accordingly, Sableye will either be the\n"
	.string "first or the last to attack each turn.$"

fastFinish_text::
# 2199 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Immediately after Slow Start ends,\n"
	.string "Fast Finish multiplies Attack by 10.$"

sableyeAI_text::
# 2206 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Sableye will raise its ATK stage with\n"
	.string "Psych Up when its ATK is +0 or lower.\p"
	.string "It then prioritizes attacking Gallade\n"
	.string "if it can KO Gallade but not Snorlax.\p"
	.string "Otherwise, Sableye will default to\n"
	.string "attacking Snorlax.$"

regigigasDmgCalcIntro_text::
# 2217 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "For which attack would you like to see\n"
	.string "the damage Regigigas does to Snorlax?$"

preCrushGrip_text::
# 2224 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "The following table displays Snorlax's\n"
	.string "HP at which Crush Grip 2HKOs or OHKOs.\p"
	.string "The values are for Regigigas at -6 ATK,\n"
	.string "as it is otherwise impossible to win.$"

dmgCalcTableUsageBattle6_text::
# 2233 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Press the R button to see the results\n"
	.string "(in blue) with a type-reducing berry.\p"
	.string "The default results can be displayed\n"
	.string "again by pressing the A button.\p"
	.string "You can also scroll faster through long\n"
	.string "lists using the left and right arrows.$"

sableyeDmgCalcIntro_text::
# 2244 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "For which Pokémon would you like to see\n"
	.string "the damage of Sableye's Punishment?$"

hintNPC6message_text::
# 2251 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Excuse me.\p"
	.string "I feel you should know the current\n"
	.string "battle is very challenging.\p"
	.string "As such, my hints for the battle\n"
	.string "are much more detailed than usual.\p"
	.string "I strongly recommend taking the small\n"
	.string "hint now to save some time.\p"
	.string "Also, the medium hint gives enough info\n"
	.string "to deduce the winning move sequences.\p"
	.string "And if you're truly struggling,\n"
	.string "there's no shame in using the solution!\p"
	.string "Please seriously consider my advice.\n"
	.string "I just want to help you succeed!$"

petrelBattle7Intro_text::
# 2269 "data/maps/ShuckleIslandShuckleHideout_1F/scripts.pory"
	.string "Hoo boy, kid. You've really done it now.\p"
	.string "Let me give it to you straight:\n"
	.string "you're not winning this next battle.\p"
	.string "That…thing you'll be facing can\n"
	.string "barely even be considered a Pokémon.\p"
	.string "Hmm, you still want a berry?\n"
	.string "Sure, why not.\l"
	.string "It's not like it will make a difference!$"
