// filterSectionsWithKeyword: @ 014cc724

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchManager::filterSectionsWithKeyword_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong local_8a0;
  ulong local_898;
  ulong local_808;
  ulong local_800;
  uint local_78c;
  undefined *local_758;
  undefined *local_750;
  undefined *local_6f0;
  undefined *local_6e8;
  undefined *local_610;
  ulong local_5b0;
  ulong local_5a8;
  ID local_550;
  long local_548;
  undefined *local_540;
  undefined1 auStack_538 [8];
  long local_530;
  long *local_528;
  long local_4f8;
  byte local_4e9;
  char *local_4e8;
  ulong local_4e0;
  ulong local_4d8;
  ulong local_4d0;
  undefined1 auStack_4c8 [8];
  long local_4c0;
  long *local_4b8;
  ulong local_488;
  char *local_480;
  char *local_478;
  ID local_468;
  ID local_460;
  byte local_451;
  char *local_450;
  undefined1 auStack_448 [8];
  long local_440;
  long *local_438;
  undefined8 local_408;
  ID local_3f8;
  undefined *local_3f0;
  ID local_3e8;
  undefined1 auStack_3e0 [8];
  long local_3d8;
  long *local_3d0;
  long local_3a0;
  undefined *local_398;
  undefined *local_390;
  undefined *local_388;
  ID local_380;
  ID local_378;
  ID local_370;
  ID local_368;
  undefined *local_360;
  undefined *local_358;
  undefined *local_350;
  char *local_348;
  char *local_340;
  undefined *local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  undefined *local_2f0;
  ulong local_2e8 [3];
  undefined *local_2d0;
  undefined4 local_2c4;
  long local_2c0;
  SEL local_2b8;
  ID local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2c0 = 0;
  local_2b8 = param_2;
  local_2b0 = param_1;
  _objc_storeStrong(&local_2c0,param_3);
  lVar12 = local_2c0;
  FUN_014bdccc();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = local_2c0;
  local_2c0 = lVar12;
  (*(code *)PTR__objc_release_02578630)(lVar9);
  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_wcRefineRestoreSearchHighlights_026af4f0);
  if ((*(long *)(local_2b0 + 0x10) == 0) ||
     (lVar9 = local_2c0, (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0),
     lVar9 == 0)) {
    _objc_storeStrong(local_2b0 + 0x18,0);
    uVar1 = local_2b0 + 0x48;
    _objc_loadWeakRetained();
    uVar11 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar11 & 1) != 0) {
      lVar9 = local_2b0 + 0x48;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar9);
    }
    local_2c4 = 1;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(ulong *)(local_2b0 + 0x10);
    local_2d0 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_copy_0269d150);
    local_2e8[0] = uVar1;
    _memset(auStack_330,0,0x40);
    uVar1 = local_2e8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_5a8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_a8,0x10);
    if (local_5a8 != 0) {
      lVar9 = *local_320;
      local_5b0 = 0;
      do {
        do {
          if (*local_320 - lVar9 != 0) {
            _objc_enumerationMutation(*local_320 - lVar9,uVar1);
          }
          puVar10 = *(undefined **)(local_328 + local_5b0 * 8);
          local_2f0 = puVar10;
          if (puVar10 != (undefined *)0x0) {
            local_338 = (undefined *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar10,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
            if (((ulong)puVar10 & 1) != 0) {
              puVar2 = local_2f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f0,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = local_338;
              local_338 = puVar2;
              (*(code *)PTR__objc_release_02578630)(puVar10);
            }
            if ((local_338 == (undefined *)0x0) ||
               (puVar10 = local_338,
               (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_count_0269cfe0),
               puVar10 == (undefined *)0x0)) {
              local_2c4 = 4;
            }
            else {
              pcVar3 = "WCTableViewSectionManager";
              _objc_getClass();
              local_340 = pcVar3;
              if (pcVar3 == (char *)0x0) {
                local_2c4 = 4;
              }
              else {
                _objc_alloc_init();
                puVar10 = local_2f0;
                local_348 = pcVar3;
                _objc_getAssociatedObject(local_2f0,"pluginSourceClass");
                _objc_retainAutoreleasedReturnValue();
                puVar2 = local_2f0;
                local_350 = puVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_respondsToSelector__026ca818,PTR_s_headerTitle_026af648);
                if (((ulong)puVar2 & 1) == 0) {
                  local_610 = (undefined *)0x0;
                }
                else {
                  local_610 = local_2f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2f0,PTR_s_performSelector__026ca7b8,PTR_s_headerTitle_026af648);
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_358 = local_610;
                puVar2 = local_2f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_respondsToSelector__026ca818,PTR_s_headerTitle_026af648);
                puVar10 = local_358;
                if (((ulong)puVar2 & 1) != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_360 = puVar10;
                  pcVar3 = local_348;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_348,PTR_s_respondsToSelector__026ca818,
                             PTR_s_setHeaderTitle__0269e3c0);
                  if (((ulong)pcVar3 & 1) != 0) {
                    if ((local_360 == (undefined *)0x0) ||
                       (puVar10 = local_360,
                       (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_length_0269cca0),
                       puVar10 == (undefined *)0x0)) {
                      if (local_350 != (undefined *)0x0) {
                        IVar4 = local_2b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2b0,PTR_s_getPluginDisplayName__026af6b8,local_350);
                        _objc_retainAutoreleasedReturnValue();
                        IVar5 = local_2b0;
                        local_378 = IVar4;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2b0,PTR_s_getViewControllerFriendlyName__026aa500,local_350
                                  );
                        _objc_retainAutoreleasedReturnValue();
                        local_380 = IVar5;
                        if ((local_378 != 0) && (IVar5 != 0)) {
                          puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSString_026cdfe8,
                                     PTR_s_stringWithFormat__0269cca8,&cf______);
                          _objc_retainAutoreleasedReturnValue();
                          local_388 = puVar10;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_348,PTR_s_performSelector_withObject__026ca7c0,
                                     PTR_s_setHeaderTitle__0269e3c0,puVar10);
                          _objc_storeStrong(&local_388,0);
                        }
                        _objc_storeStrong(&local_380);
                        _objc_storeStrong(&local_378,0);
                      }
                    }
                    else {
                      if (local_350 != (undefined *)0x0) {
                        IVar4 = local_2b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2b0,PTR_s_getPluginDisplayName__026af6b8,local_350);
                        _objc_retainAutoreleasedReturnValue();
                        IVar5 = local_2b0;
                        local_368 = IVar4;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2b0,PTR_s_getViewControllerFriendlyName__026aa500,local_350
                                  );
                        _objc_retainAutoreleasedReturnValue();
                        IVar4 = local_368;
                        local_370 = IVar5;
                        (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_length_0269cca0);
                        if (IVar4 != 0) {
                          IVar4 = local_370;
                          (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_length_0269cca0);
                          if (IVar4 == 0) {
                            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSString_026cdfe8,
                                       PTR_s_stringWithFormat__0269cca8,&cf______);
                            _objc_retainAutoreleasedReturnValue();
                            puVar10 = local_360;
                            local_360 = puVar2;
                            (*(code *)PTR__objc_release_02578630)(puVar10);
                          }
                          else {
                            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSString_026cdfe8,
                                       PTR_s_stringWithFormat__0269cca8,&cf_________);
                            _objc_retainAutoreleasedReturnValue();
                            puVar10 = local_360;
                            local_360 = puVar2;
                            (*(code *)PTR__objc_release_02578630)(puVar10);
                          }
                        }
                        _objc_storeStrong(&local_370);
                        _objc_storeStrong(&local_368,0);
                      }
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_348,PTR_s_performSelector_withObject__026ca7c0,
                                 PTR_s_setHeaderTitle__0269e3c0,local_360);
                    }
                  }
                  _objc_storeStrong(&local_360,0);
                }
                puVar10 = local_2f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_respondsToSelector__026ca818,PTR_s_footerTitle_026af6c0);
                if ((((ulong)puVar10 & 1) != 0) &&
                   (pcVar3 = local_348,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_348,PTR_s_respondsToSelector__026ca818,
                              PTR_s_setFooterTitle__0269e3c8), ((ulong)pcVar3 & 1) != 0)) {
                  puVar10 = local_2f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2f0,PTR_s_performSelector__026ca7b8,PTR_s_footerTitle_026af6c0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_390 = puVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
                  if ((((ulong)puVar10 & 1) != 0) &&
                     (puVar10 = local_390,
                     (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_length_0269cca0),
                     puVar10 != (undefined *)0x0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_348,PTR_s_performSelector_withObject__026ca7c0,
                               PTR_s_setFooterTitle__0269e3c8,local_390);
                  }
                  _objc_storeStrong(&local_390,0);
                }
                puVar10 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                _objc_retainAutoreleasedReturnValue();
                local_398 = puVar10;
                _memset(auStack_3e0,0,0x40);
                puVar10 = local_338;
                (*(code *)PTR__objc_retain_02578638)();
                local_6e8 = puVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e0,
                           auStack_128,0x10);
                if (local_6e8 != (undefined *)0x0) {
                  lVar12 = *local_3d0;
                  local_6f0 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_3d0 - lVar12 != 0) {
                        _objc_enumerationMutation(*local_3d0 - lVar12,puVar10);
                      }
                      local_3a0 = *(long *)(local_3d8 + (long)local_6f0 * 8);
                      if (local_3a0 != 0) {
                        IVar4 = local_2b0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_2b0,PTR_s_getTitleFromCellManager__026af650,local_3a0);
                        _objc_retainAutoreleasedReturnValue();
                        local_3e8 = IVar4;
                        if ((IVar4 != 0) &&
                           (puVar2 = PTR_s_rangeOfString_options__0269d118,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (IVar4,PTR_s_rangeOfString_options__0269d118,local_2c0,1),
                           local_3f8 = IVar4, local_3f0 = puVar2, IVar4 != 0x7fffffffffffffff)) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_398,PTR_s_addObject__0269d180,local_3a0);
                        }
                        _objc_storeStrong(&local_3e8,0);
                      }
                      local_6f0 = local_6f0 + 1;
                    } while (local_6f0 < local_6e8);
                    local_6e8 = puVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e0,
                               auStack_128,0x10);
                    local_6f0 = (undefined *)0x0;
                  } while (local_6e8 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar10);
                puVar10 = local_398;
                (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_count_0269cfe0);
                if (puVar10 != (undefined *)0x0) {
                  _memset(auStack_448,0,0x40);
                  puVar10 = local_398;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_750 = puVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448,
                             auStack_1a8,0x10);
                  if (local_750 != (undefined *)0x0) {
                    lVar12 = *local_438;
                    local_758 = (undefined *)0x0;
                    do {
                      do {
                        if (*local_438 - lVar12 != 0) {
                          _objc_enumerationMutation(*local_438 - lVar12,puVar10);
                        }
                        local_408 = *(undefined8 *)(local_440 + (long)local_758 * 8);
                        pcVar3 = local_348;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_348,PTR_s_respondsToSelector__026ca818,
                                   PTR_s_addCell__0269e3f8);
                        if (((ulong)pcVar3 & 1) == 0) {
                          local_2c4 = 9;
                          goto LAB_014cd744;
                        }
                        pcVar3 = "WCTableViewNormalCellManager";
                        _objc_getClass();
                        local_78c = 0;
                        local_450 = pcVar3;
                        if (pcVar3 != (char *)0x0) {
                          uVar8 = local_408;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_408,PTR_s_isKindOfClass__0269cd68,pcVar3);
                          local_78c = (uint)uVar8;
                        }
                        local_451 = (byte)local_78c & 1;
                        if (((local_78c & 1) == 0) ||
                           (puVar2 = local_350,
                           (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_length_0269cca0),
                           puVar2 == (undefined *)0x0)) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_2b0,PTR_s_wcRefineApplySearchHighlightToCe_026af6b0,
                                     local_408,local_2c0);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_348,PTR_s_performSelector_withObject__026ca7c0,
                                     PTR_s_addCell__0269e3f8,local_408);
                        }
                        else {
                          IVar4 = local_2b0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_2b0,PTR_s_getTitleFromCellManager__026af650,local_408);
                          _objc_retainAutoreleasedReturnValue();
                          IVar5 = local_2b0;
                          local_460 = IVar4;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_2b0,PTR_s_wcRefineSearchNavigationCellWith_026af5a0,IVar4
                                     ,local_350,local_358,local_2c0);
                          _objc_retainAutoreleasedReturnValue();
                          local_468 = IVar5;
                          if (IVar5 != 0) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_348,PTR_s_performSelector_withObject__026ca7c0,
                                       PTR_s_addCell__0269e3f8,IVar5);
                          }
                          _objc_storeStrong(&local_468);
                          _objc_storeStrong(&local_460,0);
                        }
                        local_758 = local_758 + 1;
                      } while (local_758 < local_750);
                      local_750 = puVar10;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_448
                                 ,auStack_1a8,0x10);
                      local_758 = (undefined *)0x0;
                    } while (local_750 != (undefined *)0x0);
                  }
                  local_2c4 = 0;
