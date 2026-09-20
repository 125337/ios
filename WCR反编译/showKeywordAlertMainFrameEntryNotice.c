// showKeywordAlertMainFrameEntryNotice @ 01b3ae60

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertViewController::showKeywordAlertMainFrameEntryNotice
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  char *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf_uSNRS;
  if (local_28 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_uSNRS);
    local_34 = 1;
  }
  else {
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

