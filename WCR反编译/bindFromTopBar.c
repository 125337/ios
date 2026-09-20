// bindFromTopBar @ 01f8ea54

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::bindFromTopBar(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bindingPickMode_026c9b88);
  if ((IVar1 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selecting_026c9890);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_floatBarDoneSelecting_026c9bf8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBindingPickMode__026c9c00,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_p__v);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rebuildListSections_026ba410);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelBindingPickMode_026c9bf0);
  }
  return;
}

