// wcr_openFriend: @ 01d9996c

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsBoardView::wcr_openFriend_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenFriend_026c4e98);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar4 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    bVar1 = lVar2 != 0;
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (bVar1) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenFriend_026c4e98);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar4 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

