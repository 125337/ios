// ============ 功能链 74  根: _objc_msgSend$_newCGImageFromIndex:decoded: @0xc73e0 ============
// 节点 52，按调用深度排序，自上而下读

// ---- [d0] _objc_msgSend$_newCGImageFromIndex:decoded: @0xc73e0 ----
// CALLERS: (根)
// CALLEES: _newCGImageFromIndex:decoded:


void _objc_msgSend__newCGImageFromIndex_decoded_(undefined8 param_1)



{

  (*(code *)PTR__objc_msgSend_00110420)(param_1,"_newCGImageFromIndex:decoded:");

  return;

}






// ---- [d1] _newCGImageFromIndex:decoded: @0x986c4 ----
// CALLERS: _objc_msgSend$_newCGImageFromIndex:decoded:
// CALLEES: imageWithContentsOfFile:, imageWithData:, imageWithContentsOfFile:, imageWithData:, _WCMYYCGImageCreateDecodedCopy, _WCMYYCGImageCreateCopyWithOrientation


/* Function Stack Size: 0x1c bytes */



CGImage * WCMYYImageEncoder::_newCGImageFromIndex_decoded_

                    (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  undefined8 local_80;

  undefined8 local_48;

  long local_40;

  byte local_31;

  unsigned_long_long local_30;

  SEL local_28;

  ID local_20;

  CGImage *local_18;

  

  local_31 = (byte)param_4;

  local_40 = 0;

  local_30 = param_3;

  local_28 = param_2;

  local_20 = param_1;

  _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(param_1 + 8),param_2,param_3);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar1;

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

  uVar1 = local_48;

  if ((uVar3 & 1) == 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSURL);

    uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

    uVar1 = local_48;

    if ((uVar3 & 1) == 0) {

      uVar2 = _objc_opt_class(&_OBJC_CLASS___NSData);

      uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

      if ((uVar3 & 1) != 0) {

        _objc_msgSend_imageWithData_(&_OBJC_CLASS___UIImage,local_80,local_48);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        lVar4 = local_40;

        local_40 = lVar5;

        (*(code *)PTR__objc_release_00110458)(lVar4);

      }

    }

    else {

      _objc_msgSend_absoluteString(local_48,local_80);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_imageWithContentsOfFile_(&_OBJC_CLASS___UIImage,local_80);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      lVar4 = local_40;

      local_40 = lVar5;

      (*(code *)PTR__objc_release_00110458)(lVar4);

      (*(code *)PTR__objc_release_00110458)(uVar1);

    }

  }

  else {

    _objc_storeStrong(&local_40,local_48);

  }

  lVar4 = local_40;

  if (local_40 == 0) {

    local_18 = (CGImage *)0x0;

  }

  else {

    _objc_retainAutorelease();

    lVar4 = _objc_msgSend_CGImage(lVar4,local_80);

    if (lVar4 == 0) {

      local_18 = (CGImage *)0x0;

    }

    else {

      lVar5 = _objc_msgSend_imageOrientation(local_40,local_80);

      if (lVar5 == 0) {

        if ((local_31 & 1) == 0) {

          local_18 = (CGImage *)_CFRetain(lVar4);

        }

        else {

          local_18 = (CGImage *)_WCMYYCGImageCreateDecodedCopy(lVar4,1);

        }

      }

      else {

        uVar1 = _objc_msgSend_imageOrientation(local_40,local_80);

        local_18 = (CGImage *)_WCMYYCGImageCreateCopyWithOrientation(lVar4,uVar1,&DAT_00002002);

      }

    }

  }

  _objc_storeStrong(&local_48);

  _objc_storeStrong(&local_40,0);

  return local_18;

}






// ---- [d2] imageWithContentsOfFile: @0x68c78 ----
// CALLERS: _newCGImageFromIndex:decoded:, _objc_msgSend$imageWithContentsOfFile:, _objc_msgSend$imageWithContentsOfFile:decodeDecision:
// CALLEES: imageWithContentsOfFile:decodeDecision:


/* Function Stack Size: 0x18 bytes */



ID WCMYBImage::imageWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_imageWithContentsOfFile_decodeDecision_(local_18,local_48,local_28,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d2] imageWithData: @0x68d80 ----
// CALLERS: _newCGImageFromIndex:decoded:, _objc_msgSend$imageWithData:, _objc_msgSend$imageWithData:decodeDecision:, _objc_msgSend$imageWithData:scale:, _objc_msgSend$imageWithData:scale:decodeDecision:
// CALLEES: imageWithData:decodeDecision:


/* Function Stack Size: 0x18 bytes */



ID WCMYBImage::imageWithData_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_imageWithData_decodeDecision_(local_18,local_48,local_28,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d2] imageWithContentsOfFile: @0x8faac ----
// CALLERS: _newCGImageFromIndex:decoded:, _objc_msgSend$imageWithContentsOfFile:
// CALLEES: initWithContentsOfFile:, initWithContentsOfFile:


/* Function Stack Size: 0x18 bytes */



ID WCMYYImage::imageWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithContentsOfFile_(uVar1,local_48,local_28);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d2] imageWithData: @0x8fb18 ----
// CALLERS: _newCGImageFromIndex:decoded:, _objc_msgSend$imageWithData:
// CALLEES: initWithData:, initWithData:


/* Function Stack Size: 0x18 bytes */



ID WCMYYImage::imageWithData_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithData_(uVar1,local_48,local_28);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d2] _WCMYYCGImageCreateDecodedCopy @0x910c8 ----
// CALLERS: ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke, _frameAtIndex:decodeForDisplay:, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _newCGImageFromIndex:decoded:, -[UIImage(WCMYYImageCoder)_wcm_yy_imageByDecoded]
// CALLEES: _CGRectMake, _WCMYYCGColorSpaceGetDeviceRGB


