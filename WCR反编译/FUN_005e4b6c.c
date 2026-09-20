// FUN_005e4b6c @ 005e4b6c

byte FUN_005e4b6c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong local_188;
  ulong local_180;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  ulong local_e0;
  ulong local_d8;
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
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    uVar1 = local_b8;
    FUN_005e5ce8();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
    else {
      uVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = uVar1;
      _memset(auStack_128,0,0x40);
      uVar1 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_180 != 0) {
        lVar3 = *local_118;
        local_188 = 0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,uVar1);
            }
            lVar4 = *(long *)(local_120 + local_188 * 8);
            local_e8 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_130 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
            uVar5 = 0;
            if (lVar4 == 0) {
LAB_005e4e54:
              local_d0 = 0;
            }
            else {
              uVar2 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_containsString__0269d0b0,local_130);
              uVar5 = uVar2 & 0xffffffff;
              if ((uVar2 & 1) == 0) goto LAB_005e4e54;
              uVar5 = 1;
              local_a9 = 1;
              local_d0 = 1;
            }
            _objc_storeStrong(uVar5,&local_130,0);
            if (local_d0 != 0) goto LAB_005e4ee8;
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      local_d0 = 0;
LAB_005e4ee8:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d0 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

