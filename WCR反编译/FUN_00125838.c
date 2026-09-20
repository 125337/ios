// FUN_00125838 @ 00125838

void FUN_00125838(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined4 local_c8;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  lVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (uVar1 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_c8 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar2 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar2 != 0) {
            _objc_enumerationMutation(*local_100 - lVar2,uVar1);
          }
          lVar3 = *(long *)(local_108 + local_158 * 8);
          local_d0 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
          if (lVar3 != 0) {
            lVar3 = local_d0;
            FUN_00116ae8(local_d0,local_b0);
            _objc_unsafeClaimAutoreleasedReturnValue(lVar3);
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

