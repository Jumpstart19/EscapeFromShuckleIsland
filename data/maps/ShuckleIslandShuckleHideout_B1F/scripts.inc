ShuckleIslandShuckleHideout_B1F_MapScripts::
# 3 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIslandShuckleHideout_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIslandShuckleHideout_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B1F_STATE, 0, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro
# 6 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B1F_STATE, 1, ShuckleIslandShuckleHideout_B1F_EventScript_EnterContinueBattle6
	.2byte 0


ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro::
# 16 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	lock
# 18 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 18, 6, 0x31C, TRUE
# 19 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 19, 6, 0x31D, TRUE
# 20 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 20, 6, 0x31E, TRUE
# 21 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	special DrawWholeMapView
# 23 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	stopplaytime
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_0
# 25 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 27 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	playse SE_DING_DONG
# 28 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitse
# 29 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Text_0
# 30 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 31 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	closemessage
# 33 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_1
# 34 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	playse SE_PIN
# 35 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitse
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_2
# 38 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 39 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Text_1
# 40 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 41 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	closemessage
# 43 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	playse SE_DING_DONG
# 44 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitse
# 45 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox paAnnouncement_text
# 46 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 47 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	closemessage
# 49 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay 60
# 51 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_3
# 52 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 53 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni1_text
# 54 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 56 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni2_text
# 57 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 59 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_4
# 60 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 61 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni3_text
# 62 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 64 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_5
# 65 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 66 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni4_text
# 67 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 69 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_6
# 70 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 71 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni5_text
# 72 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 74 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_7
# 75 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 76 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni6_text
# 77 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 79 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_6
# 80 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 81 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni7_text
# 82 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 84 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_8
# 85 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 86 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni8_text
# 87 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 89 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_3
# 90 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
# 91 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanni9_text
# 92 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 96 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, STARTING_STATUS_TRICK_ROOM
# 97 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setflag FLAG_STARTED_BATTLE_6
# 98 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setflag FLAG_CLEAR_PETREL_BATTLE_6
# 99 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	clearflag FLAG_CLEAR_BATTLE_6_NPCS
# 100 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 200
# 101 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B1F_STATE, 1
# 102 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	startplaytime
# 103 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	release
# 104 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	call ShuckleIslandShuckleHideout_B1F_EventScript_ContinueBattle6
	end


ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6::
# 112 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	lock
# 114 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 18, 6, 0x31C, TRUE
# 115 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 19, 6, 0x31D, TRUE
# 116 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 20, 6, 0x31E, TRUE
# 117 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	special DrawWholeMapView
# 119 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX
# 120 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 121 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_ne ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_2
ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_1:
# 127 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	msgbox giovanniPostBattle6_text
# 128 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmessage
# 129 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	closemessage
# 131 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	specialvar VAR_TEMP_6, GetPlayerFacingDirection
# 132 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	compare VAR_TEMP_6, DIR_WEST
	goto_if_eq ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_5
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_Movement_1
# 141 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_4:
# 145 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	playse SE_SWITCH
# 146 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 18, 6, 0x2CB, TRUE
# 147 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 19, 6, 0x2CC, FALSE
# 148 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 20, 6, 0x2CD, TRUE
# 149 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	special DrawWholeMapView
# 151 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay 60
# 153 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_Movement_2
# 154 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	playse SE_EXIT
# 155 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setflag FLAG_WON_BATTLE_6
# 156 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	removeobject 1
# 157 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	special HealPlayerParty
# 159 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay 60
# 161 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, 0
# 162 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 20
# 163 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B1F_STATE, 2
# 164 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_6_NPCS
# 165 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setflag FLAG_CLEAR_MOVE_TUTOR
# 166 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setflag FLAG_RECEIVED_SURFBOARD
# 167 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_7_NPCS
# 168 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	clearflag FLAG_CLEAR_PETREL_BATTLE_6
# 170 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_2:
# 123 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setsnorlax2 VAR_TEMP_B
	goto ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_1

ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_5:
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	applymovement 1, ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_Movement_0
# 135 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	waitmovement
	goto ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_4


ShuckleIslandShuckleHideout_B1F_EventScript_EnterContinueBattle6::
# 177 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	lock
# 179 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 18, 6, 0x31C, TRUE
# 180 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 19, 6, 0x31D, TRUE
# 181 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setmetatile 20, 6, 0x31E, TRUE
# 182 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	special DrawWholeMapView
# 184 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B1F_STATE, 2
# 186 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_B1F_EventScript_ContinueBattle6::
# 193 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	lock
# 194 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	faceplayer
# 196 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, STARTING_STATUS_TRICK_ROOM
# 197 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_1F_STATE, 200
# 198 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI, Battle6_Intro_text, Battle6_Lose_text, ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6
# 201 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	release
	end


# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_0:
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_down
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_down
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 24 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_up
	step_end

# 33 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_1:
# 33 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	emote_question_mark
	step_end

# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_2:
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_up
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_up
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 37 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_up
	step_end

# 51 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_3:
# 51 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_down
	step_end

