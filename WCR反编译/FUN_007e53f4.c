// FUN_007e53f4 @ 007e53f4

void FUN_007e53f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar3 = *local_f0;
    local_140 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar1);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_140 * 8);
        uVar2 = DAT_028cce70;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce70,PTR_s_containsObject__0269cbb8,local_c0);
        if (((uVar2 & 1) == 0) &&
           (uVar2 = DAT_028cce78,
           (*(code *)PTR__objc_msgSend_02578628)
                     (DAT_028cce78,PTR_s_containsObject__0269cbb8,local_c0), (uVar2 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_c0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_c0);
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

