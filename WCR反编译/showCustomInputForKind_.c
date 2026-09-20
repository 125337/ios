// showCustomInputForKind: @ 01b7f0f0

/* Function Stack Size: 0x18 bytes */

void WCRLongPressMenuPickerViewController::showCustomInputForKind_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *local_40;
  uint local_34;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingCustomKind__026b70a8,local_28);
    pcVar2 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,200);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setTextFieldDefaultText__0269fd98,&cf_LubW_);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelCustomInput_026b70b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_18,
               PTR_s_confirmCustomInput__026b70c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomAlert__026b70c0,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXel9_QeQFh);
  }
  local_34 = (uint)(pcVar1 == (char *)0x0);
  _objc_storeStrong(&local_28,0);
  return;
}

