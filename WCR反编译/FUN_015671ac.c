// FUN_015671ac @ 015671ac

void FUN_015671ac(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_e0;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_3c;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == 0) ||
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_28 = 0;
    local_3c = 1;
    goto LAB_01567738;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,uVar2);
  uVar2 = local_30;
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    if (uVar2 == 0) {
LAB_01567338:
      uVar2 = local_30;
      puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar3 = local_30;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 0;
        local_e0 = uVar3;
        if (uVar3 == 0) {
          local_e0 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_e0;
        }
        local_71 = uVar3 == 0;
        FUN_015671ac(local_e0,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_e0;
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar2 = local_68;
        bVar1 = local_68 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar2;
        }
        local_3c = (uint)bVar1;
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
        if (local_3c != 0) goto LAB_01567718;
      }
      uVar2 = local_30;
      puVar4 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar3 = local_30;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        FUN_015671ac();
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar2 = local_88;
        bVar1 = local_88 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar2;
        }
        local_3c = (uint)bVar1;
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
        if (local_3c != 0) goto LAB_01567718;
      }
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_childViewControllers_0269d618);
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
      local_98 = uVar2;
      do {
        local_98 = local_98 - 1;
        if ((long)local_98 < 0) {
          local_28 = 0;
          local_3c = 1;
          break;
        }
        uVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectAtIndexedSubscript__0269cc78,local_98);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_015671ac();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_a0;
        bVar1 = local_a0 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar2;
        }
        local_3c = (uint)bVar1;
        _objc_storeStrong(&local_a0,0);
      } while (local_3c == 0);
      _objc_storeStrong(&local_90,0);
    }
    else {
      FUN_015671ac(uVar2,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar2;
      }
      local_3c = (uint)(uVar2 != 0);
      _objc_storeStrong(&local_58,0);
      if (local_3c == 0) goto LAB_01567338;
    }
LAB_01567718:
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    local_3c = 1;
  }
  _objc_storeStrong(&local_48,0);
LAB_01567738:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

