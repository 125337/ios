// ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke @0x9de88

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

