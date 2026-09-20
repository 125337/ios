// setupSaturationBrightnessView @ 01905210

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::setupSaturationBrightnessView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