undefined8 _WCMYYCGImageCreateDecodedCopy(long param_1,byte param_2)



{

  bool bVar1;

  uint uVar2;

  undefined4 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 local_18;

  

  if (param_1 == 0) {

    local_18 = 0;

  }

  else {

    lVar4 = _CGImageGetWidth(param_1);

    lVar5 = _CGImageGetHeight(param_1);

    if ((lVar4 == 0) || (lVar5 == 0)) {

      local_18 = 0;

    }

    else if ((param_2 & 1) == 0) {

      uVar6 = _CGImageGetColorSpace(param_1);

      uVar10 = _CGImageGetBitsPerComponent(param_1);

      uVar11 = _CGImageGetBitsPerPixel(param_1);

      lVar7 = _CGImageGetBytesPerRow(param_1);

      uVar3 = _CGImageGetBitmapInfo(param_1);

      if (((lVar7 == 0) || (lVar4 == 0)) || (lVar5 == 0)) {

        local_18 = 0;

      }

      else {

        lVar8 = _CGImageGetDataProvider(param_1);

        if (lVar8 == 0) {

          local_18 = 0;

        }

        else {

          lVar8 = _CGDataProviderCopyData(lVar8);

          if (lVar8 == 0) {

            local_18 = 0;

          }

          else {

            lVar9 = _CGDataProviderCreateWithCFData(lVar8);

            _CFRelease(lVar8);

            if (lVar9 == 0) {

              local_18 = 0;

            }

            else {

              local_18 = _CGImageCreate(lVar4,lVar5,uVar10,uVar11,lVar7,uVar6,uVar3,lVar9);

              _CFRelease(lVar9);

            }

          }

        }

      }

    }

    else {

      uVar2 = _CGImageGetAlphaInfo(param_1);

      uVar2 = uVar2 & 0x1f;

      bVar1 = false;

      if (((uVar2 == 1) || (uVar2 == 2)) || ((uVar2 == 3 || (uVar2 == 4)))) {

        bVar1 = true;

      }

      uVar2 = 2;

      if (!bVar1) {

        uVar2 = 6;

      }

      uVar6 = _WCMYYCGColorSpaceGetDeviceRGB();

      lVar7 = _CGBitmapContextCreate(0,lVar4,lVar5,8,0,uVar6,uVar2 | 0x2000);

      if (lVar7 == 0) {

        local_18 = 0;

      }

      else {

        uVar11 = NEON_ucvtf(lVar4);

        uVar12 = NEON_ucvtf(lVar5);

        uVar10 = 0;

        uVar6 = _CGRectMake(0);

        _CGContextDrawImage(uVar6,uVar10,uVar11,uVar12,lVar7,param_1);

        local_18 = _CGBitmapContextCreateImage(lVar7);

        _CFRelease(lVar7);

      }

    }

  }

  return local_18;

}






// ---- [d2] _WCMYYCGImageCreateCopyWithOrientation @0x91f70 ----
// CALLERS: _encodeImageWithDestination:imageCount:, _newCGImageFromIndex:decoded:, -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:]
// CALLEES: _WCMYYCGImageCreateAffineTransformCopy, _WCMYYImageDegreesToRadians


undefined8 _WCMYYCGImageCreateCopyWithOrientation(long param_1,long param_2,undefined4 param_3)



