// wcr_normalizedAtUserList: @ 009d9204

/* Function Stack Size: 0x18 bytes */

ID WCRefineAnonymousAtHelper::wcr_normalizedAtUserList_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  ulong local_170;
  ulong local_168;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  ulong local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
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
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_d8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c8;
    local_e0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar2;
    _memset(auStack_130,0,0x40);
    uVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar4 = *local_120;
      local_170 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar2);
          }
          lVar5 = *(long *)(local_128 + local_170 * 8);
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_f0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = lVar5;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          lVar5 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            local_cc = 3;
          }
          else {
            pcVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_138)
            ;
            if (((ulong)pcVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_138);
            }
            local_cc = 0;
          }
          _objc_storeStrong(&local_138,0);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = pcVar3;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

