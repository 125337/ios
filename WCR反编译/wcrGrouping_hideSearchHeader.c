// wcrGrouping_hideSearchHeader @ 0036028c

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_hideSearchHeader(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSearchActive__026a26f8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSearchQuery__026a2700);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSearchBar__026a2710,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSearchHeaderView__026a2718,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_emptyLabel_026a2668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGrouping_applySearchFilter_026a2720);
  return;
}

