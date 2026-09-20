// FUN_007c8de0 @ 007c8de0

byte FUN_007c8de0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  int local_d8;
  ulong local_c8;
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
  FUN_007c9cf4();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d8 = 1;
  }
  else {
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
          lVar4 = *(long *)(local_118 + local_170 * 8);
          local_e0 = lVar4;
          FUN_007c9cf4();
          _objc_retainAutoreleasedReturnValue();
          local_128 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          uVar5 = 0;
          if (lVar4 == 0) {
LAB_007c9040:
            local_d8 = 0;
          }
          else {
            uVar2 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_isEqualToString__0269ccc8,local_128);
            uVar5 = uVar2 & 0xffffffff;
            if ((uVar2 & 1) == 0) goto LAB_007c9040;
            uVar5 = 1;
            local_a9 = 1;
            local_d8 = 1;
          }
          _objc_storeStrong(uVar5,&local_128,0);
          if (local_d8 != 0) goto LAB_007c90d4;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_d8 = 0;
LAB_007c90d4:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d8 == 0) {
      local_a9 = 0;
      local_d8 = 1;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

