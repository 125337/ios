// FUN_007fd9d0 @ 007fd9d0

void FUN_007fd9d0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_140;
  ulong local_138;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
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
  }
  else {
    uVar3 = local_b8;
    FUN_007fd7c4();
    uVar1 = local_b8;
    if ((uVar3 & 1) == 0) {
      _memset(auStack_108,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_138 != 0) {
        lVar2 = *local_f8;
        local_140 = 0;
        do {
          do {
            if (*local_f8 - lVar2 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_100 + local_140 * 8);
            local_c8 = uVar3;
            FUN_007fd9d0();
            _objc_retainAutoreleasedReturnValue();
            local_110 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
            }
            local_bc = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_110,0);
            if (local_bc != 0) goto LAB_007fdbec;
            local_140 = local_140 + 1;
          } while (local_140 < local_138);
          local_138 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_140 = 0;
        } while (local_138 != 0);
      }
      local_bc = 0;
LAB_007fdbec:
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

