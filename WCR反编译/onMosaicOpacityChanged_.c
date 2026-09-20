// onMosaicOpacityChanged: @ 0167e018

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onMosaicOpacityChanged_(ID param_1,SEL param_2,ID param_3)

{
  float fVar1;
  double local_68;
  double local_60;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_68 = DAT_02323c68;
  fVar1 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  if (fVar1 <= 1.0) {
    local_60 = (double)fVar1;
  }
  else {
    local_60 = 1.0;
  }
  if (local_60 <= local_68) {
  }
  else {
    local_68 = local_60;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_68,local_18,PTR_s_setMosaicBrushOpacity__026b1c60);
  _objc_storeStrong(&local_28,0);
  return;
}

