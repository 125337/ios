// FUN_00802cb8 @ 00802cb8

void FUN_00802cb8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1e8;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_188;
  ulong local_170;
  ulong local_148;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
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
  uVar2 = local_b8;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar4 = local_b8;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar4 & 1) == 0) {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = uVar2;
        if (uVar2 == 0) {
          _memset(auStack_128,0,0x40);
          uVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_1b0 != 0) {
            lVar3 = *local_118;
            local_1b8 = 0;
            do {
              do {
                if (*local_118 - lVar3 != 0) {
                  _objc_enumerationMutation(*local_118 - lVar3,uVar2);
                }
                uVar4 = *(ulong *)(local_120 + local_1b8 * 8);
                puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
                local_e8 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
                if ((uVar4 & 1) != 0) {
                  uVar4 = local_e8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_viewControllers_0269e348);
                  _objc_retainAutoreleasedReturnValue();
                  local_130 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_lastObject_0269d200);
                  _objc_retainAutoreleasedReturnValue();
                  local_1e8 = uVar4;
                  if (uVar4 == 0) {
                    local_1e8 = local_e8;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = local_1e8;
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                  local_bc = 1;
                  _objc_storeStrong(&local_130,0);
                  goto LAB_00803214;
                }
                local_1b8 = local_1b8 + 1;
              } while (local_1b8 < local_1b0);
              local_1b0 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                         auStack_a8,0x10);
              local_1b8 = 0;
            } while (local_1b0 != 0);
          }
          local_bc = 0;
LAB_00803214:
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_b8;
          if (local_bc == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            local_bc = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_188 = uVar2;
          if (uVar2 == 0) {
            local_188 = local_b8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_188;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_bc = 1;
          _objc_storeStrong(&local_e0,0);
        }
        _objc_storeStrong(&local_d8,0);
      }
      else {
        uVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_b8;
        local_d0 = uVar4;
        if (uVar4 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar2;
        }
        else {
          FUN_00802cb8();
          _objc_retainAutoreleasedReturnValue();
          local_170 = uVar4;
          if (uVar4 == 0) {
            local_170 = local_d0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_170;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        local_bc = 1;
        _objc_storeStrong(&local_d0,0);
      }
    }
    else {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar2;
      if (uVar2 == 0) {
        local_148 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_148;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_bc = 1;
      _objc_storeStrong(&local_c8,0);
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

