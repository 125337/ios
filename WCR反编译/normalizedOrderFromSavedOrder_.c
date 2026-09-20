// normalizedOrderFromSavedOrder: @ 01cc48e8

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardActionCatalog::normalizedOrderFromSavedOrder_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ID IVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  void *local_3c0;
  void *local_3b8;
  ulong local_380;
  ulong local_378;
  uint local_354;
  ulong local_320;
  ulong local_318;
  undefined *local_2e8;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  undefined8 local_288;
  undefined *local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  undefined8 local_238;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  ulong local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  ID local_1c8;
  ulong local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = 0;
  local_1b8 = param_2;
  local_1b0 = param_1;
  _objc_storeStrong(&local_1c0,param_3);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_entryMap_026aed30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1c8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_026ce150;
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_1d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_2e8 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_2e8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setWithArray__0269d9a0,local_2e8);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar6 = local_1c0;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  uVar1 = local_1c0;
  if ((uVar6 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = uVar1;
    _memset(auStack_228,0,0x40);
    uVar6 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_318 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
    if (local_318 != 0) {
      lVar9 = *local_218;
      local_320 = 0;
      do {
        do {
          if (*local_218 - lVar9 != 0) {
            _objc_enumerationMutation(*local_218 - lVar9,uVar6);
          }
          uVar10 = *(ulong *)(local_220 + local_320 * 8);
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1e8 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar1 = local_1e8;
          if ((uVar10 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_230 = uVar1;
            IVar2 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_objectForKeyedSubscript__0269d098,uVar1);
            _objc_retainAutoreleasedReturnValue();
            if (IVar2 == 0) {
              IVar7 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_isCustomPageActionID__026b0670,local_230);
              local_354 = 0;
              if ((IVar7 & 1) != 0) goto LAB_01cc4c1c;
            }
            else {
LAB_01cc4c1c:
              puVar5 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d0,PTR_s_containsObject__0269cbb8,local_230);
              local_354 = (uint)puVar5 ^ 1;
            }
            (*(code *)PTR__objc_release_02578630)(IVar2);
            if ((local_354 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_230);
            }
            _objc_storeStrong(&local_230,0);
          }
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10
                  );
        local_320 = 0;
      } while (local_318 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    _objc_storeStrong(&local_1e0,0);
  }
  _memset(auStack_278,0,0x40);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_defaultOrder_026c3540);
  _objc_retainAutoreleasedReturnValue();
  local_378 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_378 != 0) {
    lVar9 = *local_268;
    local_380 = 0;
    do {
      do {
        if (*local_268 - lVar9 != 0) {
          _objc_enumerationMutation(*local_268 - lVar9,IVar2);
        }
        local_238 = *(undefined8 *)(local_270 + local_380 * 8);
        puVar5 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_containsObject__0269cbb8,local_238);
        if (((ulong)puVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_238);
        }
        local_380 = local_380 + 1;
      } while (local_380 < local_378);
      local_378 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_128,0x10)
      ;
      local_380 = 0;
    } while (local_378 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar5 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_indexOfObject__0269e870,&cf_manage);
  local_280 = puVar5;
  pvVar8 = _memset(auStack_2c8,0,0x40);
  FUN_01cc4734();
  _objc_retainAutoreleasedReturnValue();
  local_3b8 = pvVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_3b8 != (void *)0x0) {
    lVar9 = *local_2b8;
    local_3c0 = (void *)0x0;
    do {
      do {
        if (*local_2b8 - lVar9 != 0) {
          _objc_enumerationMutation(*local_2b8 - lVar9,pvVar8);
        }
        local_288 = *(undefined8 *)(local_2c0 + (long)local_3c0 * 8);
        puVar5 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_containsObject__0269cbb8,local_288);
        if ((((ulong)puVar5 & 1) == 0) &&
           (puVar5 = local_1d0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_containsObject__0269cbb8,local_288)
           , ((ulong)puVar5 & 1) == 0)) {
          if (local_280 == (undefined *)0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_288);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d0,PTR_s_insertObject_atIndex__0269eac0,local_288,local_280);
            local_280 = local_280 + 1;
          }
        }
        local_3c0 = (void *)((long)local_3c0 + 1);
      } while (local_3c0 < local_3b8);
      local_3b8 = pvVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,0x10
                );
      local_3c0 = (void *)0x0;
    } while (local_3b8 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar8);
  puVar5 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_containsObject__0269cbb8,&cf_manage);
  if (((ulong)puVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_removeObject__0269d678);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,&cf_manage);
  }
  puVar5 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_1d8);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

