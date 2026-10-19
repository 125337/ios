// setPreloadAllAnimatedImageFrames: @0x90374

/* Function Stack Size: 0x14 bytes */

void WCMYYImage::setPreloadAllAnimatedImageFrames_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  if ((*(byte *)(param_1 + (long)_preloadAllAnimatedImageFrames) & 1) != (local_21 & 1)) {
    local_20 = param_2;
    local_18 = param_1;
    if (((param_3 & 1) == 0) ||
       (lVar2 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder),local_50),
       lVar2 == 0)) {
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock),0xffffffffffffffff);
      _objc_storeStrong(local_18 + (long)_preloadedFrames,0);
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock));
    }
    else {
      local_30 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
      local_38 = 0;
      local_40 = _objc_msgSend_frameCount(*(undefined8 *)(local_18 + (long)_decoder),local_50);
      for (; local_38 < local_40; local_38 = local_38 + 1) {
        _objc_msgSend_animatedImageFrameAtIndex_(local_38 - local_40,local_18,local_50,local_38);
        local_48 = _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        if (local_48 == 0) {
          _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_50);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_addObject_(uVar1,local_50);
          (*(code *)PTR__objc_release_00110458)(uVar3);
        }
        else {
          _objc_msgSend_addObject_(local_30,local_50,local_48);
        }
        _objc_storeStrong(&local_48,0);
      }
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock),0xffffffffffffffff);
      _objc_storeStrong(local_18 + (long)_preloadedFrames,local_30);
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock));
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

