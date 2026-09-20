// setRedeemInterval @ 01746e58

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
ThemeBoxAutoRedeemViewController::setRedeemInterval
          (ThemeBoxAutoRedeemViewController *this,ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  double in_d0;
  undefined *local_e0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  char *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  double local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_themeBoxRedeemInterval_026a8498);
  pcVar1 = "WCUIAlertView";
  local_40 = in_d0;
  _objc_getClass();
  local_48 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_4c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,5);
    local_69 = 0;
    local_79 = 0;
    local_e0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_40 == (double)(long)local_40) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_e0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__g);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_60)
    ;
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58),
       ((ulong)pcVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setKeyboardType__026aec58,8);
    }
    _objc_initWeak(auStack_90,local_28);
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_01747370;
    local_a8 = &DAT_0257c948;
    puVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = puVar2;
    _objc_copyWeak(auStack_98,auStack_90);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setInputCompletionBlock__026b40b8,&local_c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
               PTR_s_alertConfirmInterval_026b40c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_destroyWeak(auStack_98);
    _objc_storeStrong(&local_a0);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