{

  undefined4 uVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  double dVar5;

  double dVar6;

  undefined1 auStack_5a8 [48];

  undefined8 local_578;

  undefined8 local_570;

  undefined1 auStack_568 [48];

  undefined1 auStack_538 [48];

  undefined1 auStack_508 [48];

  undefined1 auStack_4d8 [48];

  undefined1 auStack_4a8 [48];

  undefined1 auStack_478 [48];

  undefined1 auStack_448 [48];

  undefined1 auStack_418 [48];

  undefined1 auStack_3e8 [48];

  undefined1 auStack_3b8 [48];

  undefined1 auStack_388 [48];

  undefined1 auStack_358 [48];

  undefined1 auStack_328 [48];

  undefined1 auStack_2f8 [48];

  undefined1 auStack_2c8 [48];

  undefined1 auStack_298 [48];

  undefined1 auStack_268 [48];

  undefined1 auStack_238 [48];

  undefined1 auStack_208 [48];

  undefined1 auStack_1d8 [48];

  undefined1 auStack_1a8 [48];

  undefined1 auStack_178 [48];

  undefined1 auStack_148 [48];

  undefined1 auStack_118 [48];

  undefined1 auStack_e8 [48];

  undefined1 auStack_b8 [55];

  byte local_81;

  undefined1 auStack_80 [48];

  undefined8 local_50;

  undefined8 local_48;

  undefined4 local_3c;

  long local_38;

  long local_30;

  undefined8 local_28;

  

  if (param_1 == 0) {

    local_28 = 0;

  }

  else {

    local_3c = param_3;

    local_38 = param_2;

    local_30 = param_1;

    if (param_2 == 0) {

      local_28 = _CFRetain(param_1);

    }

    else {

      local_48 = _CGImageGetWidth(param_1);

      local_50 = _CGImageGetHeight(local_30);

      _memcpy(auStack_80,PTR__CGAffineTransformIdentity_00110738,0x30);

      local_81 = 0;

      if (local_38 == 1) {

        _WCMYYImageDegreesToRadians(0x4066800000000000);

        _CGAffineTransformMakeRotation();

        _memcpy(auStack_80,auStack_b8,0x30);

        dVar5 = (double)NEON_ucvtf(local_48);

        dVar6 = (double)NEON_ucvtf(local_50);

        _memcpy(auStack_118,auStack_80,0x30);

        _CGAffineTransformTranslate(-dVar5,-dVar6,auStack_118);

        _memcpy(auStack_80,auStack_e8,0x30);

      }

      else if (local_38 == 2) {

        _WCMYYImageDegreesToRadians(0x4056800000000000);

        _CGAffineTransformMakeRotation();

        _memcpy(auStack_80,auStack_148,0x30);

        dVar5 = (double)NEON_ucvtf(local_50);

        _memcpy(auStack_1a8,auStack_80,0x30);

        _CGAffineTransformTranslate(0x8000000000000000,-dVar5,auStack_1a8);

        _memcpy(auStack_80,auStack_178,0x30);

        local_81 = 1;

      }

      else if (local_38 == 3) {

        _WCMYYImageDegreesToRadians(0xc056800000000000);

        _CGAffineTransformMakeRotation();

        _memcpy(auStack_80,auStack_1d8,0x30);

        dVar5 = (double)NEON_ucvtf(local_48);

        _memcpy(auStack_238,auStack_80,0x30);

        _CGAffineTransformTranslate(-dVar5,0,auStack_238);

        _memcpy(auStack_80,auStack_208,0x30);

        local_81 = 1;

      }

      else if (local_38 == 4) {

        uVar4 = NEON_ucvtf(local_48);

        _memcpy(auStack_298,auStack_80,0x30);

        _CGAffineTransformTranslate(uVar4,0,auStack_298);

        _memcpy(auStack_80,auStack_268,0x30);

        _memcpy(auStack_2f8,auStack_80,0x30);

        _CGAffineTransformScale(0xbff0000000000000,0x3ff0000000000000,auStack_2f8);

        _memcpy(auStack_80,auStack_2c8,0x30);

      }

      else if (local_38 == 5) {

        uVar4 = NEON_ucvtf(local_50);

        _memcpy(auStack_358,auStack_80,0x30);

        _CGAffineTransformTranslate(0,uVar4,auStack_358);

        _memcpy(auStack_80,auStack_328,0x30);

        _memcpy(auStack_3b8,auStack_80,0x30);

        _CGAffineTransformScale(0x3ff0000000000000,0xbff0000000000000,auStack_3b8);

        _memcpy(auStack_80,auStack_388,0x30);

      }

      else if (local_38 == 6) {

        _WCMYYImageDegreesToRadians(0xc056800000000000);

        _CGAffineTransformMakeRotation();

        _memcpy(auStack_80,auStack_3e8,0x30);

        _memcpy(auStack_448,auStack_80,0x30);

        _CGAffineTransformScale(0x3ff0000000000000,0xbff0000000000000,auStack_448);

        _memcpy(auStack_80,auStack_418,0x30);

        dVar5 = (double)NEON_ucvtf(local_48);

        dVar6 = (double)NEON_ucvtf(local_50);

        _memcpy(auStack_4a8,auStack_80,0x30);

        _CGAffineTransformTranslate(-dVar5,-dVar6,auStack_4a8);

        _memcpy(auStack_80,auStack_478,0x30);

        local_81 = 1;

      }

      else if (local_38 == 7) {

        _WCMYYImageDegreesToRadians(0x4056800000000000);

        _CGAffineTransformMakeRotation();

        _memcpy(auStack_80,auStack_4d8,0x30);

        _memcpy(auStack_538,auStack_80,0x30);

        _CGAffineTransformScale(0x3ff0000000000000,0xbff0000000000000,auStack_538);

        _memcpy(auStack_80,auStack_508,0x30);

        local_81 = 1;

      }

      _memcpy(auStack_568,auStack_80,0x30);

      uVar3 = _CGAffineTransformIsIdentity(auStack_568);

      lVar2 = local_30;

      uVar1 = local_3c;

      if ((uVar3 & 1) == 0) {

        local_578 = NEON_ucvtf(local_48);

        local_570 = NEON_ucvtf(local_50);

        if ((local_81 & 1) != 0) {

          local_578 = NEON_ucvtf(local_50);

          local_570 = NEON_ucvtf(local_48);

        }

        _memcpy(auStack_5a8,auStack_80,0x30);

        local_28 = _WCMYYCGImageCreateAffineTransformCopy

                             (local_578,local_570,lVar2,auStack_5a8,uVar1);

      }

      else {

        local_28 = _CFRetain(local_30);

      }

    }

  }

  return local_28;

}






// ---- [d3] imageWithContentsOfFile:decodeDecision: @0x68cec ----
// CALLERS: imageWithContentsOfFile:, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, _objc_msgSend$imageWithContentsOfFile:decodeDecision:
// CALLEES: initWithContentsOfFile:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::imageWithContentsOfFile_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_58;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithContentsOfFile_decodeDecision_(uVar1,local_58,local_28,local_30);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d3] imageWithData:decodeDecision: @0x68df4 ----
// CALLERS: imageWithData:, _objc_msgSend$imageWithData:decodeDecision:
// CALLEES: initWithData:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::imageWithData_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_58;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithData_decodeDecision_(uVar1,local_58,local_28,local_30);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d3] initWithContentsOfFile: @0x68fb0 ----
// CALLERS: imageWithContentsOfFile:, _objc_msgSend$initWithContentsOfFile:, _objc_msgSend$initWithContentsOfFile:decodeDecision:
// CALLEES: initWithContentsOfFile:decodeDecision:


/* Function Stack Size: 0x18 bytes */



ID WCMYBImage::initWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithContentsOfFile_decodeDecision_(IVar1,local_50,local_28,0);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d3] initWithContentsOfFile: @0x8fc00 ----
// CALLERS: imageWithContentsOfFile:, _objc_msgSend$initWithContentsOfFile:
// CALLEES: __NSStringPathScale, initWithData:scale:, initWithData:scale:


/* Function Stack Size: 0x18 bytes */



