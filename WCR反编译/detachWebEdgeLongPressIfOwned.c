// detachWebEdgeLongPressIfOwned @ 01e880b8

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::detachWebEdgeLongPressIfOwned(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  local_28 = param_1;
  if (param_1 != 0) {
    _objc_getAssociatedObject(param_1,&DAT_028e4831);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webEdgeLongPressGesture_026c7260);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  IVar2 = local_28;
  if (!bVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webEdgeLongPressGesture_026c7260);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeGestureRecognizer__026ca808);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_setAssociatedObject(local_28,&DAT_028e4831,0,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

