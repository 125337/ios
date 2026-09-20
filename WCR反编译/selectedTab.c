// selectedTab @ 015199fc

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramGroupingStore::selectedTab(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureTabsLoaded_026b01d8);
  IVar2 = local_20;
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedTabId_026b01c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_tabForId__026a8278);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_30 != 0) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_disabled_026a2c20);
    if ((IVar2 & 1) == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_shouldHideTabFromHomeStrip__026b01d0,local_30);
      IVar2 = local_30;
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar2;
        goto LAB_01519b6c;
      }
    }
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleTabs_026a8350);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
LAB_01519b6c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

