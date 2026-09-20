// openScreenshotFrameDelaySetting @ 017f16f0

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineAssistFunctionViewController::openScreenshotFrameDelaySetting
          (WCRefineAssistFunctionViewController *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  undefined **local_90;
  undefined1 auStack_88 [32];
  char *local_68;
  char *local_60;
  undefined4 local_54;
  char *local_50;
  undefined *local_48 [2];
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotFrameDelay_026a1f18);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCUIAlertView";
  local_48[0] = puVar2;
  _objc_getClass();
  local_50 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_54 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,10);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setTextFieldDefaultText__0269fd98,local_48[0]);
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setKeyboardType__026aec58,8);
      }
    }
    _objc_storeStrong(&local_68,0);
    _objc_initWeak(auStack_88,local_28);
    puVar2 = local_38;
    ppuVar4 = &local_c0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_017f1b54;
    local_a8 = &DAT_0257c948;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = puVar2;
    _objc_copyWeak(auStack_98,auStack_88);
    _objc_retainBlock();
    IVar1 = local_28;
    puVar2 = PTR_s_handleScreenshotFrameDelayConfir_026b58a8;
    local_90 = ppuVar4;
    _objc_retainBlock();
    _objc_setAssociatedObject(IVar1,puVar2,ppuVar4,1);
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    _objc_setAssociatedObject(local_28,PTR_s_handleScreenshotFrameDelayCancel_026b58b0,local_60,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
               PTR_s_handleScreenshotFrameDelayCancel_026b58b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx,local_28,
               PTR_s_handleScreenshotFrameDelayConfir_026b58a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    _objc_storeStrong(&local_90);
    _objc_destroyWeak(auStack_98);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

