// ============ 功能链 28  根: ___37-[WCMFeedController_adjustHeaderSize]_block_invoke @0x523f0 ============
// 节点 14，按调用深度排序，自上而下读

// ---- [d0] ___37-[WCMFeedController_adjustHeaderSize]_block_invoke @0x523f0 ----
// CALLERS: (根)
// CALLEES: saveHeaderScale:, adjustHeaderSize


void ___37__WCMFeedController_adjustHeaderSize__block_invoke(undefined8 param_1,long param_2)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_48;

  

  uVar2 = _objc_loadWeakRetained(param_2 + 0x28);

  _objc_msgSend_account(uVar2,local_48);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_msgSend_isEqual_(uVar3,local_48,*(undefined8 *)(param_2 + 0x20));

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if ((uVar1 & 1) != 0) {

    uVar2 = _objc_loadWeakRetained(param_2 + 0x28);

    _objc_msgSend_saveHeaderScale_(param_1,uVar2,local_48);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  return;

}






// ---- [d1] saveHeaderScale: @0x51ae0 ----
// CALLERS: ___37-[WCMFeedController_adjustHeaderSize]_block_invoke, _objc_msgSend$saveHeaderScale:
// CALLEES: headerBrandKey, web, ready


/* WARNING: Removing unreachable block (ram,0x00051bb8) */

/* WARNING: Removing unreachable block (ram,0x00051bcc) */

/* WARNING: Removing unreachable block (ram,0x00051bd0) */

/* WARNING: Removing unreachable block (ram,0x00051bd8) */

/* WARNING: Removing unreachable block (ram,0x00051bec) */

/* WARNING: Removing unreachable block (ram,0x00051bf0) */

/* WARNING: Removing unreachable block (ram,0x00051bfc) */

/* WARNING: Removing unreachable block (ram,0x00051c04) */

/* WARNING: Removing unreachable block (ram,0x00051b04) */

/* WARNING: Removing unreachable block (ram,0x00051b20) */

/* WARNING: Removing unreachable block (ram,0x00051b24) */

/* WARNING: Removing unreachable block (ram,0x00051b2c) */

/* WARNING: Removing unreachable block (ram,0x00051b40) */

/* WARNING: Removing unreachable block (ram,0x00051b44) */

/* WARNING: Removing unreachable block (ram,0x00051b50) */

/* WARNING: Removing unreachable block (ram,0x00051b58) */

/* Function Stack Size: 0x18 bytes */



