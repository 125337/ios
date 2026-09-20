// removeViewControllerWithName: @ 009372c0

/* Function Stack Size: 0x18 bytes */

void MyAction::removeViewControllerWithName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_findViewControllerWithName__026aa710,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
    }
    else {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

