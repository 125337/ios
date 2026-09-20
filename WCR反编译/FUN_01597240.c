// FUN_01597240 @ 01597240

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01597240(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *local_788;
  uint local_754;
  cfstringStruct *local_748;
  undefined *local_6d8;
  undefined *local_6d0;
  cfstringStruct *local_698;
  cfstringStruct *local_688;
  cfstringStruct *local_668;
  cfstringStruct *local_648;
  cfstringStruct *local_630;
  cfstringStruct *local_618;
  cfstringStruct *local_600;
  cfstringStruct *local_5e8;
  ulong local_5c0;
  ulong local_5b8;
  cfstringStruct *local_580;
  uint local_558;
  uint local_554;
  cfstringStruct *local_538;
  ulong local_510;
  ulong local_508;
  bool local_4c9;
  cfstringStruct *local_4c8;
  cfstringStruct *local_4c0;
  cfstringStruct *local_4b8;
  bool local_4a9;
  cfstringStruct *local_4a8;
  cfstringStruct *local_4a0;
  cfstringStruct *local_498;
  undefined *local_490;
  byte local_481;
  cfstringStruct *local_480;
  undefined1 auStack_478 [8];
  long local_470;
  long *local_468;
  undefined8 local_438;
  byte local_429;
  cfstringStruct *local_428;
  byte local_419;
  undefined *local_418;
  byte local_409;
  cfstringStruct *local_408;
  undefined *local_400;
  byte local_3f1;
  cfstringStruct *local_3f0;
  byte local_3e1;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d8;
  bool local_3c9;
  cfstringStruct *local_3c8;
  cfstringStruct *local_3c0;
  bool local_3b1;
  cfstringStruct *local_3b0;
  cfstringStruct *local_3a8;
  bool local_399;
  cfstringStruct *local_398;
  cfstringStruct *local_390;
  bool local_381;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  undefined1 auStack_370 [8];
  long local_368;
  long *local_360;
  cfstringStruct *local_330;
  long local_328;
  bool local_319;
  cfstringStruct *local_318;
  byte local_309;
  cfstringStruct *local_308;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  undefined *local_2f0;
  byte local_2e2;
  bool local_2e1;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  int local_27c;
  long local_278;
  long local_270;
  ulong local_268;
  long local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined1 auStack_218 [128];
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_268 = 0;
  local_260 = param_1;
  _objc_storeStrong(&local_268);
  local_270 = 0;
  _objc_storeStrong(&local_270,param_3);
  lVar9 = local_270;
  local_278 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_length_0269cca0);
  if (lVar9 == 0) {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_288 = pcVar2;
    _memset(auStack_2d0,0,0x40);
    uVar3 = *(ulong *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_models_026b0a68);
    _objc_retainAutoreleasedReturnValue();
    local_508 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_508 != 0) {
      lVar9 = *local_2c0;
      local_510 = 0;
      do {
        do {
          if (*local_2c0 - lVar9 != 0) {
            _objc_enumerationMutation(*local_2c0 - lVar9,uVar3);
          }
          pcVar11 = *(cfstringStruct **)(local_2c8 + local_510 * 8);
          local_290 = pcVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalogSource);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar2 = pcVar11;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_2e1 = false;
          bVar1 = ((ulong)pcVar2 & 1) == 0;
          if (bVar1) {
            local_538 = &cf_cloud;
          }
          else {
            local_538 = local_290;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalogSource);
            _objc_retainAutoreleasedReturnValue();
            local_2e0 = local_538;
          }
          local_2e1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_2d8 = local_538;
          if ((local_2e1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_2e0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar11);
          pcVar2 = local_290;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalog);
          _objc_retainAutoreleasedReturnValue();
          pcVar11 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = false;
          if (((ulong)pcVar11 & 1) != 0) {
            if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
              pcVar11 = local_2d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2d8,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
              local_558 = (uint)pcVar11;
            }
            else {
              pcVar11 = local_2d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2d8,PTR_s_isEqualToString__0269ccc8,&cf_cloud);
              local_554 = 1;
              if (((ulong)pcVar11 & 1) == 0) {
                pcVar11 = local_2d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2d8,PTR_s_isEqualToString__0269ccc8,&cf_server);
                local_554 = (uint)pcVar11;
              }
              local_558 = local_554 & 1;
            }
            bVar1 = local_558 != 0;
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          uVar5 = *(ulong *)(param_1 + 0x28);
          local_2e2 = bVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,&cf_all);
          if (((uVar5 & 1) == 0) || ((local_2e2 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_addObject__0269d180,local_290);
          }
          _objc_storeStrong(&local_2d8,0);
          local_510 = local_510 + 1;
        } while (local_510 < local_508);
        local_508 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_a8,0x10
                  );
        local_510 = 0;
      } while (local_508 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_2f0 = puVar4;
    for (local_2f8 = (cfstringStruct *)0x0; pcVar2 = local_2f8, pcVar11 = local_288,
        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_count_0269cfe0), pcVar2 < pcVar11;
        local_2f8 = (cfstringStruct *)((long)&local_2f8->field0_0x0 + 1)) {
      pcVar2 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_288,PTR_s_objectAtIndexedSubscript__0269cc78,local_2f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar11 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar6 = pcVar11;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_309 = 0;
      local_319 = false;
      bVar1 = ((ulong)pcVar6 & 1) == 0;
      if (bVar1) {
        local_580 = (cfstringStruct *)0x0;
      }
      else {
        local_580 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_288,PTR_s_objectAtIndexedSubscript__0269cc78,local_2f8);
        _objc_retainAutoreleasedReturnValue();
        local_309 = 1;
        local_308 = local_580;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_318 = local_580;
      }
      local_319 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_300 = local_580;
      if ((local_319 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_318);
      }
      if ((local_309 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_308);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar11);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_300;
      (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_2f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_300);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      _objc_storeStrong(&local_300,0);
    }
    local_328 = 0;
    _memset(auStack_370,0,0x40);
    uVar3 = local_268;
    (*(code *)PTR__objc_retain_02578638)();
    local_5b8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_128,0x10);
    if (local_5b8 != 0) {
      lVar9 = *local_360;
      local_5c0 = 0;
      do {
        do {
          if (*local_360 - lVar9 != 0) {
            _objc_enumerationMutation(*local_360 - lVar9,uVar3);
          }
          pcVar11 = *(cfstringStruct **)(local_368 + local_5c0 * 8);
          local_330 = pcVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar2 = pcVar11;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_381 = false;
          bVar1 = ((ulong)pcVar2 & 1) == 0;
          if (bVar1) {
            local_5e8 = (cfstringStruct *)0x0;
          }
          else {
            local_5e8 = local_330;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_380 = local_5e8;
          }
          local_381 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_378 = local_5e8;
          if ((local_381 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_380);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar11);
          pcVar2 = local_330;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar11 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_399 = false;
          bVar1 = ((ulong)pcVar11 & 1) == 0;
          if (bVar1) {
            local_600 = (cfstringStruct *)0x0;
          }
          else {
            local_600 = local_330;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            local_398 = local_600;
          }
          local_399 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_390 = local_600;
          if ((local_399 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_398);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_330;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar11 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_3b1 = false;
          bVar1 = ((ulong)pcVar11 & 1) == 0;
          if (bVar1) {
            local_618 = (cfstringStruct *)0x0;
          }
          else {
            local_618 = local_330;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
            _objc_retainAutoreleasedReturnValue();
            local_3b0 = local_618;
          }
          local_3b1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_3a8 = local_618;
          if ((local_3b1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_3b0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_330;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar11 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_3c9 = false;
          bVar1 = ((ulong)pcVar11 & 1) == 0;
          if (bVar1) {
            local_630 = &cf___;
          }
          else {
            local_630 = local_330;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
            _objc_retainAutoreleasedReturnValue();
            local_3c8 = local_630;
          }
          local_3c9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_3c0 = local_630;
          if ((local_3c9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_3c8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_378;
          (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_length_0269cca0);
          if ((pcVar2 == (cfstringStruct *)0x0) ||
             (pcVar2 = local_390,
             (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_length_0269cca0),
             pcVar2 == (cfstringStruct *)0x0)) {
LAB_0159805c:
            local_27c = 8;
          }
          else {
            uVar5 = *(ulong *)(param_1 + 0x28);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,&cf_all);
            if (((uVar5 & 1) == 0) &&
               (pcVar2 = local_3a8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_3a8,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x28))
               , ((ulong)pcVar2 & 1) == 0)) goto LAB_0159805c;
            uVar5 = *(ulong *)(param_1 + 0x38);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_wcr_catalogProviderUsable__026b09f0,local_3c0);
            if ((uVar5 & 1) == 0) {
              local_27c = 8;
            }
            else {
              pcVar2 = local_330;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalogSource);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar11 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
              local_3e1 = 0;
              local_3f1 = 0;
              if (((ulong)pcVar11 & 1) == 0) {
LAB_015981ec:
                local_648 = *(cfstringStruct **)(param_1 + 0x20);
              }
              else {
                pcVar11 = local_330;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalogSource);
                _objc_retainAutoreleasedReturnValue();
                local_3e1 = 1;
                local_3e0 = pcVar11;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (pcVar11 == (cfstringStruct *)0x0) goto LAB_015981ec;
                local_648 = local_330;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalogSource);
                _objc_retainAutoreleasedReturnValue();
                local_3f1 = 1;
                local_3f0 = local_648;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_3d8 = local_648;
              if ((local_3f1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_3f0);
              }
              if ((local_3e1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_3e0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              local_198 = &cf_id;
              local_160 = local_378;
              local_190 = &cf_name;
              local_158 = local_390;
              local_188 = &cf_source;
              local_150 = &cf_server;
              local_180 = &cf_contentType;
              local_668 = local_3a8;
              if (local_3a8 == (cfstringStruct *)0x0) {
                local_668 = &cf_uncategorized;
              }
              local_148 = local_668;
              local_178 = &cf_catalog;
              puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              local_170 = &cf_catalogSource;
              local_138 = local_3d8;
              local_168 = &cf_createdAt;
              pcVar2 = local_330;
              local_140 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_330,PTR_s_objectForKeyedSubscript__0269d098);
              _objc_retainAutoreleasedReturnValue();
              local_409 = 0;
              local_419 = 0;
              local_429 = 0;
              local_688 = pcVar2;
              if (pcVar2 == (cfstringStruct *)0x0) {
                local_698 = local_330;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_created_at);
                _objc_retainAutoreleasedReturnValue();
                pcVar11 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
                local_409 = 1;
                local_408 = local_698;
                if (local_698 == (cfstringStruct *)0x0) {
                  puVar8 = PTR__OBJC_CLASS___NSDate_026cdf88;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                  _objc_retainAutoreleasedReturnValue();
                  local_419 = 1;
                  local_418 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_numberWithDouble__0269d6d0);
                  _objc_retainAutoreleasedReturnValue();
                  local_429 = 1;
                  local_698 = pcVar11;
                  local_428 = pcVar11;
                }
                local_688 = local_698;
              }
              local_130 = local_688;
              puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_160,&local_198,7);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_dictionaryWithDictionary__026aadf0)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_400 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar8);
              if ((local_429 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_428);
              }
              if ((local_419 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_418);
              }
              if ((local_409 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_408);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              _memset(auStack_478,0,0x40);
              local_258 = &cf_provider;
              local_250 = &cf_providerVoiceId;
              local_248 = &cf_sourceCategory;
              local_240 = &cf_avatar;
              local_238 = &cf_description;
              local_230 = &cf_sourceId;
              local_228 = &cf_ownerWxid;
              local_220 = &cf_visibility;
              puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_258,8);
              _objc_retainAutoreleasedReturnValue();
              local_6d0 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_6d0 != (undefined *)0x0) {
                lVar10 = *local_468;
                local_6d8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_468 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_468 - lVar10,puVar4);
                    }
                    local_438 = *(undefined8 *)(local_470 + (long)local_6d8 * 8);
                    pcVar2 = local_330;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_330,PTR_s_objectForKeyedSubscript__0269d098,local_438);
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    pcVar11 = pcVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar2,PTR_s_isKindOfClass__0269cd68,puVar7);
                    local_481 = 0;
                    bVar1 = false;
                    if (((ulong)pcVar11 & 1) != 0) {
                      pcVar11 = local_330;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_330,PTR_s_objectForKeyedSubscript__0269d098,local_438);
                      _objc_retainAutoreleasedReturnValue();
                      local_481 = 1;
                      local_480 = pcVar11;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      bVar1 = pcVar11 != (cfstringStruct *)0x0;
                    }
                    if ((local_481 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_480);
                    }
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    if (bVar1) {
                      pcVar2 = local_330;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_330,PTR_s_objectForKeyedSubscript__0269d098,local_438);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_400,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,
                                 local_438);
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                    }
                    local_6d8 = local_6d8 + 1;
                  } while (local_6d8 < local_6d0);
                  local_6d0 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_478,
                             auStack_218,0x10);
                  local_6d8 = (undefined *)0x0;
                } while (local_6d0 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar4);
              pcVar2 = local_330;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_sortOrder);
              _objc_retainAutoreleasedReturnValue();
              pcVar11 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              if (((ulong)pcVar11 & 1) != 0) {
                pcVar2 = local_330;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_330,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_400,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,
                           &cf_sortOrder);
                (*(code *)PTR__objc_release_02578630)(pcVar2);
              }
              puVar7 = local_2f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f0,PTR_s_objectForKeyedSubscript__0269d098,local_378);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_288;
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_490 = puVar7;
              if (puVar7 == (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_count_0269cfe0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,pcVar2);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_378);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_addObject__0269d180,local_400)
                ;
                local_328 = local_328 + 1;
