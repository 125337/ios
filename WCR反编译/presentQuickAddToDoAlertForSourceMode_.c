// presentQuickAddToDoAlertForSourceMode: @ 01e8604c

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCardView::presentQuickAddToDoAlertForSourceMode_
               (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_50;
  char *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  char *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_30 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_y_OeQFh);
  }
  else {
    pcVar1 = &cf_mR_e_R;
    if (local_28 != 1) {
      pcVar1 = &cf_mR_g0W_R;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &::cf_newline_s_;
    if (local_28 != 1) {
      local_40 = &::cf_newline_s_;
    }
    local_38 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingQuickAddMode__026c71f8,local_28);
    pcVar2 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,500);
    }
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldPlaceHolder__026b6520);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTextField_0269fb48);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UITextField_026ce2a0;
        local_50 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setPlaceholder__0269e9c8,&cf__RQ_);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClearButtonMode__026a64e0,1);
        }
        _objc_storeStrong(&local_50,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setTextFieldPlaceHolder__026b6520,&cf__RQ_);
    }
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_quickAddAlertCancel_026c7200);
    }
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_18,
                 PTR_s_confirmQuickAddToDo_026c7208);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setQuickAddAlert__026c7210,local_48);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

