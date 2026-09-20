// showCustomFunctionInput @ 01df63f4

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatActionPickerViewController::showCustomFunctionInput(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXel9_QeQFh);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingCustomKind__026b70a8,&cf_auto);
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,200);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextFieldDefaultText__0269fd98,&cf_RTy_)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelCustomInput_026b70b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_18,
               PTR_s_confirmCustomFunctionInput__026c5b40);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomAlert__026b70c0,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

