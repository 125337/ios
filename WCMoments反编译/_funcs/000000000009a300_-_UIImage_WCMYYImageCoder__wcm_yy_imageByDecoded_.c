// -[UIImage(WCMYYImageCoder)_wcm_yy_imageByDecoded] @0x9a300

void __UIImage_WCMYYImageCoder__wcm_yy_imageByDecoded_(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  uVar2 = _objc_msgSend_wcm_yy_isDecodedForDisplay(param_1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    _objc_retainAutorelease();
    local_30 = _objc_msgSend_CGImage(uVar3,local_48);
    if (local_30 == 0) {
      local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);
    }
    else {
      local_38 = _WCMYYCGImageCreateDecodedCopy(local_30,1);
      if (local_38 == 0) {
        local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);
      }
      else {
        _objc_opt_class(local_20);
        uVar3 = _objc_alloc();
        lVar1 = local_38;
        uVar5 = _objc_msgSend_scale(local_20,local_48);
        uVar4 = _objc_msgSend_imageOrientation(local_20,local_48);
        local_40 = _objc_msgSend_initWithCGImage_scale_orientation_
                             (uVar5,uVar3,local_48,lVar1,uVar4);
        _CGImageRelease(local_38);
        if (local_40 == 0) {
          _objc_storeStrong(&local_40,local_20);
        }
        _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_40,local_48,1);
        local_18 = (*(code *)PTR__objc_retain_00110460)(local_40);
        _objc_storeStrong(&local_40,0);
      }
    }
  }
  else {
    local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

