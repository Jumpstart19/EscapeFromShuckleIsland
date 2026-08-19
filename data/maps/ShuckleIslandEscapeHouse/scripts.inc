ShuckleIslandEscapeHouse_MapScripts::
# 3 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIslandEscapeHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIslandEscapeHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SHUCKLE_ESCAPE_HOUSE_STATE, 1, ShuckleIslandEscapeHouse_EventScript_ClearParty
	.2byte 0


ShuckleIslandEscapeHouse_EventScript_ClearParty::
# 15 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	lock
# 17 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	removeitemfrommon 0
# 18 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	removeitemfrommon 1
# 19 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	removeitem ITEM_CHILAN_BERRY
# 21 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_ESCAPE_HOUSE_STATE, 0
# 23 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	release
	end


ShuckleIslandEscapeHouse_EventScript_TimeStats::
# 30 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	lock
# 32 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_0, MSGBOX_YESNO
# 34 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandEscapeHouse_EventScript_TimeStats_2
ShuckleIslandEscapeHouse_EventScript_TimeStats_1:
# 67 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	release
	end

ShuckleIslandEscapeHouse_EventScript_TimeStats_2:
# 36 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	special BufferPlaytime
# 37 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_1
# 38 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
# 40 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	special BufferHints
# 41 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_2
# 42 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
# 44 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	special BufferSolutions
# 45 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_3
# 46 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
# 48 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	goto_if_set FLAG_BEAT_JUMPSTART, ShuckleIslandEscapeHouse_EventScript_TimeStats_5
# 55 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_5
ShuckleIslandEscapeHouse_EventScript_TimeStats_4:
# 59 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
# 61 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	special BufferAdjustedTime
# 62 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_6
# 63 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
	goto ShuckleIslandEscapeHouse_EventScript_TimeStats_1

ShuckleIslandEscapeHouse_EventScript_TimeStats_5:
# 50 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_4
	goto ShuckleIslandEscapeHouse_EventScript_TimeStats_4


ShuckleIslandEscapeHouse_EventScript_Jumpstart::
# 74 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	lock
# 75 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	faceplayer
# 77 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_ESCAPE_HOUSE_2
# 79 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	goto_if_unset FLAG_BEAT_JUMPSTART, ShuckleIslandEscapeHouse_EventScript_Jumpstart_2
# 118 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartMusic_text
# 120 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	dynmultipush ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_1, 0
# 121 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	dynmultipush ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_2, 1
# 122 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	dynmultipush ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_3, 2
# 123 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	dynmultipush ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_4, 3
# 125 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 127 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandEscapeHouse_EventScript_Jumpstart_8
# 132 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandEscapeHouse_EventScript_Jumpstart_9
# 141 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandEscapeHouse_EventScript_Jumpstart_10
# 150 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandEscapeHouse_EventScript_Jumpstart_11
# 159 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandEscapeHouse_EventScript_Jumpstart_12
ShuckleIslandEscapeHouse_EventScript_Jumpstart_1:
# 171 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	release
	end

ShuckleIslandEscapeHouse_EventScript_Jumpstart_2:
# 81 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	goto_if_unset FLAG_JUMPSTART_BATTLE_INTRO, ShuckleIslandEscapeHouse_EventScript_Jumpstart_6
ShuckleIslandEscapeHouse_EventScript_Jumpstart_5:
# 89 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_0, MSGBOX_YESNO
# 91 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShuckleIslandEscapeHouse_EventScript_Jumpstart_18
# 110 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartUnderstood_text
# 111 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_1

ShuckleIslandEscapeHouse_EventScript_Jumpstart_6:
# 83 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartBattleIntro_text
# 84 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
# 85 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setflag FLAG_JUMPSTART_BATTLE_INTRO
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_5

ShuckleIslandEscapeHouse_EventScript_Jumpstart_8:
# 129 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_5
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_1

ShuckleIslandEscapeHouse_EventScript_Jumpstart_9:
# 134 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartBigBlue_text
# 135 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_VS_BIG_BLUE
# 136 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative DrawMugshot
# 137 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_6
# 138 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative ClearMugshot
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_1

ShuckleIslandEscapeHouse_EventScript_Jumpstart_10:
# 143 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartAbilityOverload_text
# 144 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ABILITY_OVERLOAD
# 145 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative DrawMugshot
# 146 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_7
# 147 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative ClearMugshot
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_1

ShuckleIslandEscapeHouse_EventScript_Jumpstart_11:
# 152 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartLastStand_text
# 153 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_LAST_STAND
# 154 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative DrawMugshot
# 155 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_8
# 156 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative ClearMugshot
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_1

ShuckleIslandEscapeHouse_EventScript_Jumpstart_12:
# 161 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartVsJumpstart_text
# 162 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_VS_JUMPSTART
# 163 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative DrawMugshot
# 164 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_9
# 165 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	callnative ClearMugshot
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_1

ShuckleIslandEscapeHouse_EventScript_Jumpstart_18:
# 93 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartPreBattle_text
# 94 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
# 96 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	takemon 1
# 97 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	takemon 0
# 99 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	givemon SPECIES_SNORLAX, 28, ITEM_NONE, ITEM_POKE_BALL, NATURE_IMPISH, 2, 0, 100, 0, 252, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_COUNTER, MOVE_SNATCH, MOVE_RECYCLE, MOVE_MIMIC
# 100 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	givemon SPECIES_GALLADE, 28, ITEM_CHILAN_BERRY, ITEM_POKE_BALL, NATURE_LONELY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_RECYCLE, MOVE_IMPRISON, MOVE_MIMIC, MOVE_NONE
# 101 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	special HealPlayerParty
# 103 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_ESCAPE_HOUSE_STATE, 1
# 105 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	trainerbattle_single TRAINER_JUMPSTART, jumpstartBattleStart_text, jumpstartBattleLose_text, ShuckleIslandEscapeHouse_EventScript_DefeatedJumpstart
	goto ShuckleIslandEscapeHouse_EventScript_Jumpstart_1


