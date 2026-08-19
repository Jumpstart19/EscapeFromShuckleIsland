ShuckleIslandMain_House1_MapScripts::
	.byte 0


ShuckleIslandMain_House1_EventScript_DittoDoll::
# 7 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	lockall
# 8 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	msgbox ShuckleIslandMain_House1_EventScript_DittoDoll_Text_0
# 9 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	releaseall
	end


ShuckleIslandMain_House1_EventScript_Drawer::
# 16 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	lockall
# 17 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	msgbox ShuckleIslandMain_House1_EventScript_Drawer_Text_0, MSGBOX_YESNO
# 18 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandMain_House1_EventScript_Drawer_2
# 25 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	msgbox Left_Drawer_Closed_Text
ShuckleIslandMain_House1_EventScript_Drawer_1:
# 28 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	releaseall
	end

ShuckleIslandMain_House1_EventScript_Drawer_2:
# 20 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	msgbox Opened_Drawer_Text
	goto ShuckleIslandMain_House1_EventScript_Drawer_1


ShuckleIslandMain_House1_EventScript_DittoDoll_Text_0:
# 8 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	.string "It's a Ditto doll.\pIt looks like its owners want it to\ntransform into a Shedinja…\lor possibly a Vaporeon?$"

ShuckleIslandMain_House1_EventScript_Drawer_Text_0:
# 17 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	.string "It looks like a child's private drawer.\nPeek inside?$"

Opened_Drawer_Text::
# 33 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	.string "You find several pictures of Vaporeon…\p"
	.string "that aren't anywhere near as\n"
	.string "disturbing as what you had feared.\p"
	.string "They're actually kind of…cute?\n"
	.string "Well, you hope others see it that way.\p"
	.string "Then again, you just looked in a child's\n"
	.string "drawer without a second thought.\l"
	.string "So why start doubting yourself now?$"

Left_Drawer_Closed_Text::
# 46 "data/maps/ShuckleIslandMain_House1/scripts.pory"
	.string "Good call.\p"
	.string "You would prefer if the allegations\n"
	.string "stopped at child beater.$"
