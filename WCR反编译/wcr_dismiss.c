// wcr_dismiss @ 0169a0b4

/* Function Stack Size: 0x10 bytes */

void WCRWordSegPickerController::wcr_dismiss(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageSheet_026b2a80);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPageSheet__026b2a88,0);
  if (local_28 != 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
      goto LAB_0169a1c8;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
LAB_0169a1c8:
  _objc_storeStrong(&local_28,0);
  return;
}

