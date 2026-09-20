// handleSiliconFlowBuildInput: @ 01f666d0

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneSettingsViewController::handleSiliconFlowBuildInput_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_a0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  uint local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_a0;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (pcVar3 != (cfstringStruct *)0x0) {
    puVar5 = PTR_WCRefineVoiceCloneHelper_026cea40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_models_026b0a68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_r_);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar6 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WY_Rr_)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    puVar5 = local_50;
    puVar4 = PTR_WCRefineVoiceCloneHelper_026cea40;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01f66a4c;
    local_78 = &DAT_0258ce00;
    local_58 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_28;
    local_70 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    puVar6 = local_50;
    local_68 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_buildSiliconFlowModelWithName_sa_026c9720,puVar5,pcVar1,&local_90);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_kXQ7h_geW_);
  }
  local_44 = (uint)(pcVar3 == (cfstringStruct *)0x0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