LAB_01598fc0:
                local_27c = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_unsignedIntegerValue_026cabb8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar2,PTR_s_objectAtIndexedSubscript__0269cc78,puVar7);
                _objc_retainAutoreleasedReturnValue();
                local_498 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalogSource);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                pcVar11 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
                local_4a9 = false;
                bVar1 = ((ulong)pcVar11 & 1) == 0;
                if (bVar1) {
                  local_748 = &cf_cloud;
                }
                else {
                  local_748 = local_498;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_498,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalogSource);
                  _objc_retainAutoreleasedReturnValue();
                  local_4a8 = local_748;
                }
                local_4a9 = !bVar1;
                (*(code *)PTR__objc_retain_02578638)();
                local_4a0 = local_748;
                if ((local_4a9 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_4a8);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_498;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_498,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalog);
                _objc_retainAutoreleasedReturnValue();
                pcVar11 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_754 = 1;
                if (((ulong)pcVar11 & 1) != 0) {
                  pcVar11 = local_4a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4a0,PTR_s_isEqualToString__0269ccc8,local_3d8);
                  local_754 = (uint)pcVar11 ^ 1;
                }
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_288;
                if ((local_754 & 1) == 0) {
                  puVar4 = local_490;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_490,PTR_s_unsignedIntegerValue_026cabb8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_objectAtIndexedSubscript__0269cc78,puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar11 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_4b8 = pcVar11;
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                  pcVar2 = local_4b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  pcVar11 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4)
                  ;
                  local_4c9 = ((ulong)pcVar11 & 1) == 0;
                  if (local_4c9) {
                    local_788 = (cfstringStruct *)0x0;
                  }
                  else {
                    local_788 = local_4b8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                    _objc_retainAutoreleasedReturnValue();
                    local_4c8 = local_788;
                  }
                  local_4c9 = !local_4c9;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_4c0 = local_788;
                  if (local_4c9) {
                    (*(code *)PTR__objc_release_02578630)(local_4c8);
                  }
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_4b8,PTR_s_addEntriesFromDictionary__026a2e30,local_400);
                  pcVar2 = local_4c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_4c0,PTR_s_length_0269cca0);
                  if (pcVar2 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_4c0,
                               &cf_name);
                  }
                  pcVar11 = local_288;
                  pcVar2 = local_4b8;
                  puVar4 = local_490;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_490,PTR_s_unsignedIntegerValue_026cabb8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar11,PTR_s_setObject_atIndexedSubscript__0269e970,pcVar2,puVar4);
                  _objc_storeStrong(&local_4c0);
                  _objc_storeStrong(&local_4b8,0);
                  local_27c = 0;
                }
                else {
                  local_27c = 8;
                }
                _objc_storeStrong(&local_4a0);
                _objc_storeStrong(&local_498,0);
                if (local_27c == 0) goto LAB_01598fc0;
              }
              _objc_storeStrong(&local_490);
              _objc_storeStrong(&local_400,0);
              _objc_storeStrong(&local_3d8,0);
            }
          }
          _objc_storeStrong(&local_3c0);
          _objc_storeStrong(&local_3a8,0);
          _objc_storeStrong(&local_390,0);
          _objc_storeStrong(&local_378,0);
          local_5c0 = local_5c0 + 1;
        } while (local_5c0 < local_5b8);
        local_5b8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,auStack_128,
                   0x10);
        local_5c0 = 0;
      } while (local_5b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_328);
    _objc_storeStrong(&local_2f0,0);
    _objc_storeStrong(&local_288,0);
    local_27c = 0;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,local_270);
    local_27c = 1;
  }
  _objc_storeStrong(&local_270);
  _objc_storeStrong(&local_268,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

