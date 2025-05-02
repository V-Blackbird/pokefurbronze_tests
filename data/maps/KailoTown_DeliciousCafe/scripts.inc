.equ LOCALID_LENA, 0
.equ LOCALID_TINA, 1
.equ LOCALID_DAN, 2

KailoTown_DeliciousCafe_MapScripts::
	.byte 0

KailoTown_DeliciousCafe_MapScripts_Lena::
  lock
  textcolor NPC_TEXT_COLOR_FEMALE
  checkplayergender
  goto_if_eq VAR_RESULT, FEMALE, KailoTown_DeliciousCafe_MapScripts_LenaLookingDan
  msgbox KailoTown_DeliciousCafe_Text_LenaHiTina
  goto_if_lt VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, KailoTown_DeliciousCafe_MapScripts_LenaTinaSleeps
  goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, KailoTown_DeliciousCafe_MapScripts_LenaTinaAwake



KailoTown_DeliciousCafe_MapScripts_LenaTinaSleeps::
  msgbox KailoTown_DeliciousCafe_Text_LenaTinaSleeps
  release
  end

KailoTown_DeliciousCafe_MapScripts_LenaTinaAwake::
  end


KailoTown_DeliciousCafe_MapScripts_LenaLookingDan::
  end