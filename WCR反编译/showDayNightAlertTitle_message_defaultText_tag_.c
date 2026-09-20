// showDayNightAlertTitle:message:defaultText:tag: @ 01aeeaa4

/* Function Stack Size: 0x30 bytes */

void WCRefineHomeAvatarStripSettingsViewController::showDayNightAlertTitle_message_defaultText_tag_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  char *pcVar1;
  cfstringStruct *local_88;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  long_long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_48 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingDayNightSelector__026be590,local_40);
    pcVar1 = local_48;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x18);
    if (local_38 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    else {
      local_88 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_88)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmDayNightValue_026be598);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

