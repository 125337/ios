// wcr_done @ 01dbc334

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsDateViewController::wcr_done(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_changed_026c5180);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onChanged_026c51b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onChanged_026c51b0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentingViewController_026a0db0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
  }
  return;
}

