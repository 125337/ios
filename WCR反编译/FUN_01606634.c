// FUN_01606634 @ 01606634

void FUN_01606634(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
    goto LAB_01606b2c;
  }
  uVar1 = local_b8;
  FUN_016031f0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_b8;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_bc = 1;
    goto LAB_01606b2c;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01606634();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_b8;
  uVar1 = local_c8;
  if (local_c8 == 0) {
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar1 = local_b8;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        FUN_01606634();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_c8;
        local_c8 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar1 = local_c8;
        if (local_c8 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar1;
          local_bc = 1;
          goto LAB_01606b1c;
        }
      }
    }
    else {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      FUN_01606634();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_c8;
      local_c8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar1 = local_c8;
      if (local_c8 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar1;
        local_bc = 1;
        goto LAB_01606b1c;
      }
    }
    _memset(auStack_110,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_190 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar4 = *local_100;
      local_198 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_108 + local_198 * 8);
          local_d0 = uVar5;
          FUN_01606634();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_c8;
          local_c8 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_c8;
          if (local_c8 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar1;
            local_bc = 1;
            goto LAB_01606aec;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_bc = 0;
LAB_01606aec:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_bc == 0) {
      local_b0 = 0;
      local_bc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_bc = 1;
  }
LAB_01606b1c:
  _objc_storeStrong(&local_c8,0);
LAB_01606b2c:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

