// FUN_004515e8 @ 004515e8

void FUN_004515e8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_168;
  ulong local_160;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  uint local_cc;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  if (local_c8 == 0) {
    local_c0 = 0;
    local_cc = 1;
  }
  else {
    local_b0 = &DAT_028caae0;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_0257d408);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    if (((DAT_028caad8 == 0) ||
        (uVar1 = local_c8,
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isKindOfClass__0269cd68,DAT_028caad8),
        (uVar1 & 1) == 0)) || (uVar3 = local_c8, FUN_004504e8(), uVar1 = local_c8, (uVar3 & 1) == 0)
       ) {
      _memset(auStack_128,0,0x40);
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_160 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_160 != 0) {
        lVar2 = *local_118;
        local_168 = 0;
        do {
          do {
            if (*local_118 - lVar2 != 0) {
              _objc_enumerationMutation(*local_118 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_120 + local_168 * 8);
            local_e8 = uVar3;
            FUN_004515e8();
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c0 = uVar3;
            }
            local_cc = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_130,0);
            if (local_cc != 0) goto LAB_00451908;
            local_168 = local_168 + 1;
          } while (local_168 < local_160);
          local_160 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_168 = 0;
        } while (local_160 != 0);
      }
      local_cc = 0;
LAB_00451908:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_cc == 0) {
        local_c0 = 0;
        local_cc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar1;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

