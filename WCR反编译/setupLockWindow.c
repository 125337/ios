// setupLockWindow @ 00005ab4

/* Function Stack Size: 0x10 bytes */

void EncryptionLock::setupLockWindow(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 in_d0;
  double dVar8;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_118;
  double local_110;
  undefined8 uStack_108;
  double local_e8;
  undefined8 uStack_e0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8 [10];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lockWindow_0269cba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    FUN_00004e6c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = param_1;
    if (param_1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIWindow_026cdf68;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,puVar3,PTR_s_initWithFrame__026ca6e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLockWindow__0269cba8,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIWindow_026cdf68;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithWindowScene__026ca730,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLockWindow__0269cba8,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_coordinateSpace_0269cb30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar2 = local_28;
      local_68 = in_d0;
      uStack_60 = in_d1;
      local_58 = in_d2;
      uStack_50 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,uStack_60);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      in_d2 = local_58;
      in_d3 = uStack_50;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar7 = 0x408f400000000000;
    dVar8 = *(double *)PTR__UIWindowLevelStatusBar_02578240 + 1000.0;
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_b8[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_b8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    local_c0 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithEffect__026ca6e0,local_c0);
    puVar3 = local_b8[0];
    local_c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_110 = dVar8;
    uStack_108 = uVar7;
    local_e8 = dVar8;
    uStack_e0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(dVar8,uVar7,in_d2,in_d3,local_c8,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setAutoresizingMask__026ca878,0x12);
    puVar3 = local_b8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleTap_0269cbb0);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_containsObject__0269cbb8);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar6 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithTarget_action__026ca718,local_28,PTR_s_resetPasscode_0269cbc0)
      ;
      local_118 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setNumberOfTapsRequired__026ca9e0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setNumberOfTouchesRequired__0269cbc8,2);
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDoubleTap__0269cbd0,local_118);
      _objc_storeStrong(&local_118,0);
    }
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(local_b8,0);
    _objc_storeStrong(&local_38,0);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
  _objc_retainAutoreleasedReturnValue();
  FUN_00006748();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

