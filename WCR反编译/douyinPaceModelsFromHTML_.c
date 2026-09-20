// douyinPaceModelsFromHTML: @ 0101c90c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinPaceModelsFromHTML_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *local_438;
  undefined *local_430;
  uint local_3bc;
  undefined *local_388;
  undefined *local_380;
  ID local_348;
  ulong local_340;
  ulong local_338;
  undefined *local_330;
  ulong local_328;
  ulong local_320;
  undefined *local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  ulong local_2d0;
  undefined *local_2c8;
  byte local_2b9;
  ID local_2b8;
  byte local_2a9;
  undefined *local_2a8;
  byte local_299;
  ID local_298;
  undefined *local_290;
  long local_288;
  ID local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined4 local_1cc;
  undefined *local_1c8;
  SEL local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  long local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = (undefined *)0x0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  puVar1 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1cc = 1;
    local_1b0 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    local_1d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<script[_>__>___s_S____<_script>,
               1,0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar2;
    _memset(auStack_228,0,0x40);
    puVar2 = local_1c8;
    puVar1 = local_1e0;
    puVar3 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
    local_180 = 0;
    local_178 = 0;
    local_238 = 0;
    local_230 = puVar3;
    local_188 = puVar3;
    local_170 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_matchesInString_options_range__0269ef68,puVar2,0,0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_380 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_380 != (undefined *)0x0) {
      lVar8 = *local_218;
      local_388 = (undefined *)0x0;
      do {
        do {
          if (*local_218 - lVar8 != 0) {
            _objc_enumerationMutation(*local_218 - lVar8,puVar1);
          }
          puVar2 = local_1c8;
          uVar9 = *(undefined8 *)(local_220 + (long)local_388 * 8);
          puVar3 = PTR_s_rangeAtIndex__0269ef20;
          local_1e8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_rangeAtIndex__0269ef20,1);
          local_250 = uVar9;
          local_248 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_substringWithRange__0269d138,uVar9,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_240 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_258 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar2 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_258,PTR_s_hasPrefix__0269d320,&cf_self___pace_f_push_);
          if ((((ulong)puVar2 & 1) == 0) &&
             (puVar2 = local_258,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_258,PTR_s_hasPrefix__0269d320,&cf_window___pace_f_push_),
             ((ulong)puVar2 & 1) == 0)) {
            local_1cc = 3;
          }
          else {
            puVar2 = local_258;
            puVar6 = PTR_s_rangeOfString__0269d838;
            (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_rangeOfString__0269d838,&cf__);
            puVar3 = local_258;
            puVar7 = PTR_s_rangeOfString_options__0269d118;
            local_268 = puVar2;
            local_260 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_258,PTR_s_rangeOfString_options__0269d118,&cf__,4);
            IVar4 = local_1b8;
            local_278 = puVar3;
            local_270 = puVar7;
            if (puVar3 != (undefined *)0x7fffffffffffffff) {
              local_138 = local_268;
              local_130 = local_260;
              if (local_268 + (long)local_260 < puVar3) {
                local_148 = local_268;
                local_140 = local_260;
                local_290 = local_268 + (long)local_260;
                local_158 = local_268;
                local_150 = local_260;
                local_288 = (long)puVar3 - (long)(local_268 + (long)local_260);
                puVar2 = local_258;
                local_1a8 = local_288;
                local_1a0 = local_290;
                local_198 = local_290;
                local_190 = local_288;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_substringWithRange__0269d138,local_290,local_288);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_JSONObjectFromString__026adcc0);
                _objc_retainAutoreleasedReturnValue();
                local_280 = IVar4;
                (*(code *)PTR__objc_release_02578630)(puVar2);
                IVar4 = local_280;
                puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
                local_299 = 0;
                local_2a9 = 0;
                local_2b9 = 0;
                local_3bc = 1;
                if ((IVar4 & 1) != 0) {
                  IVar4 = local_280;
                  (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_count_0269cfe0);
                  local_3bc = 1;
                  if (IVar4 == 2) {
                    IVar4 = local_280;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_280,PTR_s_objectAtIndexedSubscript__0269cc78,0);
                    _objc_retainAutoreleasedReturnValue();
                    local_299 = 1;
                    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    local_298 = IVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
                    _objc_retainAutoreleasedReturnValue();
                    local_2a9 = 1;
                    local_2a8 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqual__0269e9a8);
                    local_3bc = 1;
                    if ((IVar4 & 1) != 0) {
                      IVar4 = local_280;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_280,PTR_s_objectAtIndexedSubscript__0269cc78,1);
                      _objc_retainAutoreleasedReturnValue();
                      local_2b9 = 1;
                      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      local_2b8 = IVar4;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
                      local_3bc = (uint)IVar4 ^ 1;
                    }
                  }
                }
                if ((local_2b9 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_2b8);
                }
                if ((local_2a9 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_2a8);
                }
                if ((local_299 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_298);
                }
                puVar2 = local_1d8;
                if ((local_3bc & 1) == 0) {
                  IVar4 = local_280;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_280,PTR_s_objectAtIndexedSubscript__0269cc78,1);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendString__0269ccb0);
                  (*(code *)PTR__objc_release_02578630)(IVar4);
                  local_1cc = 0;
                }
                else {
                  local_1cc = 3;
                }
                _objc_storeStrong(&local_280,0);
                goto LAB_0101d08c;
              }
            }
            local_1cc = 3;
          }
