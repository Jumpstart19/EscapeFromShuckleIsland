ShuckleIslandCave_B2F_MapScripts::
	.byte 0


ShuckleIslandCave_B2F_EventScript_Hiker::
# 5 "data/maps/ShuckleIslandCave_B2F/scripts.pory"
	lock
# 6 "data/maps/ShuckleIslandCave_B2F/scripts.pory"
	faceplayer
# 7 "data/maps/ShuckleIslandCave_B2F/scripts.pory"
	msgbox hiker_text
# 8 "data/maps/ShuckleIslandCave_B2F/scripts.pory"
	release
	end


hiker_text::
# 13 "data/maps/ShuckleIslandCave_B2F/scripts.pory"
	.string "Isn't it strange that Team Shuckle's\n"
	.string "Pokémon all have an extra ability?\p"
	.string "Where do you think they found\n"
	.string "Pokémon like that?$"
