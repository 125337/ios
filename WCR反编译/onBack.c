// onBack @ 01bec828

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftListViewController::onBack(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

