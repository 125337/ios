// wcr_openActivity @ 01d99520

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsBoardView::wcr_openActivity(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onOpenSessionActivity_026c4e88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onOpenSessionActivity_026c4e88);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

