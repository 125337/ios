// addTab: @ 0151b158

/* Function Stack Size: 0x18 bytes */

bool WCRefineTelegramGroupingStore::addTab_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_b0;
  uint local_74;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  byte local_49;
  long local_48;
  byte local_39;
  long local_38;
  long local_30;
  SEL local_28;
  undefined *local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_39 = 0;
  local_49 = 0;
  bVar1 = true;
  if (local_30 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabId_026a8270);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = lVar2;
    FUN_01516994();
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar2 == 0;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar1) {
    local_11 = 0;
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ensureTabsLoaded_026b01d8);
    puVar3 = local_20;
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabId_026a8270);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_tabForId__026a8278);
    _objc_retainAutoreleasedReturnValue();
    local_74 = 1;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDuplicateOfTab__026b0230,local_30);
      local_74 = (uint)puVar4;
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if ((local_74 & 1) == 0) {
      puVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cachedTabs_026b0180);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b0 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_60 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_b0;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      puVar3 = local_58;
      if (puVar4 == (undefined *)0x0) {
        puVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar3 = local_58;
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setCachedTabs__026b0198,local_58);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
      local_11 = 1;
      local_50 = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_11 = 0;
      local_50 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

