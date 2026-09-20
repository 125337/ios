// showInputAlertWithTitle:message:initialValue:placeholder:allowNegative:completion: @ 01c65914

/* Function Stack Size: 0x3c bytes */

void WCRefineNavigationAvatarViewController::
     showInputAlertWithTitle_message_initialValue_placeholder_allowNegative_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
               ID param_8,undefined4 param_9)

{
  char *pcVar1;
  char *local_60;
  char *local_58;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_41 = (byte)param_7;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_8);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_38);
  pcVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getTextField_0269fb48);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58),
     ((ulong)pcVar1 & 1) != 0)) {
    if ((local_41 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setKeyboardType__026aec58,4);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setKeyboardType__026aec58,2);
    }
  }
  _objc_storeStrong(&local_60,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputCompletionBlock__026b40b8,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputKey__026c2540,local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_alertConfirm__026c2548);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_58);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

