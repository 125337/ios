// FUN_016329d0 @ 016329d0

void FUN_016329d0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_78;
  ulong local_60;
  ulong local_48;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = uVar3;
  while( true ) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = local_20;
    if (uVar1 == 0) break;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    local_20 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar1 = local_20;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar3;
      if (uVar3 == 0) {
        local_60 = local_20;
      }
      _objc_storeStrong(&local_20,local_60);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_20;
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar3;
        if (uVar3 == 0) {
          local_78 = local_20;
        }
        _objc_storeStrong(&local_20,local_78);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    if (uVar3 == 0) {
      local_48 = local_20;
    }
    _objc_storeStrong(&local_20,local_48);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

