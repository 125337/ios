// indexPathForCardGestureAtPoint: @ 01b13118

/* Function Stack Size: 0x20 bytes */

ID WCRefineKeywordAlertHistoryCardViewController::indexPathForCardGestureAtPoint_
             (ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_collectionView_026a0fd8,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

