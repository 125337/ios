// normalizeDouyinPlayURL: @ 0101f730

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::normalizeDouyinPlayURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  uint local_1dc;
  undefined *local_190;
  undefined *local_188;
  undefined *local_170;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (undefined *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  puVar3 = local_c8;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_cc = 1;
  }
  else {
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_douyinURLShouldPreserveOriginalS_026adce8,local_c8);
    puVar3 = local_c8;
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_playwm,&cf_play);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
      local_d8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
                 puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 0;
        local_e8 = puVar3;
        _memset(auStack_138,0,0x40);
        puVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_queryItems_0269d820);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_170 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_188 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        if (local_188 != (undefined *)0x0) {
          lVar6 = *local_128;
          local_190 = (undefined *)0x0;
          do {
            do {
              if (*local_128 - lVar6 != 0) {
                _objc_enumerationMutation(*local_128 - lVar6,local_170);
              }
              uVar7 = *(ulong *)(local_130 + (long)local_190 * 8);
              local_f8 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if ((uVar4 & 1) == 0) {
                uVar4 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_name_0269d828);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar4);
                puVar3 = local_e8;
                if ((uVar7 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f8)
                  ;
                }
                else {
                  local_e9 = 1;
                  puVar1 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,
                             PTR_s_queryItemWithName_value__026aaf20,&cf_ratio,&cf_1080p);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                }
              }
              local_190 = local_190 + 1;
            } while (local_190 < local_188);
            local_188 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,
                       auStack_a8,0x10);
            local_190 = (undefined *)0x0;
          } while (local_188 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(local_170);
        local_1dc = 0;
        if ((local_e9 & 1) == 0) {
          puVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1dc = (uint)puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        puVar3 = local_e8;
        if ((local_1dc & 1) != 0) {
          puVar1 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,
                     PTR_s_queryItemWithName_value__026aaf20,&cf_ratio,&cf_1080p);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setQueryItems__026aaf28,local_e8);
        puVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_URL_026a1c90);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_URL_026a1c90);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_d8;
          local_d8 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        _objc_storeStrong(&local_e8,0);
      }
      puVar3 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      local_cc = 1;
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

