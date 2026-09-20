// discoverLongPressItemsFromMenuItems: @ 01104ba4

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginIconCatalog::discoverLongPressItemsFromMenuItems_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  cfstringStruct *local_4a8;
  uint local_484;
  cfstringStruct *local_468;
  cfstringStruct *local_460;
  byte local_41c;
  ulong local_3e8;
  ulong local_3e0;
  cfstringStruct *local_3a8;
  cfstringStruct *local_3a0;
  undefined *local_378;
  byte local_369;
  ulong local_368;
  byte local_359;
  ulong local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ulong local_310;
  byte local_303;
  undefined1 local_302;
  byte local_301;
  undefined *local_300;
  byte local_2f1;
  undefined *local_2f0;
  byte local_2e1;
  undefined *local_2e0;
  undefined *local_2d8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  byte local_261;
  long local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  long local_218;
  undefined *local_210;
  undefined4 local_204;
  ulong local_200;
  SEL local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_200 = 0;
  local_1f8 = param_2;
  local_1f0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_200,param_3);
  uVar3 = local_200;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_200, (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    local_204 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar2;
    _memset(auStack_258,0,0x40);
    pcVar4 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_rawLongPressDiscoveredItems_026aeda8);
    _objc_retainAutoreleasedReturnValue();
    local_3a0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_3a0 != (cfstringStruct *)0x0) {
      lVar8 = *local_248;
      local_3a8 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_248 - lVar8 != 0) {
            _objc_enumerationMutation(*local_248 - lVar8,pcVar4);
          }
          lVar9 = *(long *)(local_250 + (long)local_3a8 * 8);
          local_218 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          local_260 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_210,PTR_s_setObject_forKeyedSubscript__0269d248,local_218,local_260);
          }
          _objc_storeStrong(&local_260,0);
          local_3a8 = (cfstringStruct *)((long)&local_3a8->field0_0x0 + 1);
        } while (local_3a8 < local_3a0);
        local_3a0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                   0x10);
        local_3a8 = (cfstringStruct *)0x0;
      } while (local_3a0 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_261 = 0;
    _memset(auStack_2b0,0,0x40);
    uVar3 = local_200;
    (*(code *)PTR__objc_retain_02578638)();
    local_3e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,0x10);
    if (local_3e0 != 0) {
      lVar8 = *local_2a0;
      local_3e8 = 0;
      do {
        do {
          if (*local_2a0 - lVar8 != 0) {
            _objc_enumerationMutation(*local_2a0 - lVar8,uVar3);
          }
          local_270 = *(undefined8 *)(local_2a8 + local_3e8 * 8);
          pcVar4 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_resolveControllableIDForMenuItem_026aee40,local_270);
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
          if ((pcVar4 == (cfstringStruct *)0x0) ||
             (pcVar4 = local_2b8, _WCRLongPressMenuItemIsCustom(), ((ulong)pcVar4 & 1) != 0)) {
            local_204 = 5;
          }
          else {
            pcVar4 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_defaultLongPressOrder_026aedb0);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            if (((ulong)pcVar5 & 1) == 0) {
              pcVar4 = local_1f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f0,PTR_s_menuItemTitle__026aee28,local_270);
              _objc_retainAutoreleasedReturnValue();
              local_2c0 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
              if (pcVar4 == (cfstringStruct *)0x0) {
                local_204 = 5;
              }
              else {
                pcVar4 = local_1f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f0,PTR_s_menuTypeOfItem__026aee30,local_270);
                local_2c8 = pcVar4;
                (*(code *)PTR__objc_retain_02578638)();
                local_2d0 = &::cf___;
                if (local_2c8 != (cfstringStruct *)0x0) {
                  pcVar5 = local_1f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_nativeSVGNameForMenuType__026aecf0,local_2c8);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar4 = local_2d0;
                  local_2d0 = pcVar5;
                  (*(code *)PTR__objc_release_02578630)(pcVar4);
                }
                puVar2 = local_210;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_210,PTR_s_objectForKeyedSubscript__0269d098,local_2b8);
                _objc_retainAutoreleasedReturnValue();
                local_2d8 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar2;
                FUN_010f4f48();
                _objc_retainAutoreleasedReturnValue();
                local_2e0 = puVar6;
                (*(code *)PTR__objc_release_02578630)(puVar2);
                local_2f1 = 0;
                local_301 = 0;
                local_41c = 0;
                if (local_2d8 != (undefined *)0x0) {
                  puVar2 = local_2d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                  _objc_retainAutoreleasedReturnValue();
                  local_2f1 = 1;
                  local_2f0 = puVar2;
                  FUN_010f4f48();
                  _objc_retainAutoreleasedReturnValue();
                  local_301 = 1;
                  local_300 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_41c = (byte)puVar2;
                }
                if ((local_301 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_300);
                }
                if ((local_2f1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_2f0);
                }
                local_2e1 = local_41c & 1;
                bVar1 = false;
                if (local_2d8 != (undefined *)0x0) {
                  pcVar4 = local_1f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_isPlaceholderLongPressIcon__026aee00,local_2e0);
                  bVar1 = false;
                  if (((ulong)pcVar4 & 1) != 0) {
                    pcVar4 = local_2d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_length_0269cca0);
                    bVar1 = pcVar4 != (cfstringStruct *)0x0;
                  }
                }
                local_302 = bVar1;
                if (((local_2e1 & 1) == 0) || ((bool)local_302 != false)) {
                  if ((local_2d8 == (undefined *)0x0) &&
                     (pcVar4 = local_2b8, _WCRLongPressMenuItemIsNative(), ((ulong)pcVar4 & 1) != 0)
                     ) {
                    local_303 = 0;
                    _memset(auStack_350,0,0x40);
                    pcVar4 = local_1f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1f0,PTR_s_defaultNativeLongPressEntries_026aeda0);
                    _objc_retainAutoreleasedReturnValue();
                    local_460 = pcVar4;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    if (local_460 != (cfstringStruct *)0x0) {
                      lVar9 = *local_340;
                      local_468 = (cfstringStruct *)0x0;
                      do {
                        do {
                          if (*local_340 - lVar9 != 0) {
                            _objc_enumerationMutation(*local_340 - lVar9,pcVar4);
                          }
                          uVar10 = *(ulong *)(local_348 + (long)local_468 * 8);
                          local_310 = uVar10;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                          _objc_retainAutoreleasedReturnValue();
                          uVar7 = uVar10;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          local_359 = 0;
                          local_369 = 0;
                          local_484 = 0;
                          if ((uVar7 & 1) != 0) {
                            uVar7 = local_310;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_310,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                            _objc_retainAutoreleasedReturnValue();
                            local_359 = 1;
                            local_358 = uVar7;
                            FUN_010f4f48();
                            _objc_retainAutoreleasedReturnValue();
                            local_369 = 1;
                            local_368 = uVar7;
                            (*(code *)PTR__objc_msgSend_02578628)();
                            local_484 = (uint)uVar7;
                          }
                          if ((local_369 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_368);
                          }
                          if ((local_359 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_358);
                          }
                          (*(code *)PTR__objc_release_02578630)(uVar10);
                          if ((local_484 & 1) != 0) {
                            local_303 = 1;
                            local_204 = 6;
                            goto LAB_01105590;
                          }
                          local_468 = (cfstringStruct *)((long)&local_468->field0_0x0 + 1);
                        } while (local_468 < local_460);
                        local_460 = pcVar4;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_350,auStack_1a8,0x10);
                        local_468 = (cfstringStruct *)0x0;
                      } while (local_460 != (cfstringStruct *)0x0);
                    }
                    local_204 = 0;
