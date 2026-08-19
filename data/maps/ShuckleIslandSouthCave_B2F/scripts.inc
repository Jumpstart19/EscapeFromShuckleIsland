ShuckleIslandSouthCave_B2F_MapScripts::
# 3 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShuckleIslandSouthCave_B2F_EventScript_SetFlags
	.byte 0


ShuckleIslandSouthCave_B2F_EventScript_SetFlags::
# 11 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	clearflag FLAG_DONT_REMOVE_OFFSCREEN_OBJECT
# 13 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	compare VAR_ICE_CAVE_BOULDER_1, 10
	goto_if_ne ShuckleIslandSouthCave_B2F_EventScript_SetFlags_2
ShuckleIslandSouthCave_B2F_EventScript_SetFlags_1:
# 20 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	compare VAR_ICE_CAVE_BOULDER_2, 10
	goto_if_ne ShuckleIslandSouthCave_B2F_EventScript_SetFlags_4
	return

ShuckleIslandSouthCave_B2F_EventScript_SetFlags_2:
# 15 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	setflag FLAG_REMOVE_ICE_STRENGTH_PUZZLE_1_CLEAR_BOULDER
# 16 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	setflag FLAG_CLEAR_HINT_NPC_ICE_PUZZLE_2
	goto ShuckleIslandSouthCave_B2F_EventScript_SetFlags_1

ShuckleIslandSouthCave_B2F_EventScript_SetFlags_4:
# 22 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	setflag FLAG_REMOVE_ICE_STRENGTH_PUZZLE_2_CLEAR_BOULDER
	return


ShuckleIslandSouthCave_B2F_EventScript_StrengthTool::
# 30 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	lockall
# 31 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	giveitem ITEM_STRENGTH_TOOL, 1
# 32 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	removeobject 1
# 33 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	setflag FLAG_RECEIVED_STRENGTH_TOOL
# 34 "data/maps/ShuckleIslandSouthCave_B2F/scripts.pory"
	releaseall
	end

