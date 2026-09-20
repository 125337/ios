// setConsecutiveErrorCount @ 0174b3ec

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAutoRedeemViewController::setConsecutiveErrorCount(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_themeBoxConsecutiveErrorCount_026a8530);
  pcVar2 = "WCUIAlertView";
  local_30 = puVar1;
  _objc_getClass();
  local_38 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_3c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,2);
    pcVar2 = local_48;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setKeyboardType__026aec58,4);
      }
    }
    _objc_initWeak(auStack_58,local_18);
    puVar1 = local_28;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_0174b7c0;
    local_70 = &DAT_0257c948;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar1;
    _objc_copyWeak(auStack_60,auStack_58);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setInputCompletionBlock__026b40b8,&local_88);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_alertConfirmErrorCount_026b4180);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_68);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

