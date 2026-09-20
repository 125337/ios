// allControllableLongPressIDs @ 010fd500

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::allControllableLongPressIDs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  ulong local_348;
  ulong local_340;
  ulong local_308;
  ulong local_300;
  ulong local_2c8;
  ulong local_2c0;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined8 local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  long local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  undefined *local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = puVar1;
  _memset(auStack_208,0,0x40);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_allNativeAndDiscoveredLongPressE_026aed40);
  _objc_retainAutoreleasedReturnValue();
  local_2c0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2c0 != 0) {
    lVar3 = *local_1f8;
    local_2c8 = 0;
    do {
      do {
        if (*local_1f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1f8 - lVar3,IVar2);
        }
        lVar4 = *(long *)(local_200 + local_2c8 * 8);
        local_1c8 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_210 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_210);
        }
        _objc_storeStrong(&local_210,0);
        local_2c8 = local_2c8 + 1;
      } while (local_2c8 < local_2c0);
      local_2c0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
      local_2c8 = 0;
    } while (local_2c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_258,0,0x40);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_defaultLongPressOrder_026aedb0);
  _objc_retainAutoreleasedReturnValue();
  local_300 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_300 != 0) {
    lVar3 = *local_248;
    local_308 = 0;
    do {
      do {
        if (*local_248 - lVar3 != 0) {
          _objc_enumerationMutation(*local_248 - lVar3,IVar2);
        }
        local_218 = *(undefined8 *)(local_250 + local_308 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_218);
        local_308 = local_308 + 1;
      } while (local_308 < local_300);
      local_300 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_128,0x10)
      ;
      local_308 = 0;
    } while (local_300 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_2a0,0,0x40);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_customLongPressOrderIDs_026aedb8);
  _objc_retainAutoreleasedReturnValue();
  local_340 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_340 != 0) {
    lVar3 = *local_290;
    local_348 = 0;
    do {
      do {
        if (*local_290 - lVar3 != 0) {
          _objc_enumerationMutation(*local_290 - lVar3,IVar2);
        }
        local_260 = *(undefined8 *)(local_298 + local_348 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_260);
        local_348 = local_348 + 1;
      } while (local_348 < local_340);
      local_340 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_1a8,0x10)
      ;
      local_348 = 0;
    } while (local_340 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_1c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