ShuckleIslandEscapeHouse_EventScript_DefeatedJumpstart::
# 178 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	lock
# 179 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	faceplayer
# 181 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	setflag FLAG_BEAT_JUMPSTART
# 182 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	special HealPlayerParty
# 184 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	msgbox jumpstartPostBattle_text
# 185 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	waitmessage
# 187 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	release
	end


ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_0:
# 32 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Do you want to see your final time?$"

ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_1:
# 37 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "You completed the game in {STR_VAR_1}:{STR_VAR_2}!$"

ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_2:
# 41 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "You used {STR_VAR_1} small, {STR_VAR_2} medium,\nand {STR_VAR_3} large hints.$"

ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_3:
# 45 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "You also used {STR_VAR_1} solutions.$"

ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_4:
# 50 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "And you defeated Jumpstart in battle!\nSo…$"

ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_5:
# 55 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "And so…$"

ShuckleIslandEscapeHouse_EventScript_TimeStats_Text_6:
# 62 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Your adjusted completion time is {STR_VAR_1}:{STR_VAR_2}!$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_0:
# 89 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "So then, do you want to challenge me to\na battle?$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_1:
# 120 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "vs Big Blue$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_2:
# 121 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Ability Overload$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_3:
# 122 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Last Stand$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_4:
# 123 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "vs Jumpstart$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_5:
# 129 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Come back if you're ever interested in\nlistening to my custom music!$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_6:
# 137 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "https://youtu.be/Wzs5zcZeX7Q$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_7:
# 146 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "https://youtu.be/0vYRmzGeLD0$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_8:
# 155 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "https://youtu.be/cCbkKxjJ_kY$"

ShuckleIslandEscapeHouse_EventScript_Jumpstart_Text_9:
# 164 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "https://youtu.be/TmH3WBFKwXw$"

jumpstartBattleIntro_text::
# 192 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "So, you want to solve one last puzzle?\p"
	.string "Your final test is this:\n"
	.string "defeat me in battle!\p"
	.string "Fair warning, this will be challenging!\p"
	.string "But there may be a reward if you win…\p"
	.string "I'll give your Pokémon the necessary\n"
	.string "moves and items before the match,\l"
	.string "so there's no need to prepare.\p"
	.string "Oh, and don't worry!\p"
	.string "I'll remove Snorlax's Sated Belch\n"
	.string "ability before the battle begins.\p"
	.string "That's right, no more damage calcs!\n"
	.string "And no more extra abilities.$"

jumpstartPreBattle_text::
# 210 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Excellent!\p"
	.string "Before we begin, let me provide one\n"
	.string "recommendation:\p"
	.string "Use save states liberally throughout\n"
	.string "this battle!\p"
	.string "You'll understand soon enough…\p"
	.string "Now, {PLAYER}…$"

jumpstartBattleStart_text::
# 222 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "There's no holding back!\n"
	.string "Come at me with everything you've got!$"

jumpstartBattleLose_text::
# 229 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Ha, that was wonderful!\n"
	.string "Absolutely brilliant work!$"

jumpstartUnderstood_text::
# 236 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Understood.\p"
	.string "This challenge is completely optional,\n"
	.string "so there's no pressure to complete it!\p"
	.string "I'll be here if you change your mind.$"

jumpstartPostBattle_text::
# 245 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Excellent job!\p"
	.string "I know that couldn't have been easy.\n"
	.string "So, truly, thank you.\p"
	.string "I appreciate you exploring everything\n"
	.string "I've designed for this Escape Room.\p"
	.string "And let's not forget your reward!\p"
	.string "First, I've deducted three hours from\n"
	.string "your adjusted clear time.\p"
	.string "You can view your new time on the\n"
	.string "poster on my wall.\p"
	.string "Also, I'm giving you access to all the\n"
	.string "arrangements I made for this game!\p"
	.string "Come speak to me anytime, and I'll\n"
	.string "provide links to the songs.$"

jumpstartMusic_text::
# 264 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Ah, so you're interested in my remixes?\n"
	.string "Which song do you want a link to?$"

jumpstartBigBlue_text::
# 271 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Ooh.\n"
	.string "This one is my favorite.\p"
	.string "Did you realize that this is a remix\n"
	.string "of Big Blue from F-Zero?\p"
	.string "I figured it was appropriate given that\n"
	.string "Giovanni's nickname here is Big Blue.\p"
	.string "Anyway, here's the link!$"

jumpstartAbilityOverload_text::
# 283 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "This one is the Cave of Origin music\n"
	.string "remixed as a battle theme.$"

jumpstartLastStand_text::
# 290 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Last Stand is an up-tempo arrangement\n"
	.string "of Big Blue's battle theme.\p"
	.string "A remix of a remix, if you will.\p"
	.string "It also includes the part from F-Zero's\n"
	.string "Big Blue that wasn't in the first remix.$"

jumpstartVsJumpstart_text::
# 300 "data/maps/ShuckleIslandEscapeHouse/scripts.pory"
	.string "Oh, you're interested in this one?\p"
	.string "I just made some small edits to the\n"
	.string "Frontier Brain battle theme.\p"
	.string "But feel free to listen if you prefer it\n"
	.string "over the original track.$"
