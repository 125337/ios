// FUN_00733100 @ 00733100

byte FUN_00733100(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
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
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    _memset(auStack_120,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar3 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar1);
          }
          uVar2 = local_d8;
          uVar4 = *(undefined8 *)(local_118 + local_170 * 8);
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar2 & 1) != 0) {
            local_a9 = 1;
            local_d0 = 1;
            goto LAB_00733400;
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
    local_d0 = 0;
LAB_00733400:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d0 == 0) {
      local_a9 = 0;
      local_d0 = 1;
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