LAB_0101d08c:
          _objc_storeStrong(&local_258);
          _objc_storeStrong(&local_240,0);
          local_388 = local_388 + 1;
        } while (local_388 < local_380);
        local_380 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,
                   0x10);
        local_388 = (undefined *)0x0;
      } while (local_380 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = puVar1;
    _memset(auStack_310,0,0x40);
    puVar1 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d8,PTR_s_componentsSeparatedByString__0269d3c0,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    local_430 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_430 != (undefined *)0x0) {
      lVar8 = *local_300;
      local_438 = (undefined *)0x0;
      do {
        do {
          if (*local_300 - lVar8 != 0) {
            _objc_enumerationMutation(*local_300 - lVar8,puVar1);
          }
          uVar10 = *(ulong *)(local_308 + (long)local_438 * 8);
          puVar2 = PTR_s_rangeOfString__0269d838;
          local_2d0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_rangeOfString__0269d838,&cf__);
          local_320 = uVar10;
          local_318 = puVar2;
          if ((uVar10 != 0x7fffffffffffffff) && (uVar10 != 0)) {
            uVar5 = local_2d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_substringToIndex__0269d6c0,uVar10)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            local_328 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_0123456789abcdefABCDEF);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_s_rangeOfCharacterFromSet__0269db68;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_338 = uVar5;
            local_330 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (uVar5 == 0x7fffffffffffffff) {
              local_168 = local_320;
              local_160 = local_318;
              uVar10 = local_2d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2d0,PTR_s_substringFromIndex__0269d120,local_318 + local_320);
              _objc_retainAutoreleasedReturnValue();
              local_340 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_hasPrefix__0269d320,&::cf__);
              if (((uVar10 & 1) == 0) &&
                 (uVar10 = local_340,
                 (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_hasPrefix__0269d320,&cf__),
                 (uVar10 & 1) == 0)) {
                local_1cc = 5;
              }
              else {
                IVar4 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_JSONObjectFromString__026adcc0,local_340);
                _objc_retainAutoreleasedReturnValue();
                local_348 = IVar4;
                if (IVar4 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_addObject__0269d180,IVar4);
                }
                _objc_storeStrong(&local_348,0);
                local_1cc = 0;
              }
              _objc_storeStrong(&local_340,0);
            }
            else {
              local_1cc = 5;
            }
            _objc_storeStrong(&local_328,0);
          }
          local_438 = local_438 + 1;
        } while (local_438 < local_430);
        local_430 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_128,
                   0x10);
        local_438 = (undefined *)0x0;
      } while (local_430 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_2c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar1;
    local_1cc = 1;
    _objc_storeStrong(&local_2c8);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
  }
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_1b0;
}

