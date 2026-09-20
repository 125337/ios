// FUN_00fe7af8 @ 00fe7af8

void FUN_00fe7af8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  uint local_cc;
  
  uVar1 = *(ulong *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEffectivelyEnabled_026ad3a8);
  if ((uVar1 & 1) != 0) {
    DAT_028e3098 = 0;
    uVar1 = *(ulong *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isSuperFloatLinked_026ad310);
    local_cc = 0;
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_cc = (uint)puVar3 ^ 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_cc & 1) != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((DAT_028e3068 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setLiveCaptureArmed__026ad358,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_ensureFloatWindow_026ad4c8);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_setPillMovedDuringPan__026ad318,0);
    if ((uVar1 & 1) != 0) {
      uVar5 = DAT_028e3090;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_pill_026ad218);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_bounds_026ca548);
      uVar5 = 0x3ff0000000000000;
      dVar6 = param_3;
      if (param_3 <= 1.0) {
        puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_bounds_026ca548);
      }
      dVar4 = param_3;
      _CGRectGetMidX(param_3,uVar5,dVar6,param_4);
      _CGRectGetMidY(param_3,uVar5,dVar6,param_4);
      param_3 = param_3 * DAT_02323ee8;
      FUN_00fd86b8();
      uVar5 = DAT_028e3090;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_panel_026ad220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar4,param_3);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_makeKeyAndVisible_0269cd78);
    uVar5 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_keyAppWindow_026ad3e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_expandAnimated__026ad340,1);
  }
  return;
}

