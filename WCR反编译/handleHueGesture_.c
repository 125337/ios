// handleHueGesture: @ 01906900

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::handleHueGesture_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  double in_d1;
  double in_d3;
  double local_c0;
  double local_b8;
  double local_60;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hueSliderView_026b8648);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_locationInView__026ca798);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hueSliderView_026b8648);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_b8 = in_d1 / in_d3;
  if (1.0 < local_b8) {
    local_b8 = 1.0;
  }
  if (local_b8 <= 0.0) {
    local_c0 = 0.0;
  }
  else {
    local_c0 = local_b8;
  }
  local_60 = local_c0;
  if (in_d1 < 0.0) {
    local_60 = 0.0;
  }
  if (in_d3 < in_d1) {
    local_60 = 1.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_60,local_18,PTR_s_setCurrentHue__026b8590);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateSaturationBrightnessBackgr_026b8938);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorFromComponents_026b8968);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateIndicatorPositions_026b88e8);
  _objc_storeStrong(&local_28,0);
  return;
}

