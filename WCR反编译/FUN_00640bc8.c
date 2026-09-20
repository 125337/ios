// FUN_00640bc8 @ 00640bc8

void FUN_00640bc8(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_270;
  ulong local_268;
  ulong local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8 [3];
  uint local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
    goto LAB_006413f8;
  }
  if (DAT_028cba38 == (char *)0x0) {
    pcVar1 = "NewMainFrameViewController";
    _objc_getClass();
    DAT_028cba38 = pcVar1;
  }
  pcVar1 = DAT_028cba38;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  uVar5 = local_b8;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar5;
    local_bc = 1;
    goto LAB_006413f8;
  }
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  local_d8[0] = uVar2;
  if (uVar2 == 0) {
LAB_00640d90:
    uVar2 = local_b8;
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = local_b8;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar5;
      if (uVar5 == 0) {
LAB_00640edc:
        uVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_100 = uVar2;
        if ((uVar2 == 0) || (uVar2 - local_f0 == 0)) {
LAB_00640fc0:
          local_bc = 0;
        }
        else {
          FUN_00640bc8(uVar2 - local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_108 = uVar2;
          if (uVar2 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
          }
          local_bc = (uint)(uVar2 != 0);
          _objc_storeStrong(&local_108,0);
          if (local_bc == 0) goto LAB_00640fc0;
        }
        _objc_storeStrong(&local_100,0);
      }
      else {
        FUN_00640bc8();
        _objc_retainAutoreleasedReturnValue();
        local_f8 = uVar5;
        if (uVar5 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
        }
        local_bc = (uint)(uVar5 != 0);
        _objc_storeStrong(&local_f8,0);
        if (local_bc == 0) goto LAB_00640edc;
      }
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e8,0);
      if (local_bc != 0) goto LAB_006413d8;
    }
    uVar2 = local_b8;
    puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = local_b8;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      local_118 = uVar5;
      if (uVar5 == 0) {
LAB_0064117c:
        local_bc = 0;
      }
      else {
        FUN_00640bc8();
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar5;
        if (uVar5 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
        }
        local_bc = (uint)(uVar5 != 0);
        _objc_storeStrong(&local_120,0);
        if (local_bc == 0) goto LAB_0064117c;
      }
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_110,0);
      if (local_bc != 0) goto LAB_006413d8;
    }
    _memset(auStack_168,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_268 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_268 != 0) {
      lVar4 = *local_158;
      local_270 = 0;
      do {
        do {
          if (*local_158 - lVar4 != 0) {
            _objc_enumerationMutation(*local_158 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_160 + local_270 * 8);
          local_128 = uVar5;
          FUN_00640bc8();
          _objc_retainAutoreleasedReturnValue();
          local_170 = uVar5;
          if (uVar5 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar5;
          }
          local_bc = (uint)(uVar5 != 0);
          _objc_storeStrong(&local_170,0);
          if (local_bc != 0) goto LAB_006413a8;
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10
                  );
        local_270 = 0;
      } while (local_268 != 0);
    }
    local_bc = 0;
LAB_006413a8:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_bc == 0) {
      local_b0 = 0;
      local_bc = 1;
    }
  }
  else {
    FUN_00640bc8();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar2;
    }
    local_bc = (uint)(uVar2 != 0);
    _objc_storeStrong(&local_e0,0);
    if (local_bc == 0) goto LAB_00640d90;
  }
LAB_006413d8:
  _objc_storeStrong(local_d8,0);
LAB_006413f8:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

