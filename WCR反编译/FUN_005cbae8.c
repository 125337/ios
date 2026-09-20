// FUN_005cbae8 @ 005cbae8

byte FUN_005cbae8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  int local_d0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if ((uVar1 == 0) ||
     (uVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar3 = *local_108;
      local_160 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + local_160 * 8);
          uVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsObject__0269cbb8,local_d8);
          if ((uVar2 & 1) != 0) {
            local_a9 = 1;
            local_d0 = 1;
            goto LAB_005cbd60;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_d0 = 0;
LAB_005cbd60:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d0 == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

