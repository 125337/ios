// warehouseTabChanged: @ 01cfef10

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::warehouseTabChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  if (local_30 < 0) {
    local_30 = 0;
  }
  if (3 < local_30) {
    local_30 = 3;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentTab__026c3bc8,local_30);
  _WCRefineProfileBgApplyWarehouseTab(local_30);
  FUN_01cfeff4();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildHeaderAndBar_026c3bf0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadCurrentTab_026c3bf8);
  _objc_storeStrong(&local_28,0);
  return;
}

