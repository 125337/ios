// ============ 功能链 56  根: ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke @0x9de88 ============
// 节点 8，按调用深度排序，自上而下读

// ---- [d0] ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke @0x9de88 ----
// CALLERS: (根)
// CALLEES: didReceiveMemoryWarning:, proxyWithTarget:, resetAnimated, didEnterBackground:, runloopMode


void ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke(long param_1)



{

  undefined8 *puVar1;

  dispatch_semaphore_t pdVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 local_40;

  

  pdVar2 = _dispatch_semaphore_create(1);

  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_lock);

  uVar3 = *puVar1;

  *puVar1 = pdVar2;

  (*(code *)PTR__objc_release_00110458)(uVar3);

  uVar3 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_buffer);

  uVar4 = *puVar1;

  *puVar1 = uVar3;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar3 = _objc_alloc_init(&_OBJC_CLASS___NSOperationQueue);

  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_requestQueue);

  uVar4 = *puVar1;

  *puVar1 = uVar3;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_setMaxConcurrentOperationCount_

            (*(undefined8 *)

              (*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_requestQueue),local_40,1);

  _objc_msgSend_proxyWithTarget_

            (&objc::class_t::_YYImageWeakProxy,local_40,*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_displayLinkWithTarget_selector_(&_OBJC_CLASS___CADisplayLink,local_40,uVar3,"step:")

  ;

  uVar4 = _objc_retainAutoreleasedReturnValue();

  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_link);

  uVar5 = *puVar1;

  *puVar1 = uVar4;

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if (*(long *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_runloopMode) != 0) {

    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_link);

    _objc_msgSend_mainRunLoop(&_OBJC_CLASS___NSRunLoop,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addToRunLoop_forMode_

              (uVar4,local_40,uVar3,

               *(undefined8 *)

                (*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_runloopMode));

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  _objc_msgSend_setPaused_

            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_link),

             local_40,1);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_40);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar3,local_40,*(undefined8 *)(param_1 + 0x20),"didReceiveMemoryWarning:",

             *(undefined8 *)PTR__UIApplicationDidReceiveMemoryWarningNotification_00110088);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_40);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar3,local_40,*(undefined8 *)(param_1 + 0x20),"didEnterBackground:",

             *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_00110080,0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  return;

}






// ---- [d1] didReceiveMemoryWarning: @0x6b0ec ----
// CALLERS: init, ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCache::didReceiveMemoryWarning_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 local_40;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_removeAllObjects(*(undefined8 *)(local_18 + 8),local_40);

  _objc_msgSend_removeAllObjects(*(undefined8 *)(local_18 + 0x10),local_40);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d1] proxyWithTarget: @0x9c9f8 ----
// CALLERS: ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke, _objc_msgSend$proxyWithTarget:
// CALLEES: initWithTarget:


/* Function Stack Size: 0x18 bytes */



ID _YYImageWeakProxy::proxyWithTarget_(ID param_1,SEL param_2,ID param_3)



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

  uVar1 = _objc_alloc(&objc::class_t::_YYImageWeakProxy);

  uVar1 = _objc_msgSend_initWithTarget_(uVar1,local_48,local_28);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d1] resetAnimated @0x9db04 ----
// CALLERS: ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke, ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke.71, setHighlighted:, setImage:withType:, imageChanged, _objc_msgSend$resetAnimated
// CALLEES: currentAnimatedImageIndex


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






// ---- [d1] didEnterBackground: @0x9f594 ----
// CALLERS: ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::didEnterBackground_(ID param_1,SEL param_2,ID param_3)



{

  ulong uVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  ulong uVar5;

  ulong local_148;

  ulong local_140;

  undefined8 local_138;

  undefined1 auStack_118 [8];

  long local_110;

  long *local_108;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  SEL local_b8;

  ID local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_c0 = 0;

  local_b8 = param_2;

  local_b0 = param_1;

  _objc_storeStrong(&local_c0,param_3);

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_b0 + (long)_requestQueue),local_138);

  uVar3 = *(long *)(local_b0 + (long)_curIndex) + 1;

  uVar5 = *(ulong *)(local_b0 + (long)_totalFrameCount);

  uVar1 = 0;

  if (uVar5 != 0) {

    uVar1 = uVar3 / uVar5;

  }

  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_138,uVar3 - uVar1 * uVar5);

  local_c8 = _objc_retainAutoreleasedReturnValue();

  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_b0 + (long)_lock),0xffffffffffffffff);

  _objc_msgSend_allKeys(*(undefined8 *)(local_b0 + (long)_buffer),local_138);

  local_d0 = _objc_retainAutoreleasedReturnValue();

  _memset(auStack_118,0,0x40);

  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_d0);

  local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar2,local_138,auStack_118,auStack_a8,0x10);

  if (local_140 != 0) {

    lVar4 = *local_108;

    local_148 = 0;

    do {

      do {

        if (*local_108 - lVar4 != 0) {

          _objc_enumerationMutation(*local_108 - lVar4,uVar2);

        }

        local_d8 = *(undefined8 *)(local_110 + local_148 * 8);

        uVar3 = _objc_msgSend_isEqualToNumber_(local_d8,local_138,local_c8);

        if ((uVar3 & 1) == 0) {

          _objc_msgSend_removeObjectForKey_

                    (*(undefined8 *)(local_b0 + (long)_buffer),local_138,local_d8);

        }

        local_148 = local_148 + 1;

      } while (local_148 < local_140);

      local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar2,local_138,auStack_118,auStack_a8,0x10);

      local_148 = 0;

    } while (local_140 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_b0 + (long)_lock));

  _objc_storeStrong(&local_d0);

  _objc_storeStrong(&local_c8,0);

  _objc_storeStrong(&local_c0,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d1] runloopMode @0xa1090 ----
// CALLERS: init, initWithFrame:, initWithImage:, initWithImage:highlightedImage:, ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke, setRunloopMode:, initWithCoder:, encodeWithCoder:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYAnimatedImageView::runloopMode(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_runloopMode);

}






// ---- [d2] initWithTarget: @0x9c964 ----
// CALLERS: proxyWithTarget:, _objc_msgSend$initWithTarget:, _objc_msgSend$initWithTarget:action:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID _YYImageWeakProxy::initWithTarget_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_storeWeak(local_18 + (long)_target,local_28);

  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d2] currentAnimatedImageIndex @0xa07cc ----
// CALLERS: resetAnimated, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, automaticallyNotifiesObserversForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentAnimatedImageIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_curIndex);

}





