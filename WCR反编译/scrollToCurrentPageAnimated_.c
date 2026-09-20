// scrollToCurrentPageAnimated: @ 01b0eddc

/* Function Stack Size: 0x14 bytes */

void __thiscall
WCRefineKeywordAlertHistoryCardViewController::scrollToCurrentPageAnimated_
          (WCRefineKeywordAlertHistoryCardViewController *this,ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined8 uVar2;
  double in_d2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (0.0 < in_d2) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentPage_0269f4e8);
    in_d2 = (double)IVar1 * in_d2;
    uVar2 = 0;
    FUN_01b09530();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(in_d2,uVar2);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

