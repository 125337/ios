// FUN_00869304 @ 00869304

void FUN_00869304(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_1d8;
  ulong local_188;
  ulong local_180;
  bool local_131;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  undefined4 local_d8;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) || (uVar3 = local_c8, FUN_008890bc(), (uVar3 & 1) == 0)) {
    uVar3 = local_b8;
    (*DAT_028cd558)(local_b8,local_c0,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = 1;
    local_b0 = uVar3;
  }
  else {
    local_e0 = 0;
    _memset(auStack_128,0,0x40);
    uVar3 = local_c8;
    FUN_00889204();
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != 0) {
      lVar5 = *local_118;
      local_188 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar3);
          }
          local_e8 = *(undefined8 *)(local_120 + local_188 * 8);
          uVar4 = local_b8;
          (*DAT_028cd558)(local_b8,local_c0,local_e8);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_e0;
          local_e0 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if (local_e0 != 0) {
            local_d8 = 2;
            goto LAB_008695e4;
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    local_d8 = 0;
LAB_008695e4:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_e0;
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_131 = (uVar3 & 1) == 0;
    if (local_131) {
      local_1d8 = local_e0;
    }
    else {
      local_1d8 = local_e0;
      FUN_0088950c();
      _objc_retainAutoreleasedReturnValue();
      local_130 = local_1d8;
    }
    local_131 = !local_131;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_1d8;
    if (local_131) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    local_d8 = 1;
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

