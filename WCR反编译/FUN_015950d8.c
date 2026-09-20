// FUN_015950d8 @ 015950d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015950d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  cfstringStruct *local_640;
  undefined *local_5d8;
  undefined *local_5c8;
  undefined *local_5b0;
  undefined *local_588;
  undefined *local_578;
  undefined *local_568;
  undefined *local_550;
  undefined *local_540;
  undefined *local_530;
  ulong local_500;
  ulong local_4f8;
  cfstringStruct *local_4a8;
  cfstringStruct *local_4a0;
  undefined *local_450;
  undefined *local_448;
  cfstringStruct *local_418;
  undefined *local_3d8;
  undefined *local_3c8;
  undefined *local_3b8;
  undefined *local_3a8;
  undefined *local_398;
  undefined *local_390;
  byte local_381;
  undefined *local_380;
  byte local_371;
  undefined *local_370;
  byte local_361;
  undefined *local_360;
  undefined *local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  undefined *local_310;
  long local_308;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  long local_2c0;
  undefined *local_2b8;
  cfstringStruct *local_2b0;
  undefined *local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined8 local_260;
  ulong local_258;
  undefined *local_250;
  int local_244;
  long local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  long local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined1 auStack_1c8 [128];
  undefined1 auStack_148 [128];
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_228 = (cfstringStruct *)0x0;
  local_220 = param_1;
  _objc_storeStrong(&local_228);
  local_230 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_230,param_3);
  local_238 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_238,param_4);
  local_240 = param_1;
  if ((local_238 == (cfstringStruct *)0x0) &&
     (pcVar3 = local_228, (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0),
     pcVar3 != (cfstringStruct *)0x0)) {
    puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_228,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_258 = 0;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_250 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
    puVar4 = local_250;
    if (((ulong)puVar10 & 1) == 0) {
      puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar10);
      if (((ulong)puVar4 & 1) != 0) {
        _memset(auStack_2a0,0,0x40);
        local_c8 = &cf_items;
        local_c0 = &cf_results;
        local_b8 = &cf_result;
        local_b0 = &cf_data;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_c8,4);
        _objc_retainAutoreleasedReturnValue();
        local_448 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_448 != (undefined *)0x0) {
          lVar8 = *local_290;
          local_450 = (undefined *)0x0;
          do {
            do {
              if (*local_290 - lVar8 != 0) {
                _objc_enumerationMutation(*local_290 - lVar8,puVar4);
              }
              local_260 = *(undefined8 *)(local_298 + (long)local_450 * 8);
              puVar10 = local_250;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_250,PTR_s_objectForKeyedSubscript__0269d098,local_260);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_2a8 = puVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_isKindOfClass__0269cd68,puVar5);
              if (((ulong)puVar10 & 1) == 0) {
                local_244 = 0;
              }
              else {
                _objc_storeStrong(&local_258,local_2a8);
                local_244 = 2;
              }
              _objc_storeStrong(&local_2a8,0);
              if (local_244 != 0) goto LAB_01595530;
              local_450 = local_450 + 1;
            } while (local_450 < local_448);
            local_448 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8
                       ,0x10);
            local_450 = (undefined *)0x0;
          } while (local_448 != (undefined *)0x0);
        }
        local_244 = 0;
