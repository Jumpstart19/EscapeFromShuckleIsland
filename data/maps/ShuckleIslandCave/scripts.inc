ShuckleIslandCave_MapScripts::
	.byte 0


ShuckleIslandCave_EventScript_Sign::
# 7 "data/maps/ShuckleIslandCave/scripts.pory"
	lock
# 8 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox Sign_text, MSGBOX_SIGN
# 9 "data/maps/ShuckleIslandCave/scripts.pory"
	release
	end


ShuckleIslandCave_EventScript_berryGuy::
# 16 "data/maps/ShuckleIslandCave/scripts.pory"
	lock
# 17 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement 1, ShuckleIslandCave_EventScript_berryGuy_Movement_0
# 18 "data/maps/ShuckleIslandCave/scripts.pory"
	waitmovement
# 20 "data/maps/ShuckleIslandCave/scripts.pory"
	goto_if_unset FLAG_MET_BERRY_GUY_CAVE, ShuckleIslandCave_EventScript_berryGuy_2
ShuckleIslandCave_EventScript_berryGuy_1:
# 27 "data/maps/ShuckleIslandCave/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_3, ShuckleIslandCave_EventScript_berryGuy_5
# 55 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox ShuckleIslandCave_EventScript_berryGuy_Text_7
ShuckleIslandCave_EventScript_berryGuy_4:
# 59 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement 1, ShuckleIslandCave_EventScript_berryGuy_Movement_1
# 60 "data/maps/ShuckleIslandCave/scripts.pory"
	waitmovement
# 61 "data/maps/ShuckleIslandCave/scripts.pory"
	release
	end

ShuckleIslandCave_EventScript_berryGuy_2:
# 22 "data/maps/ShuckleIslandCave/scripts.pory"
	setflag FLAG_MET_BERRY_GUY_CAVE
# 23 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox Cave_Careful_text
	goto ShuckleIslandCave_EventScript_berryGuy_1

ShuckleIslandCave_EventScript_berryGuy_5:
# 29 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 31 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_0, ITEM_LIECHI_BERRY
# 32 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_1, ITEM_GANLON_BERRY
# 33 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_2, ITEM_SALAC_BERRY
# 34 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_3, ITEM_PETAYA_BERRY
# 35 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_4, ITEM_APICOT_BERRY
# 36 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_5, ITEM_LANSAT_BERRY
# 38 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 40 "data/maps/ShuckleIslandCave/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandCave_EventScript_berryGuy_8
# 47 "data/maps/ShuckleIslandCave/scripts.pory"
	copyvar VAR_BATTLE3_BERRY, VAR_RESULT
# 48 "data/maps/ShuckleIslandCave/scripts.pory"
	giveitem VAR_BATTLE3_BERRY, 1
# 49 "data/maps/ShuckleIslandCave/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_3
	goto ShuckleIslandCave_EventScript_berryGuy_4

ShuckleIslandCave_EventScript_berryGuy_8:
# 42 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox ShuckleIslandCave_EventScript_berryGuy_Text_6
	goto ShuckleIslandCave_EventScript_berryGuy_4


ShuckleIslandCave_EventScript_trigger::
# 68 "data/maps/ShuckleIslandCave/scripts.pory"
	lock
# 70 "data/maps/ShuckleIslandCave/scripts.pory"
	goto_if_unset FLAG_MET_BERRY_GUY_CAVE, ShuckleIslandCave_EventScript_trigger_2
# 120 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement 1, ShuckleIslandCave_EventScript_berryGuy_Movement_0
# 121 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandCave_EventScript_trigger_Movement_4
# 122 "data/maps/ShuckleIslandCave/scripts.pory"
	waitmovement
# 124 "data/maps/ShuckleIslandCave/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_3, ShuckleIslandCave_EventScript_trigger_10
# 152 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox ShuckleIslandCave_EventScript_berryGuy_Text_7
ShuckleIslandCave_EventScript_trigger_9:
# 156 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement 1, ShuckleIslandCave_EventScript_berryGuy_Movement_1
# 157 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandCave_EventScript_trigger_Movement_5
# 158 "data/maps/ShuckleIslandCave/scripts.pory"
	waitmovement
ShuckleIslandCave_EventScript_trigger_1:
# 162 "data/maps/ShuckleIslandCave/scripts.pory"
	release
	end

ShuckleIslandCave_EventScript_trigger_2:
# 72 "data/maps/ShuckleIslandCave/scripts.pory"
	setflag FLAG_MET_BERRY_GUY_CAVE
# 73 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement 1, ShuckleIslandCave_EventScript_berryGuy_Movement_0
# 74 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox ShuckleIslandCave_EventScript_trigger_Text_0
# 75 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandCave_EventScript_trigger_Movement_0
# 76 "data/maps/ShuckleIslandCave/scripts.pory"
	waitmovement
# 77 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandCave_EventScript_trigger_Movement_1
# 78 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement 1, ShuckleIslandCave_EventScript_trigger_Movement_2
# 79 "data/maps/ShuckleIslandCave/scripts.pory"
	waitmovement
# 80 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox Cave_Careful_text
# 82 "data/maps/ShuckleIslandCave/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_3, ShuckleIslandCave_EventScript_trigger_6
# 110 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox ShuckleIslandCave_EventScript_berryGuy_Text_7
ShuckleIslandCave_EventScript_trigger_5:
# 114 "data/maps/ShuckleIslandCave/scripts.pory"
	applymovement 1, ShuckleIslandCave_EventScript_trigger_Movement_3
