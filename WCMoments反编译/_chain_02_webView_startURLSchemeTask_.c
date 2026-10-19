// ============ 功能链 2  根: webView:startURLSchemeTask: @0x41e0 ============
// 节点 9，按调用深度排序，自上而下读

// ---- [d0] webView:startURLSchemeTask: @0x41e0 ----
// CALLERS: (根)
// CALLEES: root, accountToken, decodeQueue, activeTasks, scale, root, host, scale


/* Function Stack Size: 0x20 bytes */



void WCMAssetHandler::webView_startURLSchemeTask_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  double dVar6;

  double in_d2;

  double local_1e8;

  undefined8 local_178;

  undefined *local_160;

  undefined4 local_158;

  undefined4 local_154;

  code *local_150;

  undefined *local_148;

  undefined8 local_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  undefined8 local_120;

  undefined8 local_118;

  undefined8 local_110;

  double local_108;

  undefined8 local_f0;

  double local_e8;

  undefined8 local_e0;

  double local_c0;

  int local_b4;

  double local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined4 local_98;

  byte local_91;

  undefined8 local_90;

  undefined1 local_88 [16];

  byte local_71;

  undefined8 local_70;

  byte local_61;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  local_40 = 0;

  _objc_storeStrong(&local_40,param_4);

  _objc_msgSend_request(local_40,local_178);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_URL(uVar2,local_178);

  local_48 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_lastPathComponent(local_48,local_178);

  local_50 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_characterSetWithCharactersInString_

            (&_OBJC_CLASS___NSCharacterSet,local_178,

             &cf_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789__);

  local_58 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_root(local_28,local_178);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = _objc_msgSend_length(uVar2,local_178);

  local_61 = 0;

  local_71 = 0;

  local_91 = 0;

  bVar1 = true;

  if (lVar3 != 0) {

    _objc_msgSend_host(local_48,local_178);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    local_61 = 1;

    local_60 = uVar4;

    _objc_msgSend_accountToken(local_28,local_178);

    local_70 = _objc_retainAutoreleasedReturnValue();

    local_71 = 1;

    uVar5 = _objc_msgSend_isEqualToString_(uVar4,local_178);

    bVar1 = true;

    if ((uVar5 & 1) != 0) {

      lVar3 = _objc_msgSend_length(local_50,local_178);

      bVar1 = true;

      if (lVar3 != 0) {

        uVar5 = _objc_msgSend_hasPrefix_(local_50,local_178,&cf__);

        uVar4 = local_50;

        bVar1 = true;

        if ((uVar5 & 1) == 0) {

          _objc_msgSend_invertedSet(local_58,local_178);

          local_90 = _objc_retainAutoreleasedReturnValue();

          local_91 = 1;

          local_88 = _objc_msgSend_rangeOfCharacterFromSet_(uVar4,local_178);

          bVar1 = local_88._0_8_ != 0x7fffffffffffffff;

        }

      }

    }

  }

  if ((local_91 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_90);

  }

  if ((local_71 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_70);

  }

  if ((local_61 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_60);

  }

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = local_40;

  if (bVar1) {

    _objc_msgSend_errorWithDomain_code_userInfo_

              (&_OBJC_CLASS___NSError,local_178,*(undefined8 *)PTR__NSURLErrorDomain_001101b0,

               0xfffffffffffffbb2,0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_didFailWithError_(uVar2,local_178);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_98 = 1;

  }

  else {

    _objc_msgSend_root(local_28,local_178);

    local_a0 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_accountToken(local_28,local_178);

    local_a8 = _objc_retainAutoreleasedReturnValue();

    local_b4 = 0x200;

    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_178);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_e0 = _objc_msgSend_bounds(uVar2,local_178);

    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_178);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    dVar6 = (double)_objc_msgSend_scale(uVar4,local_178);

    dVar6 = (double)(long)(((in_d2 - 40.0) * dVar6) / 2.0) + 64.0;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    local_1e8 = dVar6;

    if (dVar6 <= (double)(long)local_b4) {

      local_1e8 = (double)(long)local_b4;

    }

    local_e8 = local_1e8;

    local_b0 = local_1e8;

    local_c0 = dVar6;

    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_178,&cf_________0f);

    local_f0 = _objc_retainAutoreleasedReturnValue();

    uVar2 = (*(code *)PTR__objc_retain_00110460)(local_28);

    _objc_sync_enter();

    uVar4 = _objc_msgSend_activeTasks(local_28,local_178);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    _objc_msgSend_addObject_(uVar4,local_178,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_sync_exit(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_decodeQueue(local_28,local_178);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_160 = PTR___NSConcreteStackBlock_001104f0;

    local_158 = 0xc2000000;

    local_154 = 0;

    local_150 = ___46__WCMAssetHandler_webView_startURLSchemeTask___block_invoke;

    local_148 = &___block_descriptor_96_e8_32s40s48s56s64s72s80s_e5_v8__0l;

    local_140 = (*(code *)PTR__objc_retain_00110460)(local_28);

    local_138 = (*(code *)PTR__objc_retain_00110460)(local_40);

    local_130 = (*(code *)PTR__objc_retain_00110460)(local_f0);

    local_128 = (*(code *)PTR__objc_retain_00110460)(local_a0);

    local_120 = (*(code *)PTR__objc_retain_00110460)(local_50);

    local_108 = local_b0;

    local_118 = (*(code *)PTR__objc_retain_00110460)(local_a8);

    local_110 = (*(code *)PTR__objc_retain_00110460)(local_48);

    _objc_msgSend_addOperationWithBlock_(uVar2,local_178,&local_160);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_storeStrong(&local_110);

    _objc_storeStrong(&local_118,0);

    _objc_storeStrong(&local_120,0);

    _objc_storeStrong(&local_128,0);

    _objc_storeStrong(&local_130,0);

    _objc_storeStrong(&local_138,0);

    _objc_storeStrong(&local_140,0);

    _objc_storeStrong(&local_f0,0);

    _objc_storeStrong(&local_a8,0);

    _objc_storeStrong(&local_a0,0);

    local_98 = 0;

  }

  _objc_storeStrong(&local_58);

  _objc_storeStrong(&local_50,0);

  _objc_storeStrong(&local_48,0);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d1] root @0x5e28 ----
// CALLERS: webView:startURLSchemeTask:, measure, tableView:cellForRowAtIndexPath:, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMAssetHandler::root(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d1] accountToken @0x5e7c ----
// CALLERS: webView:startURLSchemeTask:, ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke.47, exportImage:nativePath:renderKey:mediaKey:quality:, extractVideoCover:mediaKey:, start, _objc_msgSend$accountToken
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMAssetHandler::accountToken(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d1] decodeQueue @0x5ed0 ----
// CALLERS: init, webView:startURLSchemeTask:, _objc_msgSend$decodeQueue
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMAssetHandler::decodeQueue(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x18);

}






// ---- [d1] activeTasks @0x5f70 ----
// CALLERS: webView:startURLSchemeTask:, ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke, ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke.47, webView:stopURLSchemeTask:, _objc_msgSend$activeTasks
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMAssetHandler::activeTasks(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x28);

}






// ---- [d1] scale @0x2d0d8 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMHeaderSizeController::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_scale);

}






// ---- [d1] root @0x2eeb4 ----
// CALLERS: webView:startURLSchemeTask:, measure, tableView:cellForRowAtIndexPath:, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMCacheController::root(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_root);

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






// ---- [d1] scale @0x97710 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYYImageDecoder::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0xa8);

}





