// FUN_0215061c @ 0215061c

void FUN_0215061c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_1b8;
  ulong local_1b0;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  ulong local_d0;
  ulong local_c8;
  int local_bc;
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
    local_b0 = &cf_5;
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    if ((uVar2 == 0) ||
       (uVar2 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
       pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088, 2 < uVar2)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf_5;
      local_bc = 1;
    }
    else {
      uVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_d8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_0123456789);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _memset(auStack_128,0,0x40);
      uVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_1b0 != 0) {
        lVar6 = *local_118;
        local_1b8 = 0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,uVar2);
            }
            lVar7 = *(long *)(local_120 + local_1b8 * 8);
            puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            local_e8 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_130 = lVar7;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            lVar7 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if ((lVar7 == 0) ||
               (lVar7 = local_130,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_130,PTR_s_rangeOfCharacterFromSet__0269db68,local_e0),
               pcVar4 = local_d8, puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8,
               lVar7 != 0x7fffffffffffffff)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = &cf_5;
              local_bc = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_longLongValue_0269d5e0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_stringWithFormat__0269cca8,&cf__lld);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar1);
              local_bc = 0;
            }
            _objc_storeStrong(&local_130,0);
            if (local_bc != 0) goto LAB_02150b7c;
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1b8 = 0;
        } while (local_1b0 != 0);
      }
      local_bc = 0;
LAB_02150b7c:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_bc == 0) {
        pcVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_componentsJoinedByString__0269d140,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_bc = 1;
        local_b0 = pcVar4;
      }
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0);
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

