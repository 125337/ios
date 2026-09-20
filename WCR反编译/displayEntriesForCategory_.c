// displayEntriesForCategory: @ 010fa684

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::displayEntriesForCategory_(ID param_1,SEL param_2,long_long param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_4c8;
  ulong local_4c0;
  ulong local_468;
  ulong local_460;
  ulong local_428;
  ulong local_420;
  ulong local_3e8;
  ulong local_3e0;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined1 auStack_3b0 [8];
  long local_3a8;
  long *local_3a0;
  undefined8 local_370;
  undefined *local_368;
  undefined1 local_359;
  undefined *local_358;
  long local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  long local_308;
  undefined *local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  undefined8 local_2b8;
  undefined *local_2b0;
  long local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  long local_260;
  undefined *local_258;
  ID local_250;
  ID local_248;
  long_long local_240;
  SEL local_238;
  ID local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_240 = param_3;
  local_238 = param_2;
  local_230 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultEntriesForCategory__026aed20,param_3);
  _objc_retainAutoreleasedReturnValue();
  local_248 = param_1;
  if (local_240 == 0) {
    IVar3 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_resolvedLongPressOrder_026aed60);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_250 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_258 = puVar4;
    _memset(auStack_2a0,0,0x40);
    IVar3 = local_248;
    (*(code *)PTR__objc_retain_02578638)();
    local_3e0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8,0x10);
    if (local_3e0 != 0) {
      lVar7 = *local_290;
      local_3e8 = 0;
      do {
        do {
          if (*local_290 - lVar7 != 0) {
            _objc_enumerationMutation(*local_290 - lVar7,IVar3);
          }
          lVar8 = *(long *)(local_298 + local_3e8 * 8);
          local_260 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          if (lVar8 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_258,PTR_s_setObject_forKeyedSubscript__0269d248,local_260,local_2a8);
          }
          _objc_storeStrong(&local_2a8,0);
          local_3e8 = local_3e8 + 1;
        } while (local_3e8 < local_3e0);
        local_3e0 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8,0x10
                  );
        local_3e8 = 0;
      } while (local_3e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = puVar4;
    _memset(auStack_2f8,0,0x40);
    IVar3 = local_250;
    (*(code *)PTR__objc_retain_02578638)();
    local_420 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_128,0x10);
    if (local_420 != 0) {
      lVar7 = *local_2e8;
      local_428 = 0;
      do {
        do {
          if (*local_2e8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2e8 - lVar7,IVar3);
          }
          local_2b8 = *(undefined8 *)(local_2f0 + local_428 * 8);
          puVar4 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_258,PTR_s_objectForKeyedSubscript__0269d098,local_2b8);
          _objc_retainAutoreleasedReturnValue();
          local_300 = puVar4;
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_addObject__0269d180,puVar4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_258,PTR_s_removeObjectForKey__0269d700,local_2b8);
          }
          _objc_storeStrong(&local_300,0);
          local_428 = local_428 + 1;
        } while (local_428 < local_420);
        local_420 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_128,
                   0x10);
        local_428 = 0;
      } while (local_420 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_348,0,0x40);
    IVar3 = local_248;
    (*(code *)PTR__objc_retain_02578638)();
    local_460 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_1a8,0x10);
    if (local_460 != 0) {
      lVar7 = *local_338;
      local_468 = 0;
      do {
        do {
          if (*local_338 - lVar7 != 0) {
            _objc_enumerationMutation(*local_338 - lVar7,IVar3);
          }
          lVar8 = *(long *)(local_340 + local_468 * 8);
          local_308 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          local_350 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          local_359 = 0;
          bVar2 = false;
          uVar1 = lVar8 != 0;
          if ((bool)uVar1) {
            puVar4 = local_258;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_258,PTR_s_objectForKeyedSubscript__0269d098,local_350);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = puVar4 != (undefined *)0x0;
            local_359 = uVar1;
            local_358 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            uVar1 = local_359;
          }
          local_359 = uVar1;
          if (bVar2) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_addObject__0269d180,local_308);
          }
          _objc_storeStrong(&local_350,0);
          local_468 = local_468 + 1;
        } while (local_468 < local_460);
        local_460 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_1a8,
                   0x10);
        local_468 = 0;
      } while (local_460 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_248,local_2b0);
    _objc_storeStrong(&local_2b0);
    _objc_storeStrong(&local_258,0);
    _objc_storeStrong(&local_250,0);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  IVar3 = local_248;
  (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,IVar3);
  _objc_retainAutoreleasedReturnValue();
  local_368 = puVar4;
  _memset(auStack_3b0,0,0x40);
  IVar3 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_4c0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b0,auStack_228,0x10);
  if (local_4c0 != 0) {
    lVar7 = *local_3a0;
    local_4c8 = 0;
    do {
      do {
        if (*local_3a0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_3a0 - lVar7,IVar3);
        }
        uVar9 = *(undefined8 *)(local_3a8 + local_4c8 * 8);
        local_370 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_370;
        local_3b8 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_mutableCopy_0269d8a0);
        IVar6 = local_230;
        local_3c0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_230,PTR_s_resolvedTitleForItemID__026aecd0,local_3b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3c0,PTR_s_setObject_forKeyedSubscript__0269d248,IVar6,&cf_title);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        IVar6 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_230,PTR_s_resolvedIconForItemID__026aecd8,local_3b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3c0,PTR_s_setObject_forKeyedSubscript__0269d248,IVar6,&cf_icon);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        puVar4 = local_368;
        uVar5 = local_3c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_3c0,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        _objc_storeStrong(&local_3c0);
        _objc_storeStrong(&local_3b8,0);
        local_4c8 = local_4c8 + 1;
      } while (local_4c8 < local_4c0);
      local_4c0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b0,auStack_228,0x10)
      ;
      local_4c8 = 0;
    } while (local_4c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar4 = local_368;
  (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_368);
  _objc_storeStrong(&local_248,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar4;
}

