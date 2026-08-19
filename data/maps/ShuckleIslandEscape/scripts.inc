ShuckleIslandEscape_MapScripts::
	.byte 0


ShuckleIslandEscape_EventScript_TMMerchant::
# 8 "data/maps/ShuckleIslandEscape/scripts.pory"
	lock
# 10 "data/maps/ShuckleIslandEscape/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 11 "data/maps/ShuckleIslandEscape/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 12 "data/maps/ShuckleIslandEscape/scripts.pory"
	delay 120
# 13 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_TMMerchant_Text_0
# 14 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 15 "data/maps/ShuckleIslandEscape/scripts.pory"
	closemessage
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	applymovement 2, ShuckleIslandEscape_EventScript_TMMerchant_Movement_0
# 17 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmovement
# 18 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_TMMerchant_Text_1
# 19 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 21 "data/maps/ShuckleIslandEscape/scripts.pory"
	dynmultipush ShuckleIslandEscape_EventScript_TMMerchant_Text_2, 0
# 22 "data/maps/ShuckleIslandEscape/scripts.pory"
	dynmultipush ShuckleIslandEscape_EventScript_TMMerchant_Text_3, 1
# 24 "data/maps/ShuckleIslandEscape/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 26 "data/maps/ShuckleIslandEscape/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandEscape_EventScript_TMMerchant_2
# 31 "data/maps/ShuckleIslandEscape/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandEscape_EventScript_TMMerchant_3
# 38 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_TMMerchant_Text_6
ShuckleIslandEscape_EventScript_TMMerchant_1:
# 42 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 43 "data/maps/ShuckleIslandEscape/scripts.pory"
	closemessage
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	applymovement 2, ShuckleIslandEscape_EventScript_TMMerchant_Movement_1
# 46 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmovement
# 47 "data/maps/ShuckleIslandEscape/scripts.pory"
	setflag FLAG_TM_MERCHANT_END
# 48 "data/maps/ShuckleIslandEscape/scripts.pory"
	removeobject 2
# 49 "data/maps/ShuckleIslandEscape/scripts.pory"
	playbgm MUS_NONE, FALSE
# 50 "data/maps/ShuckleIslandEscape/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 51 "data/maps/ShuckleIslandEscape/scripts.pory"
	playse SE_M_BUBBLE3
# 52 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitse
# 53 "data/maps/ShuckleIslandEscape/scripts.pory"
	delay 30
# 54 "data/maps/ShuckleIslandEscape/scripts.pory"
	playse SE_M_ACID_ARMOR
# 55 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitse
# 56 "data/maps/ShuckleIslandEscape/scripts.pory"
	delay 60
# 57 "data/maps/ShuckleIslandEscape/scripts.pory"
	playse MUS_OBTAIN_BADGE
# 58 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_TMMerchant_Text_7
# 59 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitse
# 60 "data/maps/ShuckleIslandEscape/scripts.pory"
	closemessage
# 61 "data/maps/ShuckleIslandEscape/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_ESCAPE_STATE, 1
# 62 "data/maps/ShuckleIslandEscape/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/ShuckleIslandEscape/scripts.pory"
	release
	end

ShuckleIslandEscape_EventScript_TMMerchant_2:
# 28 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_TMMerchant_Text_4
	goto ShuckleIslandEscape_EventScript_TMMerchant_1

ShuckleIslandEscape_EventScript_TMMerchant_3:
# 33 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_TMMerchant_Text_5
	goto ShuckleIslandEscape_EventScript_TMMerchant_1


ShuckleIslandEscape_EventScript_Jumpstart::
# 71 "data/maps/ShuckleIslandEscape/scripts.pory"
	lock
# 72 "data/maps/ShuckleIslandEscape/scripts.pory"
	faceplayer
# 74 "data/maps/ShuckleIslandEscape/scripts.pory"
	special BufferPlaytime
# 76 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox jumpstartIntro_text
# 77 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 79 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_Jumpstart_Text_0, MSGBOX_YESNO
# 81 "data/maps/ShuckleIslandEscape/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandEscape_EventScript_Jumpstart_2
# 104 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox jumpstartNo_text
# 105 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
ShuckleIslandEscape_EventScript_Jumpstart_1:
# 109 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox jumpstartParting_text
# 110 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 111 "data/maps/ShuckleIslandEscape/scripts.pory"
	closemessage
# 113 "data/maps/ShuckleIslandEscape/scripts.pory"
	applymovement 1, ShuckleIslandEscape_EventScript_Jumpstart_Movement_0
# 114 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmovement
# 115 "data/maps/ShuckleIslandEscape/scripts.pory"
	opendoor 23, 20
# 116 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitdooranim
# 117 "data/maps/ShuckleIslandEscape/scripts.pory"
	applymovement 1, ShuckleIslandEscape_EventScript_Jumpstart_Movement_1
# 118 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmovement
# 119 "data/maps/ShuckleIslandEscape/scripts.pory"
	removeobject 1
# 120 "data/maps/ShuckleIslandEscape/scripts.pory"
	setflag FLAG_SPOKE_JUMPSTART
