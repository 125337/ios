// exitMultiSelectMode @ 01b1d1c8

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::exitMultiSelectMode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setMultiSelectMode__026be910,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIndexes_026b2a08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateNavigationTitle_026beaa0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateNavigationItems_026badf0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateBottomBar_026be928);
  return;
}

