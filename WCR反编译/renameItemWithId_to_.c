// renameItemWithId:to: @ 00f653d8

/* Function Stack Size: 0x20 bytes */

void WCRefineForwardTargetHistory::renameItemWithId_to_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_198;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  ulong local_e0;
  undefined4 local_d4;
  long local_d0;
  ulong local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  lVar3 = local_c0;
  FUN_00f646e4();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_d4 = 1;
  }
  else {
    uVar1 = local_c8;
    FUN_00f646e4();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar1;
    FUN_00f64200();
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    local_e8 = uVar1;
    _memset(auStack_138,0,0x40);
    uVar1 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar3 = *local_128;
      local_168 = 0;
      do {
        do {
          if (*local_128 - lVar3 != 0) {
            _objc_enumerationMutation(*local_128 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_130 + local_168 * 8);
          local_f8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_itemId_026ac860);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
            if (uVar2 == 0) {
              local_198 = 0;
            }
            else {
              local_198 = local_e0;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setCustomName__026ac890,local_198);
            local_e9 = 1;
            local_d4 = 2;
            goto LAB_00f65680;
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    local_d4 = 0;
LAB_00f65680:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_e9 & 1) != 0) {
      FUN_00f65254(local_e8);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