ID WCMYYImage::initWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_68;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_68,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  IVar2 = local_18;

  local_30 = uVar1;

  __NSStringPathScale(local_28);

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_scale_(IVar2,local_68,uVar1);

  IVar2 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar2;

}






// ---- [d3] initWithData: @0x693a8 ----
// CALLERS: imageWithData:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:frameDurations:loopCount:, _objc_msgSend$initWithData:, _objc_msgSend$initWithData:decodeDecision:, _objc_msgSend$initWithData:encoding:, _objc_msgSend$initWithData:scale:, _objc_msgSend$initWithData:scale:decodeDecision:
// CALLEES: initWithData:decodeDecision:


/* Function Stack Size: 0x18 bytes */



ID WCMYBImage::initWithData_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_decodeDecision_(IVar1,local_50,local_28,0);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d3] initWithData: @0x8ff38 ----
// CALLERS: imageWithData:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:frameDurations:loopCount:, _objc_msgSend$initWithData:
// CALLEES: initWithData:scale:, initWithData:scale:


/* Function Stack Size: 0x18 bytes */



ID WCMYYImage::initWithData_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_scale_(0x3ff0000000000000,IVar1,local_50,local_28);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d3] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d3] _WCMYYCGColorSpaceGetDeviceRGB @0x90ec0 ----
// CALLERS: ___WCMYYCGColorSpaceGetDeviceRGB_block_invoke, _WCMYYCGColorSpaceIsDeviceRGB, _WCMYYCGImageCreateDecodedCopy, _WCMYYCGImageCreateAffineTransformCopy, _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _createBlendContextIfNeeded, _encodeAPNG
// CALLEES: (叶)


undefined8 _WCMYYCGColorSpaceGetDeviceRGB(void)



{

  undefined8 local_20;

  long *local_18;

  

  local_18 = &_WCMYYCGColorSpaceGetDeviceRGB_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  return _WCMYYCGColorSpaceGetDeviceRGB_space;

}






// ---- [d3] _WCMYYCGImageCreateAffineTransformCopy @0x913f4 ----
// CALLERS: _WCMYYCGImageCreateCopyWithOrientation
// CALLEES: _WCMYYCGColorSpaceGetDeviceRGB, _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat, _WCMYYImageByteAlign, _WCMYYCGDataProviderReleaseDataCallback


long _WCMYYCGImageCreateAffineTransformCopy

               (double param_1,double param_2,long param_3,void *param_4,uint param_5)



{

  int iVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined4 local_12c;

  undefined1 auStack_128 [48];

  long local_f8;

  void *local_f0;

  undefined8 uStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  void *local_d0;

  long lStack_c8;

  long local_c0;

  long lStack_b8;

  void *local_b0;

  undefined8 uStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  long local_90;

  long local_88;

  long local_80;

  long local_78;

  long local_70;

  long local_68;

  long local_60;

  long local_58;

  uint local_4c;

  void *local_48;

  long local_40;

  double local_38;

  double local_30;

  

  if (param_3 != 0) {

    local_4c = param_5;

    local_48 = param_4;

    local_40 = param_3;

    local_38 = param_1;

    local_30 = param_2;

    local_58 = _CGImageGetWidth(param_3);

    local_60 = _CGImageGetHeight(local_40);

    local_68 = (long)local_38;

    local_70 = (long)local_30;

    if ((((local_58 != 0) && (local_60 != 0)) && (local_68 != 0)) && (local_70 != 0)) {

      local_78 = 0;

      local_80 = 0;

      local_88 = 0;

      local_90 = 0;

      uStack_a8 = 0;

      local_b0 = (void *)0x0;

      uStack_98 = 0;

      local_a0 = 0;

      lStack_c8 = 0;

      local_d0 = (void *)0x0;

      lStack_b8 = 0;

      local_c0 = 0;

      uStack_e8 = 0;

      local_f0 = (void *)0x0;

      uStack_d8 = 0;

      local_e0 = 0;

      uVar4 = _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat(local_40,&local_b0,4);

      if ((uVar4 & 1) != 0) {

        local_f8 = _WCMYYImageByteAlign(local_68 << 2,0x20);

        local_d0 = _malloc(local_70 * local_f8);

        if (local_d0 != (void *)0x0) {

          local_c0 = local_68;

          lStack_c8 = local_70;

          lStack_b8 = local_f8;

          _memcpy(auStack_128,param_4,0x30);

          local_12c = 0;

          lVar5 = _vImageAffineWarpCG_ARGB8888(&local_b0,&local_d0,0,auStack_128,&local_12c,4);

          if (lVar5 == 0) {

            _free(local_b0);

            local_b0 = (void *)0x0;

            local_78 = _CGDataProviderCreateWithData

                                 (local_d0,local_d0,local_70 * local_f8,

                                  _WCMYYCGDataProviderReleaseDataCallback);

            lVar3 = local_68;

            lVar2 = local_70;

            lVar5 = local_f8;

            if (local_78 != 0) {

              local_d0 = (void *)0x0;

              uVar6 = _WCMYYCGColorSpaceGetDeviceRGB();

              local_88 = _CGImageCreate(lVar3,lVar2,8,0x20,lVar5,uVar6,4,local_78);

              if (local_88 != 0) {

                _CFRelease(local_78);

                local_78 = 0;

                iVar1 = (local_4c & 0x1f) - 4;

                if ((iVar1 == 0) && (iVar1 = 0, (local_4c & 0x7000) != 0x2000)) {

                  return local_88;

                }

                uVar4 = _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat

                                  (iVar1,local_88,&local_f0,local_4c);

                if ((uVar4 & 1) != 0) {

                  _CFRelease(local_88);

                  local_88 = 0;

                  local_80 = _CGDataProviderCreateWithData

                                       (local_f0,local_f0,local_70 * local_f8,

                                        _WCMYYCGDataProviderReleaseDataCallback);

                  lVar3 = local_68;

                  lVar2 = local_70;

                  lVar5 = local_f8;

                  if (local_80 != 0) {

                    local_f0 = (void *)0x0;

                    uVar6 = _WCMYYCGColorSpaceGetDeviceRGB();

                    local_90 = _CGImageCreate(lVar3,lVar2,8,0x20,lVar5,uVar6,local_4c,local_80);

                    if (local_90 != 0) {

                      _CFRelease(local_80);

                      return local_90;

                    }

                    local_90 = 0;

                  }

                }

              }

            }

          }

        }

        if (local_b0 != (void *)0x0) {

          _free(local_b0);

        }

        if (local_d0 != (void *)0x0) {

          _free(local_d0);

        }

        if (local_f0 != (void *)0x0) {

          _free(local_f0);

        }

        if (local_78 != 0) {

          _CFRelease(local_78);

        }

        if (local_88 != 0) {

          _CFRelease(local_88);

        }

        if (local_80 != 0) {

          _CFRelease(local_80);

        }

      }

    }

  }

  return 0;

}






