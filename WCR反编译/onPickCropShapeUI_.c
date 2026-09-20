// onPickCropShapeUI: @ 01671cf8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onPickCropShapeUI_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyCropShapeUI__026b2658,lVar1 + -0x19a);
  _objc_storeStrong(&local_28,0);
  return;
}