# 121 "data/maps/ShuckleIslandEscape/scripts.pory"
	closedoor 23, 20
# 122 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitdooranim
# 124 "data/maps/ShuckleIslandEscape/scripts.pory"
	release
	end

ShuckleIslandEscape_EventScript_Jumpstart_2:
# 83 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_Jumpstart_Text_1
# 84 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 86 "data/maps/ShuckleIslandEscape/scripts.pory"
	special BufferHints
# 87 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_Jumpstart_Text_2
# 88 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 90 "data/maps/ShuckleIslandEscape/scripts.pory"
	special BufferSolutions
# 91 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_Jumpstart_Text_3
# 92 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 94 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_Jumpstart_Text_4
# 95 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
# 97 "data/maps/ShuckleIslandEscape/scripts.pory"
	special BufferAdjustedTime
# 98 "data/maps/ShuckleIslandEscape/scripts.pory"
	msgbox ShuckleIslandEscape_EventScript_Jumpstart_Text_5
# 99 "data/maps/ShuckleIslandEscape/scripts.pory"
	waitmessage
	goto ShuckleIslandEscape_EventScript_Jumpstart_1


# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
ShuckleIslandEscape_EventScript_TMMerchant_Movement_0:
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_left
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_up
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_up
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_right
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_right
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_right
# 16 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_right
	step_end

# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
ShuckleIslandEscape_EventScript_TMMerchant_Movement_1:
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	face_down
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	lock_facing_direction
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_down
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_down
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_down
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_fast_down
# 45 "data/maps/ShuckleIslandEscape/scripts.pory"
	jump_2_up
	step_end

# 113 "data/maps/ShuckleIslandEscape/scripts.pory"
ShuckleIslandEscape_EventScript_Jumpstart_Movement_0:
# 113 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_in_place_faster_up
	step_end

# 117 "data/maps/ShuckleIslandEscape/scripts.pory"
ShuckleIslandEscape_EventScript_Jumpstart_Movement_1:
# 117 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_in_place_faster_up
# 117 "data/maps/ShuckleIslandEscape/scripts.pory"
	walk_up
	step_end

ShuckleIslandEscape_EventScript_TMMerchant_Text_0:
# 13 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "HELP!\nI CAN'T STOP!$"

ShuckleIslandEscape_EventScript_TMMerchant_Text_1:
# 18 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "Quick!\nThrow a net!$"

ShuckleIslandEscape_EventScript_TMMerchant_Text_2:
# 21 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "Throw a net$"

ShuckleIslandEscape_EventScript_TMMerchant_Text_3:
# 22 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "Throw Annette$"

ShuckleIslandEscape_EventScript_TMMerchant_Text_4:
# 28 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "You don't have a net or Annette…$"

ShuckleIslandEscape_EventScript_TMMerchant_Text_5:
# 33 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "You don't have a net…$"

ShuckleIslandEscape_EventScript_TMMerchant_Text_6:
# 38 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "You don't have Annette…$"

ShuckleIslandEscape_EventScript_TMMerchant_Text_7:
# 58 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "Congratulations!\nYou helped the TM Merchant stop!$"

ShuckleIslandEscape_EventScript_Jumpstart_Text_0:
# 79 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "Now then…\pDo you want to know your final time?$"

ShuckleIslandEscape_EventScript_Jumpstart_Text_1:
# 83 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "You completed the game in {STR_VAR_1}:{STR_VAR_2}!$"

ShuckleIslandEscape_EventScript_Jumpstart_Text_2:
# 87 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "You used {STR_VAR_1} small, {STR_VAR_2} medium,\nand {STR_VAR_3} large hints.$"

ShuckleIslandEscape_EventScript_Jumpstart_Text_3:
# 91 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "You also used {STR_VAR_1} solutions.$"

ShuckleIslandEscape_EventScript_Jumpstart_Text_4:
# 94 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "And so…$"

ShuckleIslandEscape_EventScript_Jumpstart_Text_5:
# 98 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "Your adjusted completion time is {STR_VAR_1}:{STR_VAR_2}!$"

jumpstartIntro_text::
# 129 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "Hey there!\p"
	.string "I'm Jumpstart, the creator of this\n"
	.string "escape room.\p"
	.string "First of all, congratulations!\p"
	.string "You've officially escaped from Shuckle\n"
	.string "Island and completed the escape room!\p"
	.string "I sincerely appreciate you taking the\n"
	.string "time to play through my game.$"

jumpstartNo_text::
# 142 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "No problem!\p"
	.string "The most important thing is that\n"
	.string "you had fun!\p"
	.string "You can come to my house anytime if\n"
	.string "you ever change your mind.$"

jumpstartParting_text::
# 152 "data/maps/ShuckleIslandEscape/scripts.pory"
	.string "I guess we're done here, then!\p"
	.string "However…\p"
	.string "If you're interested in one more\n"
	.string "optional challenge, come speak to me!\p"
	.string "Otherwise, thank you again for playing\n"
	.string "Escape from Shuckle Island!$"
