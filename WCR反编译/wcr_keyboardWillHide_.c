// wcr_keyboardWillHide: @ 01966338

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFileManagerPreviewViewController::wcr_keyboardWillHide_
          (WCRefineFileManagerPreviewViewController *this,ID param_1,SEL param_2,ID param_3)

{
  double in_d0;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_keyboardOverlap_026ba020);
  if (0.0 < in_d0) {
    (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setKeyboardOverlap__026b9e28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_animateKeyboardInsetsWithNot_026ba038,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

