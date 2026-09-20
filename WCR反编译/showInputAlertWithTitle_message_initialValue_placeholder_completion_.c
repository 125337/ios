// showInputAlertWithTitle:message:initialValue:placeholder:completion: @ 01d2470c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x38 bytes */

void WCRefineRedEnvelopViewController::
     showInputAlertWithTitle_message_initialValue_placeholder_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  char *pcVar1;
  long lVar2;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [4];
  ID local_18;
  
  local_38[2] = 0;
  local_38[3] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_50 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,10);
      if ((local_38[0] != 0) &&
         (lVar2 = local_38[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0), lVar2 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_38[0]);
      }
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar1;
      if ((pcVar1 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58),
         ((ulong)pcVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setKeyboardType__026aec58,4);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_58);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setInputCompletionBlock__026b40b8,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputKey__026c2540,local_38[2]);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_alertCancel_026b2910);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_alertConfirm__026c2548);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

