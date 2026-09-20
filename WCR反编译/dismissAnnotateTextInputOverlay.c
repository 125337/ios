// dismissAnnotateTextInputOverlay @ 01659284

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::dismissAnnotateTextInputOverlay(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textInputField_026b2228);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textInputOverlay_026b1e18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTextInputOverlay__026b2230);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTextInputField__026b2238,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTextInputAlert__026b2240,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_restoreWindowLevelAfterTextInput_026b2248);
  return;
}

