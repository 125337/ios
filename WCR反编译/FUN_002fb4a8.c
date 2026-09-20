// FUN_002fb4a8 @ 002fb4a8

byte FUN_002fb4a8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  byte local_d1;
  undefined4 local_d0;
  byte local_c9;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c9 = 0;
  bVar1 = true;
  local_c0 = param_1;
  if (local_b8 != 0) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_filters_026a1fb8);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar2 == 0;
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if (bVar1) {
    local_a9 = 0;
  }
  else {
    local_d1 = 0;
    _memset(auStack_120,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_filters_026a1fb8);
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar3 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_118 + local_160 * 8);
          local_e0 = uVar4;
          FUN_002fb958(local_c0);
          if ((uVar4 & 1) != 0) {
            local_d1 = 1;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_a9 = local_d1 & 1;
  }
  local_d0 = 1;
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

