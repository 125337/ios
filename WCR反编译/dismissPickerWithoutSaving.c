// dismissPickerWithoutSaving @ 01a9b3bc

/* Function Stack Size: 0x10 bytes */

void WCRGroupContactPickerBridge::dismissPickerWithoutSaving(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCompletion__0269fdc8,0);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_presentingViewController_026a0db0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      if (local_30 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

