// FUN_007d9ec0 @ 007d9ec0

void FUN_007d9ec0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  cfstringStruct *local_3c8;
  undefined *local_388;
  undefined *local_380;
  ulong local_298;
  ulong local_290;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  ulong local_1d8;
  cfstringStruct *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  ulong local_170;
  undefined *local_168;
  uint local_160;
  ulong local_150;
  undefined *local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = 0;
  _objc_storeStrong(&local_150,param_1);
  if ((local_150 == 0) ||
     (uVar1 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = 1;
    local_148 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_150;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_168 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_1b8,0,0x40);
    uVar1 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_290 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_290 != 0) {
      lVar6 = *local_1a8;
      local_298 = 0;
      do {
        do {
          if (*local_1a8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar6,uVar1);
          }
          uVar7 = *(ulong *)(local_1b0 + local_298 * 8);
          local_178 = uVar7;
          if (((uVar7 != 0) &&
              ((*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0), uVar7 != 0)) &&
             (uVar7 = local_178,
             (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_containsString__0269d0b0,&cf__),
             (uVar7 & 1) != 0)) {
            uVar4 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
            uVar7 = uVar4 - 2;
            if (uVar4 < 2) {
LAB_007da91c:
              local_160 = 0;
            }
            else {
              uVar7 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
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
              local_1c8 = uVar4;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
              _objc_retainAutoreleasedReturnValue();
              local_1d0 = pcVar5;
              for (local_1d8 = 1; uVar7 = local_1d8, uVar4 = local_1c0,
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_count_0269cfe0),
                  pcVar5 = local_1d0, uVar7 < uVar4; local_1d8 = local_1d8 + 1) {
                uVar7 = local_1c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_1d8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_appendString__0269ccb0);
                (*(code *)PTR__objc_release_02578630)(uVar7);
                uVar7 = local_1d8;
                uVar4 = local_1c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_count_0269cfe0);
                if (uVar7 < uVar4 - 1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d0,PTR_s_appendString__0269ccb0,&cf__);
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
              local_1e0 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              local_c0 = &cf_WCPulse;
              local_b8 = &cf__OX__;
              local_b0 = &cf__vRKb;
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_c0,3);
              _objc_retainAutoreleasedReturnValue();
              local_1e9 = 0;
              local_1e8 = puVar2;
              _memset(auStack_238,0,0x40);
              puVar2 = local_1e8;
              (*(code *)PTR__objc_retain_02578638)();
              local_380 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                         auStack_140,0x10);
              if (local_380 != (undefined *)0x0) {
                lVar8 = *local_228;
                local_388 = (undefined *)0x0;
                do {
                  do {
                    if (*local_228 - lVar8 != 0) {
                      _objc_enumerationMutation(*local_228 - lVar8,puVar2);
                    }
                    local_1f8 = *(undefined8 *)(local_230 + (long)local_388 * 8);
                    uVar7 = local_1c8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c8,PTR_s_isEqualToString__0269ccc8,local_1f8);
                    if (((uVar7 & 1) != 0) ||
                       (uVar7 = local_1c8,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_1c8,PTR_s_containsString__0269d0b0,local_1f8),
                       (uVar7 & 1) != 0)) {
                      local_1e9 = 1;
                      local_160 = 7;
                      goto LAB_007da7b4;
                    }
                    local_388 = local_388 + 1;
                  } while (local_388 < local_380);
                  local_380 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                             auStack_140,0x10);
                  local_388 = (undefined *)0x0;
                } while (local_380 != (undefined *)0x0);
              }
              local_160 = 0;
LAB_007da7b4:
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if ((local_1e9 & 1) == 0) {
                if ((local_1c8 != 0) &&
                   (uVar7 = local_1c8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0),
                   uVar7 != 0)) {
                  if (local_1e0 == (cfstringStruct *)0x0) {
                    local_3c8 = &cf___;
                  }
                  else {
                    local_3c8 = local_1e0;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_setObject_forKeyedSubscript__0269d248,local_3c8,
                             local_1c8);
                }
                local_160 = 0;
              }
              else {
                local_160 = 3;
              }
              _objc_storeStrong(&local_1e8);
              _objc_storeStrong(&local_1e0,0);
              _objc_storeStrong(&local_1d0,0);
              _objc_storeStrong(&local_1c8,0);
              uVar7 = (ulong)local_160;
              if (local_160 == 0) goto LAB_007da91c;
            }
            _objc_storeStrong(uVar7,&local_1c0,0);
          }
          local_298 = local_298 + 1;
        } while (local_298 < local_290);
        local_290 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10
                  );
        local_298 = 0;
      } while (local_290 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_copy_0269d150);
    local_160 = 1;
    local_148 = puVar2;
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_148);
  return;
}