LAB_014cd744:
                  (*(code *)PTR__objc_release_02578630)(puVar10);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2d0,PTR_s_addObject__0269d180,local_348);
                }
                _objc_storeStrong(&local_398);
                _objc_storeStrong(&local_358,0);
                _objc_storeStrong(&local_350,0);
                _objc_storeStrong(&local_348,0);
                local_2c4 = 0;
              }
            }
            _objc_storeStrong(&local_338,0);
          }
          local_5b0 = local_5b0 + 1;
        } while (local_5b0 < local_5a8);
        local_5a8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_a8,0x10
                  );
        local_5b0 = 0;
      } while (local_5a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (*(long *)(local_2b0 + 0x40) != 0) {
      lVar9 = *(long *)(local_2b0 + 0x40);
      (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_count_0269cfe0);
      if (lVar9 != 0) {
        pcVar3 = "WCTableViewSectionManager";
        _objc_getClass(lVar9);
        pcVar6 = "WCTableViewNormalCellManager";
        local_478 = pcVar3;
        _objc_getClass();
        local_480 = pcVar6;
        if ((local_478 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
          _memset(auStack_4c8,0,0x40);
          uVar1 = *(ulong *)(local_2b0 + 0x40);
          (*(code *)PTR__objc_retain_02578638)();
          local_800 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4c8,auStack_228,
                     0x10);
          if (local_800 != 0) {
            lVar9 = *local_4b8;
            local_808 = 0;
            do {
              do {
                if (*local_4b8 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_4b8 - lVar9,uVar1);
                }
                uVar11 = *(ulong *)(local_4c0 + local_808 * 8);
                local_488 = uVar11;
                if (uVar11 != 0) {
                  puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar11,PTR_s_isKindOfClass__0269cd68,puVar10);
                  if ((uVar11 & 1) != 0) {
                    uVar11 = local_488;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_488,PTR_s_objectForKeyedSubscript__0269d098,&cf_vcClass);
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = local_488;
                    local_4d0 = uVar11;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_488,PTR_s_objectForKeyedSubscript__0269d098,&cf_sectionTitle);
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = local_488;
                    local_4d8 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_488,PTR_s_objectForKeyedSubscript__0269d098,&cf_features);
                    _objc_retainAutoreleasedReturnValue();
                    local_4e0 = uVar11;
                    if (((local_4d0 == 0) || (uVar11 == 0)) ||
                       ((*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_count_0269cfe0),
                       uVar11 == 0)) {
                      local_2c4 = 0xc;
                    }
                    else {
                      uVar11 = local_4d0;
                      _NSClassFromString();
                      if (uVar11 == 0) {
                        local_2c4 = 0xc;
                      }
                      else {
                        pcVar3 = local_478;
                        _objc_alloc_init();
                        local_4e8 = pcVar3;
                        if ((local_4d8 != 0) &&
                           ((*(code *)PTR__objc_msgSend_02578628)
                                      (pcVar3,PTR_s_respondsToSelector__026ca818,
                                       PTR_s_setHeaderTitle__0269e3c0), ((ulong)pcVar3 & 1) != 0)) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_4e8,PTR_s_performSelector_withObject__026ca7c0,
                                     PTR_s_setHeaderTitle__0269e3c0,local_4d8);
                        }
                        local_4e9 = 0;
                        _memset(auStack_538,0,0x40);
                        uVar11 = local_4e0;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_898 = uVar11;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_538,auStack_2a8,0x10);
                        if (local_898 != 0) {
                          lVar12 = *local_528;
                          local_8a0 = 0;
                          do {
                            do {
                              if (*local_528 - lVar12 != 0) {
                                _objc_enumerationMutation(*local_528 - lVar12,uVar11);
                              }
                              lVar13 = *(long *)(local_530 + local_8a0 * 8);
                              puVar10 = PTR_s_rangeOfString_options__0269d118;
                              local_4f8 = lVar13;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (lVar13,PTR_s_rangeOfString_options__0269d118,local_2c0,1);
                              local_548 = lVar13;
                              local_540 = puVar10;
                              if (lVar13 != 0x7fffffffffffffff) {
                                IVar4 = local_2b0;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_2b0,PTR_s_wcRefineSearchNavigationCellWith_026af5a0
                                           ,local_4f8,local_4d0,local_4d8,local_2c0);
                                _objc_retainAutoreleasedReturnValue();
                                local_550 = IVar4;
                                if ((IVar4 != 0) &&
                                   (pcVar3 = local_4e8,
                                   (*(code *)PTR__objc_msgSend_02578628)
                                             (local_4e8,PTR_s_respondsToSelector__026ca818,
                                              PTR_s_addCell__0269e3f8), ((ulong)pcVar3 & 1) != 0)) {
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_4e8,PTR_s_performSelector_withObject__026ca7c0,
                                             PTR_s_addCell__0269e3f8,local_550);
                                  local_4e9 = 1;
                                }
                                _objc_storeStrong(&local_550,0);
                              }
                              local_8a0 = local_8a0 + 1;
                            } while (local_8a0 < local_898);
                            local_898 = uVar11;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                       auStack_538,auStack_2a8,0x10);
                            local_8a0 = 0;
                          } while (local_898 != 0);
                        }
                        (*(code *)PTR__objc_release_02578630)(uVar11);
                        if ((local_4e9 & 1) != 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_2d0,PTR_s_addObject__0269d180,local_4e8);
                        }
                        _objc_storeStrong(&local_4e8,0);
                        local_2c4 = 0;
                      }
                    }
                    _objc_storeStrong(&local_4e0);
                    _objc_storeStrong(&local_4d8,0);
                    _objc_storeStrong(&local_4d0,0);
                  }
                }
                local_808 = local_808 + 1;
              } while (local_808 < local_800);
              local_800 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4c8,
                         auStack_228,0x10);
              local_808 = 0;
            } while (local_800 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
      }
    }
    puVar10 = local_2d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_copy_0269d150);
    uVar8 = *(undefined8 *)(local_2b0 + 0x18);
    *(undefined **)(local_2b0 + 0x18) = puVar10;
    (*(code *)PTR__objc_release_02578630)(uVar8);
    (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_reloadSearchUIAnimated__026af508,0);
    _objc_storeStrong(local_2e8);
    _objc_storeStrong(&local_2d0,0);
    local_2c4 = 0;
  }
  _objc_storeStrong(&local_2c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

