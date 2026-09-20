// FUN_0032939c @ 0032939c

long FUN_0032939c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  long local_e8;
  int local_e0;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_1;
  _objc_storeStrong(&local_c0);
  lVar4 = local_c0;
  local_c8 = param_1;
  FUN_003266dc();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_b0 = 0x7fffffffffffffff;
    local_e0 = 1;
  }
  else {
    local_e8 = 0;
    while( true ) {
      lVar4 = local_e8;
      lVar1 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
      if (lVar1 <= lVar4) break;
      _memset(auStack_130,0,0x40);
      uVar2 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,local_e8)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_178 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_178 != 0) {
        lVar4 = *local_120;
        local_180 = 0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_128 + local_180 * 8);
            local_f0 = uVar5;
            FUN_003266dc();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if ((uVar3 & 1) != 0) {
              local_b0 = local_e8;
              local_e0 = 1;
              goto LAB_0032969c;
            }
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      local_e0 = 0;
LAB_0032969c:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_e0 != 0) goto LAB_003296f8;
      local_e8 = local_e8 + 1;
    }
    local_b0 = 0x7fffffffffffffff;
    local_e0 = 1;
  }
LAB_003296f8:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

