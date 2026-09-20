// FUN_015b229c @ 015b229c

void FUN_015b229c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (DAT_028e3ad8 == 0) {
    local_b4 = 1;
  }
  else {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3ad8,PTR_s_removeAllObjects_0269d508);
      local_b4 = 1;
    }
    else {
      uVar1 = DAT_028e3ad8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3ad8,PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = uVar1;
      _memset(auStack_108,0,0x40);
      uVar1 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      if (local_128 != 0) {
        lVar3 = *local_f8;
        local_130 = 0;
        do {
          do {
            if (*local_f8 - lVar3 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar3,uVar1);
            }
            local_c8 = *(ulong *)(local_100 + local_130 * 8);
            uVar2 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasPrefix__0269d320,local_c8);
            if ((((uVar2 & 1) != 0) ||
                (uVar2 = local_c8,
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hasPrefix__0269d320,local_b0),
                (uVar2 & 1) != 0)) ||
               (uVar2 = local_b0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_b0,PTR_s_isEqualToString__0269ccc8,local_c8), (uVar2 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028e3ad8,PTR_s_removeObjectForKey__0269d700,local_c8);
            }
            local_130 = local_130 + 1;
          } while (local_130 < local_128);
          local_128 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_130 = 0;
        } while (local_128 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(&local_c0,0);
      local_b4 = 0;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

