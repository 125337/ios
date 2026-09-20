// FUN_0080fbc0 @ 0080fbc0

void FUN_0080fbc0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58 [3];
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  if (local_28 == 0) {
    local_2c = 1;
    goto LAB_008103fc;
  }
  local_38 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  do {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40;
    if (uVar1 == 0) goto LAB_0080fcf0;
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  } while ((uVar3 & 1) == 0);
  _objc_storeStrong(&local_38,local_40);
LAB_0080fcf0:
  uVar3 = local_38;
  if (local_38 == 0) {
LAB_0080fd48:
    local_2c = 1;
  }
  else {
    pcVar4 = &cf_MoreViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
    if ((uVar3 & 1) == 0) goto LAB_0080fd48;
    puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithStyle__026ca710,1);
    local_58[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_prepare_026ca7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(local_58,0);
    puVar2 = PTR_WCRefineProfileCardBeautifyViewController_026ce9a8;
    _objc_alloc_init();
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    uVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      while (local_70 != (undefined *)0x0) {
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 != (undefined *)0x0) {
          puVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_2c = 1;
          goto LAB_008103ac;
        }
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 == (undefined *)0x0) break;
        puVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_70;
        local_70 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_60);
      puVar5 = PTR__OBJC_CLASS___UIApplication_026ce010;
      local_78 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_80 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_presentViewController_animated_c_0269d2b0,local_78,1,0);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      local_2c = 0;
LAB_008103ac:
      _objc_storeStrong(&local_70,0);
    }
    else {
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_2c = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_008103fc:
  _objc_storeStrong(&local_28,0);
  return;
}

