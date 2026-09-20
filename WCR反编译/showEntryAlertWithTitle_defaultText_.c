// showEntryAlertWithTitle:defaultText: @ 01c8493c

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginHubCustomEntriesViewController::showEntryAlertWithTitle_defaultText_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  cfstringStruct *local_58;
  char *local_38;
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
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_cancelEntryInput__026c28a8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
             PTR_s_handleEntryInput__026c28b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
  if (local_30 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  else {
    local_58 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextFieldDefaultText__0269fd98,local_58);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

