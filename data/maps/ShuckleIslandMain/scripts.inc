ShuckleIslandMain_MapScripts::
	.byte 0


ShuckleIslandMain_EventScript_TMMerchantSequence::
# 12 "data/maps/ShuckleIslandMain/scripts.pory"
	lockall
# 13 "data/maps/ShuckleIslandMain/scripts.pory"
	setmetatile 19, 10, 0x124, FALSE
# 14 "data/maps/ShuckleIslandMain/scripts.pory"
	special DrawWholeMapView
# 15 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TMMerchantSequence_Text_0
# 16 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 17 "data/maps/ShuckleIslandMain/scripts.pory"
	closemessage
# 18 "data/maps/ShuckleIslandMain/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/ShuckleIslandMain/scripts.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq ShuckleIslandMain_EventScript_TMMerchantSequence_2
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_1
ShuckleIslandMain_EventScript_TMMerchantSequence_1:
# 29 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 30 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 2, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_2
# 31 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 32 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TMMerchantSequence_Text_1
# 33 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 34 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 1, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_3
# 35 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 36 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox TMMerchant1_text
# 37 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 38 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 2, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_2
# 39 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 40 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox sailor1_text
# 41 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 42 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 1, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_3
# 43 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 44 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox TMMerchant2_text
# 45 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 46 "data/maps/ShuckleIslandMain/scripts.pory"
	closemessage
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 1, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_4
# 48 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 49 "data/maps/ShuckleIslandMain/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 50 "data/maps/ShuckleIslandMain/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 51 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TMMerchantSequence_Text_2
# 52 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 53 "data/maps/ShuckleIslandMain/scripts.pory"
	closemessage
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 1, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_5
# 55 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_6
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 2, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_7
# 57 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 58 "data/maps/ShuckleIslandMain/scripts.pory"
	playse SE_PIN
# 59 "data/maps/ShuckleIslandMain/scripts.pory"
	waitse
# 60 "data/maps/ShuckleIslandMain/scripts.pory"
	delay 30
# 61 "data/maps/ShuckleIslandMain/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 62 "data/maps/ShuckleIslandMain/scripts.pory"
	delay 120
# 63 "data/maps/ShuckleIslandMain/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 2, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_8
# 65 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 66 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TMMerchantSequence_Text_3
# 67 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 68 "data/maps/ShuckleIslandMain/scripts.pory"
	closemessage
# 69 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_9
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 2, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_10
# 71 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 72 "data/maps/ShuckleIslandMain/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 73 "data/maps/ShuckleIslandMain/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 74 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TMMerchantSequence_Text_2
# 75 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 76 "data/maps/ShuckleIslandMain/scripts.pory"
	closemessage
# 77 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_6
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 2, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_11
# 79 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 80 "data/maps/ShuckleIslandMain/scripts.pory"
	removeobject 2
# 81 "data/maps/ShuckleIslandMain/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/ShuckleIslandMain/scripts.pory"
	playbgm MUS_NONE, FALSE
# 83 "data/maps/ShuckleIslandMain/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 84 "data/maps/ShuckleIslandMain/scripts.pory"
	playse SE_M_BUBBLE3
# 85 "data/maps/ShuckleIslandMain/scripts.pory"
	waitse
# 86 "data/maps/ShuckleIslandMain/scripts.pory"
	delay 30
# 87 "data/maps/ShuckleIslandMain/scripts.pory"
	playse SE_M_ACID_ARMOR
# 88 "data/maps/ShuckleIslandMain/scripts.pory"
	waitse
# 89 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TMMerchantSequence_Text_4
# 90 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 91 "data/maps/ShuckleIslandMain/scripts.pory"
	setvar VAR_SHUCKLE_ISLAND_MAIN_STATE, 1
# 92 "data/maps/ShuckleIslandMain/scripts.pory"
	setmetatile 19, 10, 0x232, TRUE
# 93 "data/maps/ShuckleIslandMain/scripts.pory"
	special DrawWholeMapView
# 94 "data/maps/ShuckleIslandMain/scripts.pory"
	setflag FLAG_TRICK_MAN_GIRL
# 95 "data/maps/ShuckleIslandMain/scripts.pory"
	setflag FLAG_TRICK_MAN
# 97 "data/maps/ShuckleIslandMain/scripts.pory"
	setflag FLAG_SAILOR_DIED
# 98 "data/maps/ShuckleIslandMain/scripts.pory"
	clearflag FLAG_HIDE_FISHERMAN
