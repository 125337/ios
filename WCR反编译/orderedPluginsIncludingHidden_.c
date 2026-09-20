// orderedPluginsIncludingHidden: @ 0177483c

/* Function Stack Size: 0x14 bytes */

ID WCRefinePluginHubManager::orderedPluginsIncludingHidden_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong local_3e8;
  ulong local_3e0;
  undefined *local_3b8;
  undefined *local_390;
  undefined *local_388;
  undefined *local_360;
  ulong local_308;
  ulong local_300;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  undefined4 local_298;
  bool local_291;
  undefined *local_290;
  undefined *local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  ulong local_240;
  undefined *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  long local_1d8;
  undefined *local_1d0;
  ID local_1c8;
  byte local_1b9;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b9 = (byte)param_3;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentPluginsSnapshot_026b4458);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_1c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = puVar2;
  _memset(auStack_218,0,0x40);
  IVar5 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_300 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
  if (local_300 != 0) {
    lVar7 = *local_208;
    local_308 = 0;
    do {
      do {
        if (*local_208 - lVar7 != 0) {
          _objc_enumerationMutation(*local_208 - lVar7,IVar5);
        }
        lVar8 = *(long *)(local_210 + local_308 * 8);
        local_1d8 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_identifier_026a4a88);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar8);
        puVar2 = local_1d0;
        lVar8 = local_1d8;
        if (lVar3 != 0) {
          lVar3 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_identifier_026a4a88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,lVar8);
          (*(code *)PTR__objc_release_02578630)(lVar3);
        }
        local_308 = local_308 + 1;
      } while (local_308 < local_300);
      local_300 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
      local_308 = 0;
    } while (local_300 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_220;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    local_360 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_360 = local_220;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = local_360;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_230 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_238 = puVar4;
  _memset(auStack_280,0,0x40);
  puVar2 = local_228;
  (*(code *)PTR__objc_retain_02578638)();
  local_388 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_128,0x10);
  if (local_388 != (undefined *)0x0) {
    lVar7 = *local_270;
    local_390 = (undefined *)0x0;
    do {
      do {
        if (*local_270 - lVar7 != 0) {
          _objc_enumerationMutation(*local_270 - lVar7,puVar2);
        }
        uVar9 = *(ulong *)(local_278 + (long)local_390 * 8);
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_240 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_291 = false;
        bVar1 = (uVar9 & 1) == 0;
        if (bVar1) {
          local_3b8 = (undefined *)0x0;
        }
        else {
          local_3b8 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,local_240);
          _objc_retainAutoreleasedReturnValue();
          local_290 = local_3b8;
        }
        local_291 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_288 = local_3b8;
        if ((local_291 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_290);
        }
        if ((local_288 == (undefined *)0x0) ||
           (puVar4 = local_238,
           (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_containsObject__0269cbb8,local_240)
           , ((ulong)puVar4 & 1) != 0)) {
          local_298 = 5;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_addObject__0269d180,local_240);
          if (((local_1b9 & 1) != 0) ||
             (IVar5 = local_1b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1b0,PTR_s_isPluginHidden__026b4460,local_288), (IVar5 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_addObject__0269d180,local_288);
          }
          local_298 = 0;
        }
        _objc_storeStrong(&local_288,0);
        local_390 = local_390 + 1;
      } while (local_390 < local_388);
      local_388 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_128,0x10
                );
      local_390 = (undefined *)0x0;
    } while (local_388 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_2e0,0,0x40);
  IVar5 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_3e0 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1a8,0x10);
  if (local_3e0 != 0) {
    lVar7 = *local_2d0;
    local_3e8 = 0;
    do {
      do {
        if (*local_2d0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_2d0 - lVar7,IVar5);
        }
        puVar2 = local_238;
        uVar10 = *(undefined8 *)(local_2d8 + local_3e8 * 8);
        local_2a0 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_identifier_026a4a88);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar10);
        if ((((ulong)puVar2 & 1) == 0) &&
           (((local_1b9 & 1) != 0 ||
            (IVar6 = local_1b0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_isPluginHidden__026b4460,local_2a0), (IVar6 & 1) == 0)))) {
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_addObject__0269d180,local_2a0);
        }
        local_3e8 = local_3e8 + 1;
      } while (local_3e8 < local_3e0);
      local_3e0 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1a8,0x10)
      ;
      local_3e8 = 0;
    } while (local_3e0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar2 = local_230;
  (*(code *)PTR__objc_retain_02578638)();
  local_298 = 1;
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_230,0);
  _objc_storeStrong(&local_228,0);
  _objc_storeStrong(&local_220,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

