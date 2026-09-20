// FUN_006bdb78 @ 006bdb78

byte FUN_006bdb78(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1f0;
  ulong local_1e8;
  uint local_16c;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  byte local_e1;
  ulong local_e0;
  byte local_d1;
  ulong local_d0;
  uint local_c8;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_a9 = 0;
    local_c8 = 1;
  }
  else {
    local_d1 = 0;
    local_e1 = 0;
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_006bd9e8();
    local_16c = 1;
    if ((uVar5 & 1) == 0) {
      uVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_accessibilityValue_026a68d0);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = uVar5;
      FUN_006bd9e8();
      local_16c = 1;
      if ((uVar5 & 1) == 0) {
        uVar5 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_accessibilityIdentifier_0269ec20);
        _objc_retainAutoreleasedReturnValue();
        local_e1 = 1;
        local_e0 = uVar5;
        FUN_006bd9e8();
        local_16c = (uint)uVar5;
      }
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_b8;
    if ((local_16c & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar5 = local_b8;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        FUN_006bd9e8();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          local_a9 = 1;
        }
        local_c8 = (uint)bVar1;
        _objc_storeStrong(&local_f0,0);
        if (local_c8 != 0) goto LAB_006be198;
      }
      _memset(auStack_138,0,0x40);
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1e8 != 0) {
        lVar4 = *local_128;
        local_1f0 = 0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,uVar3);
            }
            uVar5 = *(ulong *)(local_130 + local_1f0 * 8);
            local_f8 = uVar5;
            FUN_006bdb78();
            if ((uVar5 & 1) != 0) {
              local_a9 = 1;
              local_c8 = 1;
              goto LAB_006be15c;
            }
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1f0 = 0;
        } while (local_1e8 != 0);
      }
      local_c8 = 0;
LAB_006be15c:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_c8 == 0) {
        local_a9 = 0;
        local_c8 = 1;
      }
    }
    else {
      local_a9 = 1;
      local_c8 = 1;
    }
  }
LAB_006be198:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

