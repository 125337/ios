// keywordAlertMatchRangesInContent:keyword: @ 00f9e6e4

/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::keywordAlertMatchRangesInContent_keyword_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *local_380;
  undefined *local_368;
  undefined *local_310;
  undefined *local_308;
  cfstringStruct *local_290;
  undefined *local_240;
  undefined *puStack_238;
  undefined *local_230;
  cfstringStruct *local_228;
  undefined *local_220;
  long local_218;
  undefined *local_210;
  long local_208;
  undefined *local_200;
  long local_1f8;
  undefined *local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  long local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  long local_170;
  ID local_168;
  bool local_159;
  cfstringStruct *local_158;
  byte local_149;
  undefined *local_148;
  cfstringStruct *local_140;
  undefined4 local_134;
  cfstringStruct *local_130;
  undefined *local_128;
  SEL local_120;
  ID local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_128 = (undefined *)0x0;
  local_120 = param_2;
  local_118 = param_1;
  _objc_storeStrong(&local_128,param_3);
  local_130 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_130,param_4);
  puVar3 = local_128;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar3 & 1) == 0) ||
     (puVar3 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
     pcVar4 = local_130, puVar3 == (undefined *)0x0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_134 = 1;
    local_110 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_290 = local_130;
    local_149 = 0;
    local_159 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_290 = &::cf___;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_290,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_158 = local_290;
    }
    local_159 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = local_290;
    if ((local_159 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    pcVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_134 = 1;
      local_110 = puVar3;
    }
    else {
      IVar5 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_keywordAlertRegexPatternFromKeyw_026acd78,local_140);
      _objc_retainAutoreleasedReturnValue();
      local_168 = IVar5;
      if ((IVar5 == 0) &&
         (pcVar4 = local_140,
         (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_containsString__0269d0b0,&cf__),
         ((ulong)pcVar4 & 1) != 0)) {
        _objc_storeStrong(&local_168,local_140);
      }
      if (local_168 == 0) {
        puVar3 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_368 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_368 = local_128;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_220 = local_368;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar4 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_380 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_380 = local_140;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_228 = local_380;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puStack_238 = local_128;
        local_230 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
        local_e0 = 0;
        local_d8 = 0;
        local_240 = (undefined *)0x0;
        local_e8 = puStack_238;
        local_d0 = puStack_238;
        while (((puVar3 = local_128,
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
                local_240 < puVar3 &&
                (puVar2 = local_220, puVar7 = PTR_s_rangeOfString_options_range__0269d130,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_220,PTR_s_rangeOfString_options_range__0269d130,local_228,0,
                           local_240,puStack_238), puVar3 = local_230,
                puVar2 != (undefined *)0x7fffffffffffffff)) && (puVar7 != (undefined *)0x0))) {
          puVar8 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,puVar2,puVar7
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          local_240 = puVar2 + (long)puVar7;
          puVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          if (puVar3 <= local_240) break;
          puStack_238 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          puStack_238 = puStack_238 + -(long)local_240;
          local_108 = puStack_238;
          local_100 = local_240;
          local_f8 = local_240;
          local_f0 = puStack_238;
        }
        puVar3 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_copy_0269d150);
        local_134 = 1;
        local_110 = puVar3;
        _objc_storeStrong(&local_230);
        _objc_storeStrong(&local_228,0);
        _objc_storeStrong(&local_220,0);
      }
      else {
        IVar5 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
        if (IVar5 == 0) {
          puVar3 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_134 = 1;
          local_110 = puVar3;
        }
        else {
          IVar5 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_keywordAlertPatternLooksOverEsca_026acd80,local_168);
          if ((IVar5 & 1) != 0) {
            IVar6 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_keywordAlertCollapseOverEscapedP_026acd88,local_168);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = local_168;
            local_168 = IVar6;
            (*(code *)PTR__objc_release_02578630)(IVar5);
          }
          local_170 = 0;
          local_180 = 0;
          puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                     PTR_s_regularExpressionWithPattern_opt_0269ef10,local_168,1,&local_180);
          _objc_retainAutoreleasedReturnValue();
          _objc_storeStrong(&local_170,local_180);
          puVar3 = local_128;
          local_178 = puVar2;
          if ((puVar2 == (undefined *)0x0) || (local_170 != 0)) {
            puVar3 = *(undefined **)PTR____NSArray0___02578280;
            (*(code *)PTR__objc_retain_02578638)();
            local_134 = 1;
            local_110 = puVar3;
          }
          else {
            puVar7 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
            local_c0 = 0;
            local_b8 = 0;
            local_198 = 0;
            local_190 = puVar7;
            local_c8 = puVar7;
            local_b0 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_matchesInString_options_range__0269ef68,puVar3,0,0,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            local_188 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,puVar2);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = puVar3;
            _memset(auStack_1e8,0,0x40);
            puVar3 = local_188;
            (*(code *)PTR__objc_retain_02578638)();
            local_308 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8
                       ,0x10);
            if (local_308 != (undefined *)0x0) {
              lVar9 = *local_1d8;
              local_310 = (undefined *)0x0;
              do {
                do {
                  if (*local_1d8 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_1d8 - lVar9,puVar3);
                  }
                  lVar10 = *(long *)(local_1e0 + (long)local_310 * 8);
                  puVar2 = PTR_s_range_0269ef50;
                  local_1a8 = lVar10;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_1f8 = lVar10;
                  local_1f0 = puVar2;
                  if ((lVar10 != 0x7fffffffffffffff) &&
                     (lVar10 = local_1a8, puVar8 = PTR_s_range_0269ef50,
                     (*(code *)PTR__objc_msgSend_02578628)(), puVar7 = local_1a0,
                     puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0, local_208 = lVar10,
                     local_200 = puVar8, puVar8 != (undefined *)0x0)) {
                    lVar10 = local_1a8;
                    puVar8 = PTR_s_range_0269ef50;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_218 = lVar10;
                    local_210 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar2,PTR_s_valueWithRange__026acdb0,lVar10,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                  }
                  local_310 = local_310 + 1;
                } while (local_310 < local_308);
                local_308 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                           auStack_a8,0x10);
                local_310 = (undefined *)0x0;
              } while (local_308 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
            local_134 = 1;
            local_110 = puVar3;
            _objc_storeStrong(&local_1a0);
            _objc_storeStrong(&local_188,0);
          }
          _objc_storeStrong(&local_178);
          _objc_storeStrong(&local_170,0);
        }
      }
      _objc_storeStrong(&local_168,0);
    }
    _objc_storeStrong(&local_140,0);
  }
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_110;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

