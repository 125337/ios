// applyMainScrollKeyboardInset @ 01d5c890

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::applyMainScrollKeyboardInset
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 in_d0;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d3;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar2 = in_d0;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keyboardBottomInset_026c4980);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,uVar2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,uVar2,in_d3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

