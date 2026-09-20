// wcr_floatBarDoneSelecting @ 01f75524

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::wcr_floatBarDoneSelecting(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSelecting__026c9978,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupNavBar_026ba288);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rebuildListSections_026ba410);
  return;
}

