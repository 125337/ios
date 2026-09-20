// fillInstagramResult:fromJSON: @ 0105f540

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::fillInstagramResult_fromJSON_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_7e8;
  undefined *local_7e0;
  undefined *local_788;
  undefined *local_780;
  undefined *local_750;
  undefined *local_740;
  undefined *local_728;
  undefined *local_718;
  undefined *local_6b8;
  undefined *local_6a8;
  undefined *local_698;
  uint local_64c;
  undefined *local_640;
  undefined *local_630;
  undefined *local_5d0;
  undefined *local_5b8;
  cfstringStruct *local_5a0;
  ulong local_598;
  ulong local_540;
  undefined *local_510;
  undefined *local_508;
  undefined *local_4f0;
  undefined *local_4d8;
  undefined1 auStack_4a0 [8];
  long local_498;
  long *local_490;
  ulong local_460;
  undefined1 auStack_458 [8];
  long local_450;
  long *local_448;
  ulong local_418;
  byte local_409;
  undefined *local_408;
  byte local_3f9;
  undefined *local_3f8;
  byte local_3e9;
  undefined *local_3e8;
  undefined *local_3e0;
  byte local_3d1;
  undefined *local_3d0;
  byte local_3c1;
  undefined *local_3c0;
  byte local_3b1;
  undefined *local_3b0;
  undefined *local_3a8;
  bool local_399;
  undefined *local_398;
  byte local_389;
  undefined *local_388;
  byte local_379;
  undefined *local_378;
  undefined *local_370;
  byte local_361;
  undefined *local_360;
  byte local_351;
  undefined *local_350;
  undefined *local_348;
  undefined *local_340;
  byte local_331;
  undefined *local_330;
  undefined *local_328;
  bool local_319;
  undefined *local_318;
  undefined *local_310;
  byte local_301;
  undefined *local_300;
  bool local_2f1;
  undefined *local_2f0;
  undefined *local_2e8;
  bool local_2d9;
  undefined *local_2d8;
  undefined *local_2d0;
  byte local_2c1;
  cfstringStruct *local_2c0;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_298;
  bool local_289;
  ulong local_288;
  ulong local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  bool local_229;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  SEL local_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e8 = 0;
  local_1e0 = param_2;
  local_1d8 = (undefined *)param_1;
  _objc_storeStrong(&local_1e8,param_3);
  local_1f0 = 0;
  _objc_storeStrong(&local_1f0,param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_1f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1f8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_200 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_208 = puVar2;
  do {
    puVar2 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_200,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02584af0
                );
      puVar2 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_count_0269cfe0);
      if (puVar2 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setVideoVariants__026add50,local_200);
        puVar2 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setVideoURL__026adbb0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      lVar10 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar10);
      if (lVar9 == 0) {
        puVar2 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
        if (puVar2 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setImageURLs__026add68,local_208);
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setIsImageNote__026adad0,1);
        }
      }
      else {
        lVar10 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_coverURL_026ad9a8);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = false;
        if (lVar9 == 0) {
          puVar2 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
          bVar1 = puVar2 != (undefined *)0x0;
        }
        (*(code *)PTR__objc_release_02578630)(lVar10);
        if (bVar1) {
          puVar2 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setCoverURL__026add60);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1d8,PTR_s_normalizeVideoVersusCover__026adff8,local_1e8);
      _objc_storeStrong(&local_208);
      _objc_storeStrong(&local_200,0);
      _objc_storeStrong(&local_1f8,0);
      _objc_storeStrong(&local_1f0,0);
      _objc_storeStrong(&local_1e8,0);
      if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
    }
    puVar2 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_removeLastObject_0269e830);
    puVar2 = local_210;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar3 = local_210;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar3 & 1) != 0) {
        _memset(auStack_4a0,0,0x40);
        puVar2 = local_210;
        (*(code *)PTR__objc_retain_02578638)();
        local_7e0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,auStack_1d0,
                   0x10);
        if (local_7e0 != (undefined *)0x0) {
          lVar10 = *local_490;
          local_7e8 = (undefined *)0x0;
          do {
            do {
              if (*local_490 - lVar10 != 0) {
                _objc_enumerationMutation(*local_490 - lVar10,puVar2);
              }
              uVar12 = *(ulong *)(local_498 + (long)local_7e8 * 8);
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_460 = uVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar3);
              uVar11 = local_460;
              if ((uVar12 & 1) == 0) {
                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
                if ((uVar11 & 1) != 0) goto LAB_010612f0;
              }
              else {
LAB_010612f0:
                (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_460)
                ;
              }
              local_7e8 = local_7e8 + 1;
            } while (local_7e8 < local_7e0);
            local_7e0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,
                       auStack_1d0,0x10);
            local_7e8 = (undefined *)0x0;
          } while (local_7e0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_218 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_versions);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_229 = false;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_4d8 = (undefined *)0x0;
      }
      else {
        local_4d8 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_versions);
        _objc_retainAutoreleasedReturnValue();
        local_228 = local_4d8;
      }
      local_229 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_220 = local_4d8;
      if ((local_229 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_228);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _memset(auStack_278,0,0x40);
      if (local_220 == (undefined *)0x0) {
        local_4f0 = *(undefined **)PTR____NSArray0___02578280;
      }
      else {
        local_4f0 = local_220;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_508 = local_4f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4f0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,
                 0x10);
      if (local_508 != (undefined *)0x0) {
        lVar10 = *local_268;
        local_510 = (undefined *)0x0;
        do {
          do {
            if (*local_268 - lVar10 != 0) {
              _objc_enumerationMutation(*local_268 - lVar10,local_4f0);
            }
            uVar11 = *(ulong *)(local_270 + (long)local_510 * 8);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_238 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar11 & 1) != 0) {
              uVar11 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              uVar12 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
              local_289 = false;
              bVar1 = (uVar12 & 1) == 0;
              if (bVar1) {
                local_540 = 0;
              }
              else {
                local_540 = local_238;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
                _objc_retainAutoreleasedReturnValue();
                local_288 = local_540;
              }
              local_289 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_280 = local_540;
              if ((local_289 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_288);
              }
              (*(code *)PTR__objc_release_02578630)(uVar11);
              uVar11 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              FUN_01034e28();
              (*(code *)PTR__objc_release_02578630)(uVar11);
              uVar11 = local_238;
              local_298 = uVar12;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              FUN_01034e28();
              (*(code *)PTR__objc_release_02578630)(uVar11);
              puVar2 = local_1d8;
              uVar11 = local_280;
              local_2c1 = 0;
              local_2a0 = uVar12;
              if ((long)uVar12 < 1) {
                local_5a0 = &::cf__;
              }
              else {
                local_2a8 = local_298;
                local_598 = uVar12;
                if ((long)local_298 < (long)uVar12) {
                  local_598 = local_298;
                }
                local_2b8 = local_598;
                local_5a0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                local_2b0 = uVar12;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf__ldp);
                _objc_retainAutoreleasedReturnValue();
                local_2c1 = 1;
                local_2c0 = local_5a0;
              }
              puVar3 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_variantWithURL_label_width_heigh_026addc8,uVar11,local_5a0,
                         local_298,local_2a0,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_appendUniqueVariant_to__026addd0,puVar3,local_200);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if ((local_2c1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2c0);
              }
              _objc_storeStrong(&local_280,0);
            }
            local_510 = local_510 + 1;
          } while (local_510 < local_508);
          local_508 = local_4f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_4f0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                     auStack_a8,0x10);
          local_510 = (undefined *)0x0;
        } while (local_508 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(local_4f0);
      puVar2 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_url);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_2d9 = false;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_5b8 = (undefined *)0x0;
      }
      else {
        local_5b8 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_url);
        _objc_retainAutoreleasedReturnValue();
        local_2d8 = local_5b8;
      }
      local_2d9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_2d0 = local_5b8;
      if ((local_2d9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2d8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_dimensions);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_2f1 = false;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_5d0 = (undefined *)0x0;
      }
      else {
        local_5d0 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_dimensions);
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = local_5d0;
      }
      local_2f1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_2e8 = local_5d0;
      if ((local_2f1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2f0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar4 = local_2d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_length_0269cca0);
      puVar3 = local_1d8;
      puVar2 = local_2d0;
      if (puVar4 != (undefined *)0x0) {
        puVar4 = local_2e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        FUN_01034e28();
        puVar6 = local_2e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        FUN_01034e28();
        puVar8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_variantWithURL_label_width_heigh_026addc8,puVar2,&::cf__,puVar5,
                   puVar7,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_appendUniqueVariant_to__026addd0,puVar8,local_200);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar2 = local_1d8;
      puVar3 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_duration);
      _objc_retainAutoreleasedReturnValue();
      local_301 = 0;
      local_630 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_630 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoDuration);
        _objc_retainAutoreleasedReturnValue();
        local_300 = local_630;
      }
      local_301 = puVar3 == (undefined *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_applyDurationFromValue_toResult__026addb8,local_630,local_1e8,0);
      if ((local_301 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_300);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_image_versions2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_319 = false;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_640 = (undefined *)0x0;
      }
      else {
        local_640 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_image_versions2);
        _objc_retainAutoreleasedReturnValue();
        local_318 = local_640;
      }
      local_319 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_310 = local_640;
      if ((local_319 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_318);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_1d8;
      puVar3 = local_310;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_candidates);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_bestURLFromList_preferBest__026ae018,puVar3,1);
      _objc_retainAutoreleasedReturnValue();
      local_328 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_328;
      (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_length_0269cca0);
      local_331 = 0;
      local_64c = 0;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_display_url);
        _objc_retainAutoreleasedReturnValue();
        local_331 = 1;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_330 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_64c = (uint)puVar2;
      }
      if ((local_331 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_330);
      }
      if ((local_64c & 1) != 0) {
        puVar3 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_display_url);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_328;
        local_328 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_328;
      (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_length_0269cca0);
      if ((puVar2 != (undefined *)0x0) &&
         (puVar2 = local_208,
         (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_containsObject__0269cbb8,local_328),
         ((ulong)puVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_addObject__0269d180,local_328);
      }
      lVar10 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar10);
      if (lVar9 == 0) {
        puVar2 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_caption);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_340 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_351 = 0;
        local_361 = 0;
        if (((ulong)puVar2 & 1) == 0) {
LAB_01060624:
          puVar2 = local_340;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)puVar2 & 1) == 0) {
            local_6a8 = (undefined *)0x0;
          }
          else {
            local_6a8 = local_340;
          }
          local_698 = local_6a8;
        }
        else {
          puVar2 = local_340;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_340,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          local_351 = 1;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_350 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)puVar2 & 1) == 0) goto LAB_01060624;
          local_698 = local_340;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_340,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          local_361 = 1;
          local_360 = local_698;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_348 = local_698;
        if ((local_361 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_360);
        }
        if ((local_351 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_350);
        }
        puVar3 = local_348;
        (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_length_0269cca0);
        local_6b8 = local_1d8;
        puVar2 = local_218;
        local_379 = 0;
        local_389 = 0;
        local_399 = false;
        if (puVar3 != (undefined *)0x0) {
          local_6b8 = (undefined *)0x0;
        }
        else {
          local_d0 = &cf_edge_media_to_caption;
          local_c8 = &cf_edges;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_379 = 1;
          local_b8 = &cf_node;
          local_b0 = &cf_text;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_378 = puVar4;
          local_c0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_d0,5);
          _objc_retainAutoreleasedReturnValue();
          local_389 = 1;
          local_388 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_6b8,PTR_s_deepValue_path__026ae010,puVar2);
          _objc_retainAutoreleasedReturnValue();
          local_398 = local_6b8;
        }
        local_399 = puVar3 == (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_370 = local_6b8;
        if ((local_399 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_398);
        }
        if ((local_389 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_388);
        }
        if ((local_379 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_378);
        }
        puVar2 = local_370;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          _objc_storeStrong(&local_348,local_370);
        }
        puVar2 = local_348;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setTitle__0269cef0,local_348);
        }
        _objc_storeStrong(&local_370);
        _objc_storeStrong(&local_348,0);
        _objc_storeStrong(&local_340,0);
      }
      lVar10 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_author_026ad9a0);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar10);
      if (lVar9 == 0) {
        puVar2 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_user);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_3b1 = 0;
        local_3c1 = 0;
        local_3d1 = 0;
        if (((ulong)puVar4 & 1) == 0) {
          puVar3 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_owner);
          _objc_retainAutoreleasedReturnValue();
          local_3c1 = 1;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_3c0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            local_728 = (undefined *)0x0;
          }
          else {
            local_728 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_owner);
            _objc_retainAutoreleasedReturnValue();
            local_3d1 = 1;
            local_3d0 = local_728;
          }
          local_718 = local_728;
        }
        else {
          local_718 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_objectForKeyedSubscript__0269d098,&cf_user);
          _objc_retainAutoreleasedReturnValue();
          local_3b1 = 1;
          local_3b0 = local_718;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_3a8 = local_718;
        if ((local_3d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3d0);
        }
        if ((local_3c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3c0);
        }
        if ((local_3b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3b0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_3a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_full_name);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_3e9 = 0;
        local_3f9 = 0;
        local_409 = 0;
        if (((ulong)puVar4 & 1) == 0) {
          puVar3 = local_3a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_username);
          _objc_retainAutoreleasedReturnValue();
          local_3f9 = 1;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_3f8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            local_750 = (undefined *)0x0;
          }
          else {
            local_750 = local_3a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_username);
            _objc_retainAutoreleasedReturnValue();
            local_409 = 1;
            local_408 = local_750;
          }
          local_740 = local_750;
        }
        else {
          local_740 = local_3a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_full_name);
          _objc_retainAutoreleasedReturnValue();
          local_3e9 = 1;
          local_3e8 = local_740;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_3e0 = local_740;
        if ((local_409 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_408);
        }
        if ((local_3f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3f8);
        }
        if ((local_3e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_3e8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_3e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_3e0,PTR_s_length_0269cca0);
        if (puVar2 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setAuthor__026adda8,local_3e0);
        }
        _objc_storeStrong(&local_3e0);
        _objc_storeStrong(&local_3a8,0);
      }
      _memset(auStack_458,0,0x40);
      puVar2 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      local_780 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_780 != (undefined *)0x0) {
        lVar10 = *local_448;
        local_788 = (undefined *)0x0;
        do {
          do {
            if (*local_448 - lVar10 != 0) {
              _objc_enumerationMutation(*local_448 - lVar10,puVar2);
            }
            uVar12 = *(ulong *)(local_450 + (long)local_788 * 8);
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_418 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar11 = local_418;
            if ((uVar12 & 1) == 0) {
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((uVar11 & 1) != 0) goto LAB_01061078;
            }
            else {
LAB_01061078:
              (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_418);
            }
            local_788 = local_788 + 1;
          } while (local_788 < local_780);
          local_780 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_458,auStack_150,
                     0x10);
          local_788 = (undefined *)0x0;
        } while (local_780 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_328);
      _objc_storeStrong(&local_310,0);
      _objc_storeStrong(&local_2e8,0);
      _objc_storeStrong(&local_2d0,0);
      _objc_storeStrong(&local_220,0);
      _objc_storeStrong(&local_218,0);
    }
    _objc_storeStrong(&local_210,0);
  } while( true );
}

