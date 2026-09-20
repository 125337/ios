// FUN_005bacac @ 005bacac

void FUN_005bacac(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_240;
  ulong local_200;
  ulong local_1f8;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  ulong local_c8;
  uint local_bc;
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
    goto LAB_005bb328;
  }
  uVar5 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar5;
  if (uVar5 == 0) {
LAB_005badcc:
    uVar5 = local_b8;
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      FUN_005bacac();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_e8;
      bVar1 = local_e8 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar5;
      }
      local_bc = (uint)bVar1;
      _objc_storeStrong(&local_e8,0);
      if (local_bc != 0) goto LAB_005bb308;
    }
    uVar5 = local_b8;
    puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      FUN_005bacac();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_f0;
      bVar1 = local_f0 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar5;
      }
      local_bc = (uint)bVar1;
      _objc_storeStrong(&local_f0,0);
      if (local_bc != 0) goto LAB_005bb308;
    }
    _memset(auStack_138,0,0x40);
    uVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_1f8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1f8 != 0) {
      lVar4 = *local_128;
      local_200 = 0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_130 + local_200 * 8);
          local_f8 = uVar5;
          FUN_005bacac();
          _objc_retainAutoreleasedReturnValue();
          local_140 = uVar5;
          if (uVar5 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar5;
          }
          local_bc = (uint)(uVar5 != 0);
          _objc_storeStrong(&local_140,0);
          if (local_bc != 0) goto LAB_005bb28c;
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_200 = 0;
      } while (local_1f8 != 0);
    }
    local_bc = 0;
LAB_005bb28c:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_bc == 0) {
      uVar5 = local_b8;
      FUN_005bb388();
      if ((uVar5 & 1) == 0) {
        local_240 = 0;
      }
      else {
        local_240 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_240;
      local_bc = 1;
    }
  }
  else {
    FUN_005bacac();
    _objc_retainAutoreleasedReturnValue();
    local_e0[0] = uVar5;
    if (uVar5 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar5;
    }
    local_bc = (uint)(uVar5 != 0);
    _objc_storeStrong(local_e0,0);
    if (local_bc == 0) goto LAB_005badcc;
  }
LAB_005bb308:
  _objc_storeStrong(&local_c8,0);
LAB_005bb328:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

