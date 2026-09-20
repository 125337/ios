// repoSelectCurrentItem @ 01eefd20

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::repoSelectCurrentItem(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentRepositoryActionItem_026c7ee0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectBlock_026c7e38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 != 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectBlock_026c7e38);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar1 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

