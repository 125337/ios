// nextCustomOrder @ 01ad72dc

/* Function Stack Size: 0x10 bytes */

long_long WCRefineGroupManager::nextCustomOrder(ID param_1,SEL param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 3;
  local_b8 = param_2;
  local_b0 = param_1;
  _memset(auStack_108,0,0x40);
  uVar1 = *(ulong *)(local_b0 + 8);
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_128 != 0) {
    lVar2 = *local_f8;
    local_130 = 0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
        }
        lVar3 = *(long *)(local_100 + local_130 * 8);
        local_c8 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_order_026ad490);
        if (local_c0 < lVar3) {
          lVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_order_026ad490);
          local_c0 = lVar3;
        }
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c0 + 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

