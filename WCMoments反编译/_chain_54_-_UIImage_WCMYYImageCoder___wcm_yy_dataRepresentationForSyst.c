// ============ 功能链 54  根: -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:] @0x9aa5c ============
// 节点 15，按调用深度排序，自上而下读

// ---- [d0] -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:] @0x9aa5c ----
// CALLERS: (根)
// CALLEES: animatedImageData, animatedImageType, animatedImageData, animatedImageType, _WCMYYCGImageCreateCopyWithOrientation


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






// ---- [d1] animatedImageData @0x69a0c ----
// CALLERS: ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110, -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:], _objc_msgSend$animatedImageData
// CALLEES: data


/* Function Stack Size: 0x10 bytes */



ID WCMYBImage::animatedImageData(ID param_1,SEL param_2)



{

  ID IVar1;

  

  IVar1 = _objc_msgSend_data(*(undefined8 *)(param_1 + (long)_decoder));

  return IVar1;

}






// ---- [d1] animatedImageType @0x6a21c ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:, -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:], _objc_msgSend$animatedImageType
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageType(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageType);

}






// ---- [d1] animatedImageData @0x9033c ----
// CALLERS: -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:], _objc_msgSend$animatedImageData
// CALLEES: data


/* Function Stack Size: 0x10 bytes */



ID WCMYYImage::animatedImageData(ID param_1,SEL param_2)



{

  ID IVar1;

  

  IVar1 = _objc_msgSend_data(*(undefined8 *)(param_1 + (long)_decoder));

  return IVar1;

}






// ---- [d1] animatedImageType @0x90b4c ----
// CALLERS: -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:], _objc_msgSend$animatedImageType
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageType(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageType);

}






// ---- [d1] _WCMYYCGImageCreateCopyWithOrientation @0x91f70 ----
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






// ---- [d2] data @0x976d8 ----
// CALLERS: animatedImageData, encodeWithCoder:, animatedImageData, encodeWithCoder:, _objc_msgSend$data
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageDecoder::data(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x98);

}






// ---- [d2] _WCMYYCGImageCreateAffineTransformCopy @0x913f4 ----
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






// ---- [d2] _WCMYYImageDegreesToRadians @0x92554 ----
// CALLERS: _WCMYYCGImageCreateCopyWithOrientation
// CALLEES: (叶)


undefined1  [16] _WCMYYImageDegreesToRadians(double param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._0_8_ = (param_1 * 3.141592653589793) / 180.0;

  auVar1._8_8_ = 0;

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






// ---- [d3] _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat @0x91808 ----
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






// ---- [d3] _WCMYYImageByteAlign @0x91d04 ----
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






// ---- [d3] _WCMYYCGDataProviderReleaseDataCallback @0x91d38 ----
// CALLERS: _WCMYYCGImageCreateAffineTransformCopy, _newUnblendedImageAtIndex:extendToCanvas:decoded:
// CALLEES: (叶)


void _WCMYYCGDataProviderReleaseDataCallback(void *param_1)



{

  if (param_1 != (void *)0x0) {

    _free(param_1);

  }

  return;

}






// ---- [d4] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d4] _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat @0x9ae70 ----
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





