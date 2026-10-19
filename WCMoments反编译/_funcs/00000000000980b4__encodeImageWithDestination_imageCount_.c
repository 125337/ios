// _encodeImageWithDestination:imageCount: @0x980b4

/* Function Stack Size: 0x20 bytes */

void WCMYYImageEncoder::_encodeImageWithDestination_imageCount_
               (ID param_1,SEL param_2,CGImageDestination *param_3,unsigned_long_long param_4)

{
  CGImageDestination *pCVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_110;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a4;
  undefined8 local_a0;
  unsigned_long_long local_98;
  CGImageDestination *local_90;
  SEL local_88;
  ID local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_98 = param_4;
  local_90 = param_3;
  local_88 = param_2;
  local_80 = param_1;
  if (*(long *)(param_1 + 0x20) == 7) {
    local_38 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_00110298;
    local_48 = *(undefined8 *)PTR__kCGImagePropertyGIFLoopCount_001102a0;
    _objc_msgSend_numberWithUnsignedInteger_
              (&_OBJC_CLASS___NSNumber,local_110,*(undefined8 *)(param_1 + 0x28));
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_110,&local_40,&local_48);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_30 = uVar5;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_110,&local_30,&local_38,1);
    local_a0 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _CGImageDestinationSetProperties(local_90,local_a0);
    _objc_storeStrong(&local_a0,0);
  }
  for (local_a4 = 0; (ulong)(long)local_a4 < local_98; local_a4 = local_a4 + 1) {
    uVar4 = _objc_autoreleasePoolPush((long)local_a4 - local_98);
    _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(local_80 + 8),local_110,(long)local_a4);
    local_b0 = _objc_retainAutoreleasedReturnValue();
    local_b8 = 0;
    if ((*(long *)(local_80 + 0x20) == 7) && (1 < local_98)) {
      local_58 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_00110298;
      local_68 = *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_00110290;
      _objc_msgSend_objectAtIndexedSubscript_
                (*(undefined8 *)(local_80 + 0x10),local_110,(long)local_a4);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_60 = uVar6;
      _objc_msgSend_dictionaryWithObjects_forKeys_count_
                (&_OBJC_CLASS___NSDictionary,local_110,&local_60,&local_68);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      local_50 = uVar7;
      _objc_msgSend_dictionaryWithObjects_forKeys_count_
                (&_OBJC_CLASS___NSDictionary,local_110,&local_50,&local_58,1);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      uVar5 = local_b8;
      local_b8 = uVar8;
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    else {
      local_78 = *(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_00110288;
      _objc_msgSend_numberWithDouble_
                (*(undefined8 *)(local_80 + 0x30),&_OBJC_CLASS___NSNumber,local_110);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_70 = uVar6;
      _objc_msgSend_dictionaryWithObjects_forKeys_count_
                (&_OBJC_CLASS___NSDictionary,local_110,&local_70,&local_78,1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar5 = local_b8;
      local_b8 = uVar7;
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    uVar5 = local_b0;
    uVar6 = _objc_opt_class(&_OBJC_CLASS___UIImage);
    uVar9 = _objc_opt_isKindOfClass(uVar5,uVar6);
    uVar5 = local_b0;
    if ((uVar9 & 1) == 0) {
      uVar6 = _objc_opt_class(&_OBJC_CLASS___NSURL);
      uVar9 = _objc_opt_isKindOfClass(uVar5,uVar6);
      uVar5 = local_b0;
      if ((uVar9 & 1) == 0) {
        uVar6 = _objc_opt_class(&_OBJC_CLASS___NSData);
        uVar9 = _objc_opt_isKindOfClass(uVar5,uVar6);
        if (((uVar9 & 1) != 0) && (lVar10 = _CGImageSourceCreateWithData(local_b0,0), lVar10 != 0))
        {
          _CGImageDestinationAddImageFromSource(local_90,lVar10,0,local_b8);
          _CFRelease(lVar10);
        }
      }
      else {
        lVar10 = _CGImageSourceCreateWithURL(local_b0,0);
        if (lVar10 != 0) {
          _CGImageDestinationAddImageFromSource(local_90,lVar10,0,local_b8);
          _CFRelease(lVar10);
        }
      }
    }
    else {
      local_c0 = (*(code *)PTR__objc_retain_00110460)(local_b0);
      lVar10 = _objc_msgSend_imageOrientation(local_c0,local_110);
      uVar5 = local_c0;
      if (lVar10 != 0) {
        _objc_retainAutorelease();
        lVar10 = _objc_msgSend_CGImage(uVar5,local_110);
        uVar5 = local_c0;
        if (lVar10 != 0) {
          _objc_retainAutorelease();
          _objc_msgSend_CGImage(uVar5,local_110);
          uVar2 = _CGImageGetBitmapInfo();
          uVar5 = local_c0;
          _objc_retainAutorelease();
          _objc_msgSend_CGImage(uVar5,local_110);
          uVar3 = _CGImageGetAlphaInfo();
          uVar5 = local_c0;
          _objc_retainAutorelease();
          uVar5 = _objc_msgSend_CGImage(uVar5,local_110);
          uVar6 = _objc_msgSend_imageOrientation(local_c0,local_110);
          lVar10 = _WCMYYCGImageCreateCopyWithOrientation(uVar5,uVar6,uVar2 | uVar3);
          if (lVar10 != 0) {
            _objc_msgSend_imageWithCGImage_(&_OBJC_CLASS___UIImage,local_110,lVar10);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            uVar5 = local_c0;
            local_c0 = uVar6;
            (*(code *)PTR__objc_release_00110458)(uVar5);
            _CFRelease(lVar10);
          }
        }
      }
      uVar5 = local_c0;
      _objc_retainAutorelease();
      lVar10 = _objc_msgSend_CGImage(uVar5,local_110);
      pCVar1 = local_90;
      uVar5 = local_b0;
      if (lVar10 != 0) {
        _objc_retainAutorelease();
        uVar5 = _objc_msgSend_CGImage(uVar5,local_110);
        _CGImageDestinationAddImage(pCVar1,uVar5,local_b8);
      }
      _objc_storeStrong(&local_c0,0);
    }
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
    _objc_autoreleasePoolPop(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

