// initWithData:scale: @0x8ffd0

/* Function Stack Size: 0x20 bytes */

ID WCMYYImage::initWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  dispatch_semaphore_t pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  double local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  lVar2 = _objc_msgSend_length(local_30,local_60);
  if (lVar2 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    if (local_38 <= 0.0) {
      _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_60);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      local_38 = (double)_objc_msgSend_scale(uVar3,local_60);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    pdVar4 = _dispatch_semaphore_create(1);
    uVar3 = *(undefined8 *)(local_20 + (long)_preloadedLock);
    *(undefined8 *)(local_20 + (long)_preloadedLock) = pdVar4;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_autoreleasePoolPush();
    _objc_msgSend_decoderWithData_scale_
              (local_38,&objc::class_t::WCMYYImageDecoder,local_60,local_30);
    local_48 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_frameAtIndex_decodeForDisplay_(local_48,local_60,0,1);
    local_50 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(local_50,local_60);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    IVar1 = local_20;
    local_58 = lVar2;
    if (lVar2 == 0) {
      local_18 = 0;
      local_3c = 1;
    }
    else {
      _objc_retainAutorelease();
      uVar5 = _objc_msgSend_CGImage(lVar2,local_60);
      uVar9 = _objc_msgSend_scale(local_48,local_60);
      uVar6 = _objc_msgSend_imageOrientation(local_58,local_60);
      local_20 = 0;
      local_20 = _objc_msgSend_initWithCGImage_scale_orientation_(uVar9,IVar1,local_60,uVar5,uVar6);
      _objc_storeStrong(&local_20);
      if (local_20 == 0) {
        local_18 = 0;
        local_3c = 1;
      }
      else {
        uVar5 = _objc_msgSend_type(local_48,local_60);
        *(undefined8 *)(local_20 + (long)_animatedImageType) = uVar5;
        uVar7 = _objc_msgSend_frameCount(local_48,local_60);
        if (1 < uVar7) {
          _objc_storeStrong(local_20 + (long)_decoder,local_48);
          lVar2 = local_58;
          _objc_retainAutorelease();
          _objc_msgSend_CGImage(lVar2,local_60);
          lVar8 = _CGImageGetBytesPerRow();
          lVar2 = local_58;
          _objc_retainAutorelease();
          _objc_msgSend_CGImage(lVar2,local_60);
          lVar2 = _CGImageGetHeight();
          *(long *)(local_20 + (long)_bytesPerFrame) = lVar8 * lVar2;
          lVar8 = *(long *)(local_20 + (long)_bytesPerFrame);
          lVar2 = _objc_msgSend_frameCount(local_48,local_60);
          *(long *)(local_20 + (long)_animatedImageMemorySize) = lVar8 * lVar2;
        }
        _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_20,local_60,1);
        local_3c = 0;
      }
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_autoreleasePoolPop(uVar3);
    if (local_3c == 0) {
      local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

