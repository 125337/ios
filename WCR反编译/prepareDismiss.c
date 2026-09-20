// prepareDismiss @ 00f95034

/* Function Stack Size: 0x10 bytes */

void WCRPageSheetKeyboardBinder::prepareDismiss(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_didPrepareDismiss_026acd00);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDidPrepareDismiss__026acd08,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_inputResponder_026acd10);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar1;
    if (((IVar1 != 0) &&
        ((*(code *)PTR__objc_msgSend_02578628)
                   (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isFirstResponder_0269f488),
        (IVar1 & 1) != 0)) &&
       (IVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isFirstResponder_0269f488),
       (IVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resignFirstResponder_0269ea18);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

