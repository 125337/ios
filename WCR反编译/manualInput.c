// manualInput @ 017d477c

/* Function Stack Size: 0x10 bytes */

void WCRAIModelPickerViewController::manualInput(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manualBlock_026b5210);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_28 != 0) {
    (**(code **)(local_28 + 0x10))();
  }
  _objc_storeStrong(&local_28,0);
  return;
}

