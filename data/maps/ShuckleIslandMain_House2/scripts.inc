ShuckleIslandMain_House2_MapScripts::
	.byte 0


ShuckleIslandMain_House2_EventScript_LittleGirl::
# 8 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	lock
# 9 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	faceplayer
# 10 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	goto_if_unset FLAG_SPOKE_TRICK_MAN_GIRL, ShuckleIslandMain_House2_EventScript_LittleGirl_2
# 24 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	msgbox ShuckleIslandMain_House2_EventScript_LittleGirl_Text_2
# 25 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	waitmessage
ShuckleIslandMain_House2_EventScript_LittleGirl_1:
# 28 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	release
	end

ShuckleIslandMain_House2_EventScript_LittleGirl_2:
# 12 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	msgbox ShuckleIslandMain_House2_EventScript_LittleGirl_Text_0
# 13 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	waitmessage
# 14 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	applymovement 1, ShuckleIslandMain_House2_EventScript_LittleGirl_Movement_0
# 15 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	playse SE_PIN
# 16 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	waitse
# 17 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	msgbox ShuckleIslandMain_House2_EventScript_LittleGirl_Text_1
# 18 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	waitmessage
# 19 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	setflag FLAG_SPOKE_TRICK_MAN_GIRL
	goto ShuckleIslandMain_House2_EventScript_LittleGirl_1


ShuckleIslandMain_House2_EventScript_TrickMan::
# 35 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	lock
# 36 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	faceplayer
# 37 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	msgbox ShuckleIslandMain_House2_EventScript_TrickMan_Text_0
# 38 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	release
	end


# 14 "data/maps/ShuckleIslandMain_House2/scripts.pory"
ShuckleIslandMain_House2_EventScript_LittleGirl_Movement_0:
# 14 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	emote_exclamation_mark
	step_end

ShuckleIslandMain_House2_EventScript_LittleGirl_Text_0:
# 12 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	.string "Haha, tricks are fun!\nThanks again for the balloon!$"

ShuckleIslandMain_House2_EventScript_LittleGirl_Text_1:
# 17 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	.string "Wait, are you the one\nwho's been beating all my friends?\pSTAY AWAY FROM ME!$"

ShuckleIslandMain_House2_EventScript_LittleGirl_Text_2:
# 24 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	.string "STRANGER DANGER!$"

ShuckleIslandMain_House2_EventScript_TrickMan_Text_0:
# 37 "data/maps/ShuckleIslandMain_House2/scripts.pory"
	.string "Have fun using your new trick!\nJust don't use it on kids, you weirdo.$"
