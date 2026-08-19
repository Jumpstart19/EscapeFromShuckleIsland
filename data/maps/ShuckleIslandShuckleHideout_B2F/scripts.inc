ShuckleIslandShuckleHideout_B2F_MapScripts::
# 3 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShuckleIslandShuckleHideout_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShuckleIslandShuckleHideout_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	map_script_2 VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B2F_STATE, 1, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed
	.2byte 0


ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed::
# 33 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 35 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	indexspeciesinparty SPECIES_SNORLAX
# 36 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 37 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_ne ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_2
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_1:
# 43 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset 0x521, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_5
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_4:
# 101 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B2F_STATE, 2
# 102 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_2:
# 39 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setsnorlax2 VAR_TEMP_B
	goto ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_1

ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_5:
# 45 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_LEARNED_ULTIMATE_MOVES, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_8
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_7:
# 59 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_BATTLE_7_HINT_NPC_TEXT, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_11
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_10:
# 77 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_LAST_STAND_TRIGGERED, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_15
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_13:
# 92 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitemfrommon 0
# 93 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitemfrommon 1
# 94 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitem VAR_BATTLE7_BERRY
# 95 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	giveitemnojingle VAR_BATTLE7_BERRY
# 96 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitem VAR_BATTLE7_BERRY_2
# 97 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	giveitemnojingle VAR_BATTLE7_BERRY_2
	goto ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_4

ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_8:
# 47 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement 11, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_0
# 48 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitse
# 51 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox battle7MissingMoves_text
# 52 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmessage
# 53 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 55 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	delay 60
	goto ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_7

ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_11:
# 61 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement 12, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_1
# 62 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 63 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_2
# 64 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 65 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPC7message_text
# 66 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmessage
# 68 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement 12, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_3
# 69 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 70 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_4
# 71 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 73 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_BATTLE_7_HINT_NPC_TEXT
	goto ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_10

ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_14:
# 80 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement 11, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_0
# 81 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	playse SE_PIN
# 82 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitse
# 84 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox battle7NewOptions_text
# 85 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmessage
# 86 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 88 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_BATTLE_7_RESET_NPC_TEXT
	goto ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_13

ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_15:
# 77 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_BATTLE_7_RESET_NPC_TEXT, ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_14
	goto ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_13


