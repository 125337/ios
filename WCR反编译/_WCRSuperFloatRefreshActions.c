// _WCRSuperFloatRefreshActions @ 0161f358

void _WCRSuperFloatRefreshActions(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  ulong uVar12;
  undefined *local_620;
  undefined *local_618;
  ulong local_5a8;
  undefined *local_568;
  undefined *local_560;
  cfstringStruct *local_508;
  cfstringStruct *local_4e8;
  uint local_4cc;
  undefined *local_498;
  undefined *local_490;
  undefined *local_458;
  undefined *local_450;
  undefined *local_438;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  ulong local_3c0;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined *local_398;
  cfstringStruct *local_390;
  ulong local_388;
  ulong local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  ulong local_338;
  bool local_329;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  undefined *local_318;
  byte local_309;
  cfstringStruct *local_308;
  undefined4 local_2fc;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  cfstringStruct *local_2a8;
  long local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  long local_258;
  undefined *local_250;
  undefined1 auStack_248 [128];
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ensureProfilesInitialized_026b1870);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  local_250 = puVar2;
  FUN_01623864();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_298,0,0x40);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_438 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_438 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_450 = local_438;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_438,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10);
  if (local_450 != (undefined *)0x0) {
    lVar9 = *local_288;
    local_458 = (undefined *)0x0;
    do {
      do {
        if (*local_288 - lVar9 != 0) {
          _objc_enumerationMutation(*local_288 - lVar9,local_438);
        }
        lVar10 = *(long *)(local_290 + (long)local_458 * 8);
        local_258 = lVar10;
        FUN_01624b98();
        _objc_retainAutoreleasedReturnValue();
        local_2a0 = lVar10;
        if (lVar10 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_addObject__0269d180,lVar10);
        }
        _objc_storeStrong(&local_2a0,0);
        local_458 = local_458 + 1;
      } while (local_458 < local_450);
      local_450 = local_438;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_438,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,
                 0x10);
      local_458 = (undefined *)0x0;
    } while (local_450 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_438);
  _memset(auStack_2e8,0,0x40);
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
  _objc_retainAutoreleasedReturnValue();
  local_490 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_490 != (undefined *)0x0) {
    lVar9 = *local_2d8;
    local_498 = (undefined *)0x0;
    do {
      do {
        if (*local_2d8 - lVar9 != 0) {
          _objc_enumerationMutation(*local_2d8 - lVar9,puVar2);
        }
        pcVar11 = *(cfstringStruct **)(local_2e0 + (long)local_498 * 8);
        local_2a8 = pcVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar11;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar11);
        pcVar4 = local_2a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        pcVar11 = pcVar4;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_2f8 = pcVar11;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_2f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_length_0269cca0);
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_2fc = 5;
        }
        else {
          pcVar4 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
          _objc_retainAutoreleasedReturnValue();
          local_309 = 0;
          local_4cc = 0;
          if (pcVar4 != (cfstringStruct *)0x0) {
            pcVar11 = local_2a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
            _objc_retainAutoreleasedReturnValue();
            local_309 = 1;
            local_308 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_4cc = (uint)pcVar11 ^ 1;
          }
          if ((local_309 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_308);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if ((local_4cc & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf______);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_2f8;
            local_318 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_length_0269cca0);
            if (pcVar4 == (cfstringStruct *)0x0) {
              local_4e8 = local_2f0;
            }
            else {
              local_4e8 = local_2f8;
            }
            pcVar4 = local_2a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
            _objc_retainAutoreleasedReturnValue();
            pcVar11 = pcVar4;
            FUN_01618794();
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_329 = false;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_508 = &cf_icons_outlined_link;
            }
            else {
              local_508 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
              _objc_retainAutoreleasedReturnValue();
              local_328 = local_508;
            }
            local_329 = pcVar5 != (cfstringStruct *)0x0;
            FUN_01625a38(local_4e8,local_508,local_318,&cf_URLScheme,0);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_4e8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_320 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(local_4e8);
            if ((local_329 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_328);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar11);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_320,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_url,
                       &cf__wcrCustomKind);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_320,PTR_s_setObject_forKeyedSubscript__0269d248,local_2f0,
                       &cf__wcrCustomPayload);
            (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_addObject__0269d180,local_320);
            _objc_storeStrong(&local_320);
            _objc_storeStrong(&local_318,0);
            local_2fc = 0;
          }
          else {
            local_2fc = 5;
          }
        }
        _objc_storeStrong(&local_2f8);
        _objc_storeStrong(&local_2f0,0);
        local_498 = local_498 + 1;
      } while (local_498 < local_490);
      local_490 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_128,0x10
                );
      local_498 = (undefined *)0x0;
    } while (local_490 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_378,0,0x40);
  puVar2 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_560 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_1a8,0x10);
  if (local_560 != (undefined *)0x0) {
    lVar9 = *local_368;
    local_568 = (undefined *)0x0;
    do {
      do {
        if (*local_368 - lVar9 != 0) {
          _objc_enumerationMutation(*local_368 - lVar9,puVar3);
        }
        uVar12 = *(ulong *)(local_370 + (long)local_568 * 8);
        puVar2 = PTR_WCRefinePluginHubItem_026cee50;
        local_338 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginHubItem_026cee50,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar12 & 1) != 0) &&
           (uVar12 = local_338,
           (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_isController_026b1a20),
           (uVar12 & 1) == 0)) {
          uVar12 = local_338;
          (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_key_026a7380);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          local_380 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar12);
          uVar12 = local_380;
          (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_length_0269cca0);
          if (uVar12 == 0) {
            local_2fc = 7;
          }
          else {
            uVar12 = local_338;
            (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_storage_026b1a28);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar12;
            FUN_01618794();
            _objc_retainAutoreleasedReturnValue();
            local_388 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar12);
            uVar12 = local_338;
            (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_identifier_026a4a88);
            _objc_retainAutoreleasedReturnValue();
            local_5a8 = uVar12;
            if (uVar12 == 0) {
              local_5a8 = local_380;
            }
            pcVar4 = &cf_wcr_sf_switch_;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf_wcr_sf_switch_,PTR_s_stringByAppendingString__0269d398,local_5a8);
            _objc_retainAutoreleasedReturnValue();
            local_390 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(uVar12);
            puVar2 = PTR_WCRefinePluginHubManager_026ce800;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_398 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_398;
            (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_length_0269cca0);
            if (puVar2 == (undefined *)0x0) {
              _objc_storeStrong(&local_398,local_380);
            }
            puVar2 = local_398;
            FUN_01625a38(local_398,&cf_icons_outlined_setting,local_390,&cf___,0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_3a0 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3a0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_switch,
                       &cf__wcrCustomKind);
            local_1c8 = &cf_key;
            local_1b8 = local_380;
            local_1c0 = &cf_storage;
            local_1b0 = local_388;
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1b8,&local_1c8,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3a0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                       &cf__wcrCustomPayload);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_addObject__0269d180,local_3a0);
            _objc_storeStrong(&local_3a0);
            _objc_storeStrong(&local_398,0);
            _objc_storeStrong(&local_390,0);
            _objc_storeStrong(&local_388,0);
            local_2fc = 0;
          }
          _objc_storeStrong(&local_380,0);
        }
        local_568 = local_568 + 1;
      } while (local_568 < local_560);
      local_560 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_1a8,0x10
                );
      local_568 = (undefined *)0x0;
    } while (local_560 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_profileActions_026b1a38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_250;
  local_3a8 = puVar2;
  FUN_01625d48(local_250,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_3b0 = puVar3;
  _WCRThemeLifeMallEntriesVisible();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_3b8 = puVar2;
    _memset(auStack_400,0,0x40);
    puVar2 = local_3b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_618 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_248,0x10);
    if (local_618 != (undefined *)0x0) {
      lVar9 = *local_3f0;
      local_620 = (undefined *)0x0;
      do {
        do {
          if (*local_3f0 - lVar9 != 0) {
            _objc_enumerationMutation(*local_3f0 - lVar9,puVar2);
          }
          uVar12 = *(ulong *)(local_3f8 + (long)local_620 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_3c0 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar12 & 1) != 0) {
            uVar12 = local_3c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar12;
            FUN_01618794();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar12);
            if ((uVar8 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_addObject__0269d180,local_3c0);
            }
          }
          local_620 = local_620 + 1;
        } while (local_620 < local_618);
        local_618 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_248,
                   0x10);
        local_620 = (undefined *)0x0;
      } while (local_618 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_3b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_copy_0269d150);
    puVar2 = local_3b0;
    local_3b0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_3b8,0);
  }
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_coreDefaultActionsSeeded_026b1a40);
  bVar1 = ((byte)puVar2 ^ 1) & 1;
  if (bVar1 == 0) {
    puVar2 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,PTR_s_isEqualToArray__0269e9b0,local_3a8);
    if (((ulong)puVar2 & 1) != 0) goto LAB_016205f8;
  }
  else {
    puVar3 = local_3b0;
    FUN_01626f50();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_3b0;
    local_3b0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_3b0);
  if (bVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setCoreDefaultActionsSeeded__026b1a48,1)
    ;
  }
LAB_016205f8:
  puVar2 = local_3b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_2fc = 1;
  _objc_storeStrong(&local_3b0);
  _objc_storeStrong(&local_3a8,0);
  _objc_storeStrong(&local_250,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

