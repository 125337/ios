// updateHexTextField @ 01907848

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::updateHexTextField(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID local_50;
  ID local_40;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLightMode_026b8018);
  bVar1 = (param_1 & 1) == 0;
  local_50 = local_18;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentDarkHex_026b8570);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_50;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentLightHex_026b8560);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hexTextField_026b8628);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

