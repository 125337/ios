// invalidatePostProcessPipeline @ 0166b2ec

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::invalidatePostProcessPipeline(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPostProcessBaseImage__026b2500,0);
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
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postProcessEffects_026b2508);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPostProcessFreeformPath__026b2510,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDidApplyWatermark__026b1c78,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDidApplyShell__026b1c80,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshEffectToggleUI_026b1dd8);
  return;
}

