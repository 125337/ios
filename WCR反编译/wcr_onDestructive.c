// wcr_onDestructive @ 01be841c

/* Function Stack Size: 0x10 bytes */

void WCRMomentsDraftCardView::wcr_onDestructive(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_destructiveHandler_026c0a08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_destructiveHandler_026c0a08);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

