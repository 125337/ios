// pageIndicatorTapped @ 01b1de4c

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::pageIndicatorTapped(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_38;
  char *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageCount_026bea90);
  if (1 < param_1) {
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    pcVar1 = "WCUIAlertView";
    _objc_getClass();
    local_30 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lb_gNS_u);
    }
    else {
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_eQux1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle_message__0269d260,&cf_lub);
      local_38 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                   PTR_s_cancelPageJumpInput__026bed50);
      }
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278)
      ;
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_l,local_18,
                   PTR_s_handlePageJumpInput__026bed58);
      }
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0
                );
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,6);
      }
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  return;
}

