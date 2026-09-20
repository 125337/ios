// handleApiKeyInput: @ 01f65d14

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneSettingsViewController::handleApiKeyInput_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_40 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_40;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_setApiKey__026c96f8,local_30);
  puVar1 = PTR_WCRefineHelper_026ce000;
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar2 = &cf__OX_;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar2 = &cf__nd;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

