// applyFullScreenSelectionSilent: @ 0166aed0

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::applyFullScreenSelectionSilent_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_invalidateFreeformHoldTimer_026b1f30);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformPath__026b1f38);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformPathStart__026b1f40,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformClosed__026b1f48,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPoints_026b1f50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPreviewLayer_026b1bc8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPreviewLayer_026b1bc8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
  if (IVar1 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCropShape__026b1f98,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_imageDisplayFrame_026b1f90);
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3,param_1,PTR_s_setCropRect__026b1b80)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshCropChrome_026b1e98);
  if ((param_3 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hintBlur_026b1c90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hintLabel_026b1ca0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hintLabel_026b1ca0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

