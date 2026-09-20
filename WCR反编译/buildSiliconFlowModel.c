// buildSiliconFlowModel @ 01f6646c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::buildSiliconFlowModel(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *local_68;
  char *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined1 *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    puVar3 = PTR_WCRefineVoiceCloneHelper_026cea40;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_sampleFilePaths_026b0a28);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_41 = false;
    bVar1 = puVar4 < (undefined1 *)((long)&MACH_HEADER.magic + 2);
    local_30 = puVar4;
    if (bVar1) {
      local_68 = &cf_kXQag7h_gvS7h_gKQ7h_gSeQP0;
    }
    else {
      local_68 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_qQ);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_68;
    }
    local_41 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_68;
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    pcVar2 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&::cf___,local_18,
               PTR_s_handleSiliconFlowBuildInput__026c9718);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldDefaultText__0269fd98,&::cf___)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

