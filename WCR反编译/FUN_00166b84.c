// FUN_00166b84 @ 00166b84

byte FUN_00166b84(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  int local_d0;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  local_c0 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_b8;
    FUN_0015e890();
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar2 = *local_108;
      local_158 = 0;
      do {
        do {
          if (*local_108 - lVar2 != 0) {
            _objc_enumerationMutation(*local_108 - lVar2,uVar1);
          }
          lVar3 = *(long *)(local_110 + local_158 * 8);
          local_d8 = lVar3;
          FUN_0015ecd4();
          if (lVar3 == local_c0) {
            local_a9 = 1;
            local_d0 = 1;
            goto LAB_00166dcc;
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_d0 = 0;
LAB_00166dcc:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d0 == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

