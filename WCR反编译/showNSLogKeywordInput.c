// showNSLogKeywordInput @ 009175f4

/* Function Stack Size: 0x10 bytes */

void NavigationMonitorViewController::showNSLogKeywordInput(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  ID local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,200);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nsLogPreciseKeywords_026aa078);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setTextFieldDefaultText__0269fd98,local_38);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelNSLogKeywordInput_026aa338);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmNSLogKeywordInput__026aa340);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