# 99 "data/maps/ShuckleIslandMain/scripts.pory"
	removeobject 1
# 100 "data/maps/ShuckleIslandMain/scripts.pory"
	addobject 6
# 101 "data/maps/ShuckleIslandMain/scripts.pory"
	closemessage
# 102 "data/maps/ShuckleIslandMain/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 103 "data/maps/ShuckleIslandMain/scripts.pory"
	fadedefaultbgm
# 104 "data/maps/ShuckleIslandMain/scripts.pory"
	releaseall
	end

ShuckleIslandMain_EventScript_TMMerchantSequence_2:
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_0
	goto ShuckleIslandMain_EventScript_TMMerchantSequence_1


ShuckleIslandMain_EventScript_Sign::
# 111 "data/maps/ShuckleIslandMain/scripts.pory"
	lock
# 112 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox Sign_Sailor_text, MSGBOX_SIGN
# 113 "data/maps/ShuckleIslandMain/scripts.pory"
	release
	end


ShuckleIslandMain_EventScript_ShuckleGrunt::
# 120 "data/maps/ShuckleIslandMain/scripts.pory"
	lockall
# 121 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_ShuckleGrunt_Text_0
# 122 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 123 "data/maps/ShuckleIslandMain/scripts.pory"
	releaseall
	end


ShuckleIslandMain_EventScript_Fisherman::
# 130 "data/maps/ShuckleIslandMain/scripts.pory"
	lock
# 131 "data/maps/ShuckleIslandMain/scripts.pory"
	faceplayer
# 132 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_Fisherman_Text_0
# 133 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 134 "data/maps/ShuckleIslandMain/scripts.pory"
	release
	end


ShuckleIslandMain_EventScript_LittleGirl::
# 142 "data/maps/ShuckleIslandMain/scripts.pory"
	lockall
# 143 "data/maps/ShuckleIslandMain/scripts.pory"
	faceplayer
# 144 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_LittleGirl_Text_0
# 145 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 146 "data/maps/ShuckleIslandMain/scripts.pory"
	releaseall
	end


ShuckleIslandMain_EventScript_TrickMan::
# 153 "data/maps/ShuckleIslandMain/scripts.pory"
	lock
# 154 "data/maps/ShuckleIslandMain/scripts.pory"
	faceplayer
# 156 "data/maps/ShuckleIslandMain/scripts.pory"
	goto_if_unset FLAG_TRICK_MAN_BALLOON, ShuckleIslandMain_EventScript_TrickMan_2
# 197 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TrickMan_Text_5
ShuckleIslandMain_EventScript_TrickMan_1:
# 201 "data/maps/ShuckleIslandMain/scripts.pory"
	release
	end

ShuckleIslandMain_EventScript_TrickMan_2:
# 158 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TrickMan_Text_0
# 159 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 160 "data/maps/ShuckleIslandMain/scripts.pory"
	checkitem ITEM_AIR_BALLOON
# 161 "data/maps/ShuckleIslandMain/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShuckleIslandMain_EventScript_TrickMan_5
# 169 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TrickMan_Text_2
# 170 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 171 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 5, ShuckleIslandMain_EventScript_TrickMan_Movement_0
# 172 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 173 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TrickMan_Text_3
# 174 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 175 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 3, ShuckleIslandMain_EventScript_TrickMan_Movement_1
# 176 "data/maps/ShuckleIslandMain/scripts.pory"
	playse SE_PIN
# 177 "data/maps/ShuckleIslandMain/scripts.pory"
	waitse
# 178 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TrickMan_Text_4
# 179 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 180 "data/maps/ShuckleIslandMain/scripts.pory"
	closemessage
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	applymovement 3, ShuckleIslandMain_EventScript_TrickMan_Movement_2
# 182 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmovement
# 183 "data/maps/ShuckleIslandMain/scripts.pory"
	removeobject 3
# 184 "data/maps/ShuckleIslandMain/scripts.pory"
	removeitem ITEM_AIR_BALLOON, 1
# 185 "data/maps/ShuckleIslandMain/scripts.pory"
	setflag FLAG_TRICK_MAN_BALLOON
# 186 "data/maps/ShuckleIslandMain/scripts.pory"
	clearflag FLAG_TRICK_MAN_GIRL
