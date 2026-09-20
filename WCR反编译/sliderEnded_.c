// sliderEnded: @ 01edb2d0

/* Function Stack Size: 0x18 bytes */

void WCRToDoAdjustmentViewController::sliderEnded_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewTimer_026b81d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPreviewTimer__026b81e0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applySlider__026c16f8,local_28);
  FUN_01ed8490();
  _objc_storeStrong(&local_28,0);
  return;
}

