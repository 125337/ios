// FUN_015616fc @ 015616fc

void FUN_015616fc(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_c8;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  char *local_40;
  uint local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
    goto LAB_01561c20;
  }
  pcVar2 = "BaseMsgContentViewController";
  _objc_getClass();
  local_40 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     (uVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar2),
     uVar4 = local_30, (uVar3 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
    local_34 = 1;
    goto LAB_01561c20;
  }
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar4;
  if (uVar4 == 0) {
LAB_0156183c:
    uVar4 = local_30;
    puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    uVar3 = local_30;
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 0;
      local_c8 = uVar3;
      if (uVar3 == 0) {
        local_c8 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_c8;
      }
      local_69 = uVar3 == 0;
      FUN_015616fc();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_c8;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar4 = local_60;
      bVar1 = local_60 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar4;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      if (local_34 != 0) goto LAB_01561c10;
    }
    uVar4 = local_30;
    puVar5 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    uVar3 = local_30;
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_015616fc();
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar4 = local_80;
      bVar1 = local_80 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar4;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      if (local_34 != 0) goto LAB_01561c10;
    }
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
    local_90 = uVar4;
    do {
      local_90 = local_90 - 1;
      if ((long)local_90 < 0) {
        local_28 = 0;
        local_34 = 1;
        break;
      }
      uVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      FUN_015616fc();
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_98;
      bVar1 = local_98 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar4;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_98,0);
    } while (local_34 == 0);
    _objc_storeStrong(&local_88,0);
  }
  else {
    FUN_015616fc();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
    }
    local_34 = (uint)(uVar4 != 0);
    _objc_storeStrong(&local_50,0);
    if (local_34 == 0) goto LAB_0156183c;
  }
LAB_01561c10:
  _objc_storeStrong(&local_48,0);
LAB_01561c20:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

