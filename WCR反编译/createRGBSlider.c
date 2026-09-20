// createRGBSlider @ 018f709c

/* Function Stack Size: 0x10 bytes */

ID WCRefineColorPickerController::createRGBSlider(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0,puVar1,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)(0x437f0000,local_28,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setContinuous__026b4d68,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

