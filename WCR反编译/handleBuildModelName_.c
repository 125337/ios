// handleBuildModelName: @ 01f66bf4

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneSettingsViewController::handleBuildModelName_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_80;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_80;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_30,&cf_r);
  }
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WR_r_);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  puVar4 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01f66e8c;
  local_58 = &DAT_0258ce00;
  local_38 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  local_50 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_30;
  local_48 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_buildModelWithName_completion__026c9728,pcVar3,&local_70);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