void WCMFeedController::saveHeaderScale_(ID param_1,SEL param_2,double param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  long local_e0;

  undefined8 local_c8;

  double local_b0;

  double local_a8;

  long local_90;

  undefined8 local_88;

  double local_80;

  double local_78;

  double local_70;

  undefined8 local_68;

  double local_60;

  undefined8 local_58;

  double local_50;

  SEL local_48;

  ID local_40;

  double local_30;

  

  if (ABS(param_3) != INFINITY) {

    local_58 = 0x3fe3333333333333;

    local_68 = 0x3ff6666666666666;

    local_a8 = param_3;

    if (1.4 < param_3) {

      local_a8 = 1.4;

    }

    local_78 = local_a8;

    local_60 = local_a8;

    if (local_a8 <= 0.6) {

      local_b0 = 0.6;

    }

    else {

      local_b0 = local_a8;

    }

    local_80 = local_b0;

    local_50 = local_b0;

    local_70 = param_3;

    local_48 = param_2;

    local_40 = param_1;

    local_30 = param_3;

    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_c8);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_headerBrandKey(local_40,local_c8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_dictionaryForKey_(uVar1,local_c8);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = _objc_msgSend_mutableCopy(uVar3,local_c8);

    local_e0 = lVar4;

    if (lVar4 == 0) {

      local_90 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

      local_e0 = local_90;

    }

    local_88 = (*(code *)PTR__objc_retain_00110460)(local_e0);

    if (lVar4 == 0) {

      (*(code *)PTR__objc_release_00110458)(local_90);

    }

    (*(code *)PTR__objc_release_00110458)(lVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_numberWithDouble_(local_50,&_OBJC_CLASS___NSNumber,local_c8);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setObject_forKeyedSubscript_(local_88,local_c8,uVar1,&cf_scale);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_c8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = local_88;

    _objc_msgSend_headerBrandKey(local_40,local_c8);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setObject_forKey_(uVar2,local_c8,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar5 = _objc_msgSend_ready(local_40,local_c8);

    if ((uVar5 & 1) != 0) {

      _objc_msgSend_web(local_40,local_c8);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_c8,&cf_setHeaderSize___4f_);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_evaluateJavaScript_completionHandler_(uVar1,local_c8,uVar2,0);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      (*(code *)PTR__objc_release_00110458)(uVar1);

    }

    _objc_storeStrong(&local_88,0);

  }

  return;

}






// ---- [d1] adjustHeaderSize @0x51f38 ----
// CALLERS: ___37-[WCMFeedController_adjustHeaderSize]_block_invoke, ___36-[WCMFeedController_customizeHeader]_block_invoke_2.2120, _objc_msgSend$adjustHeaderSize
// CALLEES: account, account, account, setScale:, setOnChange:, headerBrandKey, host, account


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::adjustHeaderSize(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  double dVar5;

  double local_108;

  undefined8 local_c0;

  undefined8 local_a8 [3];

  undefined *local_90;

  undefined4 local_88;

  undefined4 local_84;

  code *local_80;

  undefined *local_78;

  undefined8 local_70;

  undefined1 auStack_68 [8];

  undefined1 auStack_60 [8];

  undefined8 local_58;

  double local_50;

  undefined8 local_48;

  SEL local_40;

  ID local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_40 = param_2;

  local_38 = param_1;

  local_48 = _objc_opt_new(&objc::class_t::WCMHeaderSizeController);

  uVar1 = _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_c0);

  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

  uVar2 = _objc_msgSend_headerBrandKey(local_38,local_c0);

  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

  uVar3 = _objc_msgSend_dictionaryForKey_(uVar1,local_c0);

  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

  uVar4 = _objc_msgSend_objectForKeyedSubscript_(uVar3,local_c0,&cf_scale);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  dVar5 = (double)_objc_msgSend_doubleValue(uVar4,local_c0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_108 = dVar5;

  if (dVar5 <= 0.0) {

    local_108 = 1.0;

  }

  local_50 = dVar5;

  _objc_msgSend_setScale_(local_108,local_48,local_c0);

  uVar1 = _objc_msgSend_account(local_38,local_c0);

  local_58 = _objc_retainAutoreleasedReturnValue(uVar1);

  _objc_initWeak(auStack_60,local_38);

  local_90 = PTR___NSConcreteStackBlock_001104f0;

  local_88 = 0xc2000000;

  local_84 = 0;

  local_80 = ___37__WCMFeedController_adjustHeaderSize__block_invoke;

  local_78 = &___block_descriptor_48_e8_32s40w_e8_v16__0d8l;

  _objc_copyWeak(auStack_68,auStack_60);

  local_70 = (*(code *)PTR__objc_retain_00110460)(local_58);

  _objc_msgSend_setOnChange_(local_48,local_c0,&local_90);

  uVar1 = _objc_alloc(&_OBJC_CLASS___UINavigationController);

  local_a8[0] = _objc_msgSend_initWithRootViewController_(uVar1,local_c0,local_48);

  _objc_msgSend_setModalPresentationStyle_(local_a8[0],local_c0,1);

  uVar1 = _objc_msgSend_mediumDetent(&_OBJC_CLASS___UISheetPresentationControllerDetent,local_c0);

  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

  local_30 = uVar1;

  uVar2 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_c0,&local_30,1);

  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

  uVar3 = _objc_msgSend_sheetPresentationController(local_a8[0],local_c0);

  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

  _objc_msgSend_setDetents_(uVar3,local_c0,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_msgSend_host(local_38,local_c0);

  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

  _objc_msgSend_presentViewController_animated_completion_(uVar1,local_c0,local_a8[0],1,0);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(local_a8,0);

  _objc_storeStrong(&local_70,0);

  _objc_destroyWeak(auStack_68);

  _objc_destroyWeak(auStack_60);

  _objc_storeStrong(&local_58,0);

  _objc_storeStrong(&local_48,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d2] headerBrandKey @0x4fd38 ----
// CALLERS: applyHeaderBrand, saveHeaderText:, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke.2091, saveHeaderScale:, adjustHeaderSize, ___36-[WCMFeedController_customizeHeader]_block_invoke_2, ___36-[WCMFeedController_customizeHeader]_block_invoke_3, _objc_msgSend$headerBrandKey
// CALLEES: account, account, account, account


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::headerBrandKey(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_40;

  cfstringStruct *local_30;

  

  _objc_msgSend_account(param_1);

  pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  local_30 = pcVar1;

  if (pcVar1 == (cfstringStruct *)0x0) {

    local_30 = &cf___;

  }

  _objc_msgSend_stringByAppendingString_(&cf_WCMomentsHeaderBrand_,local_40,local_30);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(pcVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d2] web @0x590d8 ----
// CALLERS: isFeedScrolling, pollNativeTimeline, viewDidLoad, refreshPan:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, dealloc, webView:didFinishNavigation:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::web(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_web);

}






// ---- [d2] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}






// ---- [d2] account @0xea78 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] account @0x15c4c ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] account @0x2b6b4 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] setScale: @0x2d0fc ----
// CALLERS: changed, webView:didFinishNavigation:, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, adjustHeaderSize, -[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:], _objc_msgSend$setScale:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMHeaderSizeController::setScale_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_scale) = param_3;

  return;

}






// ---- [d2] setOnChange: @0x2d20c ----
// CALLERS: adjustHeaderSize, _objc_msgSend$setOnChange:
// CALLEES: onChange


/* Function Stack Size: 0x18 bytes */



void WCMHeaderSizeController::setOnChange_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_onChange);

  return;

}






// ---- [d2] host @0x59068 ----
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






// ---- [d2] account @0x592b8 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d3] onChange @0x2d1e8 ----
// CALLERS: changed, setOnChange:, .cxx_destruct, wcm_yb_orientationChangeAnimationWithExpectOrientation:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, orientationChangeAnimationWithExpectOrientation:centerCell:, ___71-[WCMYBIBScreenRotationHandler_deviceOrientationDidChangeNotification:]_block_invoke, applicationDidChangedStatusBarOrientationNotification:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMHeaderSizeController::onChange(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_onChange);

}





