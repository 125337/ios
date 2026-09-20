// currentSwipeQuoteAnimationAmplitudeValue @ 01a40070

/* Function Stack Size: 0x10 bytes */

double WCRefineGeneralFunctionViewController::currentSwipeQuoteAnimationAmplitudeValue
                 (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  double in_d0;
  double local_60;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_60 = in_d0;
    if (in_d0 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultSwipeQuoteLengthValue_026bc628);
      local_60 = in_d0;
    }
    local_18 = local_60;
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recommendedShortSwipeQuoteLength_026bc630);
    local_18 = in_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultSwipeQuoteLengthValue_026bc628);
    local_18 = in_d0;
  }
  return local_18;
}

