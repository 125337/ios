// createAlphaSlider @ 018f7248

/* Function Stack Size: 0x10 bytes */

ID WCRefineColorPickerController::createAlphaSlider(ID param_1,SEL param_2)

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
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)(0x42c80000,local_28,PTR_s_setValue__026a51b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setContinuous__026b4d68,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setThumbTintColor__026b8878);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