ShuckleIslandShuckleHideout_B2F_EventScript_ShuckleCry::
# 109 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 110 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	playmoncry SPECIES_SHUCKLE, CRY_MODE_NORMAL
# 111 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmoncry
# 112 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_B2F_EventScript_GruntShuckle::
# 119 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 120 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox gruntShuckle_text
# 121 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_B2F_EventScript_ShuckleGrunt::
# 128 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 129 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox shuckleGrunt_text
# 130 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_B2F_EventScript_GruntFShuckle::
# 137 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 138 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	playmoncry SPECIES_SHUCKLE, CRY_MODE_NORMAL
# 139 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmoncry
# 140 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox gruntFShuckle_text
# 141 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_B2F_EventScript_Petrel::
# 148 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 149 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	faceplayer
# 151 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_PETREL_PRE_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_2
ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_1:
# 158 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_7, ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_5
ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_4:
# 196 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_LAST_STAND_TRIGGERED, ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_10
ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_9:
# 242 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_19
ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_7:
# 246 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_2:
# 153 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox petrelBattle7Intro_text
# 154 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_PETREL_PRE_BATTLE_7
	goto ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_1

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_5:
# 160 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox berryGuyPresentOptions_text
# 162 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_0, ITEM_OCCA_BERRY
# 163 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_1, ITEM_PASSHO_BERRY
# 164 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_2, ITEM_WACAN_BERRY
# 165 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_3, ITEM_RINDO_BERRY
# 166 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_4, ITEM_YACHE_BERRY
# 167 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_5, ITEM_CHOPLE_BERRY
# 168 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_6, ITEM_KEBIA_BERRY
# 169 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_7, ITEM_SHUCA_BERRY
# 170 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_8, ITEM_COBA_BERRY
# 171 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_9, ITEM_PAYAPA_BERRY
# 172 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_10, ITEM_TANGA_BERRY
# 173 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_11, ITEM_CHARTI_BERRY
# 174 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_12, ITEM_KASIB_BERRY
# 175 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_13, ITEM_HABAN_BERRY
# 176 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_14, ITEM_COLBUR_BERRY
# 177 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_15, ITEM_BABIRI_BERRY
# 178 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_16, ITEM_CHILAN_BERRY
# 180 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 182 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_13
# 189 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	copyvar VAR_BATTLE7_BERRY, VAR_RESULT
# 190 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	giveitem VAR_BATTLE7_BERRY, 1
# 191 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_7
	goto ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_4

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_8:
# 198 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_PETREL_PRE_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_17
ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_16:
# 205 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox berryGuyPresentOptions2_text
# 207 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_0, ITEM_OCCA_BERRY
# 208 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_1, ITEM_PASSHO_BERRY
# 209 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_2, ITEM_WACAN_BERRY
# 210 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_3, ITEM_RINDO_BERRY
# 211 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_4, ITEM_YACHE_BERRY
# 212 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_5, ITEM_CHOPLE_BERRY
# 213 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_6, ITEM_KEBIA_BERRY
# 214 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_7, ITEM_SHUCA_BERRY
# 215 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_8, ITEM_COBA_BERRY
# 216 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_9, ITEM_PAYAPA_BERRY
# 217 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_10, ITEM_TANGA_BERRY
# 218 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_11, ITEM_CHARTI_BERRY
# 219 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_12, ITEM_KASIB_BERRY
# 220 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_13, ITEM_HABAN_BERRY
# 221 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_14, ITEM_COLBUR_BERRY
# 222 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_15, ITEM_BABIRI_BERRY
# 223 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_16, ITEM_CHILAN_BERRY
# 225 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 227 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_19
# 234 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	copyvar VAR_BATTLE7_BERRY_2, VAR_RESULT
# 235 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	giveitem VAR_BATTLE7_BERRY_2, 1
# 236 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_7_2
	goto ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_7

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_10:
# 196 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_8
	goto ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_9

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_13:
# 184 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_17
	goto ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_4

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_17:
# 200 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox petrelBattle7Intro2_text
# 201 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_PETREL_PRE_BATTLE_7_2
	goto ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_16

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_19:
# 229 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_18
	goto ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_7


ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7::
# 253 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lockall
# 254 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	faceplayer
# 256 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SPOKE_RESET_NPC, ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_2
ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_1:
# 263 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_7, ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_5
# 270 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_0
# 272 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_9
# 279 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_2, 0
ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_8:
# 284 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 286 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_12
# 293 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_4, MSGBOX_AUTOCLOSE
# 294 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 295 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ResetBerry_7
# 296 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 297 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_5
ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_4:
# 303 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_2:
# 258 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_SPOKE_RESET_NPC
# 259 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox resetNPCIntro_text
	goto ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_1

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_5:
# 265 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox resetNPCNothingToReset_text
	goto ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_4

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_9:
# 274 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_1, 0
	goto ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_8

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_12:
# 288 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_3
	goto ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_4


