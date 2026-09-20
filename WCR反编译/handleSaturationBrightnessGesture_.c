// handleSaturationBrightnessGesture: @ 01906c30

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::handleSaturationBrightnessGesture_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_a8;
  double local_70;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_locationInView__026ca798);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_100 = in_d0 / in_d2;
  if (1.0 < local_100) {
    local_100 = 1.0;
  }
  if (local_100 <= 0.0) {
    local_108 = 0.0;
  }
  else {
    local_108 = local_100;
  }
  local_70 = local_108;
  local_110 = 1.0 - in_d1 / in_d3;
  if (1.0 < local_110) {
    local_110 = 1.0;
  }
  if (local_110 <= 0.0) {
    local_118 = 0.0;
  }
  else {
    local_118 = local_110;
  }
  local_a8 = local_118;
  if (in_d0 < 0.0) {
    local_70 = 0.0;
  }
  if (in_d2 < in_d0) {
    local_70 = 1.0;
  }
  if (in_d1 < 0.0) {
    local_a8 = 1.0;
  }
  if (in_d3 < in_d1) {
    local_a8 = 0.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_70,local_28,PTR_s_setCurrentSaturation__026b8598);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_28,PTR_s_setCurrentBrightness__026b85a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateColorFromComponents_026b8968);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateIndicatorPositions_026b88e8);
  _objc_storeStrong(&local_38,0);
  return;
}

