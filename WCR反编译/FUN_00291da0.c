// FUN_00291da0 @ 00291da0

void FUN_00291da0(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_108;
  ulong local_88;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58 [3];
  char *local_40;
  uint local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = "BaseMsgContentViewController";
    _objc_getClass();
    local_40 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       (uVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar2),
       uVar4 = local_30, (uVar3 & 1) == 0)) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar4 != 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_00291da0();
        _objc_retainAutoreleasedReturnValue();
        local_58[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_58[0];
        bVar1 = local_58[0] != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar4;
        }
        local_34 = (uint)bVar1;
        _objc_storeStrong(local_58,0);
        if (local_34 != 0) goto LAB_0029246c;
      }
      uVar4 = local_30;
      puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      uVar3 = local_30;
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 0;
        local_108 = uVar3;
        if (uVar3 == 0) {
          local_108 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_108;
        }
        local_71 = uVar3 == 0;
        FUN_00291da0();
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_108;
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar4 = local_68;
        if (local_68 == 0) {
          local_88 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
          do {
            local_88 = local_88 - 1;
            if ((long)local_88 < 0) {
              local_34 = 0;
              goto LAB_00292304;
            }
            uVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            FUN_00291da0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_68;
            local_68 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar4 = local_68;
          } while (local_68 == 0);
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar4;
          local_34 = 1;
LAB_00292304:
          _objc_storeStrong(&local_80,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar4;
          local_34 = 1;
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
        if (local_34 != 0) goto LAB_0029246c;
      }
      uVar4 = local_30;
      puVar5 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar4 & 1) == 0) {
        local_28 = 0;
        local_34 = 1;
      }
      else {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_00291da0();
        _objc_retainAutoreleasedReturnValue();
        local_28 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_34 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
      local_34 = 1;
    }
  }
LAB_0029246c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

