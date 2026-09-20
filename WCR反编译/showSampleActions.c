// showSampleActions @ 01f65e70

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::showSampleActions(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  char *local_38;
  undefined *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIActionSheet";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  puVar2 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_sampleFilePaths_026b0a28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_30 = puVar3;
  if (local_28 == (char *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_MR);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    pcVar1 = local_28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_r7h_g_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8);
    local_38 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addDestructiveButtonTitle_target_0269f800,&cf_nzz7h_g,local_18,
               PTR_s_clearSamples_026c9700);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_38;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

