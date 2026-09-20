// openLocalVideoWatermarkSelector @ 017f5264

/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::openLocalVideoWatermarkSelector(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasAnyVideoWatermarkAsset_026b5970);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbU_O_4lpS_j_g);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_presentLocalVideoPickerWithAssoc_026b5968,
               &cf_wcrefine_localVideoWatermarkPicker);
  }
  return;
}