# 187 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox Trick_Man_ComeOn_Text
# 188 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 190 "data/maps/ShuckleIslandMain/scripts.pory"
	call TrickManTeachTrick
	goto ShuckleIslandMain_EventScript_TrickMan_1

ShuckleIslandMain_EventScript_TrickMan_5:
# 163 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TrickMan_Text_1
# 164 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
	goto ShuckleIslandMain_EventScript_TrickMan_1


TrickManTeachTrick::
# 208 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox TrickManTeachTrick_Text_0, MSGBOX_YESNO
# 210 "data/maps/ShuckleIslandMain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrickManTeachTrick_1
# 233 "data/maps/ShuckleIslandMain/scripts.pory"
	call TrickManRefusedTrick
	return

TrickManTeachTrick_1:
# 212 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox TrickManTeachTrick_Text_1
# 213 "data/maps/ShuckleIslandMain/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK
# 214 "data/maps/ShuckleIslandMain/scripts.pory"
	special ChooseMonForMoveTutor
# 215 "data/maps/ShuckleIslandMain/scripts.pory"
	waitstate
# 217 "data/maps/ShuckleIslandMain/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TrickManTeachTrick_4
# 224 "data/maps/ShuckleIslandMain/scripts.pory"
	setflag FLAG_TRICK_MAN_TRICK
# 225 "data/maps/ShuckleIslandMain/scripts.pory"
	clearflag FLAG_TRICK_MAN
# 226 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox ShuckleIslandMain_EventScript_TrickMan_Text_5
	return

TrickManTeachTrick_4:
# 219 "data/maps/ShuckleIslandMain/scripts.pory"
	call TrickManRefusedTrick
	return


TrickManRefusedTrick::
# 241 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox TrickManRefusedTrick_Text_0, MSGBOX_YESNO
# 243 "data/maps/ShuckleIslandMain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TrickManRefusedTrick_1
# 252 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox TrickManRefusedTrick_Text_1
# 253 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 254 "data/maps/ShuckleIslandMain/scripts.pory"
	call TrickManTeachTrick
	return

TrickManRefusedTrick_1:
# 245 "data/maps/ShuckleIslandMain/scripts.pory"
	msgbox TrickManRefusedTrick_Text_1
# 246 "data/maps/ShuckleIslandMain/scripts.pory"
	waitmessage
# 247 "data/maps/ShuckleIslandMain/scripts.pory"
	call TrickManTeachTrick
	return


# 21 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_0:
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 21 "data/maps/ShuckleIslandMain/scripts.pory"
	face_up
	step_end

# 26 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_1:
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_right
# 26 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_up
	step_end

# 30 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_2:
# 30 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_in_place_left
	step_end

# 34 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_3:
# 34 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_in_place_right
	step_end

# 47 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_4:
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	face_left
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	face_right
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	lock_facing_direction
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 47 "data/maps/ShuckleIslandMain/scripts.pory"
	unlock_facing_direction
	step_end

# 54 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_5:
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	jump_2_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 54 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
	step_end

# 55 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_6:
# 55 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 55 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 55 "data/maps/ShuckleIslandMain/scripts.pory"
	face_right
	step_end

# 56 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_7:
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_down
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	face_up
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	face_right
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 56 "data/maps/ShuckleIslandMain/scripts.pory"
	emote_exclamation_mark
	step_end

# 64 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_8:
# 64 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_up
# 64 "data/maps/ShuckleIslandMain/scripts.pory"
	face_right
	step_end

# 69 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_9:
# 69 "data/maps/ShuckleIslandMain/scripts.pory"
	face_up
	step_end

# 70 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_10:
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	lock_facing_direction
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_left
# 70 "data/maps/ShuckleIslandMain/scripts.pory"
	unlock_facing_direction
	step_end

# 78 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TMMerchantSequence_Movement_11:
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_right
# 78 "data/maps/ShuckleIslandMain/scripts.pory"
	jump_2_right
	step_end

# 171 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TrickMan_Movement_0:
# 171 "data/maps/ShuckleIslandMain/scripts.pory"
	face_right
# 171 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 171 "data/maps/ShuckleIslandMain/scripts.pory"
	delay_16
# 171 "data/maps/ShuckleIslandMain/scripts.pory"
	face_up
	step_end

# 175 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TrickMan_Movement_1:
# 175 "data/maps/ShuckleIslandMain/scripts.pory"
	face_left
# 175 "data/maps/ShuckleIslandMain/scripts.pory"
	emote_heart
	step_end

