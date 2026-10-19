// animatedImageFrameAtIndex: @0x90910

/* Function Stack Size: 0x18 bytes */

ID WCMYYImage::animatedImageFrameAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  long local_70;
  undefined8 local_58;
  long local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar2 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));
  if (param_3 < uVar2) {
    _dispatch_semaphore_wait
              (*(dispatch_semaphore_t *)(local_20 + (long)_preloadedLock),0xffffffffffffffff);
    _objc_msgSend_objectAtIndexedSubscript_
              (*(undefined8 *)(local_20 + (long)_preloadedFrames),local_58,local_30);
    local_38 = _objc_retainAutoreleasedReturnValue();
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_20 + (long)_preloadedLock));
    lVar1 = local_38;
    if (local_38 == 0) {
      _objc_msgSend_frameAtIndex_decodeForDisplay_
                (*(undefined8 *)(local_20 + (long)_decoder),local_58,local_30,1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_image(uVar4,local_58);
      local_18 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    else {
      _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_58);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      if (lVar1 == lVar3) {
        local_70 = 0;
      }
      else {
        local_70 = local_38;
      }
      local_18 = (*(code *)PTR__objc_retain_00110460)(local_70);
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_18 = 0;
  }
  IVar5 = _objc_autoreleaseReturnValue(local_18);
  return IVar5;
}

