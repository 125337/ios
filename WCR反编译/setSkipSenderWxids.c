// setSkipSenderWxids @ 0174a51c

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAutoRedeemViewController::setSkipSenderWxids(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *local_a0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  char *local_48;
  uint local_3c;
  char *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_themeBoxSkipSenderWxids_026a84a0);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_a0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar3 != (char *)0x0;
  local_38 = pcVar3;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,500);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_30)
    ;
    _objc_initWeak(auStack_50,local_18);
    pcVar2 = local_28;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0174a880;
    local_68 = &DAT_0257c948;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = pcVar2;
    _objc_copyWeak(auStack_58,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setInputCompletionBlock__026b40b8,&local_80);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx,local_18,
               PTR_s_alertConfirmSkipSenderWxids_026b4158);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_60);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

