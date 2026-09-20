// normalizedReplyCountSpec: @ 009bdadc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::normalizedReplyCountSpec_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *local_210;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_188;
  bool local_169;
  cfstringStruct *local_168;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  cfstringStruct *local_f8;
  undefined4 local_f0;
  bool local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar4 = local_c8;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_188 = local_c8;
  local_d9 = 0;
  local_e9 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_188 = &::cf___;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_188;
  }
  local_e9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_188;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  pcVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_1;
    local_f0 = 1;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar4;
    _memset(auStack_140,0,0x40);
    pcVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != (cfstringStruct *)0x0) {
      lVar5 = *local_130;
      local_1d0 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,pcVar4);
          }
          lVar6 = *(long *)(local_138 + (long)local_1d0 * 8);
          local_100 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_integerValue_026ca750);
          pcVar2 = local_f8;
          if (0 < lVar6) {
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          local_1d0 = (cfstringStruct *)((long)&local_1d0->field0_0x0 + 1);
        } while (local_1d0 < local_1c8);
        local_1c8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_1d0 = (cfstringStruct *)0x0;
      } while (local_1c8 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_210 = &cf_1;
    }
    else {
      local_210 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_componentsJoinedByString__0269d140,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_168 = local_210;
    }
    local_169 = pcVar4 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_210;
    if (local_169) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    local_f0 = 1;
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

