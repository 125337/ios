// resetMenuChromeColors @ 01e28224

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::resetMenuChromeColors(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_resetMenuChromeColorsToDefault_026c6210);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_notifyChanged_026b43a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n_Mr);
  return;
}

