// normalizedKeywordInput: @ 00917b20

/* Function Stack Size: 0x18 bytes */

ID NavigationMonitorViewController::normalizedKeywordInput_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  ulong local_188;
  ulong local_180;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  cfstringStruct *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_cc = 1;
  }
  else {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_format_s_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &::cf___;
      local_cc = 1;
    }
    else {
      uVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_e0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar4;
      _memset(auStack_130,0,0x40);
      uVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_180 != 0) {
        lVar5 = *local_120;
        local_188 = 0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,uVar2);
            }
            lVar6 = *(long *)(local_128 + local_188 * 8);
            puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            local_f0 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_138 = lVar6;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            lVar6 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
            if (lVar6 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
            }
            _objc_storeStrong(&local_138,0);
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_cc = 1;
      local_b0 = pcVar4;
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