LAB_01595530:
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    else {
      _objc_storeStrong(&local_258,local_250);
    }
    uVar6 = local_258;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar6 & 1) == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,&cf_V<h_elg);
      local_244 = 1;
    }
    else {
      pcVar7 = *(cfstringStruct **)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_models_026b0a68);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2b0 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = puVar4;
      _memset(auStack_300,0,0x40);
      pcVar3 = local_2b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_4a0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_148,0x10
                );
      if (local_4a0 != (cfstringStruct *)0x0) {
        lVar8 = *local_2f0;
        local_4a8 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_2f0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_2f0 - lVar8,pcVar3);
            }
            lVar9 = *(long *)(local_2f8 + (long)local_4a8 * 8);
            local_2c0 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            puVar4 = local_2b8;
            if (lVar9 != 0) {
              lVar9 = local_2c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar9);
            }
            local_4a8 = (cfstringStruct *)((long)&local_4a8->field0_0x0 + 1);
          } while (local_4a8 < local_4a0);
          local_4a0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_148,
                     0x10);
          local_4a8 = (cfstringStruct *)0x0;
        } while (local_4a0 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_308 = 0;
      _memset(auStack_350,0,0x40);
      uVar6 = local_258;
      (*(code *)PTR__objc_retain_02578638)();
      local_4f8 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_1c8,0x10)
      ;
      if (local_4f8 != 0) {
        lVar8 = *local_340;
        local_500 = 0;
        do {
          do {
            if (*local_340 - lVar8 != 0) {
              _objc_enumerationMutation(*local_340 - lVar8,uVar6);
            }
            puVar10 = *(undefined **)(local_348 + local_500 * 8);
            puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_310 = puVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((ulong)puVar10 & 1) != 0) {
              puVar4 = local_310;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf__id);
              _objc_retainAutoreleasedReturnValue();
              local_361 = 0;
              local_371 = 0;
              local_381 = 0;
              local_530 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                local_540 = local_310;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_uri);
                _objc_retainAutoreleasedReturnValue();
                local_361 = 1;
                local_360 = local_540;
                if (local_540 == (undefined *)0x0) {
                  local_550 = local_310;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                  _objc_retainAutoreleasedReturnValue();
                  local_371 = 1;
                  local_370 = local_550;
                  if (local_550 == (undefined *)0x0) {
                    local_550 = local_310;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_voice_id);
                    _objc_retainAutoreleasedReturnValue();
                    local_381 = 1;
                    local_380 = local_550;
                  }
                  local_540 = local_550;
                }
                local_530 = local_540;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_358 = local_530;
              if ((local_381 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_380);
              }
              if ((local_371 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_370);
              }
              if ((local_361 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_360);
              }
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = local_310;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = false;
              bVar1 = false;
              local_568 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                local_398 = local_310;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_customName);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = true;
                local_578 = local_398;
                if (local_398 == (undefined *)0x0) {
                  local_3a8 = local_310;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = true;
                  local_588 = local_3a8;
                  if (local_3a8 == (undefined *)0x0) {
                    local_588 = local_358;
                  }
                  local_578 = local_588;
                }
                local_568 = local_578;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_390 = local_568;
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_3a8);
              }
              if (bVar2) {
                (*(code *)PTR__objc_release_02578630)(local_398);
              }
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = local_358;
              puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar10);
              if ((((ulong)puVar4 & 1) == 0) ||
                 (puVar4 = local_358,
                 (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_length_0269cca0),
                 puVar4 == (undefined *)0x0)) {
                local_244 = 7;
              }
              else {
                puVar10 = local_2b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2b8,PTR_s_containsObject__0269cbb8,local_358);
                pcVar3 = local_2b0;
                puVar4 = local_390;
                if (((ulong)puVar10 & 1) == 0) {
                  local_218 = &cf_id;
                  local_1f0 = local_358;
                  local_210 = &cf_name;
                  puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar4,PTR_s_isKindOfClass__0269cd68,puVar10);
                  if ((((ulong)puVar4 & 1) == 0) ||
                     (puVar4 = local_390,
                     (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_length_0269cca0),
                     puVar4 == (undefined *)0x0)) {
                    local_5b0 = local_358;
                  }
                  else {
                    local_5b0 = local_390;
                  }
                  local_1e8 = local_5b0;
                  local_208 = &cf_source;
                  local_1e0 = &cf_server;
                  local_200 = &cf_provider;
                  uVar11 = *(undefined8 *)(param_1 + 0x28);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar11,PTR_s_wcr_currentProviderCode_026b0a78);
                  _objc_retainAutoreleasedReturnValue();
                  local_1f8 = &cf_createdAt;
                  puVar4 = local_310;
                  local_1d8 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_created_at);
                  _objc_retainAutoreleasedReturnValue();
                  bVar2 = false;
                  bVar1 = false;
                  local_5c8 = puVar4;
                  if (puVar4 == (undefined *)0x0) {
                    local_3b8 = local_310;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    bVar2 = true;
                    bVar1 = local_3b8 == (undefined *)0x0;
                    local_5d8 = local_3b8;
                    if (bVar1) {
                      local_3c8 = PTR__OBJC_CLASS___NSDate_026cdf88;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar10,PTR_s_numberWithDouble__0269d6d0);
                      _objc_retainAutoreleasedReturnValue();
                      local_5d8 = puVar10;
                      local_3d8 = puVar10;
                    }
                    local_5c8 = local_5d8;
                  }
                  local_1d0 = local_5c8;
                  puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1f0,&local_218,5
                            );
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar10);
                  if (bVar1) {
                    (*(code *)PTR__objc_release_02578630)(local_3d8);
                    (*(code *)PTR__objc_release_02578630)(local_3c8);
                  }
                  if (bVar2) {
                    (*(code *)PTR__objc_release_02578630)(local_3b8);
                  }
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  (*(code *)PTR__objc_release_02578630)(uVar11);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2b8,PTR_s_addObject__0269d180,local_358);
                  local_308 = local_308 + 1;
                  local_244 = 0;
                }
                else {
                  local_244 = 7;
                }
              }
              _objc_storeStrong(&local_390);
              _objc_storeStrong(&local_358,0);
            }
            local_500 = local_500 + 1;
          } while (local_500 < local_4f8);
          local_4f8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_1c8,
                     0x10);
          local_500 = 0;
        } while (local_4f8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar9 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_activeModelId_026b0a60);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (lVar8 == 0) {
        pcVar3 = local_2b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_count_0269cfe0);
        bVar1 = pcVar3 != (cfstringStruct *)0x0;
      }
      (*(code *)PTR__objc_release_02578630)(lVar9);
      if (bVar1) {
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        pcVar3 = local_2b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_640 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_640 = &cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_setActiveModelId__026b0a88,local_640);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_308);
      _objc_storeStrong(&local_2b8,0);
      _objc_storeStrong(&local_2b0,0);
      local_244 = 0;
    }
    _objc_storeStrong(&local_258);
    _objc_storeStrong(&local_250,0);
    if (local_244 == 0) {
      local_244 = 0;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    pcVar3 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_418 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_418 = &cf_Q__;
    }
    (**(code **)(lVar8 + 0x10))(lVar8,0,local_418);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_244 = 1;
  }
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_230,0);
  _objc_storeStrong(&local_228,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

