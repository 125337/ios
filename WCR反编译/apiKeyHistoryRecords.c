// apiKeyHistoryRecords @ 009c2450

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::apiKeyHistoryRecords(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *pcVar10;
  undefined1 *puVar11;
  ulong uVar12;
  cfstringStruct *pcVar13;
  cfstringStruct *pcVar14;
  cfstringStruct *pcVar15;
  cfstringStruct *pcVar16;
  cfstringStruct *pcVar17;
  cfstringStruct *pcVar18;
  cfstringStruct *pcVar19;
  undefined1 *puVar20;
  long lVar21;
  cfstringStruct *pcVar22;
  cfstringStruct *pcVar23;
  long lVar24;
  ulong uVar25;
  cfstringStruct *local_830;
  cfstringStruct *local_820;
  cfstringStruct *local_810;
  cfstringStruct *local_800;
  cfstringStruct *local_7f0;
  cfstringStruct *local_7e0;
  cfstringStruct *local_7d0;
  cfstringStruct *local_7c0;
  uint local_77c;
  undefined1 *local_760;
  undefined1 *local_758;
  cfstringStruct *local_710;
  cfstringStruct *local_708;
  undefined *local_6b8;
  undefined *local_6b0;
  cfstringStruct *local_688;
  cfstringStruct *local_670;
  undefined *local_618;
  undefined *local_610;
  undefined *local_5e0;
  long local_5c8;
  cfstringStruct *local_590;
  cfstringStruct *local_580;
  ulong local_570;
  ulong local_560;
  ulong local_550;
  undefined1 auStack_548 [8];
  long local_540;
  long *local_538;
  ulong local_508;
  byte local_4f9;
  cfstringStruct *local_4f8;
  undefined1 auStack_4f0 [8];
  long local_4e8;
  long *local_4e0;
  cfstringStruct *local_4b0;
  cfstringStruct *local_4a8;
  undefined1 auStack_4a0 [8];
  long local_498;
  long *local_490;
  undefined8 local_460;
  byte local_451;
  cfstringStruct *local_450;
  byte local_441;
  cfstringStruct *local_440;
  byte local_431;
  cfstringStruct *local_430;
  undefined *local_428;
  int local_41c;
  cfstringStruct *local_418;
  cfstringStruct *local_410;
  cfstringStruct *local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  cfstringStruct *local_3c0;
  undefined1 *local_3b8;
  bool local_3a9;
  undefined *local_3a8;
  undefined *local_3a0;
  byte local_391;
  long local_390;
  long local_388;
  int local_37c;
  long local_378;
  ID local_370;
  SEL local_368;
  cfstringStruct *local_360;
  undefined1 *local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 *local_340;
  long local_338;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  undefined1 auStack_290 [128];
  undefined1 auStack_210 [128];
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [128];
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_368 = param_2;
  local_360 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_keychainQueryForProviderID__026aade0,&cf___api_key_history_v1__);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_370 = IVar6;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_370,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,
             *(undefined8 *)PTR__kSecReturnData_025783a8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_370,PTR_s_setObject_forKeyedSubscript__0269d248,
             *(undefined8 *)PTR__kSecMatchLimitOne_02578398,
             *(undefined8 *)PTR__kSecMatchLimit_02578390);
  local_378 = 0;
  IVar6 = local_370;
  _SecItemCopyMatching(local_370,&local_378);
  local_5c8 = local_378;
  local_37c = (int)IVar6;
  local_391 = 0;
  if ((local_37c == 0) && (local_378 != 0)) {
    local_338 = local_378;
    _objc_autoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_391 = 1;
    local_390 = local_5c8;
  }
  else {
    local_5c8 = 0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_388 = local_5c8;
  if ((local_391 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_390);
  }
  lVar21 = local_388;
  (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_length_0269cca0);
  local_3a9 = false;
  if (lVar21 == 0) {
    local_5e0 = (undefined *)0x0;
  }
  else {
    local_5e0 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_388,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_3a8 = local_5e0;
  }
  local_3a9 = lVar21 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_3a0 = local_5e0;
  if ((local_3a9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_3a8);
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = local_3a0;
  puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_3b8 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar9);
  if (((ulong)puVar7 & 1) != 0) {
    _memset(auStack_400,0,0x40);
    puVar7 = local_3a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_610 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_a8,0x10);
    if (local_610 != (undefined *)0x0) {
      lVar21 = *local_3f0;
      local_618 = (undefined *)0x0;
      do {
        do {
          if (*local_3f0 - lVar21 != 0) {
            _objc_enumerationMutation(*local_3f0 - lVar21,puVar7);
          }
          pcVar22 = *(cfstringStruct **)(local_3f8 + (long)local_618 * 8);
          puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_3c0 = pcVar22;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar22,PTR_s_isKindOfClass__0269cd68,puVar8);
          if (((ulong)pcVar22 & 1) != 0) {
            pcVar22 = local_3c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerID);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar22;
            FUN_009af3fc();
            _objc_retainAutoreleasedReturnValue();
            local_408 = pcVar10;
            (*(code *)PTR__objc_release_02578630)(pcVar22);
            pcVar22 = local_3c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_apiKey);
            _objc_retainAutoreleasedReturnValue();
            pcVar10 = pcVar22;
            FUN_009af3fc();
            _objc_retainAutoreleasedReturnValue();
            local_410 = pcVar10;
            (*(code *)PTR__objc_release_02578630)(pcVar22);
            pcVar22 = local_360;
            (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_providerForID__026aad08,local_408)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_418 = pcVar22;
            if ((pcVar22 == (cfstringStruct *)0x0) ||
               (pcVar22 = local_410,
               (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_length_0269cca0),
               puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,
               pcVar22 == (cfstringStruct *)0x0)) {
              local_41c = 3;
            }
            else {
              local_d8 = &cf_providerID;
              local_c0 = local_408;
              local_d0 = &cf_apiKey;
              local_b8 = local_410;
              local_c8 = &cf_baseURL;
              pcVar22 = local_3c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_3c0,PTR_s_objectForKeyedSubscript__0269d098);
              _objc_retainAutoreleasedReturnValue();
              pcVar10 = pcVar22;
              FUN_009af3fc();
              _objc_retainAutoreleasedReturnValue();
              pcVar23 = pcVar10;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_431 = 0;
              local_441 = 0;
              local_451 = 0;
              if (pcVar23 == (cfstringStruct *)0x0) {
                pcVar23 = local_418;
                (*(code *)PTR__objc_msgSend_02578628)(local_418,PTR_s_baseURL_026aade8);
                _objc_retainAutoreleasedReturnValue();
                local_451 = 1;
                local_688 = pcVar23;
                if (pcVar23 == (cfstringStruct *)0x0) {
                  local_688 = &::cf___;
                }
                local_670 = local_688;
                local_450 = pcVar23;
              }
              else {
                local_670 = local_3c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
                _objc_retainAutoreleasedReturnValue();
                local_431 = 1;
                local_430 = local_670;
                FUN_009af3fc();
                _objc_retainAutoreleasedReturnValue();
                local_441 = 1;
                local_440 = local_670;
              }
              local_b0 = local_670;
              puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_dictionaryWithDictionary__026aadf0)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_428 = puVar8;
              (*(code *)PTR__objc_release_02578630)(puVar9);
              if ((local_451 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_450);
              }
              if ((local_441 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_440);
              }
              if ((local_431 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_430);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar10);
              (*(code *)PTR__objc_release_02578630)(pcVar22);
              _memset(auStack_4a0,0,0x40);
              local_190 = &cf_chatPath;
              local_188 = &cf_imagePath;
              local_180 = &cf_videoPath;
              local_178 = &cf_videoStatusPath;
              local_170 = &cf_chatModel;
              local_168 = &cf_imageModel;
              local_160 = &cf_videoModel;
              puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_190,7);
              _objc_retainAutoreleasedReturnValue();
              local_6b0 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_6b0 != (undefined *)0x0) {
                lVar24 = *local_490;
                local_6b8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_490 - lVar24 != 0) {
                      _objc_enumerationMutation(*local_490 - lVar24,puVar8);
                    }
                    local_460 = *(undefined8 *)(local_498 + (long)local_6b8 * 8);
                    pcVar22 = local_3c0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,local_460);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar10 = pcVar22;
                    FUN_009af3fc();
                    _objc_retainAutoreleasedReturnValue();
                    local_4a8 = pcVar10;
                    (*(code *)PTR__objc_release_02578630)(pcVar22);
                    pcVar22 = local_4a8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_4a8,PTR_s_length_0269cca0);
                    if (pcVar22 != (cfstringStruct *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_428,PTR_s_setObject_forKeyedSubscript__0269d248,local_4a8,
                                 local_460);
                    }
                    _objc_storeStrong(&local_4a8,0);
                    local_6b8 = local_6b8 + 1;
                  } while (local_6b8 < local_6b0);
                  local_6b0 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,
                             auStack_158,0x10);
                  local_6b8 = (undefined *)0x0;
                } while (local_6b0 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar8);
              (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_addObject__0269d180,local_428);
              puVar11 = local_3b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_count_0269cfe0);
              puVar20 = puVar11 + -0x14;
              if (puVar11 < &MACH_HEADER.sizeofcmds) {
                local_41c = 0;
              }
              else {
                puVar20 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
                local_41c = 2;
              }
              _objc_storeStrong(puVar20,&local_428,0);
            }
            _objc_storeStrong(&local_418);
            _objc_storeStrong(&local_410,0);
            _objc_storeStrong(&local_408,0);
            if ((local_41c != 0) && (local_41c != 3)) goto LAB_009c2f50;
          }
          local_618 = local_618 + 1;
        } while (local_618 < local_610);
        local_610 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_a8,
                   0x10);
        local_618 = (undefined *)0x0;
      } while (local_610 != (undefined *)0x0);
    }
    local_41c = 0;
