// wcr_tapCommonGroups: @ 01da9330

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsBoardView::wcr_tapCommonGroups_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c69a8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenCommonGroups_026c4ec0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar3 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    bVar1 = lVar2 != 0;
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (bVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenCommonGroups_026c4ec0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar3 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

