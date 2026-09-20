// getBackgroundBlurIntensity @ 01a34ea4

/* Function Stack Size: 0x10 bytes */

float WCRefineGeneralFunctionViewController::getBackgroundBlurIntensity(ID param_1,SEL param_2)

{
  undefined *puVar1;
  float in_s0;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (in_s0 <= 0.0) {
    in_s0 = 80.0;
  }
  return in_s0;
}

