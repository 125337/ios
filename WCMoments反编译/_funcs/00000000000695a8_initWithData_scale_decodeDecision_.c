// initWithData:scale:decodeDecision: @0x695a8

/* Function Stack Size: 0x28 bytes */

ID WCMYBImage::initWithData_scale_decodeDecision_
             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  dispatch_semaphore_t pdVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double local_d0;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  byte local_61;
  undefined8 local_60;
  int local_54;
  long local_50;
  double local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3,param_3,param_5,param_6);
  local_50 = 0;
  local_48 = param_4;
  _objc_storeStrong(&local_50,param_5);
  lVar2 = _objc_msgSend_length(local_40,local_90);
  if (lVar2 == 0) {
    local_28 = 0;
    local_54 = 1;
  }
  else {
    if (local_48 <= 0.0) {
      _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_90);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      local_48 = (double)_objc_msgSend_scale(uVar3,local_90);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    pdVar4 = _dispatch_semaphore_create(1);
    uVar3 = *(undefined8 *)(local_30 + (long)_preloadedLock);
    *(undefined8 *)(local_30 + (long)_preloadedLock) = pdVar4;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_autoreleasePoolPush();
    _objc_msgSend_decoderWithData_scale_
              (local_48,&objc::class_t::WCMYYImageDecoder,local_90,local_40);
    local_60 = _objc_retainAutoreleasedReturnValue();
    lVar2 = local_50;
    local_61 = 1;
    if (local_50 != 0) {
      uVar5 = _objc_msgSend_width(local_60,local_90);
      uVar6 = _objc_msgSend_height(local_60,local_90);
      dVar11 = (double)uVar6;
      local_78 = _CGSizeMake((double)uVar5);
      local_70 = dVar11;
      local_d0 = (double)_objc_msgSend_scale(local_60,local_90);
      if (local_d0 == 0.0) {
        local_d0 = 1.0;
      }
      local_61 = (**(code **)(lVar2 + 0x10))(local_78,local_70,local_d0);
    }
    _objc_msgSend_frameAtIndex_decodeForDisplay_(local_60,local_90,0,local_61 & 1);
    local_80 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(local_80,local_90);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_88 = lVar2;
    if (lVar2 == 0) {
      local_28 = 0;
      local_54 = 1;
    }
    else {
      _objc_retainAutorelease();
      uVar7 = _objc_msgSend_CGImage(lVar2,local_90);
      uVar10 = _objc_msgSend_scale(local_60,local_90);
      uVar8 = _objc_msgSend_imageOrientation(local_88,local_90);
      local_30 = 0;
      local_30 = _objc_msgSend_initWithCGImage_scale_orientation_(uVar10,IVar1,local_90,uVar7,uVar8)
      ;
      _objc_storeStrong(&local_30);
      if (local_30 == 0) {
        local_28 = 0;
        local_54 = 1;
      }
      else {
        uVar7 = _objc_msgSend_type(local_60,local_90);
        *(undefined8 *)(local_30 + (long)_animatedImageType) = uVar7;
        uVar5 = _objc_msgSend_frameCount(local_60,local_90);
        if (1 < uVar5) {
          _objc_storeStrong(local_30 + (long)_decoder,local_60);
          lVar2 = local_88;
          _objc_retainAutorelease();
          _objc_msgSend_CGImage(lVar2,local_90);
          lVar9 = _CGImageGetBytesPerRow();
          lVar2 = local_88;
          _objc_retainAutorelease();
          _objc_msgSend_CGImage(lVar2,local_90);
          lVar2 = _CGImageGetHeight();
          *(long *)(local_30 + (long)_bytesPerFrame) = lVar9 * lVar2;
          lVar9 = *(long *)(local_30 + (long)_bytesPerFrame);
          lVar2 = _objc_msgSend_frameCount(local_60,local_90);
          *(long *)(local_30 + (long)_animatedImageMemorySize) = lVar9 * lVar2;
        }
        _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_30,local_90,1);
        local_54 = 0;
      }
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_60,0);
    _objc_autoreleasePoolPop(uVar3);
    if (local_54 == 0) {
      local_28 = (*(code *)PTR__objc_retain_00110460)(local_30);
      local_54 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

