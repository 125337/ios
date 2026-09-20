// pickStart @ 01957250

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::pickStart(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  *(undefined8 *)(param_1 + (long)_pickMode) = 1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentWeChatPicker_026b9bd8);
  return;
}

