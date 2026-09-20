// clampSwipeQuoteCustomTriggerThresholdToCurrentAnimationAmplitudeIfNeeded @ 01a40318

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::
     clampSwipeQuoteCustomTriggerThresholdToCurrentAnimationAmplitudeIfNeeded
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  double dVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((0.0 < in_d0) &&
     (dVar2 = in_d0,
     (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentSwipeQuoteAnimationAmplit_026bc640),
     dVar2 < in_d0)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

