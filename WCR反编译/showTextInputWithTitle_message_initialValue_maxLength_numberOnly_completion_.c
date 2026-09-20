// showTextInputWithTitle:message:initialValue:maxLength:numberOnly:completion: @ 01d363f4

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x38 bytes */

void WCRefineScheduledTaskViewController::
     showTextInputWithTitle_message_initialValue_maxLength_numberOnly_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_int param_6,
               bool param_7,ID param_8,undefined4 param_9)

{
  char *pcVar1;
  long lVar2;
  char *local_68;
  char *local_60;
  undefined4 local_54;
  char *local_50;
  undefined8 local_48;
  byte local_3d;
  unsigned_int local_3c;
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
  local_3d = (byte)param_7;
  local_48 = 0;
  local_3c = param_6;
  _objc_storeStrong(&local_48,param_8);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_50 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_54 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_3c)
      ;
      lVar2 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
      if (lVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setTextFieldDefaultText__0269fd98,local_38[0]);
      }
      if ((local_3d & 1) != 0) {
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getTextField_0269fb48);
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setKeyboardType__026aec58,4);
        }
        _objc_storeStrong(&local_68,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_60);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputCompletion__026c0548,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_handleInputCancel_026c0550);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
                 PTR_s_handleInputConfirm_026c0558);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
      local_54 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

