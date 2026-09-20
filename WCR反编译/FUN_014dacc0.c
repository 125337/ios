// FUN_014dacc0 @ 014dacc0

void FUN_014dacc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_248;
  undefined *local_240;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  undefined8 local_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined4 local_10c;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = (undefined *)0x0;
  _objc_storeStrong(&local_100,param_1);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_2);
  if ((local_100 == (undefined *)0x0) ||
     (lVar5 = local_108, (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
     puVar2 = local_100, lVar5 == 0)) {
    local_10c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_100;
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_120 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) {
        local_128 = (undefined *)0x0;
        puVar2 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar2 = local_128;
          local_128 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          puVar1 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_attributedText_0269fcf8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar2 = local_128;
          local_128 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        puVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
        local_d0 = 0;
        local_c8 = 0;
        local_140 = (undefined *)0x0;
        puStack_138 = puVar2;
        local_d8 = puVar2;
        local_c0 = puVar2;
        while ((puStack_138 != (undefined *)0x0 &&
               (puVar1 = local_120, puVar3 = PTR_s_rangeOfString_options_range__0269d130,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_120,PTR_s_rangeOfString_options_range__0269d130,local_108,1,
                          local_140,puStack_138), puVar2 = local_128, local_150 = puVar1,
               local_148 = puVar3, puVar1 != (undefined *)0x7fffffffffffffff))) {
          uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
          FUN_014db298();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_addAttribute_value_range__026a1d88,uVar4,puVar1,local_150,
                     local_148);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          local_b8 = local_150;
          local_b0 = local_148;
          puVar2 = local_150 + (long)local_148;
          puVar1 = local_120;
          local_158 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          puStack_160 = puVar1 + -(long)local_158;
          local_168 = puVar2;
          local_140 = puVar2;
          puStack_138 = puStack_160;
          local_f8 = puStack_160;
          local_f0 = puVar2;
          local_e8 = puVar2;
          local_e0 = puStack_160;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setAttributedText__026a0000,local_128)
        ;
        _objc_storeStrong(&local_128,0);
      }
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_118,0);
    }
    _memset(auStack_1b0,0,0x40);
    puVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_240 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != (undefined *)0x0) {
      lVar5 = *local_1a0;
      local_248 = (undefined *)0x0;
      do {
        do {
          if (*local_1a0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar5,puVar2);
          }
          local_170 = *(undefined8 *)(local_1a8 + (long)local_248 * 8);
          FUN_014dacc0(local_170,local_108);
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                   0x10);
        local_248 = (undefined *)0x0;
      } while (local_240 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_10c = 0;
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

