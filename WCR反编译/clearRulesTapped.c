// clearRulesTapped @ 019e7b3c

/* Function Stack Size: 0x10 bytes */

void WCRefineGlyphDrawingEditorViewController::clearRulesTapped(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onClearAll_026bb140);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onClearAll_026bb140);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzzhQKb_O__);
  return;
}

