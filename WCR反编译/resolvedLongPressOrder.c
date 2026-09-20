// resolvedLongPressOrder @ 010fda24

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::resolvedLongPressOrder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong local_480;
  ulong local_478;
  ulong local_440;
  ulong local_438;
  ulong local_400;
  ulong local_3f8;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  undefined8 local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  undefined8 local_2f8;
  long local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  long local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  ulong local_260;
  undefined *local_258;
  undefined *local_250;
  ID local_248;
  undefined *local_240;
  SEL local_238;
  ID local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_238 = param_2;
  local_230 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_240 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_allControllableLongPressIDs_026aedc8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_248 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,IVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_250 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_240;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_258 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar1 & 1) != 0) {
    _memset(auStack_2a0,0,0x40);
    puVar1 = local_240;
    (*(code *)PTR__objc_retain_02578638)();
    local_3b0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8,0x10);
    if (local_3b0 != (undefined *)0x0) {
      lVar5 = *local_290;
      local_3b8 = (undefined *)0x0;
      do {
        do {
          if (*local_290 - lVar5 != 0) {
            _objc_enumerationMutation(*local_290 - lVar5,puVar1);
          }
          uVar6 = *(ulong *)(local_298 + (long)local_3b8 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_260 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar6 & 1) != 0) &&
             (puVar2 = local_250,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_250,PTR_s_containsObject__0269cbb8,local_260),
             ((ulong)puVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_addObject__0269d180,local_260);
          }
          local_3b8 = local_3b8 + 1;
        } while (local_3b8 < local_3b0);
        local_3b0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8,
                   0x10);
        local_3b8 = (undefined *)0x0;
      } while (local_3b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _memset(auStack_2e8,0,0x40);
  IVar3 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_defaultNativeLongPressEntries_026aeda0);
  _objc_retainAutoreleasedReturnValue();
  local_3f8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_3f8 != 0) {
    lVar5 = *local_2d8;
    local_400 = 0;
    do {
      do {
        if (*local_2d8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_2d8 - lVar5,IVar3);
        }
        lVar7 = *(long *)(local_2e0 + local_400 * 8);
        local_2a8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
        if ((lVar7 != 0) &&
           (puVar1 = local_258,
           (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_containsObject__0269cbb8,local_2f0)
           , ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_addObject__0269d180,local_2f0);
        }
        _objc_storeStrong(&local_2f0,0);
        local_400 = local_400 + 1;
      } while (local_400 < local_3f8);
      local_3f8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_128,0x10)
      ;
      local_400 = 0;
    } while (local_3f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _memset(auStack_338,0,0x40);
  IVar3 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_defaultLongPressOrder_026aedb0);
  _objc_retainAutoreleasedReturnValue();
  local_438 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_438 != 0) {
    lVar5 = *local_328;
    local_440 = 0;
    do {
      do {
        if (*local_328 - lVar5 != 0) {
          _objc_enumerationMutation(*local_328 - lVar5,IVar3);
        }
        local_2f8 = *(undefined8 *)(local_330 + local_440 * 8);
        puVar1 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_containsObject__0269cbb8,local_2f8);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_addObject__0269d180,local_2f8);
        }
        local_440 = local_440 + 1;
      } while (local_440 < local_438);
      local_438 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_1a8,0x10)
      ;
      local_440 = 0;
    } while (local_438 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _memset(auStack_380,0,0x40);
  IVar3 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_478 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_228,0x10);
  if (local_478 != 0) {
    lVar5 = *local_370;
    local_480 = 0;
    do {
      do {
        if (*local_370 - lVar5 != 0) {
          _objc_enumerationMutation(*local_370 - lVar5,IVar3);
        }
        local_340 = *(undefined8 *)(local_378 + local_480 * 8);
        puVar1 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_containsObject__0269cbb8,local_340);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_addObject__0269d180,local_340);
        }
        local_480 = local_480 + 1;
      } while (local_480 < local_478);
      local_478 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_228,0x10)
      ;
      local_480 = 0;
    } while (local_478 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = local_258;
  (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_258);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

