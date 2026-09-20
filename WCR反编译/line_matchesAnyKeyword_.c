// line:matchesAnyKeyword: @ 00906a50

/* Function Stack Size: 0x20 bytes */

bool LogFloatingBall::line_matchesAnyKeyword_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  int local_d4;
  ulong local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_a9 = 1;
    local_d4 = 1;
  }
  else {
    lVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_a9 = 0;
      local_d4 = 1;
    }
    else {
      _memset(auStack_120,0,0x40);
      uVar1 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_158 != 0) {
        lVar3 = *local_110;
        local_160 = 0;
        do {
          do {
            if (*local_110 - lVar3 != 0) {
              _objc_enumerationMutation(*local_110 - lVar3,uVar1);
            }
            local_e0 = *(undefined8 *)(local_118 + local_160 * 8);
            lVar2 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_rangeOfString_options__0269d118,local_e0,1);
            if (lVar2 != 0x7fffffffffffffff) {
              local_a9 = 1;
              local_d4 = 1;
              goto LAB_00906c8c;
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      local_d4 = 0;
LAB_00906c8c:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d4 == 0) {
        local_a9 = 0;
        local_d4 = 1;
      }
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

