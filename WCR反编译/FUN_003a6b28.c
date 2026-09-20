// FUN_003a6b28 @ 003a6b28

void FUN_003a6b28(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_158;
  ulong local_150;
  ulong local_138;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((((local_b8 == 0) ||
       (uVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
       uVar1 == 0)) || (uVar1 = local_c0, FUN_003ad8e4(), (uVar1 & 1) == 0)) ||
     (uVar1 = local_b8, FUN_003adbe4(), (uVar1 & 1) == 0)) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    uVar1 = local_b8;
    FUN_003bed8c();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar1;
    _memset(auStack_118,0,0x40);
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar1;
    if (uVar1 == 0) {
      local_138 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_150 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
              );
    if (local_150 != 0) {
      lVar3 = *local_108;
      local_158 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,local_138);
          }
          uVar4 = *(ulong *)(local_110 + local_158 * 8);
          local_d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar4;
          FUN_00355e04();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar1);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar1 = local_d8;
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar1;
            local_c4 = 1;
            goto LAB_003a6e08;
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_c4 = 0;
LAB_003a6e08:
    (*(code *)PTR__objc_release_02578630)(local_138);
    if (local_c4 == 0) {
      local_b0 = 0;
      local_c4 = 1;
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

