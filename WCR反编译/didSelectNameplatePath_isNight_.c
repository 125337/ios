// didSelectNameplatePath:isNight: @ 01c4ef18

/* Function Stack Size: 0x1c bytes */

void WCRefineNameplateSpecialUserDetailViewController::didSelectNameplatePath_isNight_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  pcVar3 = (cfstringStruct *)PTR_WCRefineNameplateHelper_026ce5f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_normalizedRelativePath__026ae7b8,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  pcVar1 = &cf_NightPath;
  if ((local_29 & 1) == 0) {
    pcVar1 = &cf_Path;
  }
  local_60 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  IVar4 = local_18;
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingScene_026c1c90);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_writeVisualSuffix_value_scene__026c1c68,pcVar1,local_60,IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistDraftShowingToast__026c1bc0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