ResetBerry_7::
# 310 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	clearflag FLAG_RECEIVED_BERRY_7
# 311 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	clearflag FLAG_RECEIVED_BERRY_7_2
# 312 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitemfrommon 0
# 313 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitemfrommon 1
# 314 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitem VAR_BATTLE7_BERRY
# 315 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeitem VAR_BATTLE7_BERRY_2
# 316 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_BATTLE7_BERRY, 0
# 317 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_BATTLE7_BERRY_2, 0
	return


ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7::
# 323 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lockall
# 324 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	faceplayer
# 326 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SPOKE_HINT_NPC, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_2
ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_1:
# 333 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_0
# 335 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_READ_HINT_INFO, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_5
# 342 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_2, 0
ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_4:
# 346 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_3, 1
# 348 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_LAST_STAND_TRIGGERED, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_9
ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_8:
# 361 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_LAST_STAND_TRIGGERED, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_12
ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_11:
# 375 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 377 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_21
# 382 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_22
# 388 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_23
# 400 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_24
# 412 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_25
# 424 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_26
# 459 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_27
# 471 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_28
# 483 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_29
# 495 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_30
ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20:
# 531 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	releaseall
	end

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_2:
# 328 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_SPOKE_HINT_NPC
# 329 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCIntro_text
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_1

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_5:
# 337 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_1, 0
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_4

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_9:
# 350 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_4, 2
# 351 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_5, 3
# 353 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_16
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_8

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_12:
# 363 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_7, 5
# 364 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_8, 6
# 365 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_9, 7
# 367 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_SM_HINT_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_43
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_11

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_14:
# 355 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_6, 4
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_8

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_15:
# 353 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_LRG_HINT_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_14
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_8

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_16:
# 353 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_15
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_8

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_21:
# 379 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCRefusedHint_text
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_22:
# 384 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCAboutHints_text
# 385 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_READ_HINT_INFO
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_23:
# 390 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCBattle7SmallHint_text
# 392 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_47
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_24:
# 402 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCBattle7MedHint_text
# 404 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_49
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_25:
# 414 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCBattle7LrgHint_text
# 416 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_51
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_26:
# 426 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_54
# 433 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_53:
# 437 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_67
# 442 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_68
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_27:
# 461 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCBattle7SmallHint2_text
# 463 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SM_HINT_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_57
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_28:
# 473 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCBattle7MedHint2_text
# 475 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_MED_HINT_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_59
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_29:
# 485 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCBattle7LrgHint2_text
# 487 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_LRG_HINT_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_61
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_30:
# 497 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_64
# 504 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_RESULT, 1
ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_63:
# 508 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_71
# 513 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_72
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_41:
# 369 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_10, 8
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_11

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_42:
# 367 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_LRG_HINT_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_41
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_11

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_43:
# 367 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_MED_HINT_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_42
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_11

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_47:
# 394 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_7
# 395 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_49:
# 406 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_7
# 407 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_51:
# 418 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_LRG_HINT_BATTLE_7
# 419 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_54:
# 428 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_53

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_57:
# 465 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_SM_HINT_BATTLE_7_2
# 466 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_SMALL_HINTS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_59:
# 477 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_MED_HINT_BATTLE_7_2
# 478 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_MED_HINTS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_61:
# 489 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_LRG_HINT_BATTLE_7_2
# 490 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_LARGE_HINTS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_64:
# 499 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox hintNPCSolution_text, MSGBOX_YESNO
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_63

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_67:
# 439 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_11
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_68:
# 444 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_7
# 445 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	callnative DrawMugshot
# 446 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_12
# 447 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	callnative ClearMugshot
# 449 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_7, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_75
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_71:
# 510 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_11
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_72:
# 515 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BATTLE_7_PART_2
# 516 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	callnative DrawMugshot
# 517 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_13
# 518 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	callnative ClearMugshot
# 520 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SOLUTION_BATTLE_7_2, ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_77
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_75:
# 451 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_7
# 452 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_77:
# 522 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_SOLUTION_BATTLE_7_2
# 523 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addvar VAR_NUM_SOLUTIONS, 1
	goto ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_20


ShuckleIslandShuckleHideout_B2F_EventScript_NewMechNPC7::
# 538 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 539 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	faceplayer
# 541 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_SPOKE_NEW_MECH_NPC, ShuckleIslandShuckleHideout_B2F_EventScript_NewMechNPC7_2
ShuckleIslandShuckleHideout_B2F_EventScript_NewMechNPC7_1:
# 548 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call NewMechNPC7Choices
# 550 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end

ShuckleIslandShuckleHideout_B2F_EventScript_NewMechNPC7_2:
# 543 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_SPOKE_NEW_MECH_NPC
# 544 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox newMechNPCIntro_text
	goto ShuckleIslandShuckleHideout_B2F_EventScript_NewMechNPC7_1


NewMechNPC7Choices::
# 557 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox NewMechNPC7Choices_Text_0
# 559 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush NewMechNPC7Choices_Text_1, 0
# 560 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush NewMechNPC7Choices_Text_2, 1
# 561 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush NewMechNPC7Choices_Text_3, 2
# 562 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush NewMechNPC7Choices_Text_4, 3
# 563 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush NewMechNPC7Choices_Text_5, 4
# 565 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 567 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq NewMechNPC7Choices_1
# 572 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMechNPC7Choices_2
# 578 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewMechNPC7Choices_3
# 584 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewMechNPC7Choices_4
# 589 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewMechNPC7Choices_5
# 595 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq NewMechNPC7Choices_6
	return

NewMechNPC7Choices_1:
# 569 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox NewMechNPC7Choices_Text_6
	return

NewMechNPC7Choices_2:
# 574 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox secondAbilities_text
# 575 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call NewMechNPC7Choices
	return

NewMechNPC7Choices_3:
# 580 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox satedBelch_text
# 581 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call NewMechNPC7Choices
	return

NewMechNPC7Choices_4:
# 586 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

