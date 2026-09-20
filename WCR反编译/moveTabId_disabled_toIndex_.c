// moveTabId:disabled:toIndex: @ 0151e6b0

/* Function Stack Size: 0x24 bytes */

bool WCRefineTelegramGroupingStore::moveTabId_disabled_toIndex_
               (ID param_1,SEL param_2,ID param_3,bool param_4,unsigned_long_long param_5)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_218;
  undefined *local_1f8;
  undefined *local_1f0;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined4 local_f0;
  byte local_e9;
  ID local_e8;
  ID local_e0;
  undefined *local_d8;
  byte local_c9;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_c9 = (byte)param_4;
  IVar2 = local_b8;
  local_d8 = (undefined *)param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tabForId__026a8278,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_e9 = 0;
  bVar1 = true;
  local_e0 = IVar2;
  if ((IVar2 != 0) && (bVar1 = false, (local_c9 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_disabled_026a2c20);
    bVar1 = false;
    if ((IVar2 & 1) == 0) {
      IVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleTabs_026a8350);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar2 < 2;
    }
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if (bVar1) {
    local_a9 = 0;
    local_f0 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar4;
    _memset(auStack_148,0,0x40);
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tabs_026b01e0);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1b8 != 0) {
      lVar8 = *local_138;
      local_1c0 = 0;
      do {
        do {
          if (*local_138 - lVar8 != 0) {
            _objc_enumerationMutation(*local_138 - lVar8,IVar2);
          }
          uVar9 = *(ulong *)(local_140 + local_1c0 * 8);
          local_108 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_tabId_026a8270);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if ((uVar5 & 1) == 0) {
            uVar5 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_disabled_026a2c20);
            if ((uVar5 & 1) == 0) {
              local_1f0 = local_f8;
            }
            else {
              local_1f0 = local_100;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObject__0269d180,local_108);
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1c0 = 0;
      } while (local_1b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_c9 & 1) == 0) {
      local_1f8 = local_f8;
    }
    else {
      local_1f8 = local_100;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_d8;
    IVar2 = local_e0;
    local_150 = local_1f8;
    local_218 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0);
    if (puVar3 < local_218) {
      local_218 = puVar3;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1f8,PTR_s_insertObject_atIndex__0269eac0,IVar2,local_218);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setDisabled__026b0148,local_c9 & 1);
    puVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_arrayByAddingObjectsFromArray__026b0268,local_100);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setCachedTabs__026b0198);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar2 = local_b8;
    IVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selectedTabId_026b01c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_tabForId__026a8278);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    if ((IVar7 & 1) != 0) {
      IVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleTabs_026a8350);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setSelectedTabId__026b01c0);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,1);
    local_a9 = 1;
    local_f0 = 1;
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

