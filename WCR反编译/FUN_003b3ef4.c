// FUN_003b3ef4 @ 003b3ef4

void FUN_003b3ef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_170;
  ulong local_168;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  uint local_cc;
  long local_c8;
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
  local_c8 = param_3;
  if ((local_b8 == 0) || (param_3 < 0)) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_c0;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsObject__0269cbb8,uVar1);
    uVar1 = local_b8;
    if ((uVar3 & 1) == 0) {
      _memset(auStack_120,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
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
            uVar3 = *(ulong *)(local_118 + local_170 * 8);
            local_e0 = uVar3;
            FUN_003b3ef4(uVar3,local_c0,local_c8 + -1);
            _objc_retainAutoreleasedReturnValue();
            local_128 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
            }
            local_cc = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_128,0);
            if (local_cc != 0) goto LAB_003b418c;
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_cc = 0;
LAB_003b418c:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_cc == 0) {
        local_b0 = 0;
        local_cc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar1;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
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