NewMechNPC7Choices_5:
# 591 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox NewMechNPC7Choices_Text_7
# 592 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call NewMechNPC7Choices
	return

NewMechNPC7Choices_6:
# 597 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox NewMechNPC7Choices_Text_8
# 598 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call NewMechNPC7Choices
	return


ShuckleAbilityChoices::
# 606 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_0
# 608 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_1, 0
# 609 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_2, 1
# 610 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_3, 2
# 611 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_4, 3
# 612 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_5, 4
# 613 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_6, 5
# 614 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_7, 6
# 615 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_8, 7
# 617 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_LAST_STAND_TRIGGERED, ShuckleAbilityChoices_2
ShuckleAbilityChoices_1:
# 623 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 625 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleAbilityChoices_4
# 630 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleAbilityChoices_5
# 636 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleAbilityChoices_6
# 642 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleAbilityChoices_7
# 648 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleAbilityChoices_8
# 654 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleAbilityChoices_9
# 660 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq ShuckleAbilityChoices_10
# 666 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ShuckleAbilityChoices_11
# 672 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ShuckleAbilityChoices_12
# 678 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq ShuckleAbilityChoices_13
	return

ShuckleAbilityChoices_2:
# 619 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleAbilityChoices_Text_9, 8
	goto ShuckleAbilityChoices_1

ShuckleAbilityChoices_4:
# 627 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call NewMechNPC7Choices
	return

ShuckleAbilityChoices_5:
# 632 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_10
# 633 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_6:
# 638 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_11
# 639 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_7:
# 644 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox extraPressure_text
# 645 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_8:
# 650 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_12
# 651 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_9:
# 656 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_13
# 657 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_10:
# 662 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_14
# 663 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_11:
# 668 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_15
# 669 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_12:
# 674 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleAbilityChoices_Text_16
# 675 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return

ShuckleAbilityChoices_13:
# 680 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox lastStand_text
# 681 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleAbilityChoices
	return


ShuckleIslandShuckleHideout_B2F_EventScript_ShuckleDmgCalc::
# 689 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lockall
# 691 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	playse SE_PC_ON
# 692 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleIslandShuckleHideout_B2F_EventScript_ShuckleDmgCalc_Text_0
# 693 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitse
# 695 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleDmgCalcOptions
# 697 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	releaseall
	end


ShuckleDmgCalcOptions::
# 704 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleDmgCalcOptions_Text_0
# 706 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_unset FLAG_DMG_CALC_INFO_BATTLE_7, ShuckleDmgCalcOptions_2
# 713 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleDmgCalcOptions_Text_2, 0
ShuckleDmgCalcOptions_1:
# 717 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleDmgCalcOptions_Text_3, 1
# 718 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleDmgCalcOptions_Text_4, 2
# 719 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleDmgCalcOptions_Text_5, 3
# 721 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	goto_if_set FLAG_LAST_STAND_TRIGGERED, ShuckleDmgCalcOptions_6
ShuckleDmgCalcOptions_5:
# 727 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 729 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq ShuckleDmgCalcOptions_8
# 736 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShuckleDmgCalcOptions_9
# 743 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShuckleDmgCalcOptions_10
# 752 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShuckleDmgCalcOptions_11
# 761 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShuckleDmgCalcOptions_12
# 769 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShuckleDmgCalcOptions_13
	return

ShuckleDmgCalcOptions_2:
# 708 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleDmgCalcOptions_Text_1, 0
	goto ShuckleDmgCalcOptions_1

ShuckleDmgCalcOptions_6:
# 723 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	dynmultipush ShuckleDmgCalcOptions_Text_6, 4
	goto ShuckleDmgCalcOptions_5

ShuckleDmgCalcOptions_8:
# 731 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	playse SE_PC_OFF
# 732 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox dmgCalcClose_text
# 733 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitse
	return

ShuckleDmgCalcOptions_9:
# 738 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_DMG_CALC_INFO_BATTLE_7
# 739 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox dmgCalcTableUsageBattle7_text
# 740 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleDmgCalcOptions
	return

ShuckleDmgCalcOptions_10:
# 745 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleDmgCalcOptions_Text_7
# 746 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 747 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	displayshucklerockwreckerdmgcalc
# 748 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitbbuttonpress
# 749 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleDmgCalcOptions
	return