# 59 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_4:
# 59 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
	step_end

# 64 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_5:
# 64 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
# 64 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
	step_end

# 69 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_6:
# 69 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 69 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_down
	step_end

# 74 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_7:
# 74 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_left
	step_end

# 84 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Movement_8:
# 84 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_up
	step_end

# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_Movement_0:
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_down
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_up
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 134 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
	step_end

# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_Movement_1:
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_right
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	face_up
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
# 140 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	delay_16
	step_end

# 153 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
ShuckleIslandShuckleHideout_B1F_EventScript_PostBattle6_Movement_2:
# 153 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	walk_up
	step_end

ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Text_0:
# 29 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "What follows is a longer text section.$"

ShuckleIslandShuckleHideout_B1F_EventScript_Battle6Intro_Text_1:
# 39 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "I wonder…have my monologues\nreally become that predictable?$"

paAnnouncement_text::
# 206 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "During the speech, no information about\n"
	.string "the upcoming battle will be presented.\p"
	.string "Your playtime will also be paused.\p"
	.string "You can skip the text, but there's\n"
	.string "no downside to hearing the story!$"

giovanni1_text::
# 216 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "Well, that was weird.\p"
	.string "Remind me to fire the grunt in charge of\n"
	.string "the PA system once I'm done with you.$"

giovanni2_text::
# 224 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "So, kid. We finally meet.\p"
	.string "You know, your Munchlax…or, Snorlax,\n"
	.string "has been giving us quite some trouble.\p"
	.string "Tell me, have you ever wondered how\n"
	.string "your Pokémon got its ability Gluttony?\l"
	.string "Or how it gained a second ability?$"

giovanni3_text::
# 235 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "Back when Team Rocket was rebuilding,\n"
	.string "I came across Shuckle Island.\p"
	.string "Here, residents would give berries to\n"
	.string "Shuckle to ferment into Berry Juice.\p"
	.string "The islanders were content with juice,\n"
	.string "but this transmutation fascinated me.\p"
	.string "So, I gave a Shuckle a berry and waited.\p"
	.string "But once the berry became Berry Juice,\n"
	.string "I kept waiting.$"

giovanni4_text::
# 249 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "Eventually, the Berry Juice changed,\n"
	.string "drying out to become a Rare Candy!\p"
	.string "But this was no ordinary Rare Candy;\n"
	.string "it didn't just raise a Pokémon's level.\p"
	.string "It also changed the Pokémon's ability,\n"
	.string "giving the effect of an Ability Capsule.$"

giovanni5_text::
# 260 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "It seems these Rare Candies fittingly\n"
	.string "give berry thieves the ability Gluttony.$"

giovanni6_text::
# 267 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "While this was interesting, it wasn't\n"
	.string "of take-over-the-world significance.\p"
	.string "One day, I came across a blue Shuckle\n"
	.string "and decided to experiment.\p"
	.string "When this Shuckle made a Rare Candy,\n"
	.string "the candy didn't swap abilities,\l"
	.string "it gave Pokémon a completely new one!$"

giovanni7_text::
# 279 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "And with this, Team Shuckle was born.\p"
	.string "We bred tens of thousands of Shuckle,\n"
	.string "accumulating our own group of shinies.\p"
	.string "At one point, we even tried painting\n"
	.string "ordinary Shuckle blue.\p"
	.string "This, however, did not change the\n"
	.string "effect of the Shuckle's Rare Candies.$"

giovanni8_text::
# 291 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "The paint also stained skin.\n"
	.string "That poor grunt is still blue…\p"
	.string "Though I heard he did become a backup\n"
	.string "for the Blue Man Group.$"

giovanni9_text::
# 300 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "So, do you understand what you're\n"
	.string "dealing with now?\p"
	.string "Team Shuckle has spent years building\n"
	.string "up an army of uniquely strong Pokémon.\p"
	.string "And now, we're finally ready to unleash\n"
	.string "this power onto the world…\l"
	.string "starting with you.$"

Battle6_Intro_text::
# 312 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "Prepare to face the power bestowed\n"
	.string "by the shiny Shuckle!$"

Battle6_Lose_text::
# 319 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "Heh…$"

giovanniPostBattle6_text::
# 325 "data/maps/ShuckleIslandShuckleHideout_B1F/scripts.pory"
	.string "Ha…\p"
	.string "...\p"
	.string "Hahaha…\p"
	.string "...\p"
	.string "HAHAHAHAHAHAHA!\p"
	.string "Well, kid. I'll give you this:\n"
	.string "you've got spunk.\p"
	.string "I can see why you've given our grunts\n"
	.string "so much trouble.\p"
	.string "But do you really think you've proven\n"
	.string "anything by beating some prototypes?\p"
	.string "Tell you what, go do whatever you want.\p"
	.string "Explore our hideout. Run around\n"
	.string "the island. I don't care.\p"
	.string "But when you feel you're ready,\n"
	.string "come meet me downstairs.\p"
	.string "I'll prepare a demonstration for you\n"
	.string "to see the true power of my research.\p"
	.string "Until then, enjoy your ignorance, kid.$"
