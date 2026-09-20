// highlightedContentForRecord:color:highlightColor:fontSize: @ 01b10158

/* Function Stack Size: 0x30 bytes */

ID WCRefineKeywordAlertHistoryCardViewController::
   highlightedContentForRecord_color_highlightColor_fontSize_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,double param_6)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *local_540;
  undefined *local_538;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined *local_478;
  undefined *local_470;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long *local_3c0;
  long local_390;
  undefined *local_388;
  undefined *puStack_380;
  undefined *local_378;
  undefined *local_370;
  undefined *local_368;
  undefined *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined8 local_348;
  undefined *local_340;
  undefined1 local_331;
  undefined *local_330;
  undefined *local_328;
  undefined1 auStack_320 [8];
  long local_318;
  long *local_310;
  undefined8 local_2e0;
  undefined *local_2d8;
  long local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  long local_288;
  undefined *local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  double local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined *local_240;
  SEL local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  long local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [128];
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_240 = (undefined *)0x0;
  local_238 = param_2;
  local_230 = (undefined *)param_1;
  _objc_storeStrong(&local_240,param_3);
  local_248 = 0;
  _objc_storeStrong(&local_248,param_4);
  local_250 = 0;
  _objc_storeStrong(&local_250,param_5);
  puVar3 = local_230;
  local_258 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_01b10f40();
  _objc_retainAutoreleasedReturnValue();
  local_260 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    puVar4 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_01b10f40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_260;
    local_260 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    _objc_storeStrong(&local_260,&cf_ecke);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_026cf238;
  _objc_alloc_init();
  local_268 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setLineBreakMode__026ca988,0);
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_268,PTR_s_setLineSpacing__026bb270)
  ;
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc();
  puVar3 = local_260;
  local_58 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  local_40 = local_248;
  local_50 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_258,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  local_48 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_02578088;
  local_30 = local_268;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_58,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithString_attributes__026a02b0,puVar3);
  local_270 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  local_278 = (undefined *)0x0;
  puVar3 = local_240;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar5 & 1) != 0) {
    puVar4 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_278;
    local_278 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_280 = puVar3;
  _memset(auStack_2c8,0,0x40);
  puVar3 = local_278;
  (*(code *)PTR__objc_retain_02578638)();
  local_470 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_d8,0x10);
  if (local_470 != (undefined *)0x0) {
    lVar8 = *local_2b8;
    local_478 = (undefined *)0x0;
    do {
      do {
        if (*local_2b8 - lVar8 != 0) {
          _objc_enumerationMutation(*local_2b8 - lVar8,puVar3);
        }
        lVar9 = *(long *)(local_2c0 + (long)local_478 * 8);
        local_288 = lVar9;
        FUN_01b0f0fc();
        _objc_retainAutoreleasedReturnValue();
        local_2d0 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
        if (lVar9 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_addObject__0269d180,local_2d0);
        }
        _objc_storeStrong(&local_2d0,0);
        local_478 = local_478 + 1;
      } while (local_478 < local_470);
      local_470 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_d8,0x10)
      ;
      local_478 = (undefined *)0x0;
    } while (local_470 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_240;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_01b0f0fc();
  _objc_retainAutoreleasedReturnValue();
  local_2d8 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_2d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_length_0269cca0);
  if ((puVar3 != (undefined *)0x0) &&
     (puVar3 = local_280,
     (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_containsObject__0269cbb8,local_2d8),
     ((ulong)puVar3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_addObject__0269d180,local_2d8);
  }
  _memset(auStack_320,0,0x40);
  puVar3 = local_280;
  (*(code *)PTR__objc_retain_02578638)();
  local_4b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,auStack_158,0x10);
  if (local_4b8 != (undefined *)0x0) {
    lVar8 = *local_310;
    local_4c0 = (undefined *)0x0;
    do {
      do {
        if (*local_310 - lVar8 != 0) {
          _objc_enumerationMutation(*local_310 - lVar8,puVar3);
        }
        local_2e0 = *(undefined8 *)(local_318 + (long)local_4c0 * 8);
        puVar4 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertMatchRangesInContent_026acda8,
                   local_260,local_2e0);
        _objc_retainAutoreleasedReturnValue();
        local_328 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
        local_331 = 0;
        bVar2 = false;
        uVar1 = puVar4 == (undefined *)0x0;
        if ((bool)uVar1) {
          puVar4 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertRegexPatternFromKeyw_026acd78,
                     local_2e0);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar4 == (undefined *)0x0;
          local_331 = uVar1;
          local_330 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          uVar1 = local_331;
        }
        local_331 = uVar1;
        if (bVar2) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = local_2e0;
          local_340 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_260;
          local_348 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_260;
          local_350 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
          local_200 = 0;
          local_1f8 = 0;
          local_360 = (undefined *)0x0;
          puStack_358 = puVar5;
          local_208 = puVar5;
          local_1f0 = puVar5;
          while ((puVar4 = local_360, puVar5 = local_260,
                 (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0),
                 puVar4 < puVar5 &&
                 (puVar5 = local_350, puVar6 = PTR_s_rangeOfString_options_range__0269d130,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_350,PTR_s_rangeOfString_options_range__0269d130,local_348,0,
                            local_360,puStack_358), puVar4 = local_340, local_370 = puVar5,
                 local_368 = puVar6, puVar5 != (undefined *)0x7fffffffffffffff))) {
            puVar7 = PTR__OBJC_CLASS___NSValue_026ce1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,puVar5,
                       puVar6);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            puVar4 = local_370 + (long)local_368;
            puVar5 = local_260;
            local_378 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
            puStack_380 = puVar5 + -(long)local_378;
            local_388 = puVar4;
            local_360 = puVar4;
            puStack_358 = puStack_380;
            local_228 = puStack_380;
            local_220 = puVar4;
            local_218 = puVar4;
            local_210 = puStack_380;
          }
          _objc_storeStrong(&local_328,local_340);
          _objc_storeStrong(&local_350);
          _objc_storeStrong(&local_348,0);
          _objc_storeStrong(&local_340,0);
        }
        _memset(auStack_3d0,0,0x40);
        puVar4 = local_328;
        (*(code *)PTR__objc_retain_02578638)();
        local_538 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,auStack_1d8,
                   0x10);
        if (local_538 != (undefined *)0x0) {
          lVar9 = *local_3c0;
          local_540 = (undefined *)0x0;
          do {
            do {
              if (*local_3c0 - lVar9 != 0) {
                _objc_enumerationMutation(*local_3c0 - lVar9,puVar4);
              }
              lVar10 = *(long *)(local_3c8 + (long)local_540 * 8);
              puVar5 = PTR_s_rangeValue_026ba098;
              local_390 = lVar10;
              (*(code *)PTR__objc_msgSend_02578628)();
              if ((lVar10 != 0x7fffffffffffffff) &&
                 (puVar6 = local_260, local_1e8 = lVar10, local_1e0 = puVar5,
                 (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0),
                 puVar5 + lVar10 <= puVar6)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_270,PTR_s_addAttribute_value_range__026a1d88,
                           *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070,local_250,
                           lVar10,puVar5);
                puVar6 = local_270;
                uVar11 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
                puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,*(undefined8 *)PTR__UIFontWeightBold_02578140,
                           PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60
                          );
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_addAttribute_value_range__026a1d88,uVar11,puVar7,lVar10,
                           puVar5);
                (*(code *)PTR__objc_release_02578630)(puVar7);
              }
              local_540 = local_540 + 1;
            } while (local_540 < local_538);
            local_538 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,
                       auStack_1d8,0x10);
            local_540 = (undefined *)0x0;
          } while (local_538 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_328,0);
        local_4c0 = local_4c0 + 1;
      } while (local_4c0 < local_4b8);
      local_4b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,auStack_158,0x10
                );
      local_4c0 = (undefined *)0x0;
    } while (local_4b8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_270;
  (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_2d8);
  _objc_storeStrong(&local_280,0);
  _objc_storeStrong(&local_278,0);
  _objc_storeStrong(&local_270,0);
  _objc_storeStrong(&local_268,0);
  _objc_storeStrong(&local_260,0);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar3;
}

