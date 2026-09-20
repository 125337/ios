// FUN_00344e1c @ 00344e1c

void FUN_00344e1c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_188;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_e9;
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
  uVar2 = local_b8;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
    goto LAB_003455f0;
  }
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar5 = local_b8;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8[0] = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_currentTitle_026a2200);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    local_188 = uVar5;
    if (uVar5 == 0) {
      local_188 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_titleForState__026a2208,0);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_188;
    }
    local_e9 = uVar5 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_188;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
    uVar2 = local_e0;
    if (uVar5 == 0) {
      _memset(auStack_138,0,0x40);
      uVar2 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1c8 != 0) {
        lVar4 = *local_128;
        local_1d0 = 0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_130 + local_1d0 * 8);
            puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            local_f8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar5 & 1) != 0) {
              uVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              local_140 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
              uVar5 = local_140;
              if (uVar3 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar5;
              }
              local_bc = (uint)(uVar3 != 0);
              _objc_storeStrong(&local_140,0);
              if (local_bc != 0) goto LAB_003452f8;
            }
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1d0 = 0;
        } while (local_1c8 != 0);
      }
      local_bc = 0;
LAB_003452f8:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_bc == 0) {
        local_bc = 0;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar2;
      local_bc = 1;
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(local_d8,0);
    if (local_bc != 0) goto LAB_003455f0;
  }
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_bc = 1;
    local_b0 = uVar2;
    goto LAB_003455f0;
  }
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_titleLabel_026caba0);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_148 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
LAB_003455ac:
      local_bc = 0;
    }
    else {
      uVar5 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_150 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
      uVar2 = local_150;
      if (uVar5 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar2;
      }
      local_bc = (uint)(uVar5 != 0);
      _objc_storeStrong(&local_150,0);
      if (local_bc == 0) goto LAB_003455ac;
    }
    _objc_storeStrong(&local_148,0);
    if (local_bc != 0) goto LAB_003455f0;
  }
  local_b0 = 0;
  local_bc = 1;
LAB_003455f0:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

