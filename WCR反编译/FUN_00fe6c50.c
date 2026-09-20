// FUN_00fe6c50 @ 00fe6c50

void FUN_00fe6c50(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_54;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEffectivelyEnabled_026ad3a8);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isLiveCaptureArmed_026ad250);
  _WCRefineIconNameCaptureIsLiveArmedFast();
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_scheduleAutoCapture_026ad300);
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isSuperFloatLinked_026ad310);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((uVar1 & 1) == 0) || ((DAT_028e3098 & 1) != 0)) {
    if (DAT_028e3090 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setHidden__026ca970,1);
    }
  }
  else if ((uVar2 & 1) == 0) {
    if (((ulong)puVar4 & 1) == 0) {
      if (DAT_028e3090 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setHidden__026ca970,1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_ensureFloatWindow_026ad4c8);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_0232c680,DAT_028e3090,PTR_s_setWindowLevel__026caae8);
      lVar7 = DAT_028e3090;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_state_026cab20);
      if (lVar7 == 0) {
        lVar7 = DAT_028e3090;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_pill_026ad218);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar7);
        lVar7 = DAT_028e3090;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_panel_026ad220);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar7);
      }
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_makeKeyAndVisible_0269cd78);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_keyAppWindow_026ad3e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_refreshChrome_026ad2a8);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_ensureFloatWindow_026ad4c8);
    lVar7 = DAT_028e3090;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar7);
    lVar7 = DAT_028e3090;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_state_026cab20);
    local_54 = 0;
    if (lVar7 == 1) {
      lVar7 = DAT_028e3090;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_panel_026ad220);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_54 = (uint)lVar5 ^ 1;
      (*(code *)PTR__objc_release_02578630)(lVar7);
    }
    if ((local_54 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setHidden__026ca970,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_0232c680,DAT_028e3090,PTR_s_setWindowLevel__026caae8);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_makeKeyAndVisible_0269cd78);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_keyAppWindow_026ad3e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_refreshChrome_026ad2a8);
    }
  }
  return;
}

