ShuckleIslandMain_House3_MapScripts::
	.byte 0


ShuckleIslandMain_House3_EventScript_Tutor::
# 7 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	lock
# 8 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	applymovement 1, ShuckleIslandMain_House3_EventScript_Tutor_Movement_0
# 10 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	goto_if_unset FLAG_WON_BATTLE_6, ShuckleIslandMain_House3_EventScript_Tutor_2
# 15 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	goto_if_unset FLAG_LEARNED_ULTIMATE_MOVES, ShuckleIslandMain_House3_EventScript_Tutor_3
# 56 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	msgbox ShuckleIslandMain_House3_EventScript_Tutor_Text_3
ShuckleIslandMain_House3_EventScript_Tutor_1:
# 60 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	release
	end

ShuckleIslandMain_House3_EventScript_Tutor_2:
# 12 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	msgbox Ultimate_Tutor_Text
	goto ShuckleIslandMain_House3_EventScript_Tutor_1

ShuckleIslandMain_House3_EventScript_Tutor_3:
# 17 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	msgbox Ultimate_Tutor2_Text
# 18 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	msgbox ShuckleIslandMain_House3_EventScript_Tutor_Text_0, MSGBOX_YESNO
# 20 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandMain_House3_EventScript_Tutor_7
# 48 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	msgbox ShuckleIslandMain_House3_EventScript_Tutor_Text_2
	goto ShuckleIslandMain_House3_EventScript_Tutor_1

ShuckleIslandMain_House3_EventScript_Tutor_7:
# 22 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	setflag FLAG_LEARNED_ULTIMATE_MOVES
# 23 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	indexspeciesinparty SPECIES_GALLADE
# 24 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 26 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	compare VAR_TEMP_B, 0
	goto_if_eq ShuckleIslandMain_House3_EventScript_Tutor_11
# 33 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq ShuckleIslandMain_House3_EventScript_Tutor_12
ShuckleIslandMain_House3_EventScript_Tutor_10:
# 41 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	special HealPlayerParty
# 43 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	msgbox ShuckleIslandMain_House3_EventScript_Tutor_Text_1
	goto ShuckleIslandMain_House3_EventScript_Tutor_1

ShuckleIslandMain_House3_EventScript_Tutor_11:
# 28 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	setmonmoves 0, MOVE_WILL_O_WISP, MOVE_DISABLE, MOVE_SAFEGUARD, MOVE_TRICK
# 29 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	setmonmoves 1, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_RECYCLE, MOVE_NATURAL_GIFT
# 30 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	upmovepp 1, 2
	goto ShuckleIslandMain_House3_EventScript_Tutor_10

ShuckleIslandMain_House3_EventScript_Tutor_12:
# 35 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	setmonmoves 0, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_RECYCLE, MOVE_NATURAL_GIFT
# 36 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	setmonmoves 1, MOVE_WILL_O_WISP, MOVE_DISABLE, MOVE_SAFEGUARD, MOVE_TRICK
# 37 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	upmovepp 0, 2
	goto ShuckleIslandMain_House3_EventScript_Tutor_10


# 8 "data/maps/ShuckleIslandMain_House3/scripts.pory"
ShuckleIslandMain_House3_EventScript_Tutor_Movement_0:
# 8 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	face_player
	step_end

ShuckleIslandMain_House3_EventScript_Tutor_Text_0:
# 18 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	.string "Now then, should I teach your Pokémon\ntheir ultimate movesets?$"

ShuckleIslandMain_House3_EventScript_Tutor_Text_1:
# 43 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	.string "And…done! Your Pokémon should now\nbe prepared to take on any challenge!\pAlso, I pumped two PP ups into Snorlax's\nRecycle. I hope it helps you!$"

ShuckleIslandMain_House3_EventScript_Tutor_Text_2:
# 48 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	.string "Alright, well come back if you\nchange your mind!$"

ShuckleIslandMain_House3_EventScript_Tutor_Text_3:
# 56 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	.string "Your Pokémon should now be prepared\nto take on any challenge!$"

Ultimate_Tutor_Text::
# 65 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	.string "I can teach your Pokémon moves to take\n"
	.string "on the ultimate foe! You interested?\p"
	.string "Oh, your Munchlax…\p"
	.string "I'm sorry. Team Shuckle is looking for a\n"
	.string "Munchlax, and I don't want to interfere.\p"
	.string "Maybe I can help you once you\n"
	.string "no longer have that Munchlax.$"

Ultimate_Tutor2_Text::
# 77 "data/maps/ShuckleIslandMain_House3/scripts.pory"
	.string "I can teach your Pokémon moves to take\n"
	.string "on the ultimate foe! You interested?\p"
	.string "Oh, your Snorlax…\n"
	.string "Didn't you have a Munchlax before?\p"
	.string "Eh, it's probably just a coincidence.$"
