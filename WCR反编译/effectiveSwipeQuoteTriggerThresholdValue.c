// effectiveSwipeQuoteTriggerThresholdValue @ 01a401f0

/* Function Stack Size: 0x10 bytes */

double WCRefineGeneralFunctionViewController::effectiveSwipeQuoteTriggerThresholdValue
                 (ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  double dVar2;
  double local_78;
  double local_70;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultSwipeQuoteTriggerThreshol_026bc638);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  dVar2 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_70 = in_d0;
  if (0.0 < dVar2) {
    local_70 = dVar2;
  }
  local_78 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentSwipeQuoteAnimationAmplit_026bc640);
  if (local_70 < local_78) {
    local_78 = local_70;
  }
  return local_78;
}

