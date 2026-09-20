// FUN_007db814 @ 007db814

void FUN_007db814(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_2d0;
  ulong local_2c8;
  ulong local_280;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  byte local_121;
  ulong local_120;
  byte local_111;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0 [3];
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_b0;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d0[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_d8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((uVar3 & 1) != 0) &&
         (uVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
         uVar2 != 0)) {
        uVar3 = local_d8;
        FUN_007ce1d4(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((uVar3 & 1) != 0) &&
           ((uVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0)
            , uVar2 != 0 &&
            (uVar2 = local_e0,
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,local_d8)
            , (uVar2 & 1) == 0)))) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_setText__026caa88,local_e0);
        }
        _objc_storeStrong(&local_e0,0);
      }
      uVar2 = local_d0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_attributedText_0269fcf8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      local_e8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
         uVar2 != 0)) {
        uVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_string_0269cc38);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = uVar2;
        FUN_007ce1d4();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_f8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((uVar2 & 1) != 0) &&
           ((uVar2 = local_f8, (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0)
            , uVar2 != 0 &&
            (uVar2 = local_f8,
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_isEqualToString__0269ccc8,local_f0)
            , (uVar2 & 1) == 0)))) {
          uVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_attributesAtIndex_effectiveRange_026a02a8,0,0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
          local_100 = uVar2;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_initWithString_attributes__026a02b0,local_f8,local_100);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0[0],PTR_s_setAttributedText__026a0000,puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_100,0);
        }
        _objc_storeStrong(&local_f8);
        _objc_storeStrong(&local_f0,0);
      }
      uVar2 = local_d0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_111 = 0;
      local_121 = 0;
      local_280 = uVar2;
      if (uVar2 == 0) {
        local_280 = local_d0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        local_111 = 1;
        local_110 = local_280;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_120 = local_280;
      }
      local_121 = uVar2 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = local_280;
      if ((local_121 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_120);
      }
      if ((local_111 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_110);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_108;
      FUN_007dd650();
      if ((uVar2 & 1) != 0) {
        FUN_007dde0c(0x7fefffffffffffff,local_d0[0]);
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(local_d0,0);
    }
    _memset(auStack_170,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2c8 != 0) {
      lVar4 = *local_160;
      local_2d0 = 0;
      do {
        do {
          if (*local_160 - lVar4 != 0) {
            _objc_enumerationMutation(*local_160 - lVar4,uVar2);
          }
          local_130 = *(undefined8 *)(local_168 + local_2d0 * 8);
          FUN_007db814(local_130);
          local_2d0 = local_2d0 + 1;
        } while (local_2d0 < local_2c8);
        local_2c8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10
                  );
        local_2d0 = 0;
      } while (local_2c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

