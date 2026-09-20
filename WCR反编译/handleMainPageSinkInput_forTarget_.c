// handleMainPageSinkInput:forTarget: @ 01b51118

/* Function Stack Size: 0x20 bytes */

void WCRefineLayoutFunctionViewController::handleMainPageSinkInput_forTarget_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_58;
  undefined8 local_38;
  long_long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  pcVar1 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  FUN_01b4a294(local_58,&local_38);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (((ulong)local_58 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setMainPageSinkValue_forTarget__026bf638,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

