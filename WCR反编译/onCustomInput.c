// onCustomInput @ 01bfc70c

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsTailPickerViewController::onCustomInput(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQFhNS_u);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_showTextField_026b1b00);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showTextField_026b1b00);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x20);
    }
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displaySelectedAppID_026c0ba8);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_58 = &::cf___;
      }
      else {
        local_58 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setTextFieldDefaultText__0269fd98,local_58);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_handleCustomInput__026c0c08);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

