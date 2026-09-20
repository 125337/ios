// cancelBindingPickMode @ 01f8eb80

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::cancelBindingPickMode(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBindingPickMode__026c9c00,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rebuildListSections_026ba410);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
  return;
}

