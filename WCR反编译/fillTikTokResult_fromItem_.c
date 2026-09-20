// fillTikTokResult:fromItem: @ 01059a7c

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::fillTikTokResult_fromItem_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  ulong uVar11;
  ID local_860;
  cfstringStruct *local_818;
  cfstringStruct *local_810;
  cfstringStruct *local_7f8;
  cfstringStruct *local_7e0;
  cfstringStruct *local_7d0;
  cfstringStruct *local_7c0;
  cfstringStruct *local_7b0;
  cfstringStruct *local_7a0;
  cfstringStruct *local_790;
  cfstringStruct *local_780;
  cfstringStruct *local_758;
  cfstringStruct *local_750;
  cfstringStruct *local_700;
  cfstringStruct *local_6d8;
  cfstringStruct *local_698;
  cfstringStruct *local_680;
  cfstringStruct *local_668;
  cfstringStruct *local_650;
  cfstringStruct *local_638;
  cfstringStruct *local_628;
  cfstringStruct *local_610;
  cfstringStruct *local_600;
  cfstringStruct *local_5f0;
  cfstringStruct *local_5d0;
  cfstringStruct *local_5c0;
  cfstringStruct *local_590;
  cfstringStruct *local_588;
  cfstringStruct *local_560;
  cfstringStruct *local_548;
  cfstringStruct *local_530;
  cfstringStruct *local_518;
  cfstringStruct *local_508;
  cfstringStruct *local_4e8;
  ID local_4c8;
  byte local_4b9;
  ID local_4b8;
  ID local_4b0;
  undefined1 auStack_4a8 [8];
  long local_4a0;
  long *local_498;
  ID local_468;
  undefined *local_460;
  byte local_451;
  cfstringStruct *local_450;
  byte local_441;
  cfstringStruct *local_440;
  cfstringStruct *local_438;
  bool local_429;
  cfstringStruct *local_428;
  byte local_419;
  cfstringStruct *local_418;
  byte local_409;
  cfstringStruct *local_408;
  byte local_3f9;
  cfstringStruct *local_3f8;
  bool local_3e9;
  cfstringStruct *local_3e8;
  byte local_3d9;
  cfstringStruct *local_3d8;
  byte local_3c9;
  cfstringStruct *local_3c8;
  byte local_3b9;
  cfstringStruct *local_3b8;
  byte local_3a9;
  cfstringStruct *local_3a8;
  cfstringStruct *local_3a0;
  cfstringStruct *local_398;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  cfstringStruct *local_380;
  byte local_371;
  cfstringStruct *local_370;
  ID local_368;
  byte local_359;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  byte local_341;
  cfstringStruct *local_340;
  byte local_331;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  bool local_301;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  byte local_2e9;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  byte local_2d1;
  cfstringStruct *local_2d0;
  byte local_2c1;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  byte local_2a9;
  cfstringStruct *local_2a8;
  byte local_299;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  byte local_281;
  cfstringStruct *local_280;
  ID local_278;
  byte local_269;
  cfstringStruct *local_268;
  byte local_259;
  cfstringStruct *local_258;
  byte local_249;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  cfstringStruct *local_1f8;
  bool local_1e9;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  undefined *local_1d8;
  bool local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  bool local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  bool local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  byte local_181;
  cfstringStruct *local_180;
  bool local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined4 local_15c;
  cfstringStruct *local_158;
  undefined8 local_150;
  SEL local_148;
  ID local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = 0;
  local_148 = param_2;
  local_140 = param_1;
  _objc_storeStrong(&local_150,param_3);
  local_158 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_158,param_4);
  pcVar3 = local_158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_15c = 1;
  }
  else {
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_171 = false;
    bVar1 = ((ulong)pcVar10 & 1) == 0;
    if (bVar1) {
      local_4e8 = (cfstringStruct *)0x0;
    }
    else {
      local_4e8 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
      _objc_retainAutoreleasedReturnValue();
      local_170 = local_4e8;
    }
    local_171 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = local_4e8;
    if ((local_171 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_170);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    IVar5 = local_140;
    pcVar3 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
    _objc_retainAutoreleasedReturnValue();
    local_181 = 0;
    local_508 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_508 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_duration);
      _objc_retainAutoreleasedReturnValue();
      local_180 = local_508;
    }
    local_181 = pcVar3 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_applyDurationFromValue_toResult__026addb8,local_508,local_150,
               &DAT_00002710);
    if ((local_181 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_180);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_199 = false;
    bVar1 = ((ulong)pcVar10 & 1) == 0;
    if (bVar1) {
      local_518 = (cfstringStruct *)0x0;
    }
    else {
      local_518 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
      _objc_retainAutoreleasedReturnValue();
      local_198 = local_518;
    }
    local_199 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = local_518;
    if ((local_199 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_198);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_music);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_1b1 = false;
    bVar1 = ((ulong)pcVar10 & 1) == 0;
    if (bVar1) {
      local_530 = (cfstringStruct *)0x0;
    }
    else {
      local_530 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_music);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = local_530;
    }
    local_1b1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = local_530;
    if ((local_1b1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePost);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_1c9 = false;
    bVar1 = ((ulong)pcVar10 & 1) == 0;
    if (bVar1) {
      local_548 = (cfstringStruct *)0x0;
    }
    else {
      local_548 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePost);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = local_548;
    }
    local_1c9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = local_548;
    if ((local_1c9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_168;
    local_1d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_bitrateInfo);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_1e9 = false;
    bVar1 = ((ulong)pcVar10 & 1) == 0;
    if (bVar1) {
      local_560 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    else {
      local_560 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_bitrateInfo);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = local_560;
    }
    local_1e9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = local_560;
    if ((local_1e9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1e8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _memset(auStack_238,0,0x40);
    pcVar3 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_588 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10);
    if (local_588 != (cfstringStruct *)0x0) {
      lVar9 = *local_228;
      local_590 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_228 - lVar9 != 0) {
            _objc_enumerationMutation(*local_228 - lVar9,pcVar3);
          }
          pcVar10 = *(cfstringStruct **)(local_230 + (long)local_590 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_1f8 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)pcVar10 & 1) != 0) {
            pcVar10 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_PlayAddr);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            pcVar4 = pcVar10;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_249 = 0;
            local_259 = 0;
            local_269 = 0;
            if (((ulong)pcVar4 & 1) == 0) {
              pcVar4 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_playAddr);
              _objc_retainAutoreleasedReturnValue();
              local_259 = 1;
              puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_258 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((ulong)pcVar4 & 1) == 0) {
                local_5d0 = (cfstringStruct *)0x0;
              }
              else {
                local_5d0 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_playAddr);
                _objc_retainAutoreleasedReturnValue();
                local_269 = 1;
                local_268 = local_5d0;
              }
              local_5c0 = local_5d0;
            }
            else {
              local_5c0 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_PlayAddr);
              _objc_retainAutoreleasedReturnValue();
              local_249 = 1;
              local_248 = local_5c0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_240 = local_5c0;
            if ((local_269 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_268);
            }
            if ((local_259 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_258);
            }
            if ((local_249 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_248);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            IVar5 = local_140;
            pcVar10 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_UrlList);
            _objc_retainAutoreleasedReturnValue();
            local_281 = 0;
            local_5f0 = pcVar10;
            if (pcVar10 == (cfstringStruct *)0x0) {
              local_5f0 = local_240;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_urlList);
              _objc_retainAutoreleasedReturnValue();
              local_280 = local_5f0;
            }
            local_281 = pcVar10 == (cfstringStruct *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_tikTokBestCleanURLFromList__026ae0b0,local_5f0);
            _objc_retainAutoreleasedReturnValue();
            local_278 = IVar5;
            if ((local_281 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_280);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            IVar5 = local_278;
            (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_length_0269cca0);
            if (IVar5 == 0) {
              local_15c = 3;
            }
            else {
              pcVar10 = local_240;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_Width);
              _objc_retainAutoreleasedReturnValue();
              local_299 = 0;
              local_2a9 = 0;
              local_600 = pcVar10;
              if (pcVar10 == (cfstringStruct *)0x0) {
                local_610 = local_240;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
                _objc_retainAutoreleasedReturnValue();
                local_299 = 1;
                local_298 = local_610;
                if (local_610 == (cfstringStruct *)0x0) {
                  local_610 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
                  _objc_retainAutoreleasedReturnValue();
                  local_2a9 = 1;
                  local_2a8 = local_610;
                }
                local_600 = local_610;
              }
              FUN_01034e28();
              if ((local_2a9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2a8);
              }
              if ((local_299 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_298);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar10);
              pcVar10 = local_240;
              local_290 = local_600;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_Height);
              _objc_retainAutoreleasedReturnValue();
              local_2c1 = 0;
              local_2d1 = 0;
              local_628 = pcVar10;
              if (pcVar10 == (cfstringStruct *)0x0) {
                local_638 = local_240;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
                _objc_retainAutoreleasedReturnValue();
                local_2c1 = 1;
                local_2c0 = local_638;
                if (local_638 == (cfstringStruct *)0x0) {
                  local_638 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
                  _objc_retainAutoreleasedReturnValue();
                  local_2d1 = 1;
                  local_2d0 = local_638;
                }
                local_628 = local_638;
              }
              FUN_01034e28();
              if ((local_2d1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2d0);
              }
              if ((local_2c1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2c0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar10);
              pcVar10 = local_240;
              local_2b8 = local_628;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_DataSize);
              _objc_retainAutoreleasedReturnValue();
              local_2e9 = 0;
              local_650 = pcVar10;
              if (pcVar10 == (cfstringStruct *)0x0) {
                local_650 = local_240;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_240,PTR_s_objectForKeyedSubscript__0269d098,&cf_dataSize);
                _objc_retainAutoreleasedReturnValue();
                local_2e8 = local_650;
              }
              local_2e9 = pcVar10 == (cfstringStruct *)0x0;
              FUN_0105c170();
              if ((local_2e9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2e8);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar10);
              pcVar10 = local_1f8;
              local_2e0 = local_650;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_GearName);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar4 = pcVar10;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
              local_301 = false;
              bVar1 = ((ulong)pcVar4 & 1) == 0;
              if (bVar1) {
                local_668 = &::cf___;
              }
              else {
                local_668 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_GearName);
                _objc_retainAutoreleasedReturnValue();
                local_300 = local_668;
              }
              local_301 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_2f8 = local_668;
              if ((local_301 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_300);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar10);
              local_698 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              local_331 = 0;
              local_341 = 0;
              if ((long)local_2b8 < 1) {
                local_698 = &cf_e4lpS;
              }
              else {
                local_318 = local_290;
                local_320 = local_2b8;
                if ((long)local_290 < (long)local_2b8) {
                  local_680 = local_290;
                }
                else {
                  local_680 = local_2b8;
                }
                local_328 = local_680;
                pcVar10 = local_2f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_length_0269cca0);
                if (pcVar10 != (cfstringStruct *)0x0) {
                  pcVar10 = &::cf_space_s_;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (&::cf_space_s_,PTR_s_stringByAppendingString__0269d398,local_2f8);
                  _objc_retainAutoreleasedReturnValue();
                  local_331 = 1;
                  local_330 = pcVar10;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_698,PTR_s_stringWithFormat__0269cca8,&cf__ldp__);
                _objc_retainAutoreleasedReturnValue();
                local_341 = 1;
                local_340 = local_698;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_310 = local_698;
              if ((local_341 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_340);
              }
              if ((local_331 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_330);
              }
              IVar5 = local_140;
              IVar6 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_variantWithURL_label_width_heigh_026addc8,local_278,
                         local_310,local_290,local_2b8,local_2e0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar5,PTR_s_appendUniqueVariant_to__026addd0,IVar6,local_1d8);
              (*(code *)PTR__objc_release_02578630)(IVar6);
              _objc_storeStrong(&local_310);
              _objc_storeStrong(&local_2f8,0);
              local_15c = 0;
            }
            _objc_storeStrong(&local_278);
            _objc_storeStrong(&local_240,0);
          }
          local_590 = (cfstringStruct *)((long)&local_590->field0_0x0 + 1);
        } while (local_590 < local_588);
        local_588 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,
                   0x10);
        local_590 = (cfstringStruct *)0x0;
      } while (local_588 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_playAddr);
    _objc_retainAutoreleasedReturnValue();
    local_359 = 0;
    local_6d8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_6d8 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_playAddrH264);
      _objc_retainAutoreleasedReturnValue();
      local_358 = local_6d8;
    }
    local_359 = pcVar3 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_350 = local_6d8;
    if ((local_359 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_358);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_350;
    local_368 = 0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    IVar5 = local_140;
    if (((ulong)pcVar3 & 1) == 0) {
      IVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_tikTokBestCleanURLFromList__026ae0b0,local_350);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_368;
      local_368 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    else {
      pcVar3 = local_350;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_350,PTR_s_objectForKeyedSubscript__0269d098,&cf_urlList);
      _objc_retainAutoreleasedReturnValue();
      local_371 = 0;
      local_700 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_700 = local_350;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_350,PTR_s_objectForKeyedSubscript__0269d098,&cf_UrlList);
        _objc_retainAutoreleasedReturnValue();
        local_370 = local_700;
      }
      local_371 = pcVar3 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_tikTokBestCleanURLFromList__026ae0b0,local_700);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_368;
      local_368 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      if ((local_371 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_370);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar3;
    FUN_01034e28();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_168;
    local_380 = pcVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar3;
    FUN_01034e28();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    IVar7 = local_368;
    local_388 = pcVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_length_0269cca0);
    IVar6 = local_140;
    IVar5 = local_368;
    if (IVar7 != 0) {
      local_3a9 = 0;
      if ((long)local_388 < 1) {
        local_758 = &cf_e4lpS;
      }
      else {
        local_390 = local_380;
        local_398 = local_388;
        if ((long)local_380 < (long)local_388) {
          local_750 = local_380;
        }
        else {
          local_750 = local_388;
        }
        local_3a0 = local_750;
        local_758 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_3a9 = 1;
        local_3a8 = local_758;
      }
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_variantWithURL_label_width_heigh_026addc8,IVar5,local_758,local_380,
                 local_388,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_appendUniqueVariant_to__026addd0,IVar7,local_1d8);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      if ((local_3a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_3a8);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d8,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_025849e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setVideoVariants__026add50,local_1d8);
    puVar2 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setVideoURL__026adbb0);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_originCover);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_3b9 = 0;
    local_3c9 = 0;
    local_3d9 = 0;
    if (((ulong)pcVar10 & 1) == 0) {
      pcVar10 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
      _objc_retainAutoreleasedReturnValue();
      local_3c9 = 1;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_3c8 = pcVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar10 & 1) == 0) {
        local_790 = (cfstringStruct *)0x0;
      }
      else {
        local_790 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
        _objc_retainAutoreleasedReturnValue();
        local_3d9 = 1;
        local_3d8 = local_790;
      }
      local_780 = local_790;
    }
    else {
      local_780 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_originCover);
      _objc_retainAutoreleasedReturnValue();
      local_3b9 = 1;
      local_3b8 = local_780;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setCoverURL__026add60,local_780);
    if ((local_3d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_3d8);
    }
    if ((local_3c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_3c8);
    }
    if ((local_3b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_3b8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_desc);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_3e9 = false;
    bVar1 = ((ulong)pcVar10 & 1) == 0;
    if (bVar1) {
      local_7a0 = (cfstringStruct *)0x0;
    }
    else {
      local_7a0 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_desc);
      _objc_retainAutoreleasedReturnValue();
      local_3e8 = local_7a0;
    }
    local_3e9 = !bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setTitle__0269cef0,local_7a0);
    if ((local_3e9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_3e8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_3f9 = 0;
    local_409 = 0;
    local_419 = 0;
    if (((ulong)pcVar10 & 1) == 0) {
      pcVar10 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_uniqueId);
      _objc_retainAutoreleasedReturnValue();
      local_409 = 1;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_408 = pcVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar10 & 1) == 0) {
        local_7c0 = (cfstringStruct *)0x0;
      }
      else {
        local_7c0 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_uniqueId);
        _objc_retainAutoreleasedReturnValue();
        local_419 = 1;
        local_418 = local_7c0;
      }
      local_7b0 = local_7c0;
    }
    else {
      local_7b0 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
      _objc_retainAutoreleasedReturnValue();
      local_3f9 = 1;
      local_3f8 = local_7b0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setAuthor__026adda8,local_7b0);
    if ((local_419 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_418);
    }
    if ((local_409 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_408);
    }
    if ((local_3f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_3f8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_playUrl);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_429 = false;
    bVar1 = ((ulong)pcVar10 & 1) == 0;
    if (bVar1) {
      local_7d0 = (cfstringStruct *)0x0;
    }
    else {
      local_7d0 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_playUrl);
      _objc_retainAutoreleasedReturnValue();
      local_428 = local_7d0;
    }
    local_429 = !bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setAudioURL__026addb0,local_7d0);
    if ((local_429 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_428);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    pcVar10 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_441 = 0;
    local_451 = 0;
    if (((ulong)pcVar10 & 1) == 0) {
      local_7e0 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
      _objc_retainAutoreleasedReturnValue();
      local_451 = 1;
      local_450 = local_7e0;
    }
    else {
      local_7e0 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
      _objc_retainAutoreleasedReturnValue();
      local_441 = 1;
      local_440 = local_7e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_438 = local_7e0;
    if ((local_451 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_450);
    }
    if ((local_441 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_440);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_460 = puVar2;
    _memset(auStack_4a8,0,0x40);
    pcVar3 = local_438;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      local_7f8 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    else {
      local_7f8 = local_438;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_810 = local_7f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_7f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a8,auStack_128,
               0x10);
    if (local_810 != (cfstringStruct *)0x0) {
      lVar9 = *local_498;
      local_818 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_498 - lVar9 != 0) {
            _objc_enumerationMutation(*local_498 - lVar9,local_7f8);
          }
          uVar11 = *(ID *)(local_4a0 + (long)local_818 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_468 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
          IVar6 = local_140;
          IVar5 = local_468;
          if ((uVar11 & 1) != 0) {
            local_138 = &cf_imageURL;
            local_130 = &cf_urlList;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_138,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_deepValue_path__026ae010,IVar5);
            _objc_retainAutoreleasedReturnValue();
            local_4b9 = 0;
            local_860 = IVar6;
            if (IVar6 == 0) {
              local_860 = local_468;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_468,PTR_s_objectForKeyedSubscript__0269d098,&cf_urlList);
              _objc_retainAutoreleasedReturnValue();
              local_4b8 = local_860;
            }
            local_4b9 = IVar6 == 0;
            (*(code *)PTR__objc_retain_02578638)();
            local_4b0 = local_860;
            if ((local_4b9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_4b8);
            }
            (*(code *)PTR__objc_release_02578630)(IVar6);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            IVar5 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_bestURLFromList_preferBest__026ae018,local_4b0,1);
            _objc_retainAutoreleasedReturnValue();
            local_4c8 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
            if ((IVar5 != 0) &&
               (puVar2 = local_460,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_460,PTR_s_containsObject__0269cbb8,local_4c8),
               ((ulong)puVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_addObject__0269d180,local_4c8);
            }
            _objc_storeStrong(&local_4c8);
            _objc_storeStrong(&local_4b0,0);
          }
          local_818 = (cfstringStruct *)((long)&local_818->field0_0x0 + 1);
        } while (local_818 < local_810);
        local_810 = local_7f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_7f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a8,auStack_128
                   ,0x10);
        local_818 = (cfstringStruct *)0x0;
      } while (local_810 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(local_7f8);
    puVar2 = local_460;
    (*(code *)PTR__objc_msgSend_02578628)(local_460,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setVideoURL__026adbb0,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_setVideoVariants__026add50,
                 *(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setImageURLs__026add68,local_460);
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setIsImageNote__026adad0,1);
    }
    _objc_storeStrong(&local_460);
    _objc_storeStrong(&local_438,0);
    _objc_storeStrong(&local_368,0);
    _objc_storeStrong(&local_350,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_168,0);
    local_15c = 0;
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

