// tabsFromDictionaries: @ 01517a8c

/* Function Stack Size: 0x18 bytes */

ID WCRefineTelegramGroupingStore::tabsFromDictionaries_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *local_500;
  undefined *local_4f8;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined *local_430;
  undefined *local_428;
  uint local_3dc;
  ulong local_3c0;
  ulong local_3b8;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  undefined8 local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  ulong local_310;
  byte local_301;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  ulong local_2c0;
  ID local_2b8;
  undefined4 local_2b0;
  byte local_2a9;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  undefined8 local_258;
  undefined *local_250;
  undefined *local_248;
  ulong local_240;
  SEL local_238;
  ID local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_240 = 0;
  local_238 = param_2;
  local_230 = param_1;
  _objc_storeStrong(&local_240,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_248 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_250 = puVar3;
  _memset(auStack_298,0,0x40);
  uVar10 = local_240;
  (*(code *)PTR__objc_retain_02578638)();
  local_3b8 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10);
  if (local_3b8 != 0) {
    lVar8 = *local_288;
    local_3c0 = 0;
    do {
      do {
        if (*local_288 - lVar8 != 0) {
          _objc_enumerationMutation(*local_288 - lVar8,uVar10);
        }
        local_258 = *(undefined8 *)(local_290 + local_3c0 * 8);
        puVar3 = PTR_WCRefineTelegramTab_026ced70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramTab_026ced70,PTR_s_tabWithDictionary__026b0168,local_258);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_250;
        local_2a9 = 0;
        local_3dc = 1;
        local_2a0 = puVar3;
        if (puVar3 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_tabId_026a8270);
          _objc_retainAutoreleasedReturnValue();
          local_2a9 = 1;
          local_2a8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
          local_3dc = (uint)puVar2;
        }
        if ((local_2a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2a8);
        }
        puVar2 = local_250;
        if ((local_3dc & 1) == 0) {
          puVar3 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_tabId_026a8270);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_addObject__0269d180,local_2a0);
          local_2b0 = 0;
        }
        else {
          local_2b0 = 3;
        }
        _objc_storeStrong(&local_2a0,0);
        local_3c0 = local_3c0 + 1;
      } while (local_3c0 < local_3b8);
      local_3b8 = uVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar10,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10)
      ;
      local_3c0 = 0;
    } while (local_3b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar10);
  local_2b8 = 0;
  _memset(auStack_300,0,0x40);
  puVar2 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_428 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_128,0x10);
  if (local_428 != (undefined *)0x0) {
    lVar8 = *local_2f0;
    local_430 = (undefined *)0x0;
    do {
      do {
        if (*local_2f0 - lVar8 != 0) {
          _objc_enumerationMutation(*local_2f0 - lVar8,puVar2);
        }
        uVar9 = *(ulong *)(local_2f8 + (long)local_430 * 8);
        local_2c0 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = true;
        if ((uVar10 & 1) == 0) {
          uVar10 = local_2c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_kind_026a27e8);
          bVar1 = uVar10 == 0;
        }
        (*(code *)PTR__objc_release_02578630)(uVar9);
        if (bVar1) {
          _objc_storeStrong(&local_2b8,local_2c0);
          local_2b0 = 4;
          goto LAB_01517fb4;
        }
        local_430 = local_430 + 1;
      } while (local_430 < local_428);
      local_428 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_128,0x10
                );
      local_430 = (undefined *)0x0;
    } while (local_428 != (undefined *)0x0);
  }
  local_2b0 = 0;
LAB_01517fb4:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_2b8 == 0) {
    IVar4 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_2b8;
    local_2b8 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_248,PTR_s_insertObject_atIndex__0269eac0,local_2b8,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_setKind__026ad410,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_setRemovable__026b0140,0);
  IVar6 = local_2b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_title_0269d250);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if (IVar4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_setTitle__0269cef0,&cf_hQ);
  }
  puVar2 = local_248;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithFormat__026a76e8,
             &cf_disabled__NO);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_filteredArrayUsingPredicate__026b0178);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (puVar7 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_setDisabled__026b0148,0);
  }
  local_301 = 0;
  _memset(auStack_350,0,0x40);
  puVar2 = local_248;
  (*(code *)PTR__objc_retain_02578638)();
  local_4b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_1a8,0x10);
  if (local_4b8 != (undefined *)0x0) {
    lVar8 = *local_340;
    local_4c0 = (undefined *)0x0;
    do {
      do {
        if (*local_340 - lVar8 != 0) {
          _objc_enumerationMutation(*local_340 - lVar8,puVar2);
        }
        uVar10 = *(ulong *)(local_348 + (long)local_4c0 * 8);
        local_310 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_hidePinned_026a30d0);
        if ((uVar10 & 1) != 0) {
          local_301 = 1;
          local_2b0 = 6;
          goto LAB_01518368;
        }
        local_4c0 = local_4c0 + 1;
      } while (local_4c0 < local_4b8);
      local_4b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_1a8,0x10
                );
      local_4c0 = (undefined *)0x0;
    } while (local_4b8 != (undefined *)0x0);
  }
  local_2b0 = 0;
LAB_01518368:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_301 & 1) != 0) {
    _memset(auStack_398,0,0x40);
    puVar2 = local_248;
    (*(code *)PTR__objc_retain_02578638)();
    local_4f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_228,0x10);
    if (local_4f8 != (undefined *)0x0) {
      lVar8 = *local_388;
      local_500 = (undefined *)0x0;
      do {
        do {
          if (*local_388 - lVar8 != 0) {
            _objc_enumerationMutation(*local_388 - lVar8,puVar2);
          }
          local_358 = *(undefined8 *)(local_390 + (long)local_500 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_358,PTR_s_setHidePinned__026b0120,1);
          local_500 = local_500 + 1;
        } while (local_500 < local_4f8);
        local_4f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_228,
                   0x10);
        local_500 = (undefined *)0x0;
      } while (local_4f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_248;
  (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_copy_0269d150);
  local_2b0 = 1;
  _objc_storeStrong(&local_2b8);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

