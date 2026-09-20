// confirmPickedColor @ 019117a0

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::confirmPickedColor(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedImageContainer_026b8a18);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 == 0) {
    local_34 = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hexStringFromColor__026b30d0,IVar1);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isLightMode_026b8018);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentDarkHex__026b8558,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentLightHex__026b8550,local_40);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateCurrentColorFromHex_026b85b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorDisplay_026b85c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateInputFields_026b85c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateIndicatorPositions_026b88e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissImageColorPicker_026b8a78);
    puVar3 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

