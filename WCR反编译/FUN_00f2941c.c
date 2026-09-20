// FUN_00f2941c @ 00f2941c

void FUN_00f2941c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_178;
  ulong local_170;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  uint local_c4;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  if ((local_b8 == 0) || (param_2 == 0)) {
    local_b0 = 0;
    local_c4 = 1;
    goto LAB_00f2981c;
  }
  uVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isKindOfClass__0269cd68,param_2);
  uVar1 = local_b8;
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_c4 = 1;
    goto LAB_00f2981c;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_viewControllers_0269e348);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
LAB_00f2971c:
      local_c4 = 0;
    }
    else {
      _memset(auStack_118,0,0x40);
      uVar1 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_170 != 0) {
        lVar3 = *local_108;
        local_178 = 0;
        do {
          do {
            if (*local_108 - lVar3 != 0) {
              _objc_enumerationMutation(*local_108 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_110 + local_178 * 8);
            local_d8 = uVar4;
            FUN_00f2941c(uVar4,local_c0);
            _objc_retainAutoreleasedReturnValue();
            local_120 = uVar4;
            if (uVar4 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar4;
            }
            local_c4 = (uint)(uVar4 != 0);
            _objc_storeStrong(&local_120,0);
            if (local_c4 != 0) goto LAB_00f296f8;
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      local_c4 = 0;
LAB_00f296f8:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_c4 == 0) goto LAB_00f2971c;
    }
    _objc_storeStrong(&local_d0,0);
    if (local_c4 != 0) goto LAB_00f2981c;
  }
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_presentedViewController_0269d448);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    local_128 = uVar1;
    FUN_00f2941c(uVar1,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_130 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar1;
    }
    local_c4 = (uint)(uVar1 != 0);
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_128,0);
    if (local_c4 != 0) goto LAB_00f2981c;
  }
  local_b0 = 0;
  local_c4 = 1;
LAB_00f2981c:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