LAB_01105590:
                    (*(code *)PTR__objc_release_02578630)(pcVar4);
                    if ((local_303 & 1) != 0) {
                      local_204 = 5;
                      goto LAB_011057e8;
                    }
                  }
                  pcVar4 = local_2d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_length_0269cca0);
                  if (pcVar4 == (cfstringStruct *)0x0) {
                    _objc_storeStrong(&local_2d0,local_2e0);
                  }
                  local_1e8 = &cf_id;
                  local_1c8 = local_2b8;
                  local_1e0 = &cf_title;
                  local_1c0 = local_2c0;
                  local_1d8 = &cf_icon;
                  if (local_2d0 == (cfstringStruct *)0x0) {
                    local_4a8 = &::cf___;
                  }
                  else {
                    local_4a8 = local_2d0;
                  }
                  local_1b8 = local_4a8;
                  local_1d0 = &cf_kind;
                  pcVar4 = local_2b8;
                  _WCRLongPressMenuItemIsNative();
                  local_1b0 = &cf_native;
                  if (((ulong)pcVar4 & 1) == 0) {
                    local_1b0 = &cf_plugin;
                  }
                  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1c8,&local_1e8,4
                            );
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_378 = puVar6;
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  if (local_2c8 != (cfstringStruct *)0x0) {
                    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080
                               ,local_2c8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_378,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                               &cf_menuType);
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                  }
                  puVar2 = local_378;
                  (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_copy_0269d150);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_210,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_2b8)
                  ;
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  local_261 = 1;
                  _objc_storeStrong(&local_378,0);
                  local_204 = 0;
                }
                else {
                  local_204 = 5;
                }
LAB_011057e8:
                _objc_storeStrong(&local_2e0);
                _objc_storeStrong(&local_2d8,0);
                _objc_storeStrong(&local_2d0,0);
              }
              _objc_storeStrong(&local_2c0,0);
            }
            else {
              local_204 = 5;
            }
          }
          _objc_storeStrong(&local_2b8,0);
          local_3e8 = local_3e8 + 1;
        } while (local_3e8 < local_3e0);
        local_3e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,
                   0x10);
        local_3e8 = 0;
      } while (local_3e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((local_261 & 1) != 0) {
      puVar2 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_210,0);
    local_204 = 0;
  }
  _objc_storeStrong(&local_200,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

