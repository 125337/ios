// removeTabId: @ 0151b610

/* Function Stack Size: 0x18 bytes */

bool WCRefineTelegramGroupingStore::removeTabId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_60;
  undefined4 local_58;
  byte local_51;
  ID local_50;
  byte local_41;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ensureTabsLoaded_026b01d8);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabForId__026a8278,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_51 = 0;
  bVar1 = true;
  local_38 = IVar2;
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removable_026b0138);
    bVar1 = true;
    if ((IVar2 & 1) != 0) {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tabId_026a8270);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if ((IVar2 & 1) == 0) {
        IVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_disabled_026a2c20);
        bVar1 = false;
        if ((IVar2 & 1) == 0) {
          IVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleTabs_026a8350);
          _objc_retainAutoreleasedReturnValue();
          local_51 = 1;
          local_50 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = IVar2 < 2;
        }
      }
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    local_11 = 0;
    local_58 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cachedTabs_026b0180);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObject__0269d678,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setCachedTabs__026b0198,local_60);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedTabId_026b01c8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tabId_026a8270);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar4 & 1) != 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleTabs_026a8350);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setSelectedTabId__026b01c0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (((ulong)puVar6 & 1) != 0) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedTabId_026b01c8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
    local_11 = 1;
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

