// _WCRefineEnhancedAdBlockProcessSearchResult @ 00f56058

void _WCRefineEnhancedAdBlockProcessSearchResult
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong local_540;
  ulong local_538;
  ulong local_4f8;
  ulong local_4f0;
  ulong local_4a8;
  ulong local_4a0;
  ulong local_468;
  ulong local_418;
  ulong local_400;
  ulong local_3e8;
  uint local_3c4;
  ulong local_370;
  undefined1 auStack_368 [8];
  long local_360;
  long *local_358;
  ulong local_328;
  undefined *local_320;
  ulong local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  undefined8 local_2d0;
  long local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  undefined *local_278;
  bool local_269;
  ulong local_268;
  ulong local_260;
  ulong local_258;
  ulong local_250;
  bool local_241;
  ulong local_240;
  ulong local_238;
  byte local_229;
  ulong local_228;
  ulong local_220;
  bool local_211;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  byte local_1f1;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  uint local_1cc;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_2);
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_3);
  uVar3 = local_1c8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_1c8;
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar4;
    local_1cc = 1;
    goto LAB_00f57230;
  }
  uVar3 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1b8,PTR_s_isEqualToString__0269ccc8,&cf_onSearchDataReady);
  if (((uVar3 & 1) == 0) &&
     (uVar4 = local_1b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_1b8,PTR_s_isEqualToString__0269ccc8,&cf_onSearchWebQueryReady),
     uVar3 = local_1c8, (uVar4 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar3;
    local_1cc = 1;
    goto LAB_00f57230;
  }
  uVar4 = local_1c8;
  _WCRefineEnhancedAdBlockObjectLooksLikeAd();
  uVar3 = local_1c8;
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar3;
    local_1cc = 1;
    goto LAB_00f57230;
  }
  uVar3 = local_1c0;
  FUN_00f53b40();
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsString__0269d0b0,&cf_querySearchWeb);
  if (((uVar3 & 1) == 0) &&
     (uVar4 = local_1d8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_1d8,PTR_s_containsString__0269d0b0,&cf_getSearchData), uVar3 = local_1c8,
     (uVar4 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar3;
    local_1cc = 1;
  }
  else {
    uVar3 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_mutableCopy_0269d8a0);
    local_1e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_json);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_00f57294();
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_1c8;
    if (local_1e8 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar3;
      local_1cc = 1;
    }
    else {
      uVar3 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_isEqualToString__0269ccc8,&cf_onSearchWebQueryReady);
      if (((uVar3 & 1) == 0) ||
         (uVar4 = local_1d8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_1d8,PTR_s_containsString__0269d0b0,&cf_querySearchWeb), uVar3 = local_1e8,
         (uVar4 & 1) == 0)) {
        uVar3 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b8,PTR_s_isEqualToString__0269ccc8,&cf_onSearchDataReady);
        if (((uVar3 & 1) == 0) ||
           (uVar4 = local_1d8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1d8,PTR_s_containsString__0269d0b0,&cf_getSearchData), uVar3 = local_1e8
           , (uVar4 & 1) == 0)) {
          uVar3 = local_1c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = uVar3;
          local_1cc = 1;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_269 = false;
          bVar1 = (uVar3 & 1) == 0;
          if (bVar1) {
            local_468 = 0;
          }
          else {
            local_468 = local_1e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
            _objc_retainAutoreleasedReturnValue();
            local_268 = local_468;
          }
          local_269 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_260 = local_468;
          if ((local_269 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_268);
          }
          uVar3 = local_260;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar4 = local_1c8;
          if ((uVar3 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = uVar4;
            local_1cc = 1;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_278 = puVar2;
            _memset(auStack_2c0,0,0x40);
            uVar3 = local_260;
            (*(code *)PTR__objc_retain_02578638)();
            local_4a0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,
                       0x10);
            if (local_4a0 != 0) {
              lVar5 = *local_2b0;
              local_4a8 = 0;
              do {
                do {
                  if (*local_2b0 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_2b0 - lVar5,uVar3);
                  }
                  uVar6 = *(ulong *)(local_2b8 + local_4a8 * 8);
                  local_280 = uVar6;
                  _WCRefineEnhancedAdBlockObjectLooksLikeAd();
                  uVar4 = local_280;
                  if ((uVar6 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_278,PTR_s_addObject__0269d180,local_280);
                  }
                  else {
                    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
                    if ((uVar4 & 1) != 0) {
                      local_2c8 = 0;
                      _memset(auStack_310,0,0x40);
                      uVar4 = local_280;
                      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_allKeys_0269ef58);
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar4;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(uVar4);
                      local_4f0 = uVar6;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,
                                 auStack_128,0x10);
                      if (local_4f0 != 0) {
                        lVar7 = *local_300;
                        local_4f8 = 0;
                        do {
                          do {
                            if (*local_300 - lVar7 != 0) {
                              _objc_enumerationMutation(*local_300 - lVar7,uVar6);
                            }
                            local_2d0 = *(undefined8 *)(local_308 + local_4f8 * 8);
                            uVar4 = local_280;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_280,PTR_s_objectForKeyedSubscript__0269d098,local_2d0);
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                            local_318 = uVar4;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
                            if ((uVar4 & 1) == 0) {
                              local_1cc = 5;
                            }
                            else {
                              puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,
                                         PTR_s_array_0269d158);
                              _objc_retainAutoreleasedReturnValue();
                              local_320 = puVar2;
                              _memset(auStack_368,0,0x40);
                              uVar4 = local_318;
                              (*(code *)PTR__objc_retain_02578638)();
                              local_538 = uVar4;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                         auStack_368,auStack_1a8,0x10);
                              if (local_538 != 0) {
                                lVar8 = *local_358;
                                local_540 = 0;
                                do {
                                  do {
                                    if (*local_358 - lVar8 != 0) {
                                      _objc_enumerationMutation(*local_358 - lVar8,uVar4);
                                    }
                                    uVar9 = *(ulong *)(local_360 + local_540 * 8);
                                    local_328 = uVar9;
                                    _WCRefineEnhancedAdBlockObjectLooksLikeAd();
                                    if ((uVar9 & 1) == 0) {
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_320,PTR_s_addObject__0269d180,local_328);
                                    }
                                    else {
                                      local_2c8 = local_2c8 + 1;
                                    }
                                    local_540 = local_540 + 1;
                                  } while (local_540 < local_538);
                                  local_538 = uVar4;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                             auStack_368,auStack_1a8,0x10);
                                  local_540 = 0;
                                } while (local_538 != 0);
                              }
                              (*(code *)PTR__objc_release_02578630)(uVar4);
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_280,PTR_s_setObject_forKeyedSubscript__0269d248,
                                         local_320,local_2d0);
                              _objc_storeStrong(&local_320,0);
                              local_1cc = 0;
                            }
                            _objc_storeStrong(&local_318,0);
                            local_4f8 = local_4f8 + 1;
                          } while (local_4f8 < local_4f0);
                          local_4f0 = uVar6;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                     auStack_310,auStack_128,0x10);
                          local_4f8 = 0;
                        } while (local_4f0 != 0);
                      }
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                      if (0 < local_2c8) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_278,PTR_s_addObject__0269d180,local_280);
                      }
                    }
                  }
                  local_4a8 = local_4a8 + 1;
                } while (local_4a8 < local_4a0);
                local_4a0 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                           auStack_a8,0x10);
                local_4a8 = 0;
              } while (local_4a0 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e8,PTR_s_setObject_forKeyedSubscript__0269d248,local_278,&cf_data);
            uVar4 = local_1e8;
            FUN_00f573b8();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_1c8;
            local_370 = uVar4;
            if (uVar4 == 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e0,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,&cf_json);
              uVar3 = local_1e0;
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar3;
            }
            local_1cc = 1;
            _objc_storeStrong(&local_370);
            _objc_storeStrong(&local_278,0);
          }
          _objc_storeStrong(&local_260,0);
        }
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_1f1 = 0;
        local_3c4 = 0;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_cgiName);
          _objc_retainAutoreleasedReturnValue();
          local_1f1 = 1;
          local_1f0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_3c4 = (uint)uVar3;
        }
        if ((local_1f1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1f0);
        }
        if ((local_3c4 & 1) != 0) {
          uVar3 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_200 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_211 = false;
          bVar1 = (uVar3 & 1) == 0;
          if (bVar1) {
            local_3e8 = 0;
          }
          else {
            local_3e8 = local_200;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_200,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
            _objc_retainAutoreleasedReturnValue();
            local_210 = local_3e8;
          }
          local_211 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_208 = local_3e8;
          if ((local_211 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_210);
          }
          uVar3 = local_208;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_229 = 0;
          if (((uVar3 & 1) == 0) ||
             (uVar3 = local_208,
             (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0), uVar3 == 0)) {
            local_400 = 0;
          }
          else {
            local_400 = local_208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_208,PTR_s_objectAtIndexedSubscript__0269cc78,0);
            _objc_retainAutoreleasedReturnValue();
            local_229 = 1;
            local_228 = local_400;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_220 = local_400;
          if ((local_229 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_228);
          }
          uVar3 = local_220;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_241 = false;
          bVar1 = (uVar3 & 1) == 0;
          if (bVar1) {
            local_418 = 0;
          }
          else {
            local_418 = local_220;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_220,PTR_s_objectForKeyedSubscript__0269d098,&cf_items);
            _objc_retainAutoreleasedReturnValue();
            local_240 = local_418;
          }
          local_241 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_238 = local_418;
          if ((local_241 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_240);
          }
          uVar3 = local_238;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar3 & 1) == 0) ||
             (uVar3 = local_238,
             (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_count_0269cfe0), uVar3 < 4)) {
LAB_00f568f4:
            local_1cc = 0;
          }
          else {
            uVar3 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_mutableCopy_0269d8a0);
            local_250 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_removeObjectAtIndex__0269d530,2);
            (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_removeObjectAtIndex__0269d530,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_removeObjectAtIndex__0269d530,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_220,PTR_s_setObject_forKeyedSubscript__0269d248,local_250,&cf_items);
            uVar3 = local_1e8;
            FUN_00f573b8();
            _objc_retainAutoreleasedReturnValue();
            local_258 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e0,PTR_s_setObject_forKeyedSubscript__0269d248,uVar3,&cf_json);
              uVar4 = local_1e0;
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar4;
            }
            local_1cc = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_258);
            _objc_storeStrong(&local_250,0);
            if (local_1cc == 0) goto LAB_00f568f4;
          }
          _objc_storeStrong(&local_238);
          _objc_storeStrong(&local_220,0);
          _objc_storeStrong(&local_208,0);
          _objc_storeStrong(&local_200,0);
          if (local_1cc != 0) goto LAB_00f57200;
        }
        uVar3 = local_1c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1b0 = uVar3;
        local_1cc = 1;
      }
    }
LAB_00f57200:
    _objc_storeStrong(&local_1e8);
    _objc_storeStrong(&local_1e0,0);
  }
  _objc_storeStrong(&local_1d8,0);
LAB_00f57230:
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1b0);
  return;
}

