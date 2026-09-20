// wcr_floatBarMove @ 01f76bcc

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::wcr_floatBarMove(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_selectedItems_026c9980);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_moveItems__026c9990);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

