// animatedImageFrameAtIndex: @0x9c458

/* Function Stack Size: 0x18 bytes */

ID WCMYYFrameImage::animatedImageFrameAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  ID local_b8;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if (*(long *)(param_1 + (long)_imagePaths) == 0) {
    if (*(long *)(param_1 + (long)_imageDatas) == 0) {
      local_b8 = param_1;
      if (param_3 != 0) {
        local_b8 = 0;
      }
      local_18 = (*(code *)PTR__objc_retain_00110460)(local_b8);
    }
    else {
      uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imageDatas),local_60);
      if (param_3 < uVar1) {
        _objc_msgSend_objectAtIndexedSubscript_
                  (*(undefined8 *)(local_20 + (long)_imageDatas),local_60,local_30);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_60);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_scale(uVar3,local_60);
        _objc_msgSend_imageWithData_scale_(&_OBJC_CLASS___UIImage,local_60,uVar2);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_wcm_yy_imageByDecoded(uVar2,local_60);
        local_18 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar2);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_storeStrong(&local_50,0);
      }
      else {
        local_18 = 0;
      }
    }
  }
  else {
    uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imagePaths),local_60);
    if (param_3 < uVar1) {
      _objc_msgSend_objectAtIndexedSubscript_
                (*(undefined8 *)(local_20 + (long)_imagePaths),local_60,local_30);
      local_38 = _objc_retainAutoreleasedReturnValue();
      local_40 = __NSStringPathScale(local_38);
      _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_60,local_38);
      local_48 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_imageWithData_scale_(local_40,&_OBJC_CLASS___UIImage,local_60,local_48);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yy_imageByDecoded(uVar2,local_60);
      local_18 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_18 = 0;
    }
  }
  IVar4 = _objc_autoreleaseReturnValue(local_18);
  return IVar4;
}

