// FUN_008c35ac @ 008c35ac

byte FUN_008c35ac(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  int local_c8;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_objectEnumerator_026a8228);
  if ((uVar1 & 1) == 0) {
    local_a9 = 0;
    local_c8 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_140 != 0) {
      lVar2 = *local_100;
      local_148 = 0;
      do {
        do {
          if (*local_100 - lVar2 != 0) {
            _objc_enumerationMutation(*local_100 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_108 + local_148 * 8);
          local_d0 = uVar3;
          FUN_008b50d8();
          if ((uVar3 & 1) != 0) {
            local_a9 = 1;
            local_c8 = 1;
            goto LAB_008c37e0;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_c8 = 0;
LAB_008c37e0:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c8 == 0) {
      local_a9 = 0;
      local_c8 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

