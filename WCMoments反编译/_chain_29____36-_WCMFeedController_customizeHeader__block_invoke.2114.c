// ============ 功能链 29  根: ___36-[WCMFeedController_customizeHeader]_block_invoke.2114 @0x53450 ============
// 节点 7，按调用深度排序，自上而下读

// ---- [d0] ___36-[WCMFeedController_customizeHeader]_block_invoke.2114 @0x53450 ----
// CALLERS: (根)
// CALLEES: customizeHeader, host, setHeaderPickerAccount:


void ___36__WCMFeedController_customizeHeader__block_invoke_2114(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_70;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_28 = param_1;

  local_30 = _objc_opt_new(&_OBJC_CLASS___PHPickerConfiguration);

  _objc_msgSend_imagesFilter(&_OBJC_CLASS___PHPickerFilter,local_70);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFilter_(local_30,local_70);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_setSelectionLimit_(local_30,local_70,1);

  uVar1 = _objc_alloc(&_OBJC_CLASS___PHPickerViewController);

  local_38 = _objc_msgSend_initWithConfiguration_(uVar1,local_70,local_30);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_setDelegate_(local_38,local_70);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_account(uVar1,local_70);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_setHeaderPickerAccount_(uVar3,local_70,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_host(uVar1,local_70);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_presentViewController_animated_completion_(uVar2,local_70,local_38,1,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- [d1] customizeHeader @0x524b4 ----
// CALLERS: ___36-[WCMFeedController_customizeHeader]_block_invoke, ___36-[WCMFeedController_customizeHeader]_block_invoke_2, ___36-[WCMFeedController_customizeHeader]_block_invoke.2111, ___36-[WCMFeedController_customizeHeader]_block_invoke.2114, ___36-[WCMFeedController_customizeHeader]_block_invoke_2.2120, ___36-[WCMFeedController_customizeHeader]_block_invoke_3, userContentController:didReceiveScriptMessage:, _objc_msgSend$customizeHeader
// CALLEES: _CGRectMake, host, view


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x10 bytes */



void WCMFeedController::customizeHeader(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  double in_d2;

  undefined8 uVar4;

  undefined8 uVar5;

  double local_390;

  double local_348;

  undefined8 local_1d8;

  undefined *local_100;

  undefined4 local_f8;

  undefined4 local_f4;

  code *local_f0;

  undefined *local_e8;

  undefined1 auStack_e0 [15];

  undefined1 local_d1;

  undefined *local_d0;

  undefined4 local_c8;

  undefined4 local_c4;

  code *local_c0;

  undefined *local_b8;

  undefined1 auStack_b0 [15];

  undefined1 local_a1;

  undefined *local_a0;

  undefined4 local_98;

  undefined4 local_94;

  code *local_90;

  undefined *local_88;

  undefined1 auStack_80 [11];

  undefined1 local_75;

  undefined *local_68;

  undefined4 local_60;

  undefined4 local_5c;

  code *local_58;

  undefined *local_50;

  undefined1 auStack_48 [8];

  undefined1 auStack_40 [8];

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSend_host(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_presentedViewController(uVar1,local_1d8);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (lVar2 == 0) {

    _objc_msgSend_alertControllerWithTitle_message_preferredStyle_

              (&_OBJC_CLASS___UIAlertController,local_1d8,&cf__INvh,0);

    local_38 = _objc_retainAutoreleasedReturnValue();

    _objc_initWeak(auStack_40,local_28);

    uVar1 = local_38;

    local_68 = PTR___NSConcreteStackBlock_001104f0;

    local_60 = 0xc2000000;

    local_5c = 0;

    local_58 = ___36__WCMFeedController_customizeHeader__block_invoke;

    local_50 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_48,auStack_40);

    local_75 = 1;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_O9eeW_,0,&local_68);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    local_75 = 0;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    local_a0 = PTR___NSConcreteStackBlock_001104f0;

    local_98 = 0xc2000000;

    local_94 = 0;

    local_90 = ___36__WCMFeedController_customizeHeader__block_invoke_2114;

    local_88 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_80,auStack_40);

    local_a1 = 1;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_NvQbVGr,0,&local_a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    local_a1 = 0;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    local_d0 = PTR___NSConcreteStackBlock_001104f0;

    local_c8 = 0xc2000000;

    local_c4 = 0;

    local_c0 = ___36__WCMFeedController_customizeHeader__block_invoke_2_2120;

    local_b8 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_b0,auStack_40);

    local_d1 = 1;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf__Y_,0,&local_d0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    local_d1 = 0;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    local_100 = PTR___NSConcreteStackBlock_001104f0;

    local_f8 = 0xc2000000;

    local_f4 = 0;

    local_f0 = ___36__WCMFeedController_customizeHeader__block_invoke_3;

    local_e8 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_e0,auStack_40);

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_b_Y,0,&local_100);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = local_38;

    uVar3 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_1d8,&cf_Sm,1,0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addAction_(uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar1 = _objc_msgSend_view(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    uVar3 = _objc_msgSend_popoverPresentationController(local_38,local_1d8);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_setSourceView_(uVar3,local_1d8,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = _objc_msgSend_view(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    _objc_msgSend_bounds(uVar1,local_1d8);

    local_348 = in_d2 - 60.0;

    (*(code *)PTR__objc_release_00110458)(uVar1);

    if (local_348 <= 0.0) {

      local_348 = 0.0;

    }

    uVar1 = _objc_msgSend_view(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    local_390 = (double)_objc_msgSend_safeAreaInsets(uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    if (local_390 <= 44.0) {

      local_390 = 44.0;

    }

    uVar5 = 0x4044000000000000;

    uVar4 = 0x4044000000000000;

    uVar3 = _CGRectMake(local_348);

    uVar1 = _objc_msgSend_popoverPresentationController(local_38,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    _objc_msgSend_setSourceRect_(uVar3,local_390,uVar4,uVar5,uVar1,local_1d8);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = _objc_msgSend_host(local_28,local_1d8);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    _objc_msgSend_presentViewController_animated_completion_(uVar1,local_1d8,local_38,1,0);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_destroyWeak(auStack_e0);

    _objc_destroyWeak(auStack_b0);

    _objc_destroyWeak(auStack_80);

    _objc_destroyWeak(auStack_48);

    _objc_destroyWeak(auStack_40);

    _objc_storeStrong(&local_38,0);

  }

  return;

}






// ---- [d1] host @0x59068 ----
// CALLERS: webView:startURLSchemeTask:, pollNativeTimeline, foreground:, ensureTabBarVisible, coverHost, restoreChrome, openAuthor:chat:, openCacheManager
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::host(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_host);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d1] setHeaderPickerAccount: @0x5ade8 ----
// CALLERS: picker:didFinishPicking:, ___36-[WCMFeedController_customizeHeader]_block_invoke.2114, _objc_msgSend$setHeaderPickerAccount:
// CALLEES: headerPickerAccount


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setHeaderPickerAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_headerPickerAccount);

  return;

}






// ---- [d2] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d2] view @0x9d4cc ----
// CALLERS: _StyleMessageController, gestureRecognizerShouldBegin:, swipeCategory:, gestureRecognizer:shouldReceiveTouch:, animateTransition:, viewDidLoad, keyboard:, ___29-[WCMVideoComments_keyboard:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::view(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_view);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d2] headerPickerAccount @0x5adc4 ----
// CALLERS: picker:didFinishPicking:, setHeaderPickerAccount:, .cxx_destruct, _objc_msgSend$headerPickerAccount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::headerPickerAccount(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_headerPickerAccount);

}





