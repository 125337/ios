// entriesMatchingQuery: @ 010d580c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsTailCatalog::entriesMatchingQuery_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_218;
  cfstringStruct *local_200;
  undefined *local_1d0;
  undefined *local_1c8;
  cfstringStruct *local_190;
  bool local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  bool local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  cfstringStruct *local_f8;
  undefined *local_f0;
  undefined4 local_e4;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar6 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar6 & 1) == 0) {
    local_190 = &::cf___;
  }
  else {
    local_190 = local_c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_190;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = local_190;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar6 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
  if (pcVar6 == (cfstringStruct *)0x0) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allEntries_026ae7b0);
    _objc_retainAutoreleasedReturnValue();
    local_e4 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allEntries_026ae7b0);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != (undefined *)0x0) {
      lVar5 = *local_128;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,puVar2);
          }
          pcVar6 = *(cfstringStruct **)(local_130 + (long)local_1d0 * 8);
          local_f8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_f8;
          local_140 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_140;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_148 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_159 = false;
          bVar1 = ((ulong)pcVar6 & 1) == 0;
          if (bVar1) {
            local_200 = &::cf___;
          }
          else {
            local_200 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_158 = local_200;
          }
          local_159 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_200;
          if ((local_159 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          pcVar6 = local_148;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_171 = ((ulong)pcVar6 & 1) == 0;
          if (local_171) {
            local_218 = &::cf___;
          }
          else {
            local_218 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_170 = local_218;
          }
          local_171 = !local_171;
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = local_218;
          if (local_171) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          pcVar6 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsString__0269d0b0,local_e0);
          if ((((ulong)pcVar6 & 1) != 0) ||
             (pcVar6 = local_168,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_168,PTR_s_containsString__0269d0b0,local_e0), ((ulong)pcVar6 & 1) != 0
             )) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
          }
          _objc_storeStrong(&local_168);
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_e4 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

