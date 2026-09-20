// FUN_0028796c @ 0028796c

void FUN_0028796c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *local_670;
  undefined *local_668;
  undefined *local_630;
  undefined *local_570;
  undefined *local_550;
  ulong local_4e0;
  ulong local_4d8;
  undefined *local_478;
  undefined *local_470;
  undefined *local_448;
  undefined *local_430;
  undefined *local_418;
  ulong local_3d0;
  undefined1 auStack_3c8 [8];
  long local_3c0;
  long *local_3b8;
  ulong local_388;
  undefined *local_380;
  undefined *local_378;
  byte local_369;
  undefined *local_368;
  byte local_359;
  undefined *local_358;
  byte local_349;
  undefined *local_348;
  undefined *local_340;
  undefined *local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  undefined8 local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  undefined *local_298;
  undefined *local_290;
  undefined4 local_288;
  undefined4 local_284;
  code *local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined **local_260;
  undefined *local_258;
  undefined *local_240;
  undefined4 local_234;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_220 [128];
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_230 = (undefined *)0x0;
  _objc_storeStrong(&local_230,param_1);
  if (local_230 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_234 = 1;
    local_228 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_230;
    local_240 = puVar1;
    FUN_0027ac10(local_230,&cf_videoPlayDuration);
    puVar1 = local_240;
    ppuVar3 = &local_290;
    local_290 = PTR___NSConcreteStackBlock_02578660;
    local_288 = 0xc2000000;
    local_284 = 0;
    local_280 = FUN_0028d5fc;
    local_278 = &DAT_0257b538;
    local_268 = puVar2;
    local_258 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = puVar1;
    _objc_retainBlock();
    local_298 = (undefined *)0x0;
    puVar1 = local_230;
    local_260 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_valueForKey__0269d128,&cf_specsArray);
    _objc_retainAutoreleasedReturnValue();
    local_418 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_418 = *(undefined **)PTR____NSArray0___02578280;
    }
    local_40 = local_418;
    puVar2 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_valueForKey__0269d128,&cf_hdrSpecsArray);
    _objc_retainAutoreleasedReturnValue();
    local_430 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_430 = *(undefined **)PTR____NSArray0___02578280;
    }
    local_38 = local_430;
    puVar4 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_valueForKey__0269d128,&cf_hlsSpecsArray);
    _objc_retainAutoreleasedReturnValue();
    local_448 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_448 = *(undefined **)PTR____NSArray0___02578280;
    }
    local_30 = local_448;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_298;
    local_298 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_2e8,0,0x40);
    puVar1 = local_298;
    (*(code *)PTR__objc_retain_02578638)();
    local_470 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_c0,0x10);
    if (local_470 != (undefined *)0x0) {
      lVar12 = *local_2d8;
      local_478 = (undefined *)0x0;
      do {
        do {
          if (*local_2d8 - lVar12 != 0) {
            _objc_enumerationMutation(*local_2d8 - lVar12,puVar1);
          }
          uVar13 = *(ulong *)(local_2e0 + (long)local_478 * 8);
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_2a8 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar13 & 1) != 0) {
            _memset(auStack_330,0,0x40);
            uVar13 = local_2a8;
            (*(code *)PTR__objc_retain_02578638)();
            local_4d8 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar13,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,
                       auStack_140,0x10);
            if (local_4d8 != 0) {
              lVar14 = *local_320;
              local_4e0 = 0;
              do {
                do {
                  if (*local_320 - lVar14 != 0) {
                    _objc_enumerationMutation(*local_320 - lVar14,uVar13);
                  }
                  local_2f0 = *(undefined8 *)(local_328 + local_4e0 * 8);
                  (*(code *)local_260[2])(local_260,local_2f0);
                  local_4e0 = local_4e0 + 1;
                } while (local_4e0 < local_4d8);
                local_4d8 = uVar13;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar13,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,
                           auStack_140,0x10);
                local_4e0 = 0;
              } while (local_4d8 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar13);
          }
          local_478 = local_478 + 1;
        } while (local_478 < local_470);
        local_470 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_c0,
                   0x10);
        local_478 = (undefined *)0x0;
      } while (local_470 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = local_230;
      FUN_00289698();
      _objc_retainAutoreleasedReturnValue();
      local_338 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_quality);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar1 != (undefined *)0x0) {
        local_1a0 = &cf_quality;
        puVar1 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_198 = &cf_width;
        puVar2 = local_338;
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_349 = 0;
        local_550 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_550 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_348 = local_550;
        }
        local_168 = local_550;
        local_190 = &cf_height;
        puVar4 = local_338;
        local_349 = puVar2 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_359 = 0;
        local_570 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          local_570 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_358 = local_570;
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_160 = local_570;
        local_188 = &cf_score;
        puVar5 = local_338;
        local_359 = puVar4 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar7 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar9,PTR_s_numberWithUnsignedLongLong__0269d7f8,(long)puVar6 * (long)puVar8);
        _objc_retainAutoreleasedReturnValue();
        local_180 = &cf_level;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_158 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_178 = &cf_h265;
        puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_150 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_148 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_170,&local_1a0,6);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_340 = puVar11;
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if ((local_359 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_358);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if ((local_349 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_348);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar1 != (undefined *)0x0) {
          puVar1 = local_338;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_340,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_size);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        puVar1 = local_338;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_338,PTR_s_objectForKeyedSubscript__0269d098,&cf_bitrate);
        _objc_retainAutoreleasedReturnValue();
        local_369 = 0;
        local_630 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          local_630 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_368 = local_630;
        }
        local_369 = puVar1 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_340,PTR_s_setObject_forKeyedSubscript__0269d248,local_630,&cf_bitRate);
        if ((local_369 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_368);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_340);
        _objc_storeStrong(&local_340,0);
      }
      _objc_storeStrong(&local_338,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_240,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_0257b568);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_378 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_380 = puVar2;
    _memset(auStack_3c8,0,0x40);
    puVar1 = local_240;
    (*(code *)PTR__objc_retain_02578638)();
    local_668 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c8,auStack_220,0x10);
    if (local_668 != (undefined *)0x0) {
      lVar12 = *local_3b8;
      local_670 = (undefined *)0x0;
      do {
        do {
          if (*local_3b8 - lVar12 != 0) {
            _objc_enumerationMutation(*local_3b8 - lVar12,puVar1);
          }
          uVar13 = *(ulong *)(local_3c0 + (long)local_670 * 8);
          local_388 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_quality);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_3d0 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar13 & 1) == 0) ||
             (uVar13 = local_3d0,
             (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_length_0269cca0), uVar13 == 0)) {
            local_234 = 8;
          }
          else {
            puVar2 = local_380;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_380,PTR_s_containsObject__0269cbb8,local_3d0);
            if (((ulong)puVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_addObject__0269d180,local_3d0);
              (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_addObject__0269d180,local_388);
              local_234 = 0;
            }
            else {
              local_234 = 8;
            }
          }
          _objc_storeStrong(&local_3d0,0);
          local_670 = local_670 + 1;
        } while (local_670 < local_668);
        local_668 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c8,auStack_220,
                   0x10);
        local_670 = (undefined *)0x0;
      } while (local_668 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_378;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = puVar1;
    local_234 = 1;
    _objc_storeStrong(&local_380);
    _objc_storeStrong(&local_378,0);
    _objc_storeStrong(&local_298,0);
    _objc_storeStrong(&local_260,0);
    _objc_storeStrong(&local_270,0);
    _objc_storeStrong(&local_240,0);
  }
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_228);
  return;
}

