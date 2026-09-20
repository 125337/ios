// FUN_00148b88 @ 00148b88

void FUN_00148b88(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_170;
  ulong local_168;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
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
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_b8;
    if ((uVar3 & 1) == 0) {
      _memset(auStack_118,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != 0) {
        lVar2 = *local_108;
        local_170 = 0;
        do {
          do {
            if (*local_108 - lVar2 != 0) {
              _objc_enumerationMutation(*local_108 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_110 + local_170 * 8);
            local_d8 = uVar3;
            FUN_00148b88();
            _objc_retainAutoreleasedReturnValue();
            local_120 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
            }
            local_bc = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_120,0);
            if (local_bc != 0) goto LAB_00148e98;
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_bc = 0;
LAB_00148e98:
      (*(code *)PTR__objc_release_02578630)(uVar1);
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
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