ShuckleDmgCalcOptions_11:
# 754 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleDmgCalcOptions_Text_7
# 755 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 756 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	displayshuckledynamicpunchdmgcalc
# 757 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitbbuttonpress
# 758 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleDmgCalcOptions
	return

ShuckleDmgCalcOptions_12:
# 763 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 764 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	displayshucklediamondstormdmgcalc
# 765 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitbbuttonpress
# 766 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleDmgCalcOptions
	return

ShuckleDmgCalcOptions_13:
# 771 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox ShuckleDmgCalcOptions_Text_8
# 772 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 773 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	displayshucklenaturalgiftdmgcalc
# 774 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitbbuttonpress
# 775 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleDmgCalcOptions
	return


ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach1::
# 783 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach1_Movement_0
# 786 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 788 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
# 789 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro
	end


ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach2::
# 797 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach2_Movement_0
# 800 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 802 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
# 803 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro
	end


ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach3::
# 811 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 813 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach3_Movement_0
# 814 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 816 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
# 817 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro
	end


ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach4::
# 825 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach4_Movement_0
# 828 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 830 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
# 831 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro
	end


ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach5::
# 839 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach5_Movement_0
# 842 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 844 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
# 845 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro
	end


ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro::
# 853 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 855 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox giovanni7_1_text
# 856 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmessage
# 857 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	applymovement 4, ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro_Movement_0
# 860 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmovement
# 862 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox giovanni7_2_text
# 863 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmessage
# 865 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_CLEAR_PETREL_BATTLE_6
# 866 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	clearflag FLAG_CLEAR_BATTLE_7_NPCS
# 867 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setrespawn HEAL_LOCATION_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B2F_2
# 869 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
# 870 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	call ShuckleIslandShuckleHideout_B2F_EventScript_ContinueBattle7
	end


ShuckleIslandShuckleHideout_B2F_EventScript_ContinueBattle7::
# 878 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 879 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	faceplayer
# 881 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_STARTING_FIELD_EFFECT, STARTING_STATUS_NONE
# 882 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_SHUCKLE_HIDEOUT_B2F_STATE, 1
# 883 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_2, Battle7_Intro_text, Battle7_Lose_text, ShuckleIslandShuckleHideout_B2F_EventScript_PostBattle7
# 886 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_B2F_EventScript_PostBattle7::
# 893 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lock
# 895 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	msgbox giovanni_loss_text
# 896 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitmessage
# 897 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	closemessage
# 899 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	special HealPlayerParty
# 901 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_CLEAR_BATTLE_7_NPCS
# 902 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_WON_BATTLE_7
# 903 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	clearflag FLAG_RECEIVED_SURFBOARD
# 905 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 906 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 2
# 907 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 3
# 908 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 4
# 909 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 7
# 910 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 8
# 911 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 9
# 912 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 18
# 913 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 14
# 914 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 17
# 915 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	addobject 19
# 916 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	playse SE_EXIT
# 917 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	waitse
# 918 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 920 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	release
	end


ShuckleIslandShuckleHideout_B2F_EventScript_Surfboard::
# 927 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	lockall
# 928 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	giveitem ITEM_SURF_TOOL, 1
# 929 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	removeobject 19
# 930 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	setflag FLAG_RECEIVED_SURFBOARD
# 931 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	releaseall
	end


# 47 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_0:
# 47 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_1:
# 61 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_down
# 61 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_left
	step_end

# 63 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_2:
# 63 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_right
	step_end

# 68 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_3:
# 68 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 68 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_down
	step_end

# 70 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_battle7Failed_Movement_4:
# 70 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_up
	step_end

# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach1_Movement_0:
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_right
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_right
# 785 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_up
	step_end

# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach2_Movement_0:
# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_right
# 799 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_up
	step_end

# 813 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach3_Movement_0:
# 813 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 813 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 813 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 813 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
	step_end

# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach4_Movement_0:
# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_left
# 827 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_up
	step_end

# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Approach5_Movement_0:
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_up
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_left
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	walk_left
# 841 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_up
	step_end

# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
ShuckleIslandShuckleHideout_B2F_EventScript_Battle7Intro_Movement_0:
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_up
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	delay_16
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	delay_16
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	delay_16
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	delay_16
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	face_down
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	delay_16
# 859 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	delay_16
	step_end

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_0:
# 162 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Occa Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_1:
# 163 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Passho Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_2:
# 164 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Wacan Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_3:
# 165 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Rindo Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_4:
# 166 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Yache Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_5:
# 167 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Chople Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_6:
# 168 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Kebia Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_7:
# 169 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Shuca Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_8:
# 170 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Coba Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_9:
# 171 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Payapa Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_10:
# 172 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Tanga Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_11:
# 173 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Charti Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_12:
# 174 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Kasib Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_13:
# 175 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Haban Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_14:
# 176 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Colbur Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_15:
# 177 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Babiri Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_16:
# 178 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Chilan Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_17:
# 184 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "I don't blame you. I doubt a single\nberry would make a difference.$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_18:
# 229 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "I don't blame you. I doubt another\nberry would make a difference.$"

ShuckleIslandShuckleHideout_B2F_EventScript_Petrel_Text_19:
# 242 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "I'd say good luck, but you should now\nunderstand you don't stand a chance.$"

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_0:
# 270 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "What would you like to reset?\n(Press B to exit)$"

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_1:
# 274 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Reset Berries$"

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_2:
# 279 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Reset Berry$"

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_3:
# 288 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Come back if you would ever\nlike to reset your actions!$"

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_4:
# 293 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "One moment while I reset your actions.$"

ShuckleIslandShuckleHideout_B2F_EventScript_resetNPC7_Text_5:
# 297 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Your actions have been reset!$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_0:
# 333 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Now then, what hints can I offer you?\n(Press B to exit)$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_1:
# 337 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "About Hints (read me!)$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_2:
# 342 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "About Hints$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_3:
# 346 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Small Hint$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_4:
# 350 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Medium Hint$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_5:
# 351 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Large Hint$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_6:
# 355 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Solution$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_7:
# 363 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Small Hint 2$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_8:
# 364 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Medium Hint 2$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_9:
# 365 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Large Hint 2$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_10:
# 369 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Solution 2$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_11:
# 439 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Understood.\pKeep trying, and come back\nif you feel you need the solution.$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_12:
# 446 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "https://youtu.be/EvvD5ovwIUo$"

ShuckleIslandShuckleHideout_B2F_EventScript_hintNPC7_Text_13:
# 517 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "https://youtu.be/PNuuwXbzMTg$"

NewMechNPC7Choices_Text_0:
# 557 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Now then, what new mechanics do\nyou want explained? (Press B to exit)$"

NewMechNPC7Choices_Text_1:
# 559 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Second Abilities$"

NewMechNPC7Choices_Text_2:
# 560 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Sated Belch$"

NewMechNPC7Choices_Text_3:
# 561 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Shuckle's Abilities$"

NewMechNPC7Choices_Text_4:
# 562 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Shuckle AI$"

NewMechNPC7Choices_Text_5:
# 563 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Confusion$"

NewMechNPC7Choices_Text_6:
# 569 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Stop by if you ever want\nthe new mechanics explained again!$"

NewMechNPC7Choices_Text_7:
# 591 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Shuckle will always attack Snorlax\nwith its strongest viable move.$"

NewMechNPC7Choices_Text_8:
# 597 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Confusion lasts for 5 turns.\pConfused Pokémon always hit\nthemselves in confusion.$"

ShuckleAbilityChoices_Text_0:
# 606 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Now then, which ability do you want\nexplained? (Press B to exit)$"

ShuckleAbilityChoices_Text_1:
# 608 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Shed Skin$"

ShuckleAbilityChoices_Text_2:
# 609 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Clear Body$"

ShuckleAbilityChoices_Text_3:
# 610 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Extra Pressure$"

ShuckleAbilityChoices_Text_4:
# 611 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Soul Linker$"

ShuckleAbilityChoices_Text_5:
# 612 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Unlimited Power$"

ShuckleAbilityChoices_Text_6:
# 613 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Fully Charged$"

ShuckleAbilityChoices_Text_7:
# 614 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Second Wind$"

ShuckleAbilityChoices_Text_8:
# 615 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Wide Aim$"

ShuckleAbilityChoices_Text_9:
# 619 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Last Stand$"

ShuckleAbilityChoices_Text_10:
# 632 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Shed Skin now always triggers\nat the end of each turn.$"

ShuckleAbilityChoices_Text_11:
# 638 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Clear Body has no changes from\nits typical behavior.$"

ShuckleAbilityChoices_Text_12:
# 650 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "If a Pokémon with Soul Linker KOs one\nenemy, it also KOs all other enemies.$"

