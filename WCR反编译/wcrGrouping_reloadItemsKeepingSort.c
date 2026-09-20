// wcrGrouping_reloadItemsKeepingSort @ 003675f8

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_reloadItemsKeepingSort
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_48;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_closeSwipeStateRemov_026a2778,1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  FUN_00367784();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar1;
  if (IVar1 == 0) {
    local_48 = *(ID *)PTR____NSArray0___02578280;
  }
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_sortedItems__026a27c8,local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAllItems__026a27d0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_applySearchFilter_026a2720);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  FUN_00367970();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

