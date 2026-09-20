// triggerHapticFeedback @ 01f3af80

/* Function Stack Size: 0x10 bytes */

void WCRefineUICleanViewController::triggerHapticFeedback(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hapticGenerator_026b5f48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

