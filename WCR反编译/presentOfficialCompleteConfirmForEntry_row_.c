// presentOfficialCompleteConfirmForEntry:row: @ 01e820d8

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoCardView::presentOfficialCompleteConfirmForEntry_row_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_ynx9_z);
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingOfficialCompleteEntry__026c7168,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingOfficialCompleteRow__026c7170,local_30);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_alloc_026aa370);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_message__0269d260,&cf_nxRd,&cf__f_Tnx_bv_Rddk_R);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_pN,local_18,
                 PTR_s_cancelOfficialCompleteConfirm_026c7178);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nxRd,local_18,
                 PTR_s_confirmOfficialCompleteDelete_026c7180);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingOfficialCompleteAlert__026c7188,local_50);
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

