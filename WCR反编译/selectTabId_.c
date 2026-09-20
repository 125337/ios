// selectTabId: @ 0151a518

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingStore::selectTabId_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureTabsLoaded_026b01d8);
  IVar1 = local_28;
  FUN_01516994();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabForId__026a8278,IVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  if (((IVar2 == 0) ||
      ((*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_disabled_026a2c20), (IVar2 & 1) != 0)) ||
     (IVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_shouldHideTabFromHomeStrip__026b01d0,local_38), (IVar1 & 1) != 0)) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_visibleTabs_026a8350);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_30 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTabId_026b01c8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectedTabId__026b01c0,local_30);
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_homeTelegramGroupingRememberSele_026b01b0);
    if (((ulong)puVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectionSavePending__026b01f8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988
                 ,local_18,PTR_s_persistSelection__026b0150);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd3333333333333,local_18,PTR_s_performSelector_withObject_after_026a4990,
                 PTR_s_persistSelection__026b0150,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postChangeReason__026b01f0,&cf_selection);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

