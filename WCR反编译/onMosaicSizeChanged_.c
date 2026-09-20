// onMosaicSizeChanged: @ 0167def0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRSuperFloatCropViewController::onMosaicSizeChanged_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,ID param_3)

{
  float in_s0;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  (*(code *)PTR__objc_msgSend_02578628)((double)in_s0,local_18,PTR_s_setMosaicBrushSize__026b1c50);
  _objc_storeStrong(&local_28,0);
  return;
}

