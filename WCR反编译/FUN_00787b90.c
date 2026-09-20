// FUN_00787b90 @ 00787b90

void FUN_00787b90(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_180;
  ulong local_178;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined1 local_cd;
  uint local_cc;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = param_3;
  if ((local_b8 == 0) || (10 < param_3)) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    local_cd = local_b8 == local_c0;
    if (((bool)local_cd) ||
       (uVar3 = local_b8, FUN_00786650(local_b8,local_c0,0), uVar1 = local_b8, (uVar3 & 1) == 0)) {
      _memset(auStack_128,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_178 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_178 != 0) {
        lVar2 = *local_118;
        local_180 = 0;
        do {
          do {
            if (*local_118 - lVar2 != 0) {
              _objc_enumerationMutation(*local_118 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_120 + local_180 * 8);
            local_e8 = uVar3;
            FUN_00787b90(uVar3,local_c0,local_c8 + 1);
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
            }
            local_cc = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_130,0);
            if (local_cc != 0) goto LAB_00787e88;
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      local_cc = 0;
LAB_00787e88:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_cc == 0) {
        local_b0 = 0;
        local_cc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar1;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

