// showProfileLegacyInputAlertWithTitle:message:maxLength:currentValue:confirmSelector: @ 01cd9e2c

/* Function Stack Size: 0x38 bytes */

void WCRefineProfileCardBeautifyViewController::
     showProfileLegacyInputAlertWithTitle_message_maxLength_currentValue_confirmSelector_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               SEL param_7)

{
  char *pcVar1;
  cfstringStruct *local_88;
  char *local_50;
  SEL local_48;
  cfstringStruct *local_40;
  unsigned_long_long local_38;
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
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_5;
  _objc_storeStrong(&local_40,param_6);
  pcVar1 = "WCUIAlertView";
  local_48 = param_7;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_38);
  if (local_40 == (cfstringStruct *)0x0) {
    local_88 = &::cf___;
  }
  else {
    local_88 = local_40;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_88);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