// ---- [d3] _WCMYYImageDegreesToRadians @0x92554 ----
// CALLERS: _WCMYYCGImageCreateCopyWithOrientation
// CALLEES: (叶)


undefined1  [16] _WCMYYImageDegreesToRadians(double param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._0_8_ = (param_1 * 3.141592653589793) / 180.0;

  auVar1._8_8_ = 0;

  return auVar1;

}






// ---- [d4] initWithContentsOfFile:decodeDecision: @0x69048 ----
// CALLERS: imageWithContentsOfFile:decodeDecision:, initWithContentsOfFile:, _objc_msgSend$initWithContentsOfFile:decodeDecision:
// CALLEES: __NSStringPathScale, initWithData:scale:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::initWithContentsOfFile_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_78;

  undefined8 local_38;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_78,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  IVar2 = local_18;

  local_38 = uVar1;

  __NSStringPathScale(local_28);

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_(IVar2,local_78,uVar1,local_30);

  IVar2 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar2;

}






// ---- [d4] initWithData:decodeDecision: @0x69440 ----
// CALLERS: imageWithData:decodeDecision:, initWithData:, _objc_msgSend$initWithData:decodeDecision:
// CALLEES: initWithData:scale:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::initWithData_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  ID IVar1;

  undefined8 local_60;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_

                       (0x3ff0000000000000,IVar1,local_60,local_28,local_30);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d4] __NSStringPathScale @0x69150 ----
// CALLERS: initWithContentsOfFile:decodeDecision:, ____NSStringPathScale_block_invoke, initWithContentsOfFile:, ____NSStringPathScale_block_invoke, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameAtIndex:, ____NSStringPathScale_block_invoke
// CALLEES: ____NSStringPathScale_block_invoke


undefined1  [16] __NSStringPathScale(undefined8 param_1)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined8 local_e0;

  undefined *local_d8;

  undefined4 local_d0;

  undefined4 local_cc;

  code *local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  undefined8 *local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 *local_78;

  undefined4 local_70;

  undefined4 local_6c;

  undefined8 local_68;

  undefined8 local_60;

  undefined4 local_54;

  undefined8 local_50;

  ulong local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  undefined8 local_28;

  

  local_50 = 0;

  _objc_storeStrong(&local_50,param_1);

  lVar1 = _objc_msgSend_length(local_50,local_e0);

  if ((lVar1 == 0) || (uVar2 = _objc_msgSend_hasSuffix_(local_50,local_e0,&cf__), (uVar2 & 1) != 0))

  {

    local_48 = 0x3ff0000000000000;

    local_54 = 1;

  }

  else {

    _objc_msgSend_stringByDeletingPathExtension(local_50,local_e0);

    local_60 = _objc_retainAutoreleasedReturnValue();

    local_78 = &local_80;

    local_80 = 0;

    local_70 = 0x20000000;

    local_6c = 0x20;

    local_68 = 0x3ff0000000000000;

    uVar3 = _objc_msgSend_regularExpressionWithPattern_options_error_

                      (&_OBJC_CLASS___NSRegularExpression,local_e0,&cf___0_9______0_9__x_,0x10,0);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

    uVar3 = local_60;

    local_88 = uVar4;

    local_a0 = _objc_msgSend_length(local_60,local_e0);

    local_38 = 0;

    local_30 = 0;

    local_a8 = 0;

    local_d8 = PTR___NSConcreteStackBlock_001104f0;

    local_d0 = 0xc2000000;

    local_cc = 0;

    local_c8 = ____NSStringPathScale_block_invoke;

    local_c0 = &___block_descriptor_48_e8_32s40r_e37_v32__0__NSTextCheckingResult_8Q16_B24l;

    local_b0 = &local_80;

    local_40 = local_a0;

    local_28 = local_a0;

    local_b8 = (*(code *)PTR__objc_retain_00110460)(local_50);

    _objc_msgSend_enumerateMatchesInString_options_range_usingBlock_

              (uVar4,local_e0,uVar3,0,local_a8,local_a0,&local_d8);

    local_48 = local_78[3];

    local_54 = 1;

    _objc_storeStrong(&local_b8);

    _objc_storeStrong(&local_88,0);

    __Block_object_dispose(&local_80,8);

    _objc_storeStrong(&local_60,0);

  }

  _objc_storeStrong(&local_50,0);

  auVar5._8_8_ = 0;

  auVar5._0_8_ = local_48;

  return auVar5;

}






