// buildModel @ 01f6613c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::buildModel(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_hasRequestCredential_026b09c8);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQMn_cSQ);
  }
  else {
    puVar1 = PTR_WCRefineVoiceCloneHelper_026cea40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_sampleFilePaths_026b0a28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQr7h_g);
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (puVar2 + -4 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_buildSiliconFlowModel_026c9708);
      }
      else {
        pcVar3 = "WCUIAlertView";
        _objc_getClass(puVar2 + -4);
        if (pcVar3 != (char *)0x0) {
          local_28 = pcVar3;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_30 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&::cf___,local_18,
                     PTR_s_handleBuildModelName__026c9710);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
          pcVar3 = local_30;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          puVar2 = PTR_WCRefineVoiceCloneHelper_026cea40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_models_026b0a68);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_r_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
          _objc_storeStrong(&local_30,0);
        }
      }
    }
  }
  return;
}

