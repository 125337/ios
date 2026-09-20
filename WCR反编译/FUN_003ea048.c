// FUN_003ea048 @ 003ea048

void FUN_003ea048(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_1a0;
  ulong local_198;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    FUN_003e8704();
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      local_f0 = param_1;
      local_e8 = param_2;
      local_e0 = param_3;
      local_d8 = param_4;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      uVar1 = local_b8;
      if (40.0 <= param_1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar1;
        local_bc = 1;
        goto LAB_003ea380;
      }
    }
    _memset(auStack_138,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_198 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_198 != 0) {
      lVar2 = *local_128;
      local_1a0 = 0;
      do {
        do {
          if (*local_128 - lVar2 != 0) {
            _objc_enumerationMutation(*local_128 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_130 + local_1a0 * 8);
          local_f8 = uVar3;
          FUN_003ea048();
          _objc_retainAutoreleasedReturnValue();
          local_140 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar3;
          }
          local_bc = (uint)(uVar3 != 0);
          _objc_storeStrong(&local_140,0);
          if (local_bc != 0) goto LAB_003ea350;
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    local_bc = 0;
LAB_003ea350:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_bc == 0) {
      local_b0 = 0;
      local_bc = 1;
    }
  }
LAB_003ea380:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