LAB_009c2f50:
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  _memset(auStack_4f0,0,0x40);
  pcVar22 = local_360;
  (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_providers_026aacf8);
  _objc_retainAutoreleasedReturnValue();
  local_708 = pcVar22;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_708 != (cfstringStruct *)0x0) {
    lVar21 = *local_4e0;
    local_710 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_4e0 - lVar21 != 0) {
          _objc_enumerationMutation(*local_4e0 - lVar21,pcVar22);
        }
        pcVar10 = local_360;
        pcVar23 = *(cfstringStruct **)(local_4e8 + (long)local_710 * 8);
        local_4b0 = pcVar23;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar23,PTR_s_providerID_0269d480);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_apiKeyForProviderID__026aadf8);
        _objc_retainAutoreleasedReturnValue();
        local_4f8 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(pcVar23);
        pcVar10 = local_4f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_4f8,PTR_s_length_0269cca0);
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_41c = 7;
        }
        else {
          local_4f9 = 0;
          _memset(auStack_548,0,0x40);
          puVar20 = local_3b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_758 = puVar20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar20,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_548,auStack_290
                     ,0x10);
          if (local_758 != (undefined1 *)0x0) {
            lVar24 = *local_538;
            local_760 = (undefined1 *)0x0;
            do {
              do {
                if (*local_538 - lVar24 != 0) {
                  _objc_enumerationMutation(*local_538 - lVar24,puVar20);
                }
                uVar25 = *(ulong *)(local_540 + (long)local_760 * 8);
                local_508 = uVar25;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar25,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerID);
                _objc_retainAutoreleasedReturnValue();
                pcVar10 = local_4b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_providerID_0269d480);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar25;
                (*(code *)PTR__objc_msgSend_02578628)(uVar25,PTR_s_isEqualToString__0269ccc8);
                bVar5 = false;
                bVar4 = false;
                bVar3 = false;
                bVar2 = false;
                bVar1 = false;
                local_77c = 0;
                if ((uVar12 & 1) != 0) {
                  local_550 = local_508;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_508,PTR_s_objectForKeyedSubscript__0269d098,&cf_apiKey);
                  _objc_retainAutoreleasedReturnValue();
                  bVar5 = true;
                  uVar12 = local_550;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_77c = 0;
                  if ((uVar12 & 1) != 0) {
                    local_560 = local_508;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_508,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
                    _objc_retainAutoreleasedReturnValue();
                    bVar4 = true;
                    local_570 = local_560;
                    FUN_009c3b08();
                    _objc_retainAutoreleasedReturnValue();
                    bVar3 = true;
                    local_580 = local_4b0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_baseURL_026aade8);
                    _objc_retainAutoreleasedReturnValue();
                    bVar2 = true;
                    local_590 = local_580;
                    FUN_009c3b08();
                    _objc_retainAutoreleasedReturnValue();
                    bVar1 = true;
                    uVar12 = local_570;
                    (*(code *)PTR__objc_msgSend_02578628)(local_570,PTR_s_isEqualToString__0269ccc8)
                    ;
                    local_77c = (uint)uVar12;
                  }
                }
                if (bVar1) {
                  (*(code *)PTR__objc_release_02578630)(local_590);
                }
                if (bVar2) {
                  (*(code *)PTR__objc_release_02578630)(local_580);
                }
                if (bVar3) {
                  (*(code *)PTR__objc_release_02578630)(local_570);
                }
                if (bVar4) {
                  (*(code *)PTR__objc_release_02578630)(local_560);
                }
                if (bVar5) {
                  (*(code *)PTR__objc_release_02578630)(local_550);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                (*(code *)PTR__objc_release_02578630)(uVar25);
                if ((local_77c & 1) != 0) {
                  local_4f9 = 1;
                  local_41c = 8;
                  goto LAB_009c34f4;
                }
                local_760 = local_760 + 1;
              } while (local_760 < local_758);
              local_758 = puVar20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar20,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_548,
                         auStack_290,0x10);
              local_760 = (undefined1 *)0x0;
            } while (local_758 != (undefined1 *)0x0);
          }
          local_41c = 0;
