// clearTapped @ 01ea0fa4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHistoryViewController::clearTapped(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  char *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 != 0) {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    if (pcVar2 != (char *)0x0) {
      local_28 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_alloc_026aa370);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_initWithTitle_message__0269d260,&cf_nzz_RSS,
                 &cf_nzzTelb_YS_MR_RNOS0Rq_T0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addCancelBtnTitle_target_sel__0269d268);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_pN,local_18,
                   PTR_s_cancelClearHistory_026c7460);
      }
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278)
      ;
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nxnzz,local_18,
                   PTR_s_confirmClearHistory_026c7468);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClearHistoryAlert__026c7470,local_38);
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
      }
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

