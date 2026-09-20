// wcr_finishMultiSelect @ 0109f7d0

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageRepositoryPickerViewController::wcr_finishMultiSelect(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID local_78;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCodes_026ae490);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar2;
  if (IVar2 == 0) {
    local_78 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_78;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_multiCompletion_026ae498);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMultiCompletion__026ae4a0,0);
  if (local_30 != 0) {
    (**(code **)(local_30 + 0x10))(local_30,local_28);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar3 != 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar6 == local_18;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

