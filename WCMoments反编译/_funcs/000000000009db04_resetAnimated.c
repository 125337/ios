// resetAnimated @0x9db04

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::resetAnimated(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_a8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  long *local_18;
  
  lVar3 = (long)_onceToken;
  local_58 = PTR___NSConcreteStackBlock_001104f0;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke;
  local_40 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_30 = param_2;
  local_28 = param_1;
  local_38 = (*(code *)PTR__objc_retain_00110460)(param_1);
  local_18 = (long *)(param_1 + lVar3);
  local_20 = 0;
  _objc_storeStrong(&local_20,&local_58);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_28 + (long)_requestQueue),local_a8);
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_28 + (long)_lock),0xffffffffffffffff);
  lVar3 = _objc_msgSend_count(*(undefined8 *)(local_28 + (long)_buffer),local_a8);
  if (lVar3 != 0) {
    local_60 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(local_28 + (long)_buffer));
    uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
    uVar2 = *(undefined8 *)(local_28 + (long)_buffer);
    *(undefined8 *)(local_28 + (long)_buffer) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _dispatch_get_global_queue(-2,0);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_001104f0;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke_71;
    local_70 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_68 = (*(code *)PTR__objc_retain_00110460)(local_60);
    _dispatch_async(uVar1,&local_88);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_28 + (long)_lock));
  _objc_msgSend_setPaused_(*(undefined8 *)(local_28 + (long)_link),local_a8,1);
  *(undefined8 *)(local_28 + (long)_time) = 0;
  if (*(long *)(local_28 + (long)_curIndex) != 0) {
    _objc_msgSend_willChangeValueForKey_(local_28,local_a8);
    *(undefined8 *)(local_28 + (long)_curIndex) = 0;
    _objc_msgSend_didChangeValueForKey_(local_28,local_a8,&cf_currentAnimatedImageIndex);
  }
  _objc_storeStrong(local_28 + (long)_curAnimatedImage);
  _objc_storeStrong(local_28 + (long)_curFrame,0);
  *(undefined8 *)(local_28 + (long)_curLoop) = 0;
  *(undefined8 *)(local_28 + (long)_totalLoop) = 0;
  *(undefined8 *)(local_28 + (long)_totalFrameCount) = 1;
  *(undefined1 *)(local_28 + (long)_loopEnd) = 0;
  *(undefined1 *)(local_28 + (long)_bufferMiss) = 0;
  *(undefined8 *)(local_28 + (long)_incrBufferCount) = 0;
  _objc_storeStrong(&local_38,0);
  return;
}

