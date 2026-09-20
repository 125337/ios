// FUN_000f464c @ 000f464c

void FUN_000f464c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int local_3c;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = uVar2;
  do {
    uVar2 = local_20;
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) break;
    local_38[0] = 0;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = local_20;
    if (uVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar3 = local_20;
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar3 & 1) != 0) {
          uVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedViewController_0269d610);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_38[0];
          local_38[0] = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_38[0];
        local_38[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    else {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38[0];
      local_38[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((local_38[0] == 0) || (local_38[0] - local_20 == 0)) {
      local_3c = 3;
    }
    else {
      _objc_storeStrong(local_38[0] - local_20,&local_20,local_38[0]);
      local_3c = 0;
    }
    _objc_storeStrong(local_38,0);
  } while (local_3c == 0);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

