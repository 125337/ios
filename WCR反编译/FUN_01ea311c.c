// FUN_01ea311c @ 01ea311c

void FUN_01ea311c(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_178;
  ulong local_170;
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
  uVar2 = local_b8;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
    goto LAB_01ea3520;
  }
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass("BaseMsgContentViewController");
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  uVar3 = local_b8;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar3;
    local_bc = 1;
    goto LAB_01ea3520;
  }
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_01ea311c();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar3 = local_b8;
  uVar2 = local_c8;
  if (local_c8 == 0) {
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      FUN_01ea311c();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_c8;
      local_c8 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar2 = local_c8;
      if (local_c8 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar2;
        local_bc = 1;
        goto LAB_01ea3510;
      }
    }
    _memset(auStack_110,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_170 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar5 = *local_100;
      local_178 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_108 + local_178 * 8);
          local_d0 = uVar6;
          FUN_01ea311c();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c8;
          local_c8 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_c8;
          if (local_c8 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            local_bc = 1;
            goto LAB_01ea34e0;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_bc = 0;
LAB_01ea34e0:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_bc == 0) {
      local_b0 = 0;
      local_bc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar2;
    local_bc = 1;
  }
LAB_01ea3510:
  _objc_storeStrong(&local_c8,0);
LAB_01ea3520:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

