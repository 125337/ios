// FUN_01b2eca4 @ 01b2eca4

void FUN_01b2eca4(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  uint local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar6 = local_b8;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
    goto LAB_01b2f1ac;
  }
  pcVar2 = "BaseMsgContentViewController";
  _objc_getClass("BaseMsgContentViewController");
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,pcVar2);
  uVar3 = local_b8;
  if ((uVar6 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar3;
    local_bc = 1;
    goto LAB_01b2f1ac;
  }
  uVar6 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  FUN_01b2eca4();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar6);
  uVar3 = local_b8;
  uVar6 = local_c8;
  if (local_c8 == 0) {
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) != 0) {
      uVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      FUN_01b2eca4();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_d0;
      bVar1 = local_d0 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar6;
      }
      local_bc = (uint)bVar1;
      _objc_storeStrong(&local_d0,0);
      if (local_bc != 0) goto LAB_01b2f19c;
    }
    uVar6 = local_b8;
    puVar4 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar6 & 1) != 0) {
      uVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      FUN_01b2eca4();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_d8;
      bVar1 = local_d8 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar6;
      }
      local_bc = (uint)bVar1;
      _objc_storeStrong(&local_d8,0);
      if (local_bc != 0) goto LAB_01b2f19c;
    }
    _memset(auStack_120,0,0x40);
    uVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    local_1a0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_1a0 != 0) {
      lVar5 = *local_110;
      local_1a8 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_118 + local_1a8 * 8);
          local_e0 = uVar6;
          FUN_01b2eca4();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar6;
          if (uVar6 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar6;
          }
          local_bc = (uint)(uVar6 != 0);
          _objc_storeStrong(&local_128,0);
          if (local_bc != 0) goto LAB_01b2f16c;
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    local_bc = 0;
LAB_01b2f16c:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_bc == 0) {
      local_b0 = 0;
      local_bc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar6;
    local_bc = 1;
  }
LAB_01b2f19c:
  _objc_storeStrong(&local_c8,0);
LAB_01b2f1ac:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

