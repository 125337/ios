// joinBase:path: @ 00f036f8

/* Function Stack Size: 0x20 bytes */

ID WCRefineCloudBackupService::joinBase_path_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_1d8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_170;
  ulong local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  ulong local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_4);
  uVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  uVar6 = local_c8;
  if (uVar2 == 0) {
    local_b0 = (undefined *)0x0;
    local_d4 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = uVar6;
    while (uVar2 = local_e0,
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_hasSuffix__0269d018,&cf__),
          uVar6 = local_e0, (uVar2 & 1) != 0) {
      uVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_substringToIndex__0269d6c0,uVar2 - 1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_e0;
      local_e0 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_d0 == (cfstringStruct *)0x0) {
      local_170 = &::cf___;
    }
    else {
      local_170 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
    if ((local_170 != (cfstringStruct *)0x0) &&
       (pcVar3 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,&cf__),
       ((ulong)pcVar3 & 1) == 0)) {
      pcVar3 = &cf__;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_e8);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_e8;
      local_e8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar4;
    _memset(auStack_138,0,0x40);
    pcVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_198 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_198 != (cfstringStruct *)0x0) {
      lVar7 = *local_128;
      local_1a0 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_128 - lVar7 != 0) {
            _objc_enumerationMutation(*local_128 - lVar7,pcVar3);
          }
          lVar8 = *(long *)(local_130 + (long)local_1a0 * 8);
          local_f8 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          lVar5 = local_f8;
          if (lVar8 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_URLPathAllowedCharacterSet_026abb00);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar5,PTR_s_stringByAddingPercentEncodingWit_0269d900);
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = lVar5;
            if (lVar5 == 0) {
              local_1d8 = local_f8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_140 = local_1d8;
            (*(code *)PTR__objc_release_02578630)(lVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_140);
            _objc_storeStrong(&local_140,0);
          }
          local_1a0 = (cfstringStruct *)((long)&local_1a0->field0_0x0 + 1);
        } while (local_1a0 < local_198);
        local_198 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1a0 = (cfstringStruct *)0x0;
      } while (local_198 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_f0;
    local_148 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
    uVar6 = local_148;
    if (puVar4 != (undefined *)0x0) {
      puVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByAppendingString__0269d398);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_148;
      local_148 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_148);
    _objc_retainAutoreleasedReturnValue();
    local_d4 = 1;
    local_b0 = puVar4;
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
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

