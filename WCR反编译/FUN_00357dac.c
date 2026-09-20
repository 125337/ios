// FUN_00357dac @ 00357dac

void FUN_00357dac(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  char *local_258;
  char *local_250;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined *local_1a0;
  char *local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined *local_148;
  char *local_140;
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MainSessionMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_140 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar2;
  _memset(auStack_190,0,0x40);
  local_b8 = &cf_topSessions;
  local_b0 = &cf_allTopSessions;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_208 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_208 != (undefined *)0x0) {
    lVar4 = *local_180;
    local_210 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar4 != 0) {
          _objc_enumerationMutation(*local_180 - lVar4,puVar2);
        }
        local_150 = *(undefined8 *)(local_188 + (long)local_210 * 8);
        pcVar1 = local_140;
        FUN_003612b8(local_140,local_150);
        _objc_retainAutoreleasedReturnValue();
        local_198 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_appendFormat__0269d148,&cf____);
        pcVar1 = local_198;
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar6);
        if (((ulong)pcVar1 & 1) != 0) {
          _memset(auStack_1e0,0,0x40);
          pcVar1 = local_198;
          (*(code *)PTR__objc_retain_02578638)();
          local_250 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_138,
                     0x10);
          if (local_250 != (char *)0x0) {
            lVar5 = *local_1d0;
            local_258 = (char *)0x0;
            do {
              do {
                if (*local_1d0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1d0 - lVar5,pcVar1);
                }
                puVar6 = *(undefined **)(local_1d8 + (long)local_258 * 8);
                local_1a0 = puVar6;
                FUN_00366324();
                _objc_retainAutoreleasedReturnValue();
                local_1e8 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
                if (puVar6 == (undefined *)0x0) {
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf__p);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = local_1e8;
                  local_1e8 = puVar3;
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                }
                puVar6 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_appendFormat__0269d148,&cf__lu____);
                _objc_storeStrong(&local_1e8,0);
                local_258 = local_258 + 1;
              } while (local_258 < local_250);
              local_250 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                         auStack_138,0x10);
              local_258 = (char *)0x0;
            } while (local_250 != (char *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_appendString__0269ccb0,&cf__);
        _objc_storeStrong(&local_198,0);
        local_210 = local_210 + 1;
      } while (local_210 < local_208);
      local_208 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_210 = (undefined *)0x0;
    } while (local_208 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

