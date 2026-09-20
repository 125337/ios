// ensurePostProcessBaseLocked @ 0166b480

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::ensurePostProcessBaseLocked(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_b0;
  undefined8 local_78;
  undefined8 local_68;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessEffects_026b2508);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPostProcessEffects__026b1c70);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessBaseImage_026b2518);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPostProcessBaseImage__026b2500);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropRect_026b1ec0);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,in_d2,in_d3,param_1,PTR_s_setPostProcessCropRect__026b2520);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPostProcessCropShape__026b2528,IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPath_026b1ee8);
    _objc_retainAutoreleasedReturnValue();
    if (IVar1 == 0) {
      local_b0 = 0;
    }
    else {
      local_68 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPath_026b1ee8);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = local_b0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setPostProcessFreeformPath__026b2510,local_b0);
    if (IVar1 != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformClosed_026b1ef0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setPostProcessFreeformClosed__026b2530,IVar1);
  }
  return;
}