ShuckleAbilityChoices_Text_13:
# 656 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Pokémon with Unlimited Power do not\nlose PP when attacking.$"

ShuckleAbilityChoices_Text_14:
# 662 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Pokémon with Fully Charged ignore\ncharge and recharge turns for moves.$"

ShuckleAbilityChoices_Text_15:
# 668 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Pokémon with Second Wind exclusively\nuse spread moves when below half HP.$"

ShuckleAbilityChoices_Text_16:
# 674 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Wide Aim prevents spread moves\nfrom being disabled.$"

ShuckleIslandShuckleHideout_B2F_EventScript_ShuckleDmgCalc_Text_0:
# 692 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "LOADING SHUCKLE DAMAGE CALCULATOR…$"

ShuckleDmgCalcOptions_Text_0:
# 704 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "For which attack are you interested in\nthe damage calcs?$"

ShuckleDmgCalcOptions_Text_1:
# 708 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Damage Calc Table Usage (new info!)$"

ShuckleDmgCalcOptions_Text_2:
# 713 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Damage Calc Table Usage$"

ShuckleDmgCalcOptions_Text_3:
# 717 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Rock Wrecker$"

ShuckleDmgCalcOptions_Text_4:
# 718 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Dynamic Punch$"

ShuckleDmgCalcOptions_Text_5:
# 719 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Diamond Storm$"

ShuckleDmgCalcOptions_Text_6:
# 723 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Natural Gift$"

ShuckleDmgCalcOptions_Text_7:
# 745 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "This table shows the damage done\nby Shuckle to Snorlax.$"

ShuckleDmgCalcOptions_Text_8:
# 771 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "This table shows the damage done\nto Shuckle by Snorlax's Natural Gift.$"

gruntShuckle_text::
# 936 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Shuckle! Shuckle!\p"
	.string "...\p"
	.string "A grunt is pretending to be a Shuckle.\p"
	.string "...\p"
	.string "But he isn't doing a very good job…$"

shuckleGrunt_text::
# 946 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Grunt! Grunt!\p"
	.string "...\p"
	.string "A Shuckle is pretending to be a grunt.\p"
	.string "...\p"
	.string "…or it's just overexerting itself.$"

gruntFShuckle_text::
# 956 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "A grunt is pretending to be a Shuckle.\p"
	.string "...\p"
	.string "And she's doing a great job!$"

berryGuyPresentOptions2_text::
# 964 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Take another berry, but this will be\n"
	.string "your last one! (Press B to exit)$"

petrelBattle7Intro2_text::
# 971 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Huh, you want another berry?\p"
	.string "Kid, you need to realize you can't win\n"
	.string "this battle. That Shuckle is too strong.\p"
	.string "But sure, knock yourself out.\n"
	.string "…just not with metal bars this time.$"

hintNPCBattle7SmallHint_text::
# 981 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Start by answering these questions:\p"
	.string "1) Can you win if Shuckle only\n"
	.string "uses Rock Wrecker?\p"
	.string "2) If Shuckle uses Dynamic Punch, what\n"
	.string "must be active before Snorlax is hit?\p"
	.string "3) How long will Shuckle use Dynamic\n"
	.string "Punch before using Rock Wrecker again?\p"
	.string "4) Can you survive for long once\n"
	.string "Shuckle begins using Diamond Storm?\p"
	.string "If not, is there a way to damage Shuckle\n"
	.string "to guarantee it never uses this move?$"

hintNPCBattle7MedHint_text::
# 997 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "There are many solutions, so this and\n"
	.string "the large hint are for one solution.\p"
	.string "Consider having Gallade always use\n"
	.string "Will-o-Wisp or Disable on Rock Wrecker.$"

hintNPCBattle7LrgHint_text::
# 1006 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Consider the following opening move\n"
	.string "sequence for Snorlax:\p"
	.string "Recycle, Stockpile, Stockpile,\n"
	.string "Stockpile, Natural Gift, Swallow.\p"
	.string "After using these moves, the battle can\n"
	.string "be won in 4 turns.$"

hintNPCBattle7SmallHint2_text::
# 1017 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Consider how to win once Shuckle heals\n"
	.string "to 70 HP after activating Last Stand:\p"
	.string "What is the maximum number of turns\n"
	.string "Gallade can survive Diamond Storm?\p"
	.string "How many Will-o-Wisp uses does Gallade\n"
	.string "need to survive this number of turns?\p"
	.string "Can you figure out a way for Snorlax\n"
	.string "to KO Shuckle in this timeframe?\p"
	.string "Remember to fully consider each\n"
	.string "Pokemon's moveset.$"