// ---- [d4] initWithData:scale: @0x69500 ----
// CALLERS: initWithCoder:, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], imageNamed:, imageWithData:scale:, initWithContentsOfFile:, initWithData:, initWithCoder:, _objc_msgSend$initWithData:scale:
// CALLEES: initWithData:scale:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::initWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  ID IVar1;

  undefined8 local_58;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_(param_4,IVar1,local_58,local_28,0);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d4] initWithData:scale: @0x8ffd0 ----
// CALLERS: initWithCoder:, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], imageNamed:, imageWithData:scale:, initWithContentsOfFile:, initWithData:, initWithCoder:, _objc_msgSend$initWithData:scale:
// CALLEES: scale, animatedImageType, animatedImageMemorySize, image, type, image, decoderWithData:scale:, frameAtIndex:decodeForDisplay:, type, scale


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






// ---- [d4] _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat @0x91808 ----
// CALLERS: _WCMYYCGImageCreateAffineTransformCopy
// CALLEES: _CGRectMake, _WCMYYCGColorSpaceGetDeviceRGB, _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat


undefined1 _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat(long param_1,long *param_2,uint param_3)



{

  uint uVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  void *pvVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long local_f8;

  long local_f0;

  long lStack_e8;

  long local_e0;

  long lStack_d8;

  long local_c8;

  size_t local_c0;

  long local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  long local_90;

  uint local_84;

  undefined4 local_80;

  undefined4 local_7c;

  undefined8 local_78;

  uint local_70;

  byte local_54;

  byte local_53;

  byte local_52;

  byte local_51;

  long local_50;

  long local_48;

  uint local_3c;

  long *local_38;

  long local_30;

  

  if ((param_1 == 0) || (param_2 == (long *)0x0)) {

    return 0;

  }

  local_3c = param_3;

  local_38 = param_2;

  local_30 = param_1;

  local_48 = _CGImageGetWidth(param_1);

  local_50 = _CGImageGetHeight(local_30);

  if ((local_48 == 0) || (local_50 == 0)) {

    return 0;

  }

  local_51 = 0;

  local_52 = 0;

  local_53 = 0;

  local_54 = 0;

  uVar1 = local_3c & 0x1f;

  if (uVar1 == 1) {

    local_51 = 1;

    local_53 = 1;

  }

  else if (uVar1 == 2) {

    local_51 = 1;

    local_53 = 1;

    local_52 = 1;

  }

  else if (uVar1 == 3) {

    local_51 = 1;

  }

  else if (uVar1 == 4) {

    local_51 = 1;

    local_52 = 1;

  }

  else if (uVar1 != 5) {

    if (uVar1 != 6) {

      return 0;

    }

    local_52 = 1;

  }

  uVar1 = local_3c & 0x7000;

  if (uVar1 == 0) {

    local_54 = 1;

  }

  else if (uVar1 != 0x2000) {

    if (uVar1 != 0x4000) {

      return 0;

    }

    local_54 = 1;

  }

  _memset(&local_80,0,0x28);

  local_80 = 8;

  local_7c = 0x20;

  local_78 = _WCMYYCGColorSpaceGetDeviceRGB();

  local_70 = local_3c;

  *local_38 = 0;

  uVar3 = _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat(local_30,local_38,&local_80);

  lVar2 = local_48;

  lVar5 = local_50;

  if ((uVar3 & 1) != 0) {

    return 1;

  }

  if (((local_51 & 1) == 0) || ((local_53 & 1) != 0)) {

    local_84 = local_3c & 0x701f;

  }

  else {

    local_84 = 2;

    if ((local_52 & 1) == 0) {

      local_84 = 1;

    }

    local_84 = local_3c & 0x7000 | local_84;

  }

  uVar4 = _WCMYYCGColorSpaceGetDeviceRGB();

  lVar5 = _CGBitmapContextCreate(0,lVar2,lVar5,8,0,uVar4,local_84);

  local_90 = lVar5;

  if (lVar5 != 0) {

    uVar7 = NEON_ucvtf(local_48);

    uVar8 = NEON_ucvtf(local_50);

    uVar4 = 0;

    local_b0 = _CGRectMake(0);

    local_a8 = uVar4;

    local_a0 = uVar7;

    local_98 = uVar8;

    _CGContextDrawImage(local_b0,uVar4,uVar7,uVar8,lVar5,local_30);

    local_b8 = _CGBitmapContextGetBytesPerRow(local_90);

    local_c0 = local_50 * local_b8;

    local_c8 = _CGBitmapContextGetData(local_90);

    if ((local_c0 != 0) && (local_c8 != 0)) {

      pvVar6 = _malloc(local_c0);

      *local_38 = (long)pvVar6;

      local_38[2] = local_48;

      local_38[1] = local_50;

      local_38[3] = local_b8;

      if (*local_38 != 0) {

        if (((local_51 & 1) == 0) || ((local_53 & 1) != 0)) {

          ___memcpy_chk(*local_38,local_c8,local_c0,0xffffffffffffffff);

        }

        else {

          local_f0 = local_c8;

          local_e0 = local_48;

          lStack_e8 = local_50;

          lStack_d8 = local_b8;

          if (((local_52 & 1) == 0) || ((local_54 & 1) == 0)) {

            local_f8 = _vImageUnpremultiplyData_RGBA8888(&local_f0,local_38,0);

          }

          else {

            local_f8 = _vImageUnpremultiplyData_ARGB8888(&local_f0,local_38,0);

          }

          if (local_f8 != 0) goto LAB_00091c98;

        }

        _CFRelease(local_90);

        return 1;

      }

    }

  }

LAB_00091c98:

  if (local_90 != 0) {

    _CFRelease(local_90);

  }

  if (*local_38 != 0) {

    _free((void *)*local_38);

  }

  *local_38 = 0;

  return 0;

}






// ---- [d4] _WCMYYImageByteAlign @0x91d04 ----
// CALLERS: _WCMYYCGImageCreateAffineTransformCopy
// CALLEES: (叶)


