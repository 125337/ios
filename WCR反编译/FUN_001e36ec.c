// FUN_001e36ec @ 001e36ec

byte FUN_001e36ec(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  int local_d0;
  undefined8 local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    FUN_001e25f4();
    local_f0 = param_1;
    local_e8 = param_2;
    local_e0 = param_3;
    local_d8 = param_4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_138,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1c0 != 0) {
      lVar2 = *local_128;
      local_1c8 = 0;
      do {
        do {
          dVar3 = param_4;
          if (*local_128 - lVar2 != 0) {
            _objc_enumerationMutation(*local_128 - lVar2,uVar1);
            dVar3 = param_4;
          }
          local_f8 = *(undefined8 *)(local_130 + local_1c8 * 8);
          FUN_001e25f4(local_f8,local_c0);
          param_4 = ABS(param_1 - local_d8);
          if (6.0 < param_4) {
            local_a9 = 0;
            local_d0 = 1;
            goto LAB_001e3a08;
          }
          local_1c8 = local_1c8 + 1;
          param_1 = dVar3;
        } while (local_1c8 < local_1c0);
        local_1c0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1c8 = 0;
        param_1 = dVar3;
      } while (local_1c0 != 0);
    }
    local_d0 = 0;
LAB_001e3a08:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d0 == 0) {
      local_a9 = 1;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

