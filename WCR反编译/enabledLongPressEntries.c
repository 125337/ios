// enabledLongPressEntries @ 011003cc

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::enabledLongPressEntries(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  undefined *local_598;
  undefined *local_590;
  ulong local_558;
  ulong local_550;
  ulong local_518;
  ulong local_510;
  ulong local_4d8;
  ulong local_4d0;
  ID local_4b0;
  ulong local_488;
  ulong local_480;
  undefined1 auStack_460 [8];
  long local_458;
  long *local_450;
  undefined8 local_420;
  undefined *local_418;
  undefined1 auStack_410 [8];
  long local_408;
  long *local_400;
  undefined8 local_3d0;
  undefined *local_3c8;
  long local_3c0;
  undefined1 auStack_3b8 [8];
  long local_3b0;
  long *local_3a8;
  long local_378;
  long local_370;
  undefined1 auStack_368 [8];
  long local_360;
  long *local_358;
  long local_328;
  undefined4 local_31c;
  ID local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  ID local_2d0;
  undefined *local_2c8;
  ID local_2c0;
  SEL local_2b8;
  ID local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2b8 = param_2;
  local_2b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_disabledLongPressItemIDSet_026aedd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_2c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_2c8 = puVar1;
  _memset(auStack_310,0,0x40);
  IVar2 = local_2b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_allNativeAndDiscoveredLongPressE_026aed40);
  _objc_retainAutoreleasedReturnValue();
  local_480 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_480 != 0) {
    lVar3 = *local_300;
    local_488 = 0;
    do {
      do {
        if (*local_300 - lVar3 != 0) {
          _objc_enumerationMutation(*local_300 - lVar3,IVar2);
        }
        IVar4 = *(ID *)(local_308 + local_488 * 8);
        local_2d0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_318 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
        if ((IVar4 == 0) ||
           (IVar4 = local_2c0,
           (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_containsObject__0269cbb8,local_318)
           , (IVar4 & 1) != 0)) {
          local_31c = 3;
        }
        else {
          IVar4 = local_2b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2b0,PTR_s_displayEntryForLongPressItemID__026aede0,local_318);
          _objc_retainAutoreleasedReturnValue();
          local_4b0 = IVar4;
          if (IVar4 == 0) {
            local_4b0 = local_2d0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2c8,PTR_s_setObject_forKeyedSubscript__0269d248,local_4b0,local_318);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          local_31c = 0;
        }
        _objc_storeStrong(&local_318,0);
        local_488 = local_488 + 1;
      } while (local_488 < local_480);
      local_480 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_a8,0x10);
      local_488 = 0;
    } while (local_480 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_368,0,0x40);
  IVar2 = local_2b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_displayEntriesForCategory__026aee10,0);
  _objc_retainAutoreleasedReturnValue();
  local_4d0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_4d0 != 0) {
    lVar3 = *local_358;
    local_4d8 = 0;
    do {
      do {
        if (*local_358 - lVar3 != 0) {
          _objc_enumerationMutation(*local_358 - lVar3,IVar2);
        }
        lVar5 = *(long *)(local_360 + local_4d8 * 8);
        local_328 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_370 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if ((lVar5 == 0) ||
           (IVar4 = local_2c0,
           (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_containsObject__0269cbb8,local_370)
           , (IVar4 & 1) != 0)) {
          local_31c = 5;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2c8,PTR_s_setObject_forKeyedSubscript__0269d248,local_328,local_370);
          local_31c = 0;
        }
        _objc_storeStrong(&local_370,0);
        local_4d8 = local_4d8 + 1;
      } while (local_4d8 < local_4d0);
      local_4d0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_368,auStack_128,0x10)
      ;
      local_4d8 = 0;
    } while (local_4d0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_3b8,0,0x40);
  IVar2 = local_2b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_rawLongPressCustomItems_026aed90);
  _objc_retainAutoreleasedReturnValue();
  local_510 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_510 != 0) {
    lVar3 = *local_3a8;
    local_518 = 0;
    do {
      do {
        if (*local_3a8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_3a8 - lVar3,IVar2);
        }
        lVar5 = *(long *)(local_3b0 + local_518 * 8);
        local_378 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_3c0 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2c8,PTR_s_setObject_forKeyedSubscript__0269d248,local_378,local_3c0);
        }
        _objc_storeStrong(&local_3c0,0);
        local_518 = local_518 + 1;
      } while (local_518 < local_510);
      local_510 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b8,auStack_1a8,0x10)
      ;
      local_518 = 0;
    } while (local_510 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_3c8 = puVar1;
  _memset(auStack_410,0,0x40);
  IVar2 = local_2b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_resolvedLongPressOrder_026aed60);
  _objc_retainAutoreleasedReturnValue();
  local_550 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_550 != 0) {
    lVar3 = *local_400;
    local_558 = 0;
    do {
      do {
        if (*local_400 - lVar3 != 0) {
          _objc_enumerationMutation(*local_400 - lVar3,IVar2);
        }
        local_3d0 = *(undefined8 *)(local_408 + local_558 * 8);
        puVar1 = local_2c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2c8,PTR_s_objectForKeyedSubscript__0269d098,local_3d0);
        _objc_retainAutoreleasedReturnValue();
        local_418 = puVar1;
        if (puVar1 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_addObject__0269d180,puVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2c8,PTR_s_removeObjectForKey__0269d700,local_3d0);
        }
        _objc_storeStrong(&local_418,0);
        local_558 = local_558 + 1;
      } while (local_558 < local_550);
      local_550 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_410,auStack_228,0x10)
      ;
      local_558 = 0;
    } while (local_550 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_460,0,0x40);
  puVar1 = local_2c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_allValues_0269dae8);
  _objc_retainAutoreleasedReturnValue();
  local_590 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_590 != (undefined *)0x0) {
    lVar3 = *local_450;
    local_598 = (undefined *)0x0;
    do {
      do {
        if (*local_450 - lVar3 != 0) {
          _objc_enumerationMutation(*local_450 - lVar3,puVar1);
        }
        local_420 = *(undefined8 *)(local_458 + (long)local_598 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_addObject__0269d180,local_420);
        local_598 = local_598 + 1;
      } while (local_598 < local_590);
      local_590 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_460,auStack_2a8,0x10
                );
      local_598 = (undefined *)0x0;
    } while (local_590 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_3c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_copy_0269d150);
  local_31c = 1;
  _objc_storeStrong(&local_3c8);
  _objc_storeStrong(&local_2c8,0);
  _objc_storeStrong(&local_2c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

