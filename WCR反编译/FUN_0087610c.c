// FUN_0087610c @ 0087610c

void FUN_0087610c(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_c0;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  local_31 = 1;
  while( true ) {
    uVar3 = local_30;
    bVar1 = 0;
    if (local_30 != 0) {
      bVar1 = local_31;
    }
    if ((bVar1 & 1) == 0) break;
    local_31 = 0;
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_30;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_30;
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = 0;
        local_78 = uVar3;
        if (uVar3 != 0) {
          uVar5 = 0;
          if (uVar3 - local_30 != 0) {
            _objc_storeStrong(uVar3 - local_30,&local_30,uVar3);
            uVar5 = 1;
            local_31 = 1;
          }
        }
        _objc_storeStrong(uVar5,&local_78);
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_50[0] = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 0;
      local_c0 = uVar4;
      if (uVar4 == 0) {
        local_c0 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_c0;
      }
      local_61 = uVar4 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_c0;
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = 0;
        if (local_58 - local_30 != 0) {
          _objc_storeStrong(local_58 - local_30,&local_30,local_58);
          uVar5 = 1;
          local_31 = 1;
        }
      }
      _objc_storeStrong(uVar5,&local_58);
      _objc_storeStrong(local_50,0);
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

