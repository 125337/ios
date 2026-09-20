// activeAnnotateStrokeLayer @ 0164e194

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::activeAnnotateStrokeLayer(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentStrokeLayer_026b2078);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedStrokeLayer_026b2080);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_strokeLayers_026b2088);
      _objc_retainAutoreleasedReturnValue();
      local_18 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedStrokeLayer_026b2080);
      _objc_retainAutoreleasedReturnValue();
      local_18 = param_1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentStrokeLayer_026b2078);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

