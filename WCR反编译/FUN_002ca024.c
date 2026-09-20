// FUN_002ca024 @ 002ca024

void FUN_002ca024(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_148;
  ulong local_130;
  ulong local_c8;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    while( true ) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar1 = local_40;
      if (uVar2 == 0) break;
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar2 = local_40;
    if ((uVar1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar1 = local_40;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar1;
        local_34 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_68 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar2 = local_68;
        if ((uVar1 & 1) == 0) {
          if (local_68 == 0) {
            local_148 = local_60;
          }
          else {
            local_148 = local_68;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_148;
          local_34 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar2;
          if (uVar2 == 0) {
            local_130 = local_70;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_130;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_34 = 1;
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar2;
      if (uVar2 == 0) {
        local_c8 = local_58[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_c8;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_34 = 1;
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

