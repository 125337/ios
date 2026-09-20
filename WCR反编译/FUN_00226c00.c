// FUN_00226c00 @ 00226c00

void FUN_00226c00(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_00231de8();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = param_1;
  _memset(auStack_f8,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_128 != 0) {
    lVar2 = *local_e8;
    local_130 = 0;
    do {
      do {
        if (*local_e8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar2,uVar1);
        }
        local_b8 = *(undefined8 *)(local_f0 + local_130 * 8);
        FUN_0022cbf4(local_b8);
        FUN_0022d4c4(local_b8);
        FUN_0022ca2c(local_b8);
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

