// FUN_01055a08 @ 01055a08

/* WARNING: Type propagation algorithm not settling */

void FUN_01055a08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong local_8b8;
  undefined *local_890;
  undefined *local_888;
  undefined *local_860;
  cfstringStruct *local_800;
  ulong local_7f8;
  ulong local_7f0;
  uint local_78c;
  ulong local_780;
  ulong local_768;
  ulong local_738;
  ulong local_730;
  ulong local_708;
  uint local_6a4;
  undefined *local_680;
  undefined *local_678;
  undefined *local_650;
  undefined *local_620;
  undefined *local_600;
  cfstringStruct *local_5f0;
  cfstringStruct *local_5e0;
  cfstringStruct *local_5d0;
  undefined *local_590;
  undefined *local_578;
  undefined *local_560;
  undefined *local_540;
  undefined4 local_538;
  undefined4 local_534;
  code *local_530;
  undefined *local_528;
  undefined *local_520;
  undefined8 local_518;
  bool local_509;
  ulong local_508;
  ulong local_500;
  undefined1 auStack_4f8 [8];
  long local_4f0;
  long *local_4e8;
  ulong local_4b8;
  undefined *local_4b0;
  bool local_4a1;
  undefined *local_4a0;
  undefined *local_498;
  bool local_489;
  cfstringStruct *local_488;
  cfstringStruct *local_480;
  ulong local_478;
  ulong local_470;
  ulong local_468;
  ulong local_460;
  undefined1 *local_458;
  undefined *local_450;
  undefined1 *local_448;
  undefined *local_440;
  undefined8 local_438;
  ulong local_430;
  undefined1 *local_428;
  undefined1 *local_420;
  ulong local_418;
  ulong local_410;
  byte local_401;
  ulong local_400;
  bool local_3f1;
  ulong local_3f0;
  ulong local_3e8;
  byte local_3d9;
  ulong local_3d8;
  byte local_3c9;
  ulong local_3c8;
  ulong local_3c0;
  undefined1 auStack_3b8 [8];
  long local_3b0;
  long *local_3a8;
  ulong local_378;
  byte local_369;
  ulong local_368;
  byte local_359;
  ulong local_358;
  ulong local_350;
  byte local_341;
  ulong local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  ulong local_2f8;
  undefined *local_2f0;
  bool local_2e1;
  undefined *local_2e0;
  undefined *local_2d8;
  byte local_2c9;
  undefined *local_2c8;
  byte local_2b9;
  undefined *local_2b8;
  byte local_2a9;
  undefined *local_2a8;
  byte local_299;
  undefined *local_298;
  byte local_289;
  undefined *local_288;
  byte local_279;
  undefined *local_278;
  undefined *local_270;
  int local_264;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined8 local_240;
  bool local_231;
  undefined *local_230;
  undefined *local_228;
  bool local_219;
  undefined *local_218;
  undefined *local_210;
  bool local_201;
  undefined *local_200;
  undefined *local_1f8;
  long local_1f0;
  long local_1e8 [4];
  ulong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e8[2] = 0;
  local_1e8[3] = param_1;
  _objc_storeStrong(local_1e8 + 2);
  local_1e8[1] = 0;
  _objc_storeStrong(local_1e8 + 1,param_3);
  local_1e8[0] = 0;
  _objc_storeStrong(local_1e8,param_4);
  lVar9 = local_1e8[2];
  local_1f0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_1e8[2],PTR_s_length_0269cca0);
  local_201 = false;
  if (lVar9 == 0) {
    local_560 = (undefined *)0x0;
  }
  else {
    local_560 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_1e8[2],0,0);
    _objc_retainAutoreleasedReturnValue();
    local_200 = local_560;
  }
  local_201 = lVar9 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1f8 = local_560;
  if ((local_201 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_200);
  }
  puVar2 = local_1f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_tweet)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_219 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_578 = (undefined *)0x0;
  }
  else {
    local_578 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_tweet);
    _objc_retainAutoreleasedReturnValue();
    local_218 = local_578;
  }
  local_219 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = local_578;
  if ((local_219 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_218);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_210;
  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_media)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_231 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_590 = (undefined *)0x0;
  }
  else {
    local_590 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_media);
    _objc_retainAutoreleasedReturnValue();
    local_230 = local_590;
  }
  local_231 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = local_590;
  if ((local_231 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_230);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((local_1e8[0] == 0) && (local_210 != (undefined *)0x0)) && (local_228 != (undefined *)0x0)) {
    puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
    local_270 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,4);
    local_5d0 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_5d0 == (cfstringStruct *)0x0) {
      local_5d0 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setSourceURL__026addf0,local_5d0);
    local_5e0 = *(cfstringStruct **)(param_1 + 0x28);
    if (local_5e0 == (cfstringStruct *)0x0) {
      local_5f0 = *(cfstringStruct **)(param_1 + 0x20);
      if (local_5f0 == (cfstringStruct *)0x0) {
        local_5f0 = &cf___;
      }
      local_5e0 = local_5f0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setResolvedURL__026addf8,local_5e0);
    puVar2 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_279 = 0;
    local_289 = 0;
    local_600 = local_210;
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_raw_text);
      _objc_retainAutoreleasedReturnValue();
      local_289 = 1;
      local_288 = local_600;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      local_279 = 1;
      local_278 = local_600;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setTitle__0269cef0,local_600);
    if ((local_289 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_288);
    }
    if ((local_279 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_278);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_299 = 0;
    local_2a9 = 0;
    local_2b9 = 0;
    local_2c9 = 0;
    local_620 = local_210;
    if (((ulong)puVar6 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
      _objc_retainAutoreleasedReturnValue();
      local_2b9 = 1;
      local_2b8 = local_620;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_2c9 = 1;
      local_2c8 = local_620;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
      _objc_retainAutoreleasedReturnValue();
      local_299 = 1;
      local_298 = local_620;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_2a9 = 1;
      local_2a8 = local_620;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setAuthor__026adda8,local_620);
    if ((local_2c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2c8);
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
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_228;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_228,PTR_s_objectForKeyedSubscript__0269d098,&cf_videos);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_2e1 = false;
    bVar1 = ((ulong)puVar4 & 1) == 0;
    if (bVar1) {
      local_650 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_650 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_228,PTR_s_objectForKeyedSubscript__0269d098,&cf_videos);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = local_650;
    }
    local_2e1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d8 = local_650;
    if ((local_2e1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2e0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2f0 = puVar2;
    _memset(auStack_338,0,0x40);
    puVar2 = local_2d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_678 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_a8,0x10);
    if (local_678 != (undefined *)0x0) {
      lVar9 = *local_328;
      local_680 = (undefined *)0x0;
      do {
        do {
          if (*local_328 - lVar9 != 0) {
            _objc_enumerationMutation(*local_328 - lVar9,puVar2);
          }
          uVar10 = *(ulong *)(local_330 + (long)local_680 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_2f8 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar10 & 1) != 0) {
            puVar3 = local_270;
            (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_coverURL_026ad9a8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_341 = 0;
            local_6a4 = 0;
            if (puVar4 == (undefined *)0x0) {
              uVar10 = local_2f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_thumbnail_url);
              _objc_retainAutoreleasedReturnValue();
              local_341 = 1;
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_340 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
              local_6a4 = (uint)uVar10;
            }
            if ((local_341 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_340);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if ((local_6a4 & 1) != 0) {
              uVar10 = local_2f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_thumbnail_url);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setCoverURL__026add60);
              (*(code *)PTR__objc_release_02578630)(uVar10);
            }
            uVar5 = *(undefined8 *)(param_1 + 0x38);
            uVar10 = local_2f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration_millis);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_applyDurationFromValue_toResult__026addb8,uVar10,local_270,
                       0xffffffffffffffff);
            (*(code *)PTR__objc_release_02578630)(uVar10);
            uVar5 = *(undefined8 *)(param_1 + 0x38);
            uVar10 = local_2f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_applyDurationFromValue_toResult__026addb8,uVar10,local_270,0);
            (*(code *)PTR__objc_release_02578630)(uVar10);
            uVar10 = local_2f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_formats);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            uVar12 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_359 = 0;
            local_369 = 0;
            local_708 = local_2f8;
            if ((uVar12 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_variants);
              _objc_retainAutoreleasedReturnValue();
              local_369 = 1;
              local_368 = local_708;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_formats);
              _objc_retainAutoreleasedReturnValue();
              local_359 = 1;
              local_358 = local_708;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_350 = local_708;
            if ((local_369 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_368);
            }
            if ((local_359 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_358);
            }
            (*(code *)PTR__objc_release_02578630)(uVar10);
            _memset(auStack_3b8,0,0x40);
            uVar10 = local_350;
            (*(code *)PTR__objc_retain_02578638)();
            local_730 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b8,
                       auStack_128,0x10);
            if (local_730 != 0) {
              lVar11 = *local_3a8;
              local_738 = 0;
              do {
                do {
                  if (*local_3a8 - lVar11 != 0) {
                    _objc_enumerationMutation(*local_3a8 - lVar11,uVar10);
                  }
                  uVar12 = *(ulong *)(local_3b0 + local_738 * 8);
                  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_378 = uVar12;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar3)
                  ;
                  if ((uVar12 & 1) != 0) {
                    uVar12 = local_378;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_378,PTR_s_objectForKeyedSubscript__0269d098,&cf_container);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    uVar7 = uVar12;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar12,PTR_s_isKindOfClass__0269cd68,puVar3);
                    local_3c9 = 0;
                    local_3d9 = 0;
                    local_768 = local_378;
                    if ((uVar7 & 1) == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_378,PTR_s_objectForKeyedSubscript__0269d098,&cf_content_type)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      local_3d9 = 1;
                      local_3d8 = local_768;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_378,PTR_s_objectForKeyedSubscript__0269d098,&cf_container);
                      _objc_retainAutoreleasedReturnValue();
                      local_3c9 = 1;
                      local_3c8 = local_768;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_3c0 = local_768;
                    if ((local_3d9 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_3d8);
                    }
                    if ((local_3c9 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_3c8);
                    }
                    (*(code *)PTR__objc_release_02578630)(uVar12);
                    uVar12 = local_378;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_378,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    uVar7 = uVar12;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar12,PTR_s_isKindOfClass__0269cd68,puVar3);
                    local_3f1 = false;
                    bVar1 = (uVar7 & 1) == 0;
                    if (bVar1) {
                      local_780 = 0;
                    }
                    else {
                      local_780 = local_378;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_378,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
                      _objc_retainAutoreleasedReturnValue();
                      local_3f0 = local_780;
                    }
                    local_3f1 = !bVar1;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_3e8 = local_780;
                    if ((local_3f1 & 1U) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_3f0);
                    }
                    (*(code *)PTR__objc_release_02578630)(uVar12);
                    uVar12 = local_3e8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_length_0269cca0);
                    local_401 = 0;
                    local_78c = 1;
                    if (uVar12 != 0) {
                      uVar12 = local_3c0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_3c0,PTR_s_lowercaseString_0269d9c0);
                      _objc_retainAutoreleasedReturnValue();
                      local_401 = 1;
                      local_400 = uVar12;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      local_78c = (uint)uVar12 ^ 1;
                    }
                    if ((local_401 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_400);
                    }
                    if ((local_78c & 1) == 0) {
                      local_410 = 0;
                      local_418 = 0;
                      puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf____d__x__d___,0
                                 ,0);
                      _objc_retainAutoreleasedReturnValue();
                      uVar12 = local_3e8;
                      uVar7 = local_3e8;
                      local_420 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)(local_3e8,PTR_s_length_0269cca0);
                      local_1c0 = 0;
                      local_1b8 = 0;
                      local_438 = 0;
                      local_430 = uVar7;
                      local_1c8 = uVar7;
                      local_1b0 = uVar7;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,uVar12,0,0,
                                 uVar7);
                      _objc_retainAutoreleasedReturnValue();
                      local_428 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18);
                      uVar12 = local_3e8;
                      if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar3) {
                        puVar8 = local_428;
                        puVar3 = PTR_s_rangeAtIndex__0269ef20;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_428,PTR_s_rangeAtIndex__0269ef20,1);
                        local_448 = puVar8;
                        local_440 = puVar3;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar12,PTR_s_substringWithRange__0269d138,puVar8,puVar3);
                        _objc_retainAutoreleasedReturnValue();
                        uVar7 = uVar12;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        local_410 = uVar7;
                        (*(code *)PTR__objc_release_02578630)(uVar12);
                        uVar12 = local_3e8;
                        puVar8 = local_428;
                        puVar3 = PTR_s_rangeAtIndex__0269ef20;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_428,PTR_s_rangeAtIndex__0269ef20,2);
                        local_458 = puVar8;
                        local_450 = puVar3;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar12,PTR_s_substringWithRange__0269d138,puVar8,puVar3);
                        _objc_retainAutoreleasedReturnValue();
                        uVar7 = uVar12;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        local_418 = uVar7;
                        (*(code *)PTR__objc_release_02578630)(uVar12);
                      }
                      if (((long)local_410 < 1) || ((long)local_418 < 1)) {
                        local_7f8 = 0;
                      }
                      else {
                        local_468 = local_410;
                        local_470 = local_418;
                        if ((long)local_410 < (long)local_418) {
                          local_7f0 = local_410;
                        }
                        else {
                          local_7f0 = local_418;
                        }
                        local_478 = local_7f0;
                        local_7f8 = local_7f0;
                      }
                      local_460 = local_7f8;
                      local_489 = false;
                      if ((long)local_7f8 < 1) {
                        local_800 = &cf__;
                      }
                      else {
                        local_800 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,
                                   PTR_s_stringWithFormat__0269cca8,&cf__ldp);
                        _objc_retainAutoreleasedReturnValue();
                        local_488 = local_800;
                      }
                      local_489 = (long)local_7f8 >= 1;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_480 = local_800;
                      if ((local_489 & 1U) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_488);
                      }
                      uVar13 = *(undefined8 *)(param_1 + 0x38);
                      uVar5 = *(undefined8 *)(param_1 + 0x38);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar5,PTR_s_variantWithURL_label_width_heigh_026addc8,local_3e8,
                                 local_480,local_410,local_418,0);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar13,PTR_s_appendUniqueVariant_to__026addd0,uVar5,local_2f0);
                      (*(code *)PTR__objc_release_02578630)(uVar5);
                      _objc_storeStrong(&local_480);
                      _objc_storeStrong(&local_428,0);
                      _objc_storeStrong(&local_420,0);
                      local_264 = 0;
                    }
                    else {
                      local_264 = 5;
                    }
                    _objc_storeStrong(&local_3e8);
                    _objc_storeStrong(&local_3c0,0);
                  }
                  local_738 = local_738 + 1;
                } while (local_738 < local_730);
                local_730 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b8,
                           auStack_128,0x10);
                local_738 = 0;
              } while (local_730 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar10);
            _objc_storeStrong(&local_350,0);
          }
          local_680 = local_680 + 1;
        } while (local_680 < local_678);
        local_678 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_a8,
                   0x10);
        local_680 = (undefined *)0x0;
      } while (local_678 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2f0,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02584990);
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setVideoVariants__026add50,local_2f0);
    puVar2 = local_2f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setVideoURL__026adbb0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_228,PTR_s_objectForKeyedSubscript__0269d098,&cf_photos);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_4a1 = false;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_860 = *(undefined **)PTR____NSArray0___02578280;
      }
      else {
        local_860 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_228,PTR_s_objectForKeyedSubscript__0269d098,&cf_photos);
        _objc_retainAutoreleasedReturnValue();
        local_4a0 = local_860;
      }
      local_4a1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_498 = local_860;
      if ((local_4a1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_4a0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_4b0 = puVar2;
      _memset(auStack_4f8,0,0x40);
      puVar2 = local_498;
      (*(code *)PTR__objc_retain_02578638)();
      local_888 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f8,auStack_1a8,0x10
                );
      if (local_888 != (undefined *)0x0) {
        lVar9 = *local_4e8;
        local_890 = (undefined *)0x0;
        do {
          do {
            if (*local_4e8 - lVar9 != 0) {
              _objc_enumerationMutation(*local_4e8 - lVar9,puVar2);
            }
            uVar12 = *(ulong *)(local_4f0 + (long)local_890 * 8);
            local_4b8 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            uVar10 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_509 = false;
            bVar1 = (uVar10 & 1) == 0;
            if (bVar1) {
              local_8b8 = 0;
            }
            else {
              local_8b8 = local_4b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              local_508 = local_8b8;
            }
            local_509 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_500 = local_8b8;
            if ((local_509 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_508);
            }
            (*(code *)PTR__objc_release_02578630)(uVar12);
            uVar10 = local_500;
            (*(code *)PTR__objc_msgSend_02578628)(local_500,PTR_s_length_0269cca0);
            if ((uVar10 != 0) &&
               (puVar3 = local_4b0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_4b0,PTR_s_containsObject__0269cbb8,local_500),
               ((ulong)puVar3 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_addObject__0269d180,local_500);
            }
            _objc_storeStrong(&local_500,0);
            local_890 = local_890 + 1;
          } while (local_890 < local_888);
          local_888 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f8,auStack_1a8,
                     0x10);
          local_890 = (undefined *)0x0;
        } while (local_888 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_setImageURLs__026add68,local_4b0);
      puVar2 = local_4b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_270,PTR_s_setIsImageNote__026adad0,puVar2 != (undefined *)0x0);
      _objc_storeStrong(&local_4b0);
      _objc_storeStrong(&local_498,0);
    }
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_540 = PTR___NSConcreteStackBlock_02578660;
    local_538 = 0xc2000000;
    local_534 = 0;
    local_530 = FUN_01057d54;
    local_528 = &DAT_0257ca68;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_270;
    local_518 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_520 = puVar3;
    _dispatch_async(puVar2,&local_540);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_520);
    _objc_storeStrong(&local_518,0);
    _objc_storeStrong(&local_2f0,0);
    _objc_storeStrong(&local_2d8,0);
    _objc_storeStrong(&local_270,0);
    local_264 = 0;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_260 = PTR___NSConcreteStackBlock_02578660;
    local_258 = 0xc2000000;
    local_254 = 0;
    local_250 = FUN_01057a9c;
    local_248 = &DAT_025814c8;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_240 = uVar5;
    _dispatch_async(puVar2,&local_260);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_264 = 1;
    _objc_storeStrong(&local_240,0);
  }
  _objc_storeStrong(&local_228);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_1f8,0);
  if (local_264 == 0) {
    local_264 = 0;
  }
  _objc_storeStrong(local_1e8);
  _objc_storeStrong(local_1e8 + 1,0);
  _objc_storeStrong(local_1e8 + 2,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

