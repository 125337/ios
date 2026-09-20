// FUN_001dc68c @ 001dc68c

byte FUN_001dc68c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ulong local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  _memset(auStack_108,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar4 = *local_f8;
    local_168 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_168 * 8);
        lVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_rangeOfString__0269d838,local_c8);
        if (lVar3 != 0x7fffffffffffffff) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_001dc8b8;
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  bVar1 = false;
LAB_001dc8b8:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

