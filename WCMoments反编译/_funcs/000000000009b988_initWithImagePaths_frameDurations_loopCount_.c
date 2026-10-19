// initWithImagePaths:frameDurations:loopCount: @0x9b988

/* Function Stack Size: 0x28 bytes */

ID WCMYYFrameImage::initWithImagePaths_frameDurations_loopCount_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  unsigned_long_long local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = param_5;
  lVar2 = _objc_msgSend_count(local_30,local_78);
  if (lVar2 == 0) {
    local_18 = 0;
    local_44 = 1;
  }
  else {
    lVar2 = _objc_msgSend_count(local_30,local_78);
    lVar3 = _objc_msgSend_count(local_38,local_78);
    if (lVar2 == lVar3) {
      _objc_msgSend_objectAtIndexedSubscript_(0,local_30,local_78);
      local_50 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_78,local_50);
      local_58 = _objc_retainAutoreleasedReturnValue();
      local_60 = __NSStringPathScale(local_50);
      uVar4 = _objc_alloc(&_OBJC_CLASS___UIImage);
      uVar4 = _objc_msgSend_initWithData_(uVar4,local_78,local_58);
      _objc_msgSend_wcm_yy_imageByDecoded(uVar4,local_78);
      local_68 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar4);
      IVar1 = local_20;
      uVar4 = local_68;
      _objc_retainAutorelease();
      uVar4 = _objc_msgSend_CGImage(uVar4,local_78);
      local_20 = 0;
      local_20 = _objc_msgSend_initWithCGImage_scale_orientation_(local_60,IVar1,local_78,uVar4,0);
      _objc_storeStrong(&local_20);
      uVar4 = local_68;
      if (local_20 == 0) {
        local_18 = 0;
      }
      else {
        _objc_retainAutorelease();
        _objc_msgSend_CGImage(uVar4,local_78);
        lVar2 = _CGImageGetBytesPerRow();
        uVar4 = local_68;
        _objc_retainAutorelease();
        _objc_msgSend_CGImage(uVar4,local_78);
        lVar3 = _CGImageGetHeight();
        *(long *)(local_20 + (long)_oneFrameBytes) = lVar2 * lVar3;
        uVar4 = _objc_msgSend_copy(local_30,local_78);
        uVar5 = *(undefined8 *)(local_20 + (long)_imagePaths);
        *(undefined8 *)(local_20 + (long)_imagePaths) = uVar4;
        (*(code *)PTR__objc_release_00110458)(uVar5);
        uVar4 = _objc_msgSend_copy(local_38,local_78);
        uVar5 = *(undefined8 *)(local_20 + (long)_frameDurations);
        *(undefined8 *)(local_20 + (long)_frameDurations) = uVar4;
        (*(code *)PTR__objc_release_00110458)(uVar5);
        *(unsigned_long_long *)(local_20 + (long)_loopCount) = local_40;
        local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);
      }
      local_44 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_18 = 0;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