# 115 "data/maps/ShuckleIslandCave/scripts.pory"
	waitmovement
	goto ShuckleIslandCave_EventScript_trigger_1

ShuckleIslandCave_EventScript_trigger_6:
# 84 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 86 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_0, ITEM_LIECHI_BERRY
# 87 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_1, ITEM_GANLON_BERRY
# 88 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_2, ITEM_SALAC_BERRY
# 89 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_3, ITEM_PETAYA_BERRY
# 90 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_4, ITEM_APICOT_BERRY
# 91 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_5, ITEM_LANSAT_BERRY
# 93 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 95 "data/maps/ShuckleIslandCave/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandCave_EventScript_trigger_13
# 102 "data/maps/ShuckleIslandCave/scripts.pory"
	copyvar VAR_BATTLE3_BERRY, VAR_RESULT
# 103 "data/maps/ShuckleIslandCave/scripts.pory"
	giveitem VAR_BATTLE3_BERRY, 1
# 104 "data/maps/ShuckleIslandCave/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_3
	goto ShuckleIslandCave_EventScript_trigger_5

ShuckleIslandCave_EventScript_trigger_10:
# 126 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 128 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_0, ITEM_LIECHI_BERRY
# 129 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_1, ITEM_GANLON_BERRY
# 130 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_2, ITEM_SALAC_BERRY
# 131 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_3, ITEM_PETAYA_BERRY
# 132 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_4, ITEM_APICOT_BERRY
# 133 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultipush ShuckleIslandCave_EventScript_berryGuy_Text_5, ITEM_LANSAT_BERRY
# 135 "data/maps/ShuckleIslandCave/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 137 "data/maps/ShuckleIslandCave/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandCave_EventScript_trigger_16
# 144 "data/maps/ShuckleIslandCave/scripts.pory"
	copyvar VAR_BATTLE3_BERRY, VAR_RESULT
# 145 "data/maps/ShuckleIslandCave/scripts.pory"
	giveitem VAR_BATTLE3_BERRY, 1
# 146 "data/maps/ShuckleIslandCave/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_3
	goto ShuckleIslandCave_EventScript_trigger_9

ShuckleIslandCave_EventScript_trigger_13:
# 97 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox ShuckleIslandCave_EventScript_berryGuy_Text_6
	goto ShuckleIslandCave_EventScript_trigger_5

ShuckleIslandCave_EventScript_trigger_16:
# 139 "data/maps/ShuckleIslandCave/scripts.pory"
	msgbox ShuckleIslandCave_EventScript_berryGuy_Text_6
	goto ShuckleIslandCave_EventScript_trigger_9


# 17 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_berryGuy_Movement_0:
# 17 "data/maps/ShuckleIslandCave/scripts.pory"
	face_player
	step_end

# 59 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_berryGuy_Movement_1:
# 59 "data/maps/ShuckleIslandCave/scripts.pory"
	face_up
	step_end

# 75 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_trigger_Movement_0:
# 75 "data/maps/ShuckleIslandCave/scripts.pory"
	lock_facing_direction
	step_end

# 77 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_trigger_Movement_1:
# 77 "data/maps/ShuckleIslandCave/scripts.pory"
	walk_down
# 77 "data/maps/ShuckleIslandCave/scripts.pory"
	unlock_facing_direction
	step_end

# 78 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_trigger_Movement_2:
# 78 "data/maps/ShuckleIslandCave/scripts.pory"
	walk_right
# 78 "data/maps/ShuckleIslandCave/scripts.pory"
	face_down
	step_end

# 114 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_trigger_Movement_3:
# 114 "data/maps/ShuckleIslandCave/scripts.pory"
	walk_left
# 114 "data/maps/ShuckleIslandCave/scripts.pory"
	face_up
	step_end

# 121 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_trigger_Movement_4:
# 121 "data/maps/ShuckleIslandCave/scripts.pory"
	face_left
	step_end

# 157 "data/maps/ShuckleIslandCave/scripts.pory"
ShuckleIslandCave_EventScript_trigger_Movement_5:
# 157 "data/maps/ShuckleIslandCave/scripts.pory"
	walk_down
	step_end

ShuckleIslandCave_EventScript_berryGuy_Text_0:
# 31 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Liechi Berry$"

ShuckleIslandCave_EventScript_berryGuy_Text_1:
# 32 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Ganlon Berry$"

ShuckleIslandCave_EventScript_berryGuy_Text_2:
# 33 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Salac Berry$"

ShuckleIslandCave_EventScript_berryGuy_Text_3:
# 34 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Petaya Berry$"

ShuckleIslandCave_EventScript_berryGuy_Text_4:
# 35 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Apicot Berry$"

ShuckleIslandCave_EventScript_berryGuy_Text_5:
# 36 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Lansat Berry$"

ShuckleIslandCave_EventScript_berryGuy_Text_6:
# 42 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Come back when you know\nwhich berry you want!$"

ShuckleIslandCave_EventScript_berryGuy_Text_7:
# 55 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "I hope you make good use of that berry!$"

ShuckleIslandCave_EventScript_trigger_Text_0:
# 74 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "Careful!$"

Sign_text::
# 167 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "There are markings on the floor,\n"
	.string "but the floor isn't damaged at all!\p"
	.string "How strange…$"

Cave_Careful_text::
# 175 "data/maps/ShuckleIslandCave/scripts.pory"
	.string "The floor is cracked here, so you'll\n"
	.string "have to use the ladder to the left.\p"
	.string "Maybe a berry could help you?\p"
	.string "I suppose I could spare one more\n"
	.string "from my supply.$"
