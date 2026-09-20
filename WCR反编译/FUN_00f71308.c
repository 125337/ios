// FUN_00f71308 @ 00f71308

void FUN_00f71308(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = local_20;
    if (uVar1 == 0) {
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
        local_18 = local_20;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          uVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedViewController_0269d610);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar3;
          FUN_00f71308();
          _objc_retainAutoreleasedReturnValue();
          local_18 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
      }
      else {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        FUN_00f71308();
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      FUN_00f71308();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

