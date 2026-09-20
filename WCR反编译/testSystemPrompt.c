// testSystemPrompt @ 017e68d0

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::testSystemPrompt(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_38;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineAIStore_026ce048;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isChatProviderConfigured_0269ce90);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_bS_MR__jWMn_);
    local_2c = 1;
  }
  else {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPresetTestAlert__026b5548,pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,1000);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setTextFieldDefaultText__0269fd98,&cf__O_Y_USN_);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelPresetTest_026b5550);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&::cf_S,local_18,
                 PTR_s_confirmPresetTest_026b5558);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    }
    local_2c = (uint)(pcVar2 == (char *)0x0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