# 181 "data/maps/ShuckleIslandMain/scripts.pory"
ShuckleIslandMain_EventScript_TrickMan_Movement_2:
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
# 181 "data/maps/ShuckleIslandMain/scripts.pory"
	walk_fast_up
	step_end

ShuckleIslandMain_EventScript_TMMerchantSequence_Text_0:
# 15 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "What do you mean the next ferry\nisn't for another three days?$"

ShuckleIslandMain_EventScript_TMMerchantSequence_Text_1:
# 32 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Sorry sir, but the ferry needs repairs.$"

ShuckleIslandMain_EventScript_TMMerchantSequence_Text_2:
# 51 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "CHAAAARGE!$"

ShuckleIslandMain_EventScript_TMMerchantSequence_Text_3:
# 66 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Could it really be that simple?\nI wonder…$"

ShuckleIslandMain_EventScript_TMMerchantSequence_Text_4:
# 89 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "You had never seen anyone sink\nso quickly before.$"

ShuckleIslandMain_EventScript_ShuckleGrunt_Text_0:
# 121 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Get lost, kid!$"

ShuckleIslandMain_EventScript_Fisherman_Text_0:
# 132 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Hmm, a ferry?\nI don't know anything about that.\pI was just asked to stand here so more\npeople don't try to jump off the dock.$"

ShuckleIslandMain_EventScript_LittleGirl_Text_0:
# 144 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "I really want a balloon, and my daddy\nsays he's going to get me one!$"

ShuckleIslandMain_EventScript_TrickMan_Text_0:
# 158 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Want to see a cool trick?\pI just need a balloon.\nDo you have one I can use?$"

ShuckleIslandMain_EventScript_TrickMan_Text_1:
# 163 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Oh, you don't? Come back when you have\na balloon that you're not using.$"

ShuckleIslandMain_EventScript_TrickMan_Text_2:
# 169 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "You do? Excellent!\pNow, if you stand there\nand my daughter stands here…$"

ShuckleIslandMain_EventScript_TrickMan_Text_3:
# 173 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "And if my daughter\nisn't holding anything…\pThen I can perform my trick like so…\p…and ta-da!\pMy daughter now has your balloon!$"

ShuckleIslandMain_EventScript_TrickMan_Text_4:
# 178 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Wow, thanks for getting me\na balloon, daddy!$"

ShuckleIslandMain_EventScript_TrickMan_Text_5:
# 197 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Have fun using your new trick!\nJust don't use it on kids, you weirdo.$"

TrickManTeachTrick_Text_0:
# 208 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Now then, should I teach Trick\nto one of your Pokémon?$"

TrickManTeachTrick_Text_1:
# 212 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Alright, which Pokémon\nshould learn Trick?$"

TrickManRefusedTrick_Text_0:
# 241 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Ah…so this is what's referred to\nas an illusion of choice.\pDo you know what I'm talking about?$"

TrickManRefusedTrick_Text_1:
# 245 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Exactly!$"

TMMerchant1_text::
# 260 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "No, you don't understand!\p"
	.string "I have a Chatot that my kids\n"
	.string "are teaching to use Chatter!$"

sailor1_text::
# 268 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Oh, I see. You're worried your kids will\n"
	.string "teach Chatot an inappropriate word?$"

TMMerchant2_text::
# 275 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "What? No!\p"
	.string "They're teaching it to say things like\n"
	.string "“Good job!” and “You make me so proud!”\p"
	.string "I can't imagine how soft my kids would\n"
	.string "turn out if I actually gave them praise!\p"
	.string "Now, move out of the way!\n"
	.string "I'm leaving this island on my own terms!$"

Sign_Sailor_text::
# 287 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "In memory of OBJ_EVENT_GFX_SAILOR.\p"
	.string "He was more than just a sprite.\p"
	.string "He was an animated sprite.\p"
	.string "It seems someone has scribbled\n"
	.string "something at the bottom of the sign:\p"
	.string "Sailors are too heavy to hold tails\n"
	.string "and don't even look good with them!$"

Trick_Man_ComeOn_Text::
# 299 "data/maps/ShuckleIslandMain/scripts.pory"
	.string "Oh, come on. Giving a child a balloon\n"
	.string "isn't that bad, now is it?\p"
	.string "Besides, this may change how people\n"
	.string "think you treat children on the island.\p"
	.string "Alright, fine. I guess I can teach you\n"
	.string "how to perform this trick as well, ok?$"
