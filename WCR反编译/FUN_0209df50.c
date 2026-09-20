// FUN_0209df50 @ 0209df50

void FUN_0209df50(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_188;
  ulong local_180;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_bc;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_b8;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_bc = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_e0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar5;
    _memset(auStack_138,0,0x40);
    uVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar6 = *local_128;
      local_188 = 0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,uVar2);
          }
          lVar7 = *(long *)(local_130 + local_188 * 8);
          local_f8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_140 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 == 0) {
            local_bc = 3;
          }
          else {
            puVar1 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_containsObject__0269cbb8,local_140)
            ;
            if (((ulong)puVar1 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_140);
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_140);
              local_bc = 0;
            }
            else {
              local_bc = 3;
            }
          }
          _objc_storeStrong(&local_140,0);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar4 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_bc = 1;
    local_b0 = pcVar4;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

