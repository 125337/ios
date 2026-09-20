// setTabId:disabled: @ 0151db68

/* Function Stack Size: 0x1c bytes */

bool WCRefineTelegramGroupingStore::setTabId_disabled_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint local_80;
  ID local_48;
  ID local_40;
  byte local_31;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ensureTabsLoaded_026b01d8);
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabForId__026a8278,local_30);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = true;
  local_40 = IVar3;
  if ((IVar3 != 0) && (bVar1 = false, (local_31 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_disabled_026a2c20);
    bVar1 = false;
    if ((IVar3 & 1) == 0) {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleTabs_026a8350);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar3 < 2;
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_disabled_026a2c20);
    if ((uint)IVar3 == (local_31 & 1)) {
      local_11 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDisabled__026b0148,local_31 & 1);
      local_80 = 0;
      if ((local_31 & 1) != 0) {
        IVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedTabId_026b01c8);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqualToString__0269ccc8);
        local_80 = (uint)IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      if ((local_80 & 1) != 0) {
        IVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleTabs_026a8350);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setSelectedTabId__026b01c0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        if (((ulong)puVar7 & 1) != 0) {
          IVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedTabId_026b01c8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

