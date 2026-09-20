// wcrFinishSelection @ 017c91f0

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrFinishSelection(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_PopViewControllerAnimated__026a4db8);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_popViewControllerAnimated__0269ede0,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_PopViewControllerAnimated__026a4db8,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

