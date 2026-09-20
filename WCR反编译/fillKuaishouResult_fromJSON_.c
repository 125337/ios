// fillKuaishouResult:fromJSON: @ 010674d0

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::fillKuaishouResult_fromJSON_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  cfstringStruct *pcVar15;
  ulong uVar16;
  undefined *local_620;
  undefined *local_618;
  undefined *local_5c0;
  undefined *local_5b8;
  uint local_574;
  uint local_54c;
  undefined *local_540;
  undefined *local_530;
  cfstringStruct *local_4a8;
  cfstringStruct *local_4a0;
  cfstringStruct *local_490;
  cfstringStruct *local_440;
  undefined *local_410;
  undefined *local_408;
  undefined *local_3f0;
  undefined1 auStack_3b0 [8];
  long local_3a8;
  long *local_3a0;
  ulong local_370;
  undefined1 auStack_368 [8];
  long local_360;
  long *local_358;
  ulong local_328;
  byte local_319;
  undefined *local_318;
  byte local_309;
  undefined *local_308;
  cfstringStruct *local_300;
  bool local_2f1;
  undefined *local_2f0;
  undefined *local_2e8;
  byte local_2d9;
  undefined *local_2d8;
  byte local_2c9;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  byte local_2a1;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  byte local_279;
  cfstringStruct *local_278;
  byte local_269;
  cfstringStruct *local_268;
  byte local_259;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  bool local_241;
  undefined *local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  cfstringStruct *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  SEL local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = 0;
  local_1b8 = param_2;
  local_1b0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_1c0,param_3);
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_1c8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1d0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1d8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar5;
  do {
    puVar5 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1d8,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02584bd0
                );
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setVideoVariants__026add50,local_1d8);
      puVar5 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setVideoURL__026adbb0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      lVar14 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar14;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar14);
      if (lVar13 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setImageURLs__026add68,local_1e0);
        puVar5 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_setIsImageNote__026adad0,puVar5 != (undefined *)0x0);
      }
      else {
        puVar5 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setCoverURL__026add60);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_normalizeVideoVersusCover__026adff8,local_1c0);
      _objc_storeStrong(&local_1e0);
      _objc_storeStrong(&local_1d8,0);
      _objc_storeStrong(&local_1d0,0);
      _objc_storeStrong(&local_1c8,0);
      _objc_storeStrong(&local_1c0,0);
      if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
    }
    puVar5 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_removeLastObject_0269e830);
    puVar5 = local_1e8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    puVar6 = local_1e8;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar6 & 1) != 0) {
        _memset(auStack_3b0,0,0x40);
        puVar5 = local_1e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_618 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b0,auStack_1a8,
                   0x10);
        if (local_618 != (undefined *)0x0) {
          lVar14 = *local_3a0;
          local_620 = (undefined *)0x0;
          do {
            do {
              if (*local_3a0 - lVar14 != 0) {
                _objc_enumerationMutation(*local_3a0 - lVar14,puVar5);
              }
              uVar16 = *(ulong *)(local_3a8 + (long)local_620 * 8);
              puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_370 = uVar16;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar16,PTR_s_isKindOfClass__0269cd68,puVar6);
              uVar12 = local_370;
              if ((uVar16 & 1) == 0) {
                puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar6);
                if ((uVar12 & 1) != 0) goto LAB_01068878;
              }
              else {
LAB_01068878:
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_370)
                ;
              }
              local_620 = local_620 + 1;
            } while (local_620 < local_618);
            local_618 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b0,
                       auStack_1a8,0x10);
            local_620 = (undefined *)0x0;
          } while (local_618 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = puVar6;
      _memset(auStack_238,0,0x40);
      puVar5 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_representation);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar7 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_241 = false;
      bVar1 = ((ulong)puVar7 & 1) == 0;
      if (bVar1) {
        local_3f0 = *(undefined **)PTR____NSArray0___02578280;
      }
      else {
        local_3f0 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_representation);
        _objc_retainAutoreleasedReturnValue();
        local_240 = local_3f0;
      }
      local_241 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      if ((local_241 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_240);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_408 = local_3f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_3f0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,
                 0x10);
      if (local_408 != (undefined *)0x0) {
        lVar14 = *local_228;
        local_410 = (undefined *)0x0;
        do {
          do {
            if (*local_228 - lVar14 != 0) {
              _objc_enumerationMutation(*local_228 - lVar14,local_3f0);
            }
            pcVar15 = *(cfstringStruct **)(local_230 + (long)local_410 * 8);
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_1f8 = pcVar15;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar15,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((ulong)pcVar15 & 1) != 0) {
              pcVar15 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar8 = pcVar15;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar15,PTR_s_isKindOfClass__0269cd68,puVar5);
              local_440 = local_1b0;
              local_259 = 0;
              local_269 = 0;
              local_279 = 0;
              if (((ulong)pcVar8 & 1) == 0) {
                pcVar8 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_backupUrl);
                _objc_retainAutoreleasedReturnValue();
                local_269 = 1;
                local_268 = pcVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_440,PTR_s_bestURLFromList_preferBest__026ae018,pcVar8,1);
                _objc_retainAutoreleasedReturnValue();
                local_279 = 1;
                local_278 = local_440;
              }
              else {
                local_440 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
                _objc_retainAutoreleasedReturnValue();
                local_259 = 1;
                local_258 = local_440;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_250 = local_440;
              if ((local_279 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_278);
              }
              if ((local_269 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_268);
              }
              if ((local_259 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_258);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar15);
              pcVar15 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar15;
              FUN_01034e28();
              (*(code *)PTR__objc_release_02578630)(pcVar15);
              pcVar15 = local_1f8;
              local_288 = pcVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = pcVar15;
              FUN_01034e28();
              (*(code *)PTR__objc_release_02578630)(pcVar15);
              pcVar15 = local_1f8;
              local_290 = pcVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_qualityType);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar8 = pcVar15;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar15,PTR_s_isKindOfClass__0269cd68,puVar5);
              local_2a1 = 0;
              local_2c9 = 0;
              if (((ulong)pcVar8 & 1) == 0) {
                if ((long)local_290 < 1) {
                  local_4a8 = &::cf__;
                }
                else {
                  local_2b0 = local_288;
                  local_2b8 = local_290;
                  if ((long)local_288 < (long)local_290) {
                    local_4a0 = local_288;
                  }
                  else {
                    local_4a0 = local_290;
                  }
                  local_2c0 = local_4a0;
                  local_4a8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf__ldp);
                  _objc_retainAutoreleasedReturnValue();
                  local_2c9 = 1;
                  local_2c8 = local_4a8;
                }
                local_490 = local_4a8;
              }
              else {
                local_490 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_qualityType);
                _objc_retainAutoreleasedReturnValue();
                local_2a1 = 1;
                local_2a0 = local_490;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_298 = local_490;
              if ((local_2c9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2c8);
              }
              if ((local_2a1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2a0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar15);
              pcVar4 = local_1b0;
              pcVar3 = local_250;
              pcVar2 = local_288;
              pcVar8 = local_290;
              pcVar15 = local_298;
              pcVar9 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_fileSize);
              _objc_retainAutoreleasedReturnValue();
              pcVar10 = pcVar9;
              FUN_0105c170();
              pcVar11 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_variantWithURL_label_width_heigh_026addc8,pcVar3,pcVar15,
                         pcVar2,pcVar8,pcVar10);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_appendUniqueVariant_to__026addd0,pcVar11,local_1d8);
              (*(code *)PTR__objc_release_02578630)(pcVar11);
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              _objc_storeStrong(&local_298);
              _objc_storeStrong(&local_250,0);
            }
            local_410 = local_410 + 1;
          } while (local_410 < local_408);
          local_408 = local_3f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_3f0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                     auStack_a8,0x10);
          local_410 = (undefined *)0x0;
        } while (local_408 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(local_3f0);
      puVar5 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_representation);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar7 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      pcVar15 = local_1b0;
      if (((ulong)puVar7 & 1) != 0) {
        puVar5 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
        _objc_retainAutoreleasedReturnValue();
        local_2d9 = 0;
        local_530 = puVar5;
        if (puVar5 == (undefined *)0x0) {
          local_530 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_durationMs);
          _objc_retainAutoreleasedReturnValue();
          local_2d8 = local_530;
        }
        local_2d9 = puVar5 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar15,PTR_s_applyDurationFromValue_toResult__026addb8,local_530,local_1c0,
                   &DAT_00002710);
        if ((local_2d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2d8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar5 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_coverUrls);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar7 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_2f1 = false;
      bVar1 = ((ulong)puVar7 & 1) == 0;
      if (bVar1) {
        local_540 = (undefined *)0x0;
      }
      else {
        local_540 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_coverUrls);
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = local_540;
      }
      local_2f1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_2e8 = local_540;
      if ((local_2f1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2f0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      pcVar15 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_bestURLFromList_preferBest__026ae018,local_2e8,1);
      _objc_retainAutoreleasedReturnValue();
      local_300 = pcVar15;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar15,PTR_s_length_0269cca0);
      if ((pcVar15 != (cfstringStruct *)0x0) &&
         (puVar5 = local_1e0,
         (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_containsObject__0269cbb8,local_300),
         ((ulong)puVar5 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_300);
      }
      lVar14 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar14;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_309 = 0;
      local_54c = 0;
      if (lVar13 == 0) {
        puVar5 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_caption);
        _objc_retainAutoreleasedReturnValue();
        local_309 = 1;
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_308 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
        local_54c = (uint)puVar5;
      }
      if ((local_309 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_308);
      }
      (*(code *)PTR__objc_release_02578630)(lVar14);
      if ((local_54c & 1) != 0) {
        puVar5 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_caption);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setTitle__0269cef0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      lVar14 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_author_026ad9a0);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar14;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_319 = 0;
      local_574 = 0;
      if (lVar13 == 0) {
        puVar5 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
        _objc_retainAutoreleasedReturnValue();
        local_319 = 1;
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_318 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
        local_574 = (uint)puVar5;
      }
      if ((local_319 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_318);
      }
      (*(code *)PTR__objc_release_02578630)(lVar14);
      if ((local_574 & 1) != 0) {
        puVar5 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setAuthor__026adda8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      _memset(auStack_368,0,0x40);
      puVar5 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      local_5b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_5b8 != (undefined *)0x0) {
        lVar14 = *local_358;
        local_5c0 = (undefined *)0x0;
        do {
          do {
            if (*local_358 - lVar14 != 0) {
              _objc_enumerationMutation(*local_358 - lVar14,puVar5);
            }
            uVar16 = *(ulong *)(local_360 + (long)local_5c0 * 8);
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_328 = uVar16;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar16,PTR_s_isKindOfClass__0269cd68,puVar6);
            uVar12 = local_328;
            if ((uVar16 & 1) == 0) {
              puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar6);
              if ((uVar12 & 1) != 0) goto LAB_01068624;
            }
            else {
LAB_01068624:
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_328);
            }
            local_5c0 = local_5c0 + 1;
          } while (local_5c0 < local_5b8);
          local_5b8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_368,auStack_128,
                     0x10);
          local_5c0 = (undefined *)0x0;
        } while (local_5b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_300);
      _objc_storeStrong(&local_2e8,0);
      _objc_storeStrong(&local_1f0,0);
    }
    _objc_storeStrong(&local_1e8,0);
  } while( true );
}

