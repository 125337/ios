// presentStepInputTitle:message:defaultText:maxLength:confirmSel: @ 01def338

/* Function Stack Size: 0x34 bytes */

void WCRefineStepCountSettingsViewController::
     presentStepInputTitle_message_defaultText_maxLength_confirmSel_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_int param_6,
               SEL param_7)

{
  char *pcVar1;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  char *local_60;
  undefined4 local_54;
  char *local_50;
  SEL local_48;
  unsigned_int local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  pcVar1 = "WCUIAlertView";
  local_48 = param_7;
  local_3c = param_6;
  _objc_getClass();
  local_50 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQ9_zNS_u);
    local_54 = 1;
  }
  else {
    _objc_alloc();
    if (local_30 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    else {
      local_a0 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_message__0269d260,local_28,local_a0);
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_showTextField_026b1b00);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_showTextField_026b1b00);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_3c);
    }
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_c0 = &::cf___;
      }
      else {
        local_c0 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setTextFieldDefaultText__0269fd98,local_c0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