long _WCMYYImageByteAlign(long param_1,ulong param_2)



{

  ulong uVar1;

  

  uVar1 = 0;

  if (param_2 != 0) {

    uVar1 = (param_1 + (param_2 - 1)) / param_2;

  }

  return uVar1 * param_2;

}






// ---- [d4] _WCMYYCGDataProviderReleaseDataCallback @0x91d38 ----
// CALLERS: _WCMYYCGImageCreateAffineTransformCopy, _newUnblendedImageAtIndex:extendToCanvas:decoded:
// CALLEES: (叶)


void _WCMYYCGDataProviderReleaseDataCallback(void *param_1)



{

  if (param_1 != (void *)0x0) {

    _free(param_1);

  }

  return;

}






// ---- [d5] initWithData:scale:decodeDecision: @0x695a8 ----
// CALLERS: imageNamed:decodeDecision:, imageWithData:scale:decodeDecision:, initWithContentsOfFile:decodeDecision:, initWithData:decodeDecision:, initWithData:scale:, _objc_msgSend$initWithData:scale:decodeDecision:
// CALLEES: _CGSizeMake, scale, animatedImageType, animatedImageMemorySize, image, type, width, height, image, decoderWithData:scale:


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






// ---- [d5] ____NSStringPathScale_block_invoke @0x6a448 ----
// CALLERS: __NSStringPathScale, __NSStringPathScale, __NSStringPathScale
// CALLEES: __NSStringPathScale


void ____NSStringPathScale_block_invoke(long param_1)



{

  ulong uVar1;

  long lVar2;

  long extraout_x1;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_a0;

  undefined8 local_40;

  long local_38;

  long local_30;

  long local_28;

  long local_20;

  long local_18;

  

  local_40 = 0;

  local_38 = param_1;

  _objc_storeStrong(&local_40);

  uVar1 = _objc_msgSend_range(local_40,local_a0);

  if (2 < uVar1) {

    uVar3 = *(undefined8 *)(param_1 + 0x20);

    lVar2 = _objc_msgSend_range(local_40,local_a0);

    lVar2 = lVar2 + 1;

    _objc_msgSend_range(local_40,local_a0);

    local_30 = extraout_x1 + -2;

    local_28 = lVar2;

    local_20 = lVar2;

    local_18 = local_30;

    _objc_msgSend_substringWithRange_(uVar3,local_a0,lVar2,local_30);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_msgSend_doubleValue(uVar3,local_a0);

    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  _objc_storeStrong(&local_40,0);

  return;

}






// ---- [d5] scale @0x2d0d8 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMHeaderSizeController::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_scale);

}






// ---- [d5] animatedImageType @0x6a21c ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:, -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:], _objc_msgSend$animatedImageType
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageType(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageType);

}






// ---- [d5] animatedImageMemorySize @0x6a240 ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageMemorySize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageMemorySize);

}






// ---- [d5] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d5] type @0x82db4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBCopywriter::type(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 8);

}






// ---- [d5] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d5] decoderWithData:scale: @0x937e8 ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:, _objc_msgSend$decoderWithData:scale:
// CALLEES: initWithScale:, updateData:final:, frameCount


/* Function Stack Size: 0x20 bytes */



ID WCMYYImageDecoder::decoderWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  undefined8 uVar1;

  long lVar2;

  ID IVar3;

  undefined8 local_58;

  undefined8 local_48;

  undefined4 local_3c;

  double local_38;

  long local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  local_38 = param_4;

  if (local_30 == 0) {

    local_18 = 0;

    local_3c = 1;

  }

  else {

    uVar1 = _objc_alloc(&objc::class_t::WCMYYImageDecoder);

    local_48 = _objc_msgSend_initWithScale_(local_38,uVar1,local_58);

    _objc_msgSend_updateData_final_(local_48,local_58,local_30,1);

    lVar2 = _objc_msgSend_frameCount(local_48,local_58);

    if (lVar2 == 0) {

      local_18 = 0;

    }

    else {

      local_18 = (*(code *)PTR__objc_retain_00110460)(local_48);

    }

    local_3c = 1;

    _objc_storeStrong(&local_48,0);

  }

  _objc_storeStrong(&local_30,0);

  IVar3 = _objc_autoreleaseReturnValue(local_18);

  return IVar3;

}






// ---- [d5] frameAtIndex:decodeForDisplay: @0x93b68 ----
// CALLERS: initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, initWithData:scale:, animatedImageFrameAtIndex:, encodeImageWithDecoder:type:quality:, _objc_msgSend$_frameAtIndex:decodeForDisplay:, _objc_msgSend$frameAtIndex:decodeForDisplay:
// CALLEES: (叶)


/* Function Stack Size: 0x1c bytes */



ID WCMYYImageDecoder::frameAtIndex_decodeForDisplay_

             (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_58;

  undefined8 local_38;

  byte local_29;

  unsigned_long_long local_28;

  SEL local_20;

  ID local_18;

  

  local_29 = (byte)param_4;

  local_38 = 0;

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));

  _objc_msgSend__frameAtIndex_decodeForDisplay_(local_18,local_58,local_28,local_29 & 1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = local_38;

  local_38 = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));

  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d5] type @0x976f4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xa0);

}






// ---- [d5] scale @0x97710 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYYImageDecoder::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0xa8);

}






// ---- [d5] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d5] type @0x9a1f8 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x20);

}






// ---- [d5] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d5] image @0xac96c ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOActivityCroppedImageProvider::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d5] image @0xadbf8 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d5] image @0xbb7dc ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d5] _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat @0x9ae70 ----
// CALLERS: _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat
// CALLEES: (叶)


undefined1 _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat(long param_1,long *param_2,long param_3)



