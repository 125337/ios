// -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:] @0x9aa5c

void __UIImage_WCMYYImageCoder___wcm_yy_dataRepresentationForSystem__
               (undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long local_88;
  undefined8 local_78;
  long local_60;
  long local_58;
  byte local_49;
  uint local_48;
  uint local_44;
  long local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  uVar1 = _objc_opt_class(&objc::class_t::WCMYYImage);
  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);
  if ((uVar2 & 1) != 0) {
    local_38 = (*(code *)PTR__objc_retain_00110460)(local_18);
    _objc_msgSend_animatedImageData(local_38,local_78);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar3 != 0) {
      if ((local_21 & 1) == 0) {
        _objc_msgSend_animatedImageData(local_38,local_78);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        lVar3 = local_30;
        local_30 = lVar4;
        (*(code *)PTR__objc_release_00110458)(lVar3);
      }
      else {
        lVar3 = _objc_msgSend_animatedImageType(local_38,local_78);
        if ((lVar3 + -7 == 0) ||
           (lVar3 = _objc_msgSend_animatedImageType(lVar3 + -7,local_38,local_78), lVar3 == 8)) {
          _objc_msgSend_animatedImageData(0,local_38,local_78);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          lVar3 = local_30;
          local_30 = lVar4;
          (*(code *)PTR__objc_release_00110458)(lVar3);
        }
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  uVar1 = local_18;
  if (local_30 == 0) {
    _objc_retainAutorelease();
    lVar3 = _objc_msgSend_CGImage(uVar1,local_78);
    uVar1 = local_18;
    if (lVar3 == 0) {
      local_88 = 0;
    }
    else {
      _objc_retainAutorelease();
      _objc_msgSend_CGImage(uVar1,local_78);
      local_88 = _CFRetain();
    }
    local_40 = local_88;
    if (local_88 != 0) {
      local_44 = _CGImageGetBitmapInfo(local_88);
      local_48 = _CGImageGetAlphaInfo(local_40);
      local_48 = local_48 & 0x1f;
      local_49 = 0;
      if ((((local_48 == 1) || (local_48 == 2)) || (local_48 == 3)) ||
         (iVar6 = local_48 - 4, iVar6 == 0)) {
        iVar6 = 1;
        local_49 = 1;
      }
      lVar4 = _objc_msgSend_imageOrientation(iVar6,local_18,local_78);
      lVar3 = local_40;
      if (lVar4 != 0) {
        uVar1 = _objc_msgSend_imageOrientation(local_18,local_78);
        local_58 = _WCMYYCGImageCreateCopyWithOrientation(lVar3,uVar1,local_44 | local_48);
        if (local_58 != 0) {
          _CFRelease(local_40);
          local_40 = local_58;
        }
      }
      uVar1 = _objc_autoreleasePoolPush();
      _objc_msgSend_imageWithCGImage_(&_OBJC_CLASS___UIImage,local_78,local_40);
      local_60 = _objc_retainAutoreleasedReturnValue();
      if (local_60 != 0) {
        if ((local_49 & 1) == 0) {
          _objc_msgSend_imageWithCGImage_(&_OBJC_CLASS___UIImage,local_78,local_40);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _UIImageJPEGRepresentation(0x3feccccccccccccd);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          lVar3 = local_30;
          local_30 = lVar4;
          (*(code *)PTR__objc_release_00110458)(lVar3);
          (*(code *)PTR__objc_release_00110458)(uVar5);
        }
        else {
          _objc_msgSend_imageWithCGImage_(&_OBJC_CLASS___UIImage,local_78,local_40);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _UIImagePNGRepresentation();
          lVar4 = _objc_retainAutoreleasedReturnValue();
          lVar3 = local_30;
          local_30 = lVar4;
          (*(code *)PTR__objc_release_00110458)(lVar3);
          (*(code *)PTR__objc_release_00110458)(uVar5);
        }
      }
      _objc_storeStrong(&local_60,0);
      _objc_autoreleasePoolPop(uVar1);
      _CFRelease(local_40);
    }
  }
  if (local_30 == 0) {
    _UIImagePNGRepresentation(local_18);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    local_30 = lVar4;
    (*(code *)PTR__objc_release_00110458)(lVar3);
  }
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_30);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

