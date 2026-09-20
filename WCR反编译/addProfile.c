// addProfile @ 01e1a594

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatProfilesViewController::addProfile(ID param_1,SEL param_2)

{
  char *pcVar1;
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
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setTextFieldDefaultText__0269fd98,&cf_eMn_);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_18,
               PTR_s_handleAddProfile__026c5e40);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

