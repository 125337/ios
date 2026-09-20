// restorePostProcessCropSnapshot @ 0166b7c4

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::restorePostProcessCropSnapshot(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_68;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessCropRect_026b2538);
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3,param_1,PTR_s_setCropRect__026b1b80)
  ;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessCropShape_026b2540);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCropShape__026b1f98,IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessFreeformPath_026b2548);
  _objc_retainAutoreleasedReturnValue();
  if (IVar1 == 0) {
    local_90 = 0;
  }
  else {
    local_68 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessFreeformPath_026b2548);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = local_90;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformPath__026b1f38,local_90);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessFreeformClosed_026b2550);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformClosed__026b1f48,IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
  if (IVar1 != 2) {
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
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPoints_026b1f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

