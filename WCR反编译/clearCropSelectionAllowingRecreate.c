// clearCropSelectionAllowingRecreate @ 01649e74

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::clearCropSelectionAllowingRecreate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_invalidateFreeformHoldTimer_026b1f30);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),param_1,PTR_s_setCropRect__026b1b80);
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDragMode__026b1f58,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshCropChrome_026b1e98);
  return;
}