hintNPCBattle7MedHint2_text::
# 1032 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Make Shuckle always use Rock Wrecker\n"
	.string "for the minimum consecutive turns.\p"
	.string "Also, note that Snorlax can only keep a\n"
	.string "recycled Chople before Last Stand\l"
	.string "while Shuckle uses Rock Wrecker.$"

hintNPCBattle7LrgHint2_text::
# 1042 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Gallade must start the battle by using\n"
	.string "Will-o-Wisp.\p"
	.string "Gallade will never use Will-o-Wisp on a\n"
	.string "turn Shuckle uses Dynamic Punch.\p"
	.string "Snorlax must use Stockpile on three\n"
	.string "consecutive turns, both at the start\l"
	.string "of battle and after its first Swallow.$"

extraPressure_text::
# 1054 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Extra Pressure saps 2 extra PP from the\n"
	.string "enemy's move, regardless of targeting.$"

lastStand_text::
# 1061 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "When a Pokémon with Last Stand would\n"
	.string "have its HP reduced to 0,\l"
	.string "it instead survives with 1 HP.\p"
	.string "Defense is cut by 5 stages, it heals to\n"
	.string "half HP, and it skips its next attack.\p"
	.string "This effect activates once per battle.$"

dmgCalcTableUsageBattle7_text::
# 1072 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Press the L button to see the damage\n"
	.string "(in red) if Shuckle is burned.\p"
	.string "Press the R button to see the damage\n"
	.string "(in blue) with a type-reducing berry.\p"
	.string "Pressing Select will show the damage\n"
	.string "(in green) if Shuckle is burned\l"
	.string "AND a type-reducing berry is held.\p"
	.string "The default results can be displayed\n"
	.string "again by pressing the A button.$"

giovanni7_1_text::
# 1086 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "So, how did you like those floor lights\n"
	.string "I had installed in the corridor?\p"
	.string "You know, the ones behind the walls…\n"
	.string "that you probably couldn't see.\p"
	.string "Well, then…\n"
	.string "Let's try this again.$"

giovanni7_2_text::
# 1097 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Let's cut straight to the chase.\p"
	.string "Have you ever considered giving a\n"
	.string "Pokémon multiple of our Rare Candies?\p"
	.string "Well, you're about to experience the\n"
	.string "true strength abilities can provide.$"

Battle7_Intro_text::
# 1107 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Prepare to be washed away by a tidal\n"
	.string "wave of powerful abilities!$"

Battle7_Lose_text::
# 1114 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "I-Impossible!$"

giovanni_loss_text::
# 1120 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "No, no, no, no, NO!\p"
	.string "This can't be happening again!\n"
	.string "Why is it always the 10-year-olds?\p"
	.string "Do you realize how many years I put\n"
	.string "into building up that Shuckle?\p"
	.string "Sigh, it's going to take so long to\n"
	.string "rebuild…\l"
	.string "again…\p"
	.string "We'll have to relocate for now.\n"
	.string "You should leave this island too, kid.\p"
	.string "Farewell…$"

battle7MissingMoves_text::
# 1136 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Oh, I can see your Pokémon are not\n"
	.string "prepared for the battle ahead.\p"
	.string "Perhaps someone on the island could\n"
	.string "help them achieve their true potential?$"

hintNPC7message_text::
# 1145 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Excuse me.\p"
	.string "...\p"
	.string "This battle, too, is quite difficult.\p"
	.string "Once again, I strongly recommend taking\n"
	.string "the small hint now.\p"
	.string "This should help guide you through the\n"
	.string "new information the battle presents.\p"
	.string "And if you're truly struggling, there's\n"
	.string "no shame in viewing the solution!$"

battle7NewOptions_text::
# 1159 "data/maps/ShuckleIslandShuckleHideout_B2F/scripts.pory"
	.string "Oh, I must commend you for your effort!\p"
	.string "Even though you didn't win that battle,\n"
	.string "you've made some significant progress!\p"
	.string "In fact, everyone here is prepared to\n"
	.string "provide you with our fullest support.\p"
	.string "So please be sure to talk to everyone.\n"
	.string "We all have new options to assist you!$"
