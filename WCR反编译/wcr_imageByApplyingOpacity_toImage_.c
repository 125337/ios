// wcr_imageByApplyingOpacity:toImage: @ 006fdbf0

/* Function Stack Size: 0x20 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_imageByApplyingOpacity_toImage_
             (ID param_1,SEL param_2,double param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_d8;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  double local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_38 = (undefined *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  if (local_38 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    if (local_30 < 0.0) {
      local_30 = 0.0;
    }
    if (1.0 < local_30) {
      local_30 = 1.0;
    }
    puVar1 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,&cf_CIColorMatrix)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setValue_forKey__0269d300,local_38,
               *(undefined8 *)PTR__kCIInputImageKey_02578700);
    puVar1 = local_48;
    puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0,0,PTR__OBJC_CLASS___CIVector_026ce8a8,
               PTR_s_vectorWithX_Y_Z_W__026a72d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_inputRVector);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_48;
    puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0x3ff0000000000000,0,PTR__OBJC_CLASS___CIVector_026ce8a8,
               PTR_s_vectorWithX_Y_Z_W__026a72d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_inputGVector);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_48;
    puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,0x3ff0000000000000,PTR__OBJC_CLASS___CIVector_026ce8a8,
               PTR_s_vectorWithX_Y_Z_W__026a72d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_inputBVector);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_48;
    puVar2 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,0,local_30,PTR__OBJC_CLASS___CIVector_026ce8a8,PTR_s_vectorWithX_Y_Z_W__026a72d0)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_inputAVector);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_outputImage_026a7240);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_d8 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_d8;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

