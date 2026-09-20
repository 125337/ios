// FUN_000a0fc8 @ 000a0fc8

void FUN_000a0fc8(byte param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_120;
  ulong local_118;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  undefined8 local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a9 = param_1;
  _memset(auStack_f8,0,0x40);
  uVar1 = DAT_028c8018;
  (*(code *)PTR__objc_retain_02578638)();
  local_118 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_118 != 0) {
    lVar2 = *local_e8;
    local_120 = 0;
    do {
      do {
        if (*local_e8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar2,uVar1);
        }
        local_b8 = *(undefined8 *)(local_f0 + local_120 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setEnabled__026ca938,local_a9 & 1);
        local_120 = local_120 + 1;
      } while (local_120 < local_118);
      local_118 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_120 = 0;
    } while (local_118 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

