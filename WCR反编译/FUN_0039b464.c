// FUN_0039b464 @ 0039b464

long FUN_0039b464(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_190;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  long local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_1;
  _objc_storeStrong(&local_c0);
  local_c8 = param_3;
  if (local_b8 < 1) {
    local_b0 = local_b8;
  }
  else {
    local_d8 = 0;
    _memset(auStack_120,0,0x40);
    uVar1 = local_c0;
    FUN_003d7db8(local_c0,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar2 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar2 != 0) {
            _objc_enumerationMutation(*local_110 - lVar2,uVar1);
          }
          lVar3 = *(long *)(local_118 + local_170 * 8);
          local_e0 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_integerValue_026ca750);
          if ((-1 < lVar3) && (lVar3 < local_b8)) {
            local_d8 = local_d8 + 1;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_190 = local_b8 - local_d8;
    if (local_190 < 1) {
      local_190 = 0;
    }
    local_b0 = local_190;
  }
  local_cc = 1;
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

