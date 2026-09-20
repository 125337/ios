// applyLongPressOrderToMenuItems: @ 01106cc0

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::applyLongPressOrderToMenuItems_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_650;
  undefined *local_648;
  undefined *local_610;
  undefined *local_608;
  undefined *local_5b0;
  undefined *local_5a8;
  undefined *local_588;
  undefined *local_550;
  undefined *local_548;
  undefined *local_510;
  undefined *local_508;
  undefined1 auStack_4b8 [8];
  long local_4b0;
  long *local_4a8;
  undefined8 local_478;
  undefined *local_470;
  undefined1 auStack_468 [8];
  long local_460;
  long *local_458;
  undefined8 local_428;
  undefined *local_420;
  undefined *local_418;
  undefined1 local_409;
  undefined *local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  ulong local_3c0;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  long *local_398;
  undefined *local_368;
  long local_360;
  undefined1 auStack_358 [8];
  long local_350;
  long *local_348;
  long local_318;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  byte local_2d9;
  undefined *local_2d8;
  undefined4 local_2cc;
  undefined *local_2c8;
  SEL local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2c8 = (undefined *)0x0;
  local_2c0 = param_2;
  local_2b8 = (undefined *)param_1;
  _objc_storeStrong(&local_2c8,param_3);
  puVar4 = local_2c8;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  puVar3 = local_2c8;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = puVar3;
    local_2cc = 1;
  }
  else {
    puVar4 = local_2c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d9 = (byte)puVar4;
    local_2d8 = puVar3;
    _WCRLongPressMenuCustomizeActive();
    if ((local_2d9 & 1) == 0) {
      puVar3 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_count_0269cfe0);
      puVar4 = local_2c8;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_2b0 = puVar4;
        local_2cc = 1;
      }
      else {
        puVar4 = local_2b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2b8,PTR_s_applyPluginOnlyLongPressOrderToM_026aee60,local_2d8);
        _objc_retainAutoreleasedReturnValue();
        local_2cc = 1;
        local_2b0 = puVar4;
      }
    }
    else {
      puVar4 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_count_0269cfe0);
      if (puVar4 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2b8,PTR_s_discoverLongPressItemsFromMenuIt_026aee68,local_2d8);
      }
      puVar4 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_resolvedLongPressOrder_026aed60);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_2b8;
      local_2e8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_disabledLongPressItemIDSet_026aedd8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_2b8;
      local_2f0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_disabledLongPressTitleSet_026aee70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_2f8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_300 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_308 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_310 = puVar3;
      _memset(auStack_358,0,0x40);
      puVar4 = local_2b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_rawLongPressCustomItems_026aed90);
      _objc_retainAutoreleasedReturnValue();
      local_508 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_508 != (undefined *)0x0) {
        lVar6 = *local_348;
        local_510 = (undefined *)0x0;
        do {
          do {
            if (*local_348 - lVar6 != 0) {
              _objc_enumerationMutation(*local_348 - lVar6,puVar4);
            }
            lVar7 = *(long *)(local_350 + (long)local_510 * 8);
            local_318 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_360 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
            if (lVar7 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_310,PTR_s_setObject_forKeyedSubscript__0269d248,local_318,local_360);
            }
            _objc_storeStrong(&local_360,0);
            local_510 = local_510 + 1;
          } while (local_510 < local_508);
          local_508 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_a8,
                     0x10);
          local_510 = (undefined *)0x0;
        } while (local_508 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _memset(auStack_3a8,0,0x40);
      puVar4 = local_2d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_548 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,auStack_128,0x10
                );
      if (local_548 != (undefined *)0x0) {
        lVar6 = *local_398;
        local_550 = (undefined *)0x0;
        do {
          do {
            if (*local_398 - lVar6 != 0) {
              _objc_enumerationMutation(*local_398 - lVar6,puVar4);
            }
            local_368 = *(undefined **)(local_3a0 + (long)local_550 * 8);
            puVar3 = local_2b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2b8,PTR_s_resolveControllableIDForMenuItem_026aee40,local_368);
            _objc_retainAutoreleasedReturnValue();
            local_3b0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
            if (puVar3 == (undefined *)0x0) {
              local_2cc = 5;
            }
            else {
              puVar3 = local_3b0;
              _WCRLongPressMenuItemIsCustom();
              if ((((ulong)puVar3 & 1) != 0) &&
                 (puVar3 = local_2b8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_2b8,PTR_s_menuItemIsPluginCreated__026aee50,local_368),
                 ((ulong)puVar3 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_addObject__0269d180,local_3b0)
                ;
                _objc_setAssociatedObject(local_368,&DAT_028e3508,local_3b0,3);
              }
              puVar3 = local_2f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f0,PTR_s_containsObject__0269cbb8,local_3b0);
              if (((ulong)puVar3 & 1) == 0) {
                puVar3 = local_2b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2b8,PTR_s_menuItemTitle__026aee28,local_368);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar3;
                FUN_010f4f48();
                _objc_retainAutoreleasedReturnValue();
                local_3b8 = puVar5;
                (*(code *)PTR__objc_release_02578630)(puVar3);
                puVar3 = local_3b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_length_0269cca0);
                if ((puVar3 == (undefined *)0x0) ||
                   (puVar3 = local_2f8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_2f8,PTR_s_containsObject__0269cbb8,local_3b8),
                   ((ulong)puVar3 & 1) == 0)) {
                  puVar3 = local_300;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_300,PTR_s_objectForKeyedSubscript__0269d098,local_3b0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  if (puVar3 == (undefined *)0x0) {
                    puVar3 = local_2b8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2b8,PTR_s_applyAppearanceToMenuItem_itemID_026aee78,local_368,
                               local_3b0);
                    _objc_retainAutoreleasedReturnValue();
                    local_588 = puVar3;
                    if (puVar3 == (undefined *)0x0) {
                      local_588 = local_368;
                    }
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_300,PTR_s_setObject_forKeyedSubscript__0269d248,local_588,
                               local_3b0);
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                  }
                  local_2cc = 0;
                }
                else {
                  local_2cc = 5;
                }
                _objc_storeStrong(&local_3b8,0);
              }
              else {
                local_2cc = 5;
              }
            }
            _objc_storeStrong(&local_3b0,0);
            local_550 = local_550 + 1;
          } while (local_550 < local_548);
          local_548 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,auStack_128,
                     0x10);
          local_550 = (undefined *)0x0;
        } while (local_548 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _memset(auStack_400,0,0x40);
      puVar4 = local_2e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_5a8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_1a8,0x10
                );
      if (local_5a8 != (undefined *)0x0) {
        lVar6 = *local_3f0;
        local_5b0 = (undefined *)0x0;
        do {
          do {
            if (*local_3f0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_3f0 - lVar6,puVar4);
            }
            uVar8 = *(ulong *)(local_3f8 + (long)local_5b0 * 8);
            local_3c0 = uVar8;
            _WCRLongPressMenuItemIsCustom();
            local_409 = 0;
            bVar2 = true;
            uVar1 = (uVar8 & 1) != 0;
            if ((bool)uVar1) {
              puVar3 = local_300;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_300,PTR_s_objectForKeyedSubscript__0269d098,local_3c0);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = puVar3 != (undefined *)0x0;
              local_409 = uVar1;
              local_408 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              uVar1 = local_409;
            }
            local_409 = uVar1;
            if (((!bVar2) &&
                (puVar3 = local_308,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_308,PTR_s_containsObject__0269cbb8,local_3c0),
                ((ulong)puVar3 & 1) == 0)) &&
               (puVar5 = local_2f0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_2f0,PTR_s_containsObject__0269cbb8,local_3c0), puVar3 = local_2b8,
               ((ulong)puVar5 & 1) == 0)) {
              puVar5 = local_310;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_310,PTR_s_objectForKeyedSubscript__0269d098,local_3c0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_createLongPressCustomMenuItem__026aee80);
              _objc_retainAutoreleasedReturnValue();
              local_418 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              if (local_418 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_300,PTR_s_setObject_forKeyedSubscript__0269d248,local_418,local_3c0
                          );
              }
              _objc_storeStrong(&local_418,0);
            }
            local_5b0 = local_5b0 + 1;
          } while (local_5b0 < local_5a8);
          local_5a8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_1a8,
                     0x10);
          local_5b0 = (undefined *)0x0;
        } while (local_5a8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      puVar3 = local_300;
      (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_420 = puVar4;
      _memset(auStack_468,0,0x40);
      puVar4 = local_2e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_608 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_468,auStack_228,0x10
                );
      if (local_608 != (undefined *)0x0) {
        lVar6 = *local_458;
        local_610 = (undefined *)0x0;
        do {
          do {
            if (*local_458 - lVar6 != 0) {
              _objc_enumerationMutation(*local_458 - lVar6,puVar4);
            }
            local_428 = *(undefined8 *)(local_460 + (long)local_610 * 8);
            puVar3 = local_300;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_300,PTR_s_objectForKeyedSubscript__0269d098,local_428);
            _objc_retainAutoreleasedReturnValue();
            local_470 = puVar3;
            if (puVar3 == (undefined *)0x0) {
              local_2cc = 9;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_420,PTR_s_addObject__0269d180,puVar3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_300,PTR_s_removeObjectForKey__0269d700,local_428);
              local_2cc = 0;
            }
            _objc_storeStrong(&local_470,0);
            local_610 = local_610 + 1;
          } while (local_610 < local_608);
          local_608 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_468,auStack_228,
                     0x10);
          local_610 = (undefined *)0x0;
        } while (local_608 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _memset(auStack_4b8,0,0x40);
      puVar4 = local_300;
      (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_allKeys_0269ef58);
      _objc_retainAutoreleasedReturnValue();
      local_648 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_648 != (undefined *)0x0) {
        lVar6 = *local_4a8;
        local_650 = (undefined *)0x0;
        do {
          do {
            if (*local_4a8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_4a8 - lVar6,puVar4);
            }
            puVar3 = local_420;
            local_478 = *(undefined8 *)(local_4b0 + (long)local_650 * 8);
            puVar5 = local_300;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_300,PTR_s_objectForKeyedSubscript__0269d098,local_478);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_650 = local_650 + 1;
          } while (local_650 < local_648);
          local_648 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4b8,auStack_2a8,
                     0x10);
          local_650 = (undefined *)0x0;
        } while (local_648 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_420;
      (*(code *)PTR__objc_msgSend_02578628)(local_420,PTR_s_copy_0269d150);
      local_2cc = 1;
      local_2b0 = puVar4;
      _objc_storeStrong(&local_420);
      _objc_storeStrong(&local_310,0);
      _objc_storeStrong(&local_308,0);
      _objc_storeStrong(&local_300,0);
      _objc_storeStrong(&local_2f8,0);
      _objc_storeStrong(&local_2f0,0);
      _objc_storeStrong(&local_2e8,0);
    }
    _objc_storeStrong(&local_2d8,0);
  }
  _objc_storeStrong(&local_2c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_2b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

