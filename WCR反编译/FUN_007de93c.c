// FUN_007de93c @ 007de93c

byte FUN_007de93c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_c4;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  if ((local_b8 == 0) || (param_2 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isKindOfClass__0269cd68,param_2);
    if ((uVar1 & 1) == 0) {
      _memset(auStack_120,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_158 != 0) {
        lVar2 = *local_110;
        local_160 = 0;
        do {
          do {
            if (*local_110 - lVar2 != 0) {
              _objc_enumerationMutation(*local_110 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_118 + local_160 * 8);
            local_e0 = uVar3;
            FUN_007de93c(uVar3,local_c0);
            if ((uVar3 & 1) != 0) {
              local_a9 = 1;
              local_c4 = 1;
              goto LAB_007debb8;
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      local_c4 = 0;
LAB_007debb8:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_c4 == 0) {
        local_a9 = 0;
        local_c4 = 1;
      }
    }
    else {
      local_a9 = 1;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

