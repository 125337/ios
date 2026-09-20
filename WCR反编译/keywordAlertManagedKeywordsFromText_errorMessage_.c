// keywordAlertManagedKeywordsFromText:errorMessage: @ 00f9cf80

/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::keywordAlertManagedKeywordsFromText_errorMessage_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong local_2f0;
  ulong local_2e8;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_240;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  cfstringStruct *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined4 local_178;
  bool local_171;
  cfstringStruct *local_170;
  byte local_161;
  undefined *local_160;
  cfstringStruct *local_158;
  ID *local_150;
  cfstringStruct *local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (cfstringStruct *)0x0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  pcVar2 = local_148;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_150 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_240 = local_148;
  local_161 = 0;
  local_171 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_240 = &::cf___;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 1;
    local_160 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_170 = local_240;
  }
  local_171 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = local_240;
  if ((local_171 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  pcVar2 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = 1;
    local_130 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_180 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_158;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_188 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_190 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_1d8,0,0x40);
    pcVar2 = local_190;
    (*(code *)PTR__objc_retain_02578638)();
    local_290 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10);
    if (local_290 != (cfstringStruct *)0x0) {
      lVar6 = *local_1c8;
      local_298 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_1c8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar6,pcVar2);
          }
          uVar7 = *(ulong *)(local_1d0 + (long)local_298 * 8);
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_198 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = uVar7;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar7 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
          if (uVar7 == 0) {
            local_178 = 3;
          }
          else {
            IVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_keywordAlertRegexPatternFromKeyw_026acd78,local_1e0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (IVar5 == 0) {
              _memset(auStack_228,0,0x40);
              uVar7 = local_1e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
              _objc_retainAutoreleasedReturnValue();
              local_2e8 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_2e8 != 0) {
                lVar8 = *local_218;
                local_2f0 = 0;
                do {
                  do {
                    if (*local_218 - lVar8 != 0) {
                      _objc_enumerationMutation(*local_218 - lVar8,uVar7);
                    }
                    local_1e8 = *(undefined8 *)(local_220 + local_2f0 * 8);
                    FUN_00f9d688(local_1e8,local_180,local_188,local_150);
                    local_2f0 = local_2f0 + 1;
                  } while (local_2f0 < local_2e8);
                  local_2e8 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                             auStack_128,0x10);
                  local_2f0 = 0;
                } while (local_2e8 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar7);
              local_178 = 0;
            }
            else {
              FUN_00f9d688(local_1e0,local_180,local_188,local_150);
              local_178 = 3;
            }
          }
          _objc_storeStrong(&local_1e0,0);
          local_298 = (cfstringStruct *)((long)&local_298->field0_0x0 + 1);
        } while (local_298 < local_290);
        local_290 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                   0x10);
        local_298 = (cfstringStruct *)0x0;
      } while (local_290 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_copy_0269d150);
    local_178 = 1;
    local_130 = puVar3;
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

