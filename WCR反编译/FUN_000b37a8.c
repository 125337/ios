// FUN_000b37a8 @ 000b37a8

void FUN_000b37a8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8 [3];
  uint local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_d8[0] = uVar4;
      FUN_000b3cb8(uVar4,0x7fffffffffffffff);
      uVar3 = local_d8[0];
      bVar1 = uVar4 != 0x7fffffffffffffff;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar3;
      }
      local_bc = (uint)bVar1;
      _objc_storeStrong(bVar1,local_d8,0);
      if (local_bc != 0) goto LAB_000b3c58;
    }
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if ((uVar3 == 0) ||
       (uVar4 = local_e0, FUN_000b3cb8(uVar3,local_e0,0x7fffffffffffffff), uVar3 = local_e0,
       uVar4 == 0x7fffffffffffffff)) {
      _memset(auStack_128,0,0x40);
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1a0 != 0) {
        lVar5 = *local_118;
        local_1a8 = 0;
        do {
          do {
            if (*local_118 - lVar5 != 0) {
              _objc_enumerationMutation(*local_118 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_120 + local_1a8 * 8);
            local_e8 = uVar6;
            FUN_000b37a8();
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
            uVar4 = local_130;
            bVar1 = uVar6 != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar4;
            }
            local_bc = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_130,0);
            if (local_bc != 0) goto LAB_000b3bf4;
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 < local_1a0);
          local_1a0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1a8 = 0;
        } while (local_1a0 != 0);
      }
      local_bc = 0;
LAB_000b3bf4:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_bc == 0) {
        local_b0 = 0;
        local_bc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar3;
      local_bc = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
LAB_000b3c58:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

