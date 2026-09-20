// inheritCustomizationIfNeededForPlugin: @ 0177acf8

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubManager::inheritCustomizationIfNeededForPlugin_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_538;
  undefined *local_530;
  undefined *local_508;
  undefined *local_4e0;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined *local_368;
  undefined *local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  ulong local_2d8;
  byte local_2c9;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  byte local_2a1;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined1 *local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  ulong local_260;
  ulong local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined1 *local_238;
  undefined *local_230;
  undefined *local_228;
  byte local_219;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined *local_1c0;
  ulong local_1b8;
  undefined1 *local_1b0;
  undefined *local_1a8;
  byte local_199;
  undefined *local_198;
  ulong local_180;
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  ulong local_148;
  ulong local_140;
  SEL local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = (undefined *)param_1;
  _objc_storeStrong(&local_140,param_3);
  uVar10 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_length_0269cca0);
  if (uVar10 == 0) {
    local_14c = 1;
  }
  else {
    puVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customizationOverrides_026b4438);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_158;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_161 = 0;
    local_171 = 0;
    bVar1 = false;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupID);
      _objc_retainAutoreleasedReturnValue();
      local_161 = 1;
      local_160 = puVar2;
      FUN_0176d368();
      _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar2 != (undefined *)0x0;
    }
    if ((local_171 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_170);
    }
    if ((local_161 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_160);
    }
    puVar2 = local_130;
    if (bVar1) {
      local_14c = 1;
    }
    else {
      local_180 = 0;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(puVar2);
      puVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_sessionRegisteredIdentifiers_026b4390);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_199 = 0;
      local_368 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_368 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_198 = local_368;
      }
      local_199 = puVar4 == (undefined *)0x0;
      _objc_storeStrong(&local_180,local_368);
      if ((local_199 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_198);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_sync_exit(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customizationOverrides_026b4438);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = local_140;
      local_1b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      FUN_0176d368();
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar10);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_1c0;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((((ulong)puVar2 & 1) != 0) &&
         (uVar10 = local_1b8, (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0)
         , uVar10 != 0)) {
        _memset(auStack_208,0,0x40);
        puVar2 = local_1c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_3a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,
                   0x10);
        if (local_3a8 != (undefined *)0x0) {
          lVar9 = *local_1f8;
          local_3b0 = (undefined *)0x0;
          do {
            do {
              if (*local_1f8 - lVar9 != 0) {
                _objc_enumerationMutation(*local_1f8 - lVar9,puVar2);
              }
              uVar10 = *(ulong *)(local_200 + (long)local_3b0 * 8);
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_1c8 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((uVar10 & 1) != 0) {
                uVar10 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isController_026b1a20);
                uVar5 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_isController);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar5);
                if ((int)uVar10 == (int)uVar6) {
                  uVar10 = local_1c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar10;
                  FUN_0176d368();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  (*(code *)PTR__objc_release_02578630)(uVar10);
                  if ((uVar6 & 1) != 0) {
                    uVar10 = local_1c8;
                    FUN_0177c0d8();
                    _objc_retainAutoreleasedReturnValue();
                    local_210 = uVar10;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_length_0269cca0);
                    if (((uVar10 == 0) ||
                        (uVar10 = local_210,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_210,PTR_s_isEqualToString__0269ccc8,local_148),
                        (uVar10 & 1) != 0)) ||
                       (uVar10 = local_180,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_180,PTR_s_containsObject__0269cbb8,local_210),
                       (uVar10 & 1) != 0)) {
                      local_14c = 3;
                    }
                    else {
                      puVar3 = local_1a8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,local_210);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                      puVar7 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
                      (*(code *)PTR__objc_release_02578630)(puVar3);
                      if (((ulong)puVar7 & 1) == 0) {
                        local_14c = 3;
                      }
                      else {
                        puVar8 = local_1b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1b0,PTR_s_containsObject__0269cbb8,local_210);
                        if (((ulong)puVar8 & 1) == 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1b0,PTR_s_addObject__0269d180,local_210);
                        }
                        local_14c = 0;
                      }
                    }
                    _objc_storeStrong(&local_210,0);
                  }
                }
              }
              local_3b0 = local_3b0 + 1;
            } while (local_3b0 < local_3a8);
            local_3a8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8
                       ,0x10);
            local_3b0 = (undefined *)0x0;
          } while (local_3a8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      uVar10 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isController_026b1a20);
      local_219 = 0;
      bVar1 = false;
      if ((uVar10 & 1) == 0) {
        uVar10 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_key_026a7380);
        _objc_retainAutoreleasedReturnValue();
        local_219 = 1;
        local_218 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar10 != 0;
      }
      if ((local_219 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_218);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (bVar1) {
        uVar10 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_key_026a7380);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_switch___)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_228 = puVar2;
        (*(code *)PTR__objc_release_02578630)(uVar10);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        uVar10 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_key_026a7380);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf____);
        _objc_retainAutoreleasedReturnValue();
        local_230 = puVar2;
        (*(code *)PTR__objc_release_02578630)(uVar10);
        uVar5 = local_148;
        puVar4 = local_1a8;
        local_280 = PTR___NSConcreteGlobalBlock_02578658;
        local_278 = 0xd0800000;
        local_274 = 0;
        local_270 = FUN_0177c3a8;
        local_268 = &DAT_02588970;
        (*(code *)PTR__objc_retain_02578638)();
        uVar10 = local_180;
        local_260 = uVar5;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = local_1a8;
        local_258 = uVar10;
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = local_228;
        local_250 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = local_230;
        local_248 = puVar3;
        (*(code *)PTR__objc_retain_02578638)();
        puVar8 = local_1b0;
        local_240 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_238 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_280);
        _objc_storeStrong(&local_238);
        _objc_storeStrong(&local_240,0);
        _objc_storeStrong(&local_248,0);
        _objc_storeStrong(&local_250,0);
        _objc_storeStrong(&local_258,0);
        _objc_storeStrong(&local_260,0);
        _objc_storeStrong(&local_230,0);
        _objc_storeStrong(&local_228,0);
      }
      puVar8 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0);
      if (puVar8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar8 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_1a8;
        local_288 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,puVar8);
        _objc_retainAutoreleasedReturnValue();
        local_290 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_mutableCopy_0269d8a0);
        local_2a1 = 0;
        local_4e0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_4e0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          local_2a0 = local_4e0;
        }
        local_2a1 = puVar2 == (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_298 = local_4e0;
        if ((local_2a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2a0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_158;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_298,PTR_s_addEntriesFromDictionary__026a2e30,local_158);
        }
        puVar2 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_mutableCopy_0269d8a0);
        local_2b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_298,local_148);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2b0,PTR_s_removeObjectForKey__0269d700,local_288);
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_2b8;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) == 0) {
          local_508 = *(undefined **)PTR____NSArray0___02578280;
        }
        else {
          local_508 = local_2b8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_2c0 = local_508;
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_2c9 = 0;
        local_2c8 = puVar2;
        _memset(auStack_318,0,0x40);
        puVar2 = local_2c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_530 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_128,
                   0x10);
        if (local_530 != (undefined *)0x0) {
          lVar9 = *local_308;
          local_538 = (undefined *)0x0;
          do {
            do {
              if (*local_308 - lVar9 != 0) {
                _objc_enumerationMutation(*local_308 - lVar9,puVar2);
              }
              uVar10 = *(ulong *)(local_310 + (long)local_538 * 8);
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_2d8 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((uVar10 & 1) != 0) &&
                 (uVar10 = local_2d8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_length_0269cca0), uVar10 != 0
                 )) {
                uVar10 = local_2d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2d8,PTR_s_isEqualToString__0269ccc8,local_288);
                if ((uVar10 & 1) == 0) {
                  puVar3 = local_2c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2c8,PTR_s_containsObject__0269cbb8,local_2d8);
                  if (((ulong)puVar3 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2c8,PTR_s_addObject__0269d180,local_2d8);
                  }
                }
                else {
                  puVar3 = local_2c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2c8,PTR_s_containsObject__0269cbb8,local_148);
                  if (((ulong)puVar3 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2c8,PTR_s_addObject__0269d180,local_148);
                  }
                  local_2c9 = 1;
                }
              }
              local_538 = local_538 + 1;
            } while (local_538 < local_530);
            local_530 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,
                       auStack_128,0x10);
            local_538 = (undefined *)0x0;
          } while (local_530 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
        _objc_retainAutoreleasedReturnValue();
        local_320 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_2b0,
                   &cf_WCRPluginHubOverrides);
        if ((local_2c9 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_320,PTR_s_setObject_forKeyedSubscript__0269d248,local_2c8,
                     &cf_WCRPluginHubOrder);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_320);
        _objc_storeStrong(&local_320);
        _objc_storeStrong(&local_2c8,0);
        _objc_storeStrong(&local_2c0,0);
        _objc_storeStrong(&local_2b8,0);
        _objc_storeStrong(&local_2b0,0);
        _objc_storeStrong(&local_298,0);
        _objc_storeStrong(&local_290,0);
        _objc_storeStrong(&local_288,0);
        local_14c = 0;
      }
      else {
        local_14c = 1;
      }
      _objc_storeStrong(&local_1c0);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(&local_1b0,0);
      _objc_storeStrong(&local_1a8,0);
      _objc_storeStrong(&local_180,0);
    }
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

