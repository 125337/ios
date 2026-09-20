// tikTokCookies @ 01018930

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkParser::tikTokCookies(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  uint local_2ec;
  cfstringStruct *local_2e8;
  ulong local_2b8;
  ulong local_2b0;
  uint local_254;
  ulong local_238;
  ulong local_230;
  cfstringStruct *local_208;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  cfstringStruct *local_1a8;
  byte local_199;
  long local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  long local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_140 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar4;
  _memset(auStack_190,0,0x40);
  IVar5 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tikTokCookieJar_026adc30);
  _objc_retainAutoreleasedReturnValue();
  local_230 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_230 != 0) {
    lVar9 = *local_180;
    local_238 = 0;
    do {
      do {
        if (*local_180 - lVar9 != 0) {
          _objc_enumerationMutation(*local_180 - lVar9,IVar5);
        }
        lVar10 = *(long *)(local_188 + local_238 * 8);
        local_150 = lVar10;
        (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar3 = local_148;
        local_199 = 0;
        local_254 = 1;
        if (lVar6 != 0) {
          lVar6 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          local_199 = 1;
          local_198 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
          local_254 = (uint)puVar3;
        }
        if ((local_199 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_198);
        }
        (*(code *)PTR__objc_release_02578630)(lVar10);
        puVar3 = local_148;
        if ((local_254 & 1) == 0) {
          lVar6 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_150);
        }
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_238 = 0;
    } while (local_230 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _memset(auStack_1e8,0,0x40);
  IVar5 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tikTokCookieStorage_026adc38);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  local_2b0 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,0x10);
  if (local_2b0 != 0) {
    lVar9 = *local_1d8;
    local_2b8 = 0;
    do {
      do {
        if (*local_1d8 - lVar9 != 0) {
          _objc_enumerationMutation(*local_1d8 - lVar9,IVar7);
        }
        pcVar11 = *(cfstringStruct **)(local_1e0 + local_2b8 * 8);
        local_1a8 = pcVar11;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_domain_026a6490);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar11;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_2e8 = pcVar8;
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_2e8 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = local_2e8;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar11);
        pcVar8 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_containsString__0269d0b0,&cf_tiktok);
        bVar2 = false;
        bVar1 = false;
        local_2ec = 1;
        if (((ulong)pcVar8 & 1) != 0) {
          local_1f8 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          pcVar8 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar3 = local_148;
          local_2ec = 1;
          if (pcVar8 != (cfstringStruct *)0x0) {
            local_208 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
            local_2ec = (uint)puVar3;
          }
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_208);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_1f8);
        }
        puVar3 = local_148;
        if ((local_2ec & 1) == 0) {
          pcVar8 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_1a8);
        }
        _objc_storeStrong(&local_1f0,0);
        local_2b8 = local_2b8 + 1;
      } while (local_2b8 < local_2b0);
      local_2b0 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,0x10)
      ;
      local_2b8 = 0;
    } while (local_2b0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar7);
  puVar3 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

