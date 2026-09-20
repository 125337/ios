// setupCardGestures @ 01b0ad70

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::setupCardGestures(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c78,puVar1,PTR_s_setMinimumPressDuration__026ca9c8)
  ;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setNumberOfTapsRequired__026ca9e0);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c98,puVar1,PTR_s_setMinimumPressDuration__026ca9c8)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNumberOfTouchesRequired__0269cbc8,2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

