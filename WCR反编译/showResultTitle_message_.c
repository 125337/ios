// showResultTitle:message: @ 01f63778

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneSettingsViewController::showResultTitle_message_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_38 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_60 = local_28;
    }
    else {
      local_60 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_60);
    local_3c = 1;
  }
  else {
    _objc_alloc();
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = &cf_c_y;
    }
    else {
      local_70 = local_28;
    }
    if (local_30 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    else {
      local_88 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_message__0269d260,local_70,local_88);
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

