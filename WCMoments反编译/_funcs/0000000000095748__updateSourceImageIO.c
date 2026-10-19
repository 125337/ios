// _updateSourceImageIO @0x95748

/* Function Stack Size: 0x10 bytes */

void WCMYYImageDecoder::_updateSourceImageIO(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  local_20 = param_2;
  local_18 = param_1;
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(param_1 + 0x68),0xffffffffffffffff);
  _objc_storeStrong(local_18 + 0x70,0);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + 0x68));
  if (*(long *)(local_18 + 0x50) == 0) {
    if ((*(byte *)(local_18 + 0x90) & 1) == 0) {
      uVar1 = _CGImageSourceCreateIncremental(0);
      *(undefined8 *)(local_18 + 0x50) = uVar1;
      if (*(long *)(local_18 + 0x50) != 0) {
        _CGImageSourceUpdateData
                  (*(undefined8 *)(local_18 + 0x50),*(undefined8 *)(local_18 + 0x98),0);
      }
    }
    else {
      uVar1 = _CGImageSourceCreateWithData(*(undefined8 *)(local_18 + 0x98),0);
      *(undefined8 *)(local_18 + 0x50) = uVar1;
    }
  }
  else {
    _CGImageSourceUpdateData
              (*(undefined8 *)(local_18 + 0x50),*(undefined8 *)(local_18 + 0x98),
               *(byte *)(local_18 + 0x90) & 1);
  }
  if (*(long *)(local_18 + 0x50) != 0) {
    uVar1 = _CGImageSourceGetCount(*(undefined8 *)(local_18 + 0x50));
    *(undefined8 *)(local_18 + 0xb0) = uVar1;
    if (*(long *)(local_18 + 0xb0) != 0) {
      if ((*(byte *)(local_18 + 0x90) & 1) == 0) {
        *(undefined8 *)(local_18 + 0xb0) = 1;
      }
      else {
        if (*(long *)(local_18 + 0xa0) == 8) {
          *(undefined8 *)(local_18 + 0xb0) = 1;
        }
        if ((*(long *)(local_18 + 0xa0) == 7) &&
           (local_28 = _CGImageSourceCopyProperties(*(undefined8 *)(local_18 + 0x50),0),
           local_28 != 0)) {
          local_30 = _CFDictionaryGetValue
                               (local_28,*(undefined8 *)PTR__kCGImagePropertyGIFDictionary_00110298)
          ;
          if ((local_30 != 0) &&
             (local_38 = _CFDictionaryGetValue
                                   (local_30,*(undefined8 *)
                                              PTR__kCGImagePropertyGIFLoopCount_001102a0),
             local_38 != 0)) {
            _CFNumberGetValue(local_38,0xf,local_18 + 0xb8);
          }
          _CFRelease(local_28);
        }
      }
      local_40 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
      for (local_48 = 0; local_48 < *(ulong *)(local_18 + 0xb0); local_48 = local_48 + 1) {
        local_50 = _objc_opt_new(&objc::class_t::_YYImageDecoderFrame);
        _objc_msgSend_setIndex_(local_50,local_90,local_48);
        _objc_msgSend_setBlendFromIndex_(local_50,local_90,local_48);
        _objc_msgSend_setHasAlpha_(local_50,local_90,1);
        _objc_msgSend_setIsFullSize_(local_50,local_90,1);
        _objc_msgSend_addObject_(local_40,local_90,local_50);
        local_58 = _CGImageSourceCopyPropertiesAtIndex(*(undefined8 *)(local_18 + 0x50),local_48,0);
        if (local_58 != 0) {
          local_60 = 0;
          local_68 = 0;
          local_70 = 0;
          local_78 = 0;
          lVar2 = _CFDictionaryGetValue
                            (local_58,*(undefined8 *)PTR__kCGImagePropertyPixelWidth_001102c0);
          if (lVar2 != 0) {
            _CFNumberGetValue(lVar2,0xf,&local_70);
          }
          lVar2 = _CFDictionaryGetValue
                            (local_58,*(undefined8 *)PTR__kCGImagePropertyPixelHeight_001102b8);
          if (lVar2 != 0) {
            _CFNumberGetValue(lVar2,0xf,&local_78);
          }
          if ((*(long *)(local_18 + 0xa0) == 7) &&
             (lVar2 = _CFDictionaryGetValue
                                (local_58,*(undefined8 *)PTR__kCGImagePropertyGIFDictionary_00110298
                                ), lVar2 != 0)) {
            local_80 = _CFDictionaryGetValue
                                 (lVar2,*(undefined8 *)
                                         PTR__kCGImagePropertyGIFUnclampedDelayTime_001102a8);
            if (local_80 == 0) {
              local_80 = _CFDictionaryGetValue
                                   (lVar2,*(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_00110290)
              ;
            }
            if (local_80 != 0) {
              _CFNumberGetValue(local_80,0xd,&local_60);
            }
          }
          _objc_msgSend_setWidth_(local_50,local_90,local_70);
          _objc_msgSend_setHeight_(local_50,local_90,local_78);
          _objc_msgSend_setDuration_(local_60,local_50,local_90);
          if ((local_48 == 0) && (*(long *)(local_18 + 0xc0) + *(long *)(local_18 + 200) == 0)) {
            *(undefined8 *)(local_18 + 0xc0) = local_70;
            *(undefined8 *)(local_18 + 200) = local_78;
            lVar2 = _CFDictionaryGetValue
                              (local_58,*(undefined8 *)PTR__kCGImagePropertyOrientation_001102b0);
            if (lVar2 != 0) {
              _CFNumberGetValue(lVar2,0xf,&local_68);
              uVar1 = _WCMYYUIImageOrientationFromEXIFValue(local_68);
              *(undefined8 *)(local_18 + 0x60) = uVar1;
            }
          }
          _CFRelease(local_58);
        }
        _objc_storeStrong(&local_50,0);
      }
      _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_18 + 0x68),0xffffffffffffffff);
      _objc_storeStrong(local_18 + 0x70,local_40);
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + 0x68));
      _objc_storeStrong(&local_40,0);
    }
  }
  return;
}

