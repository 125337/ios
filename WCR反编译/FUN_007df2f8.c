// FUN_007df2f8 @ 007df2f8

void FUN_007df2f8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong uVar7;
  cfstringStruct *local_280;
  ulong local_1a8;
  ulong local_1a0;
  cfstringStruct *local_148;
  ulong local_140;
  cfstringStruct *local_138;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if ((local_b8 == 0) ||
     (uVar1 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b8;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_120,0,0x40);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_1a0 != 0) {
      lVar6 = *local_110;
      local_1a8 = 0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,uVar1);
          }
          uVar7 = *(ulong *)(local_118 + local_1a8 * 8);
          local_e0 = uVar7;
          if (((uVar7 != 0) &&
              ((*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0), uVar7 != 0)) &&
             (uVar7 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsString__0269d0b0,&cf__),
             (uVar7 & 1) != 0)) {
            uVar7 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
            _objc_retainAutoreleasedReturnValue();
            local_128 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_count_0269cfe0);
            if (1 < uVar7) {
              uVar7 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_objectAtIndexedSubscript__0269cc78,0);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceCharacterSet_0269d768);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_130 = uVar4;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
              _objc_retainAutoreleasedReturnValue();
              local_138 = pcVar5;
              for (local_140 = 1; uVar7 = local_140, uVar4 = local_128,
                  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0),
                  pcVar5 = local_138, uVar7 < uVar4; local_140 = local_140 + 1) {
                uVar7 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_128,PTR_s_objectAtIndexedSubscript__0269cc78,local_140);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_appendString__0269ccb0);
                (*(code *)PTR__objc_release_02578630)(uVar7);
                uVar7 = local_140;
                uVar4 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
                if (uVar7 < uVar4 - 1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_appendString__0269ccb0,&cf__);
                }
              }
              puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceCharacterSet_0269d768);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_148 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if ((local_130 != 0) &&
                 (uVar7 = local_130,
                 (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0), uVar7 != 0)
                 ) {
                if (local_148 == (cfstringStruct *)0x0) {
                  local_280 = &cf___;
                }
                else {
                  local_280 = local_148;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_280,local_130)
                ;
              }
              _objc_storeStrong(&local_148);
              _objc_storeStrong(&local_138,0);
              _objc_storeStrong(&local_130,0);
            }
            _objc_storeStrong(&local_128,0);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    local_c8 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

