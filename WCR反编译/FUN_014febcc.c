// FUN_014febcc @ 014febcc

ulong FUN_014febcc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_1e8;
  undefined *local_1e0;
  ulong local_1a0;
  ulong local_198;
  undefined *local_190;
  ulong local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  ulong local_118;
  uint local_10c;
  ulong local_108;
  ulong local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  ulong local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  _objc_storeStrong(&local_108,param_1);
  uVar2 = local_108;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_108, (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
     uVar2 < 8)) {
    local_100 = 0xffffffffffffffff;
    local_10c = 1;
  }
  else {
    uVar2 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = &cf_paysubtype;
    local_30 = &cf_pay_sub_type;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_118 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar1;
    _memset(auStack_168,0,0x40);
    puVar1 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_b8,0x10);
    if (local_1e0 != (undefined *)0x0) {
      lVar6 = *local_158;
      local_1e8 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar6 != 0) {
            _objc_enumerationMutation(*local_158 - lVar6,puVar1);
          }
          local_128 = *(undefined8 *)(local_160 + (long)local_1e8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_170 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>)
          ;
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_118;
          puVar3 = PTR_s_rangeOfString__0269d838;
          local_178 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_rangeOfString__0269d838,local_170);
          uVar5 = local_118;
          puVar4 = PTR_s_rangeOfString__0269d838;
          local_188 = uVar2;
          local_180 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_rangeOfString__0269d838,local_178);
          local_198 = uVar5;
          local_190 = puVar4;
          if ((local_188 == 0x7fffffffffffffff) || (uVar5 <= local_188)) {
            local_10c = 3;
          }
          else {
            local_c8 = local_188;
            local_c0 = local_180;
            local_f0 = local_180 + local_188;
            local_d8 = local_188;
            local_d0 = local_180;
            local_f8 = uVar5 - (long)(local_180 + local_188);
            uVar2 = local_118;
            local_e8 = local_f0;
            local_e0 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_substringWithRange__0269d138,local_f0,local_f8);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = uVar2;
            FUN_014ff400();
            uVar5 = uVar2;
            if (0 < (long)uVar2) {
              uVar5 = 1;
              local_100 = uVar2;
            }
            local_10c = (uint)(0 < (long)uVar2);
            _objc_storeStrong(uVar5,&local_1a0,0);
          }
          _objc_storeStrong(&local_178);
          _objc_storeStrong(&local_170,0);
          if ((local_10c != 0) && (local_10c != 3)) goto LAB_014ff024;
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_b8,
                   0x10);
        local_1e8 = (undefined *)0x0;
      } while (local_1e0 != (undefined *)0x0);
    }
    local_10c = 0;
LAB_014ff024:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_10c == 0) {
      local_100 = 0xffffffffffffffff;
      local_10c = 1;
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_100;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

