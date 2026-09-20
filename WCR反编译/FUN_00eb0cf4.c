// FUN_00eb0cf4 @ 00eb0cf4

long FUN_00eb0cf4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _memset(auStack_100,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allValues_0269dae8);
  _objc_retainAutoreleasedReturnValue();
  local_120 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_120 != 0) {
    lVar2 = *local_f0;
    local_128 = 0;
    do {
      do {
        if (*local_f0 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar2,uVar1);
        }
        lVar3 = *(long *)(local_f8 + local_128 * 8);
        local_c0 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_unsignedLongLongValue_0269d6b8);
        local_b8 = local_b8 + lVar3;
        local_128 = local_128 + 1;
      } while (local_128 < local_120);
      local_120 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_128 = 0;
    } while (local_120 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar2 = local_b8;
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