{

  uint uVar1;

  long local_108;

  long local_100;

  long local_f8;

  long local_d0;

  long lStack_c8;

  long local_c0;

  undefined8 uStack_b8;

  long local_a8;

  long local_a0;

  long local_98;

  undefined4 local_90;

  undefined4 local_8c;

  undefined8 local_88;

  uint local_80;

  long local_68;

  long local_60;

  long local_58;

  long local_50;

  long local_48;

  long local_40;

  long *local_38;

  long local_30;

  

  if ((((param_1 != 0) && (PTR__vImageConvert_AnyToAny_00110328 != (undefined *)0x0)) &&

      (param_3 != 0)) && (param_2 != (long *)0x0)) {

    local_40 = param_3;

    local_38 = param_2;

    local_30 = param_1;

    local_48 = _CGImageGetWidth(param_1);

    local_50 = _CGImageGetHeight(local_30);

    if ((local_48 != 0) && (local_50 != 0)) {

      *local_38 = 0;

      local_58 = 0;

      local_60 = 0;

      local_68 = 0;

      _memset(&local_90,0,0x28);

      local_90 = _CGImageGetBitsPerComponent(local_30);

      local_8c = _CGImageGetBitsPerPixel(local_30);

      local_88 = _CGImageGetColorSpace(local_30);

      uVar1 = _CGImageGetBitmapInfo(local_30);

      local_80 = _CGImageGetAlphaInfo(local_30);

      local_80 = uVar1 | local_80;

      local_68 = _vImageConverter_CreateWithCGImageFormat(&local_90,local_40,0,0);

      if (local_68 != 0) {

        local_98 = _CGImageGetDataProvider(local_30);

        if (local_98 == 0) {

          local_f8 = 0;

        }

        else {

          local_f8 = _CGDataProviderCopyData(local_98);

        }

        local_60 = local_f8;

        if (local_f8 == 0) {

          local_100 = 0;

        }

        else {

          local_100 = _CFDataGetLength(local_f8);

        }

        local_a0 = local_100;

        if (local_60 == 0) {

          local_108 = 0;

        }

        else {

          local_108 = _CFDataGetBytePtr(local_60);

        }

        local_a8 = local_108;

        if ((local_a0 != 0) && (local_108 != 0)) {

          uStack_b8 = 0;

          local_d0 = local_108;

          local_c0 = local_48;

          lStack_c8 = local_50;

          uStack_b8 = _CGImageGetBytesPerRow(local_30);

          local_58 = _vImageBuffer_Init(local_38,local_50,local_48,0x20,0);

          if ((local_58 == 0) &&

             (local_58 = _vImageConvert_AnyToAny(local_68,&local_d0,local_38,0,0), local_58 == 0)) {

            _CFRelease(local_68);

            _CFRelease(local_60);

            return 1;

          }

        }

      }

      if (local_68 != 0) {

        _CFRelease(local_68);

      }

      if (local_60 != 0) {

        _CFRelease(local_60);

      }

      if (*local_38 != 0) {

        _free((void *)*local_38);

      }

      *local_38 = 0;

    }

  }

  return 0;

}






// ---- [d6] _CGSizeMake @0x7b08 ----
// CALLERS: layoutIndicatorContent, tableView:cellForRowAtIndexPath:, tableView:cellForRowAtIndexPath:, layoutSubviews, viewDidLoad, webView:didFinishNavigation:, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, ___39-[WCMFeedController_galleryPlaceholder]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGSizeMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d6] width @0x932d0 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x10);

}






// ---- [d6] height @0x93310 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x18);

}






// ---- [d6] width @0x97764 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xc0);

}






// ---- [d6] height @0x97780 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 200);

}






// ---- [d6] initWithScale: @0x93984 ----
// CALLERS: decoderWithData:scale:, init, _objc_msgSend$initWithScale:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID WCMYYImageDecoder::initWithScale_(ID param_1,SEL param_2,double param_3)



{

  dispatch_semaphore_t pdVar1;

  undefined8 uVar2;

  ID IVar3;

  ID local_50;

  class_t *local_48;

  double local_40;

  SEL local_38;

  long local_30;

  pthread_mutexattr_t pStack_28;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_30 = 0;

  local_48 = &objc::class_t::WCMYYImageDecoder;

  local_50 = param_1;

  local_40 = param_3;

  local_38 = param_2;

  local_30 = _objc_msgSendSuper2(&local_50,"init");

  _objc_storeStrong(&local_30);

  if (local_40 <= 0.0) {

    local_40 = 1.0;

  }

  *(double *)(local_30 + 0xa8) = local_40;

  pdVar1 = _dispatch_semaphore_create(1);

  uVar2 = *(undefined8 *)(local_30 + 0x68);

  *(dispatch_semaphore_t *)(local_30 + 0x68) = pdVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _pthread_mutexattr_init(&pStack_28);

  _pthread_mutexattr_settype(&pStack_28,2);

  _pthread_mutex_init((pthread_mutex_t *)(local_30 + 8),&pStack_28);

  _pthread_mutexattr_destroy(&pStack_28);

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_30);

  _objc_storeStrong(&local_30,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return IVar3;

}






// ---- [d6] updateData:final: @0x93ac8 ----
// CALLERS: decoderWithData:scale:, _objc_msgSend$_updateData:final:, _objc_msgSend$updateData:final:
// CALLEES: (叶)


/* Function Stack Size: 0x1c bytes */



bool WCMYYImageDecoder::updateData_final_(ID param_1,SEL param_2,ID param_3,bool param_4)



{

  byte bVar1;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _pthread_mutex_lock((pthread_mutex_t *)(local_18 + 8));

  bVar1 = _objc_msgSend__updateData_final_(local_18,local_48,local_28,param_4 & 1);

  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));

  _objc_storeStrong(&local_28,0);

  return bVar1 & 1;

}