LAB_009c34f4:
          (*(code *)PTR__objc_release_02578630)(puVar20);
          puVar20 = local_3b8;
          if ((local_4f9 & 1) == 0) {
            local_330 = &cf_providerID;
            pcVar10 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_providerID_0269d480);
            _objc_retainAutoreleasedReturnValue();
            local_328 = &cf_apiKey;
            local_2d8 = local_4f8;
            local_320 = &cf_baseURL;
            pcVar23 = local_4b0;
            local_2e0 = pcVar10;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_baseURL_026aade8);
            _objc_retainAutoreleasedReturnValue();
            local_7c0 = pcVar23;
            if (pcVar23 == (cfstringStruct *)0x0) {
              local_7c0 = &::cf___;
            }
            local_2d0 = local_7c0;
            local_318 = &cf_chatPath;
            pcVar13 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_chatPath_026aae00);
            _objc_retainAutoreleasedReturnValue();
            local_7d0 = pcVar13;
            if (pcVar13 == (cfstringStruct *)0x0) {
              local_7d0 = &::cf___;
            }
            local_2c8 = local_7d0;
            local_310 = &cf_imagePath;
            pcVar14 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_imagePath_026aae08);
            _objc_retainAutoreleasedReturnValue();
            local_7e0 = pcVar14;
            if (pcVar14 == (cfstringStruct *)0x0) {
              local_7e0 = &::cf___;
            }
            local_2c0 = local_7e0;
            local_308 = &cf_videoPath;
            pcVar15 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_videoPath_026aae10);
            _objc_retainAutoreleasedReturnValue();
            local_7f0 = pcVar15;
            if (pcVar15 == (cfstringStruct *)0x0) {
              local_7f0 = &::cf___;
            }
            local_2b8 = local_7f0;
            local_300 = &cf_videoStatusPath;
            pcVar16 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_videoStatusPath_026aae18);
            _objc_retainAutoreleasedReturnValue();
            local_800 = pcVar16;
            if (pcVar16 == (cfstringStruct *)0x0) {
              local_800 = &::cf___;
            }
            local_2b0 = local_800;
            local_2f8 = &cf_chatModel;
            pcVar17 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_chatModel_026aadc8);
            _objc_retainAutoreleasedReturnValue();
            local_810 = pcVar17;
            if (pcVar17 == (cfstringStruct *)0x0) {
              local_810 = &::cf___;
            }
            local_2a8 = local_810;
            local_2f0 = &cf_imageModel;
            pcVar18 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_imageModel_026aadd0);
            _objc_retainAutoreleasedReturnValue();
            local_820 = pcVar18;
            if (pcVar18 == (cfstringStruct *)0x0) {
              local_820 = &::cf___;
            }
            local_2a0 = local_820;
            local_2e8 = &cf_videoModel;
            pcVar19 = local_4b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_4b0,PTR_s_videoModel_026aad78);
            _objc_retainAutoreleasedReturnValue();
            local_830 = pcVar19;
            if (pcVar19 == (cfstringStruct *)0x0) {
              local_830 = &::cf___;
            }
            local_298 = local_830;
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_2e0,&local_330,10);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar20,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(pcVar19);
            (*(code *)PTR__objc_release_02578630)(pcVar18);
            (*(code *)PTR__objc_release_02578630)(pcVar17);
            (*(code *)PTR__objc_release_02578630)(pcVar16);
            (*(code *)PTR__objc_release_02578630)(pcVar15);
            (*(code *)PTR__objc_release_02578630)(pcVar14);
            (*(code *)PTR__objc_release_02578630)(pcVar13);
            (*(code *)PTR__objc_release_02578630)(pcVar23);
            (*(code *)PTR__objc_release_02578630)(pcVar10);
          }
          local_41c = 0;
        }
        _objc_storeStrong(&local_4f8,0);
        local_710 = (cfstringStruct *)((long)&local_710->field0_0x0 + 1);
      } while (local_710 < local_708);
      local_708 = pcVar22;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar22,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f0,auStack_210,
                 0x10);
      local_710 = (cfstringStruct *)0x0;
    } while (local_708 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar22);
  puVar11 = local_3b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_count_0269cfe0);
  puVar20 = local_3b8;
  if (&MACH_HEADER.sizeofcmds < puVar11) {
    puVar11 = local_3b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_count_0269cfe0);
    local_358 = puVar11 + -0x14;
    local_350 = 0x14;
    local_348 = 0x14;
    local_340 = local_358;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar20,PTR_s_removeObjectsInRange__0269dad0,0x14,local_358);
  }
  puVar20 = local_3b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_41c = 1;
  _objc_storeStrong(&local_3b8);
  _objc_storeStrong(&local_3a0,0);
  _objc_storeStrong(&local_388,0);
  _objc_storeStrong(&local_370,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar20;
}

