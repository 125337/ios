// presentPasscodePrompt @ 010f1b04

/* Function Stack Size: 0x10 bytes */

void WCRefinePageLockGuard::presentPasscodePrompt(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = &cf_WCUIAlertView;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  local_28 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishAuthWithCancel_026aec48);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_passcodeAttempts_026aec50);
    local_30 = 5 - IVar2;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_passcodeAttempts_026aec50);
    local_41 = false;
    if ((long)IVar2 < 1) {
      local_68 = &cf_eQ_OR__x;
    }
    else {
      local_68 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__xS_);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_68;
    }
    local_41 = (long)IVar2 >= 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_68;
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,6);
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setSecureTextEntry__026caa30);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSecureTextEntry__026caa30,1);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setKeyboardType__026aec58,4);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_handlePasscodeCancel_026aec60);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handlePasscodeConfirm__026aec68);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentPasscodeAlert__026aebe8,local_50)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

