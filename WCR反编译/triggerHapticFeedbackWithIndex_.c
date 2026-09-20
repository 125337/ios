// triggerHapticFeedbackWithIndex: @ 00fc5524

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::triggerHapticFeedbackWithIndex_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  if (0 < (long)param_3) {
    if (param_3 == 1) {
      local_30 = 3;
    }
    else if (param_3 == 2) {
      local_30 = 1;
    }
    else {
      local_30 = 2;
    }
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    local_28 = param_3;
    local_20 = param_2;
    local_18 = param_1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

