// swipeQuoteTriggerThresholdSettingText @ 01a40668

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::swipeQuoteTriggerThresholdSettingText
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  double dVar2;
  double dVar3;
  undefined *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_effectiveSwipeQuoteTriggerThresh_026bc650);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  dVar2 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar3 = dVar2;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentSwipeQuoteAnimationAmplit_026bc640);
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (dVar2 <= dVar3) {
    FUN_01a4058c(in_d0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = (undefined *)param_1;
  }
  else {
    FUN_01a4058c(in_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

