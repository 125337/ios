// douyinPlayURLsFromRenderedText: @ 010203c8

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinPlayURLsFromRenderedText_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_310;
  undefined *local_308;
  undefined *local_2c0;
  undefined *local_2b8;
  ID local_290;
  long local_288;
  undefined *local_280;
  ID local_278;
  long local_270;
  undefined *local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  long local_220;
  undefined8 local_218;
  ID local_210;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined4 local_194;
  ID local_190;
  undefined8 local_188;
  SEL local_180;
  ID local_178;
  undefined *local_170;
  ID local_168;
  undefined8 local_160;
  undefined8 local_158;
  ID local_150;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_188 = 0;
  local_180 = param_2;
  local_178 = param_1;
  _objc_storeStrong(&local_188,param_3);
  IVar1 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_178,PTR_s_unescapeDouyinRenderedText__026adcf0,local_188);
  _objc_retainAutoreleasedReturnValue();
  local_190 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_194 = 1;
    local_170 = puVar2;
  }
  else {
    local_48 = &cf_https___aweme__snssdk__com_aweme_v1_playwm_________s<>__;
    local_40 = &cf_https___www__iesdouyin__com_aweme_v1_playwm_________s<>__;
    local_38 = &cf_https___aweme__snssdk__com_aweme_v1_play_________s<>__;
    local_30 = &cf_https___www__iesdouyin__com_aweme_v1_play_________s<>__;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar2;
    _memset(auStack_1f8,0,0x40);
    puVar2 = local_1a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_c8,0x10);
    if (local_2b8 != (undefined *)0x0) {
      lVar6 = *local_1e8;
      local_2c0 = (undefined *)0x0;
      do {
        do {
          if (*local_1e8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar6,puVar2);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + (long)local_2c0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                     PTR_s_regularExpressionWithPattern_opt_0269ef10,local_1b8,1,0);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = local_190;
          IVar4 = local_190;
          local_200 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
          local_160 = 0;
          local_158 = 0;
          local_218 = 0;
          local_210 = IVar4;
          local_168 = IVar4;
          local_150 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_matchesInString_options_range__0269ef68,IVar1,0,0,IVar4);
          _objc_retainAutoreleasedReturnValue();
          local_208 = puVar3;
          _memset(auStack_260,0,0x40);
          puVar3 = local_208;
          (*(code *)PTR__objc_retain_02578638)();
          local_308 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_148,
                     0x10);
          if (local_308 != (undefined *)0x0) {
            lVar7 = *local_250;
            local_310 = (undefined *)0x0;
            do {
              do {
                if (*local_250 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_250 - lVar7,puVar3);
                }
                lVar8 = *(long *)(local_258 + (long)local_310 * 8);
                puVar5 = PTR_s_range_0269ef50;
                local_220 = lVar8;
                (*(code *)PTR__objc_msgSend_02578628)();
                IVar1 = local_190;
                local_270 = lVar8;
                local_268 = puVar5;
                if (lVar8 != 0x7fffffffffffffff) {
                  lVar8 = local_220;
                  puVar5 = PTR_s_range_0269ef50;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_288 = lVar8;
                  local_280 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar1,PTR_s_substringWithRange__0269d138,lVar8,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  local_278 = IVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar1,PTR_s_containsString__0269d0b0,&cf_video_id_https_);
                  if ((IVar1 & 1) == 0) {
                    IVar1 = local_178;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_normalizeDouyinPlayURL__026adcf8,local_278);
                    _objc_retainAutoreleasedReturnValue();
                    local_290 = IVar1;
                    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
                    if (((IVar1 == 0) ||
                        (IVar1 = local_178,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_178,PTR_s_URLLooksLikeAudioMediaURL__026add00,local_290),
                        (IVar1 & 1) != 0)) ||
                       (puVar5 = local_1b0,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_1b0,PTR_s_containsObject__0269cbb8,local_290),
                       ((ulong)puVar5 & 1) != 0)) {
                      local_194 = 5;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b0,PTR_s_addObject__0269d180,local_290);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1a8,PTR_s_addObject__0269d180,local_290);
                      local_194 = 0;
                    }
                    _objc_storeStrong(&local_290,0);
                  }
                  else {
                    local_194 = 5;
                  }
                  _objc_storeStrong(&local_278,0);
                }
                local_310 = local_310 + 1;
              } while (local_310 < local_308);
              local_308 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,
                         auStack_148,0x10);
              local_310 = (undefined *)0x0;
            } while (local_308 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_208);
          _objc_storeStrong(&local_200,0);
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_c8,
                   0x10);
        local_2c0 = (undefined *)0x0;
      } while (local_2b8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar2;
    local_194 = 1;
    _objc_storeStrong(&local_1b0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_1a0,0);
  }
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_188,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_170;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

