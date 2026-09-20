// syncCurrentPageFromScroll @ 01b16e5c

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::syncCurrentPageFromScroll
               (ID param_1,SEL param_2)

{
  ID IVar1;
  double dVar2;
  double in_d2;
  ID local_50;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (0.0 < in_d2) {
    IVar1 = param_1;
    dVar2 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = (ID)(dVar2 / in_d2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageCount_026bea90);
    if ((IVar1 != 0) && (IVar1 <= local_50)) {
      local_50 = IVar1 - 1;
    }
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentPage_0269f4e8);
    if (local_50 != IVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCurrentPage__0269f4f0,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateBottomBar_026be928);
    }
  }
  return;
}

