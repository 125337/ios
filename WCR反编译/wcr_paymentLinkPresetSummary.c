// wcr_paymentLinkPresetSummary @ 01a376b4

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::wcr_paymentLinkPresetSummary(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_140;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_140 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_140 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_140;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  _memset(auStack_118,0,0x40);
  pcVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_168 != (cfstringStruct *)0x0) {
    lVar4 = *local_108;
    local_170 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,pcVar1);
        }
        lVar5 = *(long *)(local_110 + (long)local_170 * 8);
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_d8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        lVar5 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
        }
        _objc_storeStrong(&local_120,0);
        local_170 = (cfstringStruct *)((long)&local_170->field0_0x0 + 1);
      } while (local_170 < local_168);
      local_168 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_170 = (cfstringStruct *)0x0;
    } while (local_168 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf__gn_;
  }
  else {
    pcVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    local_b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
      pcVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

