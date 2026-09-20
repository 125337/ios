// showKeywordAlertDeduplicationRuleNoticeWithMessage: @ 01b3acf0

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertViewController::showKeywordAlertDeduplicationRuleNoticeWithMessage_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  cfstringStruct *local_58;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_28);
    local_34 = 1;
  }
  else {
    _objc_alloc();
    if (local_28 == (cfstringStruct *)0x0) {
      local_58 = &::cf___;
    }
    else {
      local_58 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_message__0269d260,&cf_WCRefine,local_58);
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
  _objc_storeStrong(&local_28,0);
  return;
}

