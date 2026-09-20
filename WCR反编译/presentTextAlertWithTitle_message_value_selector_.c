// presentTextAlertWithTitle:message:value:selector: @ 01cbc934

/* Function Stack Size: 0x30 bytes */

void WCRefinePrivateFriendViewController::presentTextAlertWithTitle_message_value_selector_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,SEL param_6)

{
  char *pcVar1;
  cfstringStruct *local_80;
  char *local_48;
  SEL local_40;
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
  pcVar1 = "WCUIAlertView";
  local_40 = param_6;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,200);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
  if (((ulong)pcVar1 & 1) != 0) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_80 = &::cf___;
    }
    else {
      local_80 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_80)
    ;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

