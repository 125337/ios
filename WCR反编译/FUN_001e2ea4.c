// FUN_001e2ea4 @ 001e2ea4

byte FUN_001e2ea4(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  double local_e8;
  ulong local_e0;
  ulong local_d8;
  int local_d0;
  undefined8 local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  uVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (uVar3 == 0 || uVar3 - 1 == 0) {
    local_a9 = 1;
    local_d0 = 1;
  }
  else {
    uVar2 = local_b8;
    FUN_001dff6c(uVar3 - 1,local_b8,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    if (uVar2 == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
    else {
      uVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_e0 = uVar2;
      if (uVar2 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
      else {
        uVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        FUN_001e3460();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_e8 = param_1;
        _memset(auStack_130,0,0x40);
        uVar3 = local_d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        if (local_1a8 != 0) {
          lVar1 = *local_120;
          local_1b0 = 0;
          do {
            do {
              if (*local_120 - lVar1 != 0) {
                _objc_enumerationMutation(*local_120 - lVar1,uVar3);
              }
              uVar2 = *(ulong *)(local_128 + local_1b0 * 8);
              local_f0 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
              if (uVar2 != local_e0) {
                local_a9 = 0;
                local_d0 = 1;
                goto LAB_001e3328;
              }
              uVar2 = local_f0;
              FUN_001e36ec(0,local_f0,local_c0);
              if ((uVar2 & 1) == 0) {
                local_a9 = 0;
                local_d0 = 1;
                goto LAB_001e3328;
              }
              FUN_001e3460(local_f0,local_c0);
              param_1 = ABS(param_1 - local_e8);
              if (6.0 < param_1) {
                local_a9 = 0;
                local_d0 = 1;
                goto LAB_001e3328;
              }
              local_1b0 = local_1b0 + 1;
            } while (local_1b0 < local_1a8);
            local_1a8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                       0x10);
            local_1b0 = 0;
          } while (local_1a8 != 0);
        }
        local_d0 = 0;
LAB_001e3328:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_d0 == 0) {
          uVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
          uVar3 = uVar3 * local_e0;
          uVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
          local_a9 = uVar3 == uVar2;
          local_d0 = 1;
        }
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

