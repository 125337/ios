// pickCurrent @ 01f82f6c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPathPickerViewController::pickCurrent(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onPick_026b9b08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onPick_026b9b08);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_directory_026ba278);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

