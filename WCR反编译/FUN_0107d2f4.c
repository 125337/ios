// FUN_0107d2f4 @ 0107d2f4

byte FUN_0107d2f4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_a9 = 1;
    local_bc = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pathComponents_026ae478);
    _objc_retainAutoreleasedReturnValue();
    local_128 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_128 != 0) {
      lVar2 = *local_f8;
      local_130 = 0;
      do {
        do {
          if (*local_f8 - lVar2 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_100 + local_130 * 8);
          local_c8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          if (uVar3 != 0) {
            uVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_isEqualToString__0269ccc8,&cf___MACOSX);
            if ((uVar3 & 1) != 0) {
              local_a9 = 1;
              local_bc = 1;
              goto LAB_0107d530;
            }
            uVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hasPrefix__0269d320,&cf__);
            if ((uVar3 & 1) != 0) {
              local_a9 = 1;
              local_bc = 1;
              goto LAB_0107d530;
            }
          }
          local_130 = local_130 + 1;
        } while (local_130 < local_128);
        local_128 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_130 = 0;
      } while (local_128 != 0);
    }
    local_bc = 0;
LAB_0107d530:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_bc == 0) {
      local_a9 = 0;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

