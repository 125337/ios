// FUN_007db0f4 @ 007db0f4

void FUN_007db0f4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_218;
  ulong local_210;
  ulong local_180;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8 [3];
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_b0;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_attributedText_0269fcf8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 0;
    local_180 = uVar2;
    if (uVar2 == 0) {
      local_180 = local_c8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_180;
    }
    local_d9 = uVar2 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_180;
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar2 = local_d0;
    FUN_007de3ec();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if ((uVar2 != 0) &&
       (uVar2 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_d0),
       (uVar2 & 1) == 0)) {
      uVar2 = local_c8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_attributedText_0269fcf8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (uVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_setText__026caa88,local_e8);
      }
      else {
        uVar2 = local_c8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        puVar1 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_initWithString_attributes__026a02b0,local_e8,local_f0);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_setAttributedText__026a0000,puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_f0,0);
      }
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(local_c8,0);
  }
  _memset(auStack_138,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_210 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_210 != 0) {
    lVar4 = *local_128;
    local_218 = 0;
    do {
      do {
        if (*local_128 - lVar4 != 0) {
          _objc_enumerationMutation(*local_128 - lVar4,uVar2);
        }
        local_f8 = *(undefined8 *)(local_130 + local_218 * 8);
        FUN_007db0f4(local_f8);
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

