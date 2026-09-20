// FUN_00112c78 @ 00112c78

void FUN_00112c78(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_2a8;
  ulong local_2a0;
  undefined *local_258;
  undefined *local_250;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  int local_170;
  ulong local_160;
  ulong local_158;
  undefined *local_150;
  ulong local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  _objc_storeStrong(&local_158,param_1);
  uVar1 = local_158;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_160, FUN_00115578(), (uVar1 & 1) != 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = 1;
    local_150 = puVar2;
  }
  else {
    _memset(auStack_1b8,0,0x40);
    local_c0 = &cf_0;
    local_b8 = &cf_format_s_;
    local_b0 = &cf__;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_250 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_250 != (undefined *)0x0) {
      lVar5 = *local_1a8;
      local_258 = (undefined *)0x0;
LAB_00112e24:
      while( true ) {
        if (*local_1a8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1a8 - lVar5,puVar2);
        }
        local_178 = *(undefined8 *)(local_1b0 + (long)local_258 * 8);
        uVar1 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_containsString__0269d0b0,local_178);
        if ((uVar1 & 1) != 0) break;
        local_258 = local_258 + 1;
        if (local_250 <= local_258) goto LAB_001132cc;
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = puVar3;
      _memset(auStack_208,0,0x40);
      uVar1 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_componentsSeparatedByString__0269d3c0,local_178);
      _objc_retainAutoreleasedReturnValue();
      local_2a0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2a0 != 0) {
        lVar5 = *local_1f8;
        local_2a8 = 0;
        do {
          do {
            if (*local_1f8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1f8 - lVar5,uVar1);
            }
            uVar6 = *(ulong *)(local_200 + local_2a8 * 8);
            local_1c8 = uVar6;
            FUN_0010ee50();
            _objc_retainAutoreleasedReturnValue();
            local_210 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_210;
            local_210 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar6 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_210,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,
                       &cf___);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_210;
            local_210 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar6 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_210,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,
                       &cf___);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_210;
            local_210 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar6 = local_210;
            FUN_0010ee50();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_210;
            local_210 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_length_0269cca0);
            if ((uVar4 != 0) && (uVar6 = local_210, FUN_00115578(uVar4), (uVar6 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_210);
            }
            _objc_storeStrong(&local_210,0);
            local_2a8 = local_2a8 + 1;
          } while (local_2a8 < local_2a0);
          local_2a0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_140,
                     0x10);
          local_2a8 = 0;
        } while (local_2a0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = local_1c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = puVar3;
      local_170 = 1;
      _objc_storeStrong(&local_1c0,0);
      goto LAB_0011331c;
    }
LAB_00113314:
    local_170 = 0;
LAB_0011331c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_170 == 0) {
      local_148 = local_160;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_148,1);
      _objc_retainAutoreleasedReturnValue();
      local_170 = 1;
      local_150 = puVar2;
    }
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_150);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_001132cc:
  local_250 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
  local_258 = (undefined *)0x0;
  if (local_250 == (undefined *)0x0) goto LAB_00113314;
  goto LAB_00112e24;
}

