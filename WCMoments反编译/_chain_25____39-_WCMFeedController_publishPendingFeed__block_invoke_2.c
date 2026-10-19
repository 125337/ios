// ============ 功能链 25  根: ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2 @0x43dbc ============
// 节点 22，按调用深度排序，自上而下读

// ---- [d0] ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2 @0x43dbc ----
// CALLERS: (根)
// CALLEES: publishPendingFeed, web, lastJSON, setLastJSON:, setBridgeRows:, bridgeQueue, setBridgeBusy:, bridgeGeneration, ready, lastTrim


void ___39__WCMFeedController_publishPendingFeed__block_invoke_2(long param_1)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  double dVar5;

  double dVar6;

  byte local_cc;

  undefined8 local_c8;

  undefined *local_b0;

  undefined4 local_a8;

  undefined4 local_a4;

  code *local_a0;

  undefined *local_98;

  undefined8 local_90;

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  byte local_49;

  undefined8 local_48;

  byte local_3d;

  undefined4 local_3c;

  long local_38;

  long local_30;

  long local_28;

  

  local_30 = param_1;

  local_28 = param_1;

  local_38 = _objc_loadWeakRetained(param_1 + 0x48);

  if ((local_38 == 0) ||

     (lVar3 = *(long *)(param_1 + 0x50), lVar1 = _objc_msgSend_bridgeGeneration(local_38,local_c8),

     lVar3 != lVar1)) {

    local_3c = 1;

  }

  else {

    _objc_msgSend_setBridgeBusy_(local_38,local_c8,0);

    uVar2 = _objc_msgSend_ready(local_38,local_c8);

    if ((uVar2 & 1) == 0) {

      local_3c = 1;

    }

    else {

      local_49 = 0;

      local_cc = 1;

      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {

        uVar4 = *(undefined8 *)(param_1 + 0x20);

        _objc_msgSend_lastJSON(local_38,local_c8);

        local_48 = _objc_retainAutoreleasedReturnValue();

        local_49 = 1;

        local_cc = _objc_msgSend_isEqualToString_(uVar4,local_c8);

        local_cc = local_cc ^ 1;

      }

      if ((local_49 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_48);

      }

      local_3d = local_cc & 1;

      _objc_msgSend_setLastJSON_(local_38,local_c8,*(undefined8 *)(param_1 + 0x20));

      _objc_msgSend_setBridgeRows_(local_38,local_c8,*(undefined8 *)(param_1 + 0x28));

      if (((local_3d & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {

        _objc_msgSend_web(local_38,local_c8);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_evaluateJavaScript_completionHandler_

                  (uVar4,local_c8,*(undefined8 *)(param_1 + 0x30));

        (*(code *)PTR__objc_release_00110458)(uVar4);

        _objc_msgSend_stringByAppendingPathComponent_

                  (*(undefined8 *)(param_1 + 0x38),local_c8,&cf_feed_json);

        local_58 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_bridgeQueue(local_38,local_c8);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        local_88 = PTR___NSConcreteStackBlock_001104f0;

        local_80 = 0xc2000000;

        local_7c = 0;

        local_78 = ___39__WCMFeedController_publishPendingFeed__block_invoke_3;

        local_70 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;

        local_68 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x40));

        local_60 = (*(code *)PTR__objc_retain_00110460)(local_58);

        _objc_msgSend_addOperationWithBlock_(uVar4,local_c8,&local_88);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        _objc_storeStrong(&local_60,0);

        _objc_storeStrong(&local_68,0);

        _objc_storeStrong(&local_58,0);

      }

      _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_c8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      dVar5 = (double)_objc_msgSend_timeIntervalSinceReferenceDate(uVar4,local_c8);

      dVar6 = (double)_objc_msgSend_lastTrim(local_38,local_c8);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      if (60.0 < dVar5 - dVar6) {

        _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_c8);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_timeIntervalSinceReferenceDate(uVar4,local_c8);

        _objc_msgSend_setLastTrim_(local_38,local_c8);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        _objc_msgSend_mediaQueue(local_38,local_c8);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        local_b0 = PTR___NSConcreteStackBlock_001104f0;

        local_a8 = 0xc2000000;

        local_a4 = 0;

        local_a0 = ___39__WCMFeedController_publishPendingFeed__block_invoke_4;

        local_98 = &___block_descriptor_40_e8_32s_e5_v8__0l;

        local_90 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x38));

        _objc_msgSend_addOperationWithBlock_(uVar4,local_c8,&local_b0);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        _objc_storeStrong(&local_90,0);

      }

      _objc_msgSend_publishPendingFeed(local_38,local_c8);

      local_3c = 0;

    }

  }

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d1] publishPendingFeed @0x431b4 ----
// CALLERS: ___39-[WCMFeedController_publishPendingFeed]_block_invoke, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_3, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_4, _objc_msgSend$publishPendingFeed
// CALLEES: root, root, bridgeRows, bridgeQueue, pendingFeedSnapshot, setPendingFeedSnapshot:, pendingFeedPreferLatest, setPendingFeedPreferLatest:, bridgeBusy, setBridgeBusy:


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::publishPendingFeed(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 local_d8;

  uint local_cc;

  undefined *local_c8;

  undefined4 local_c0;

  undefined4 local_bc;

  code *local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined1 auStack_90 [8];

  undefined8 local_88;

  byte local_80;

  undefined1 auStack_70 [8];

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  byte local_49;

  undefined8 local_48;

  byte local_39;

  long local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  uVar1 = _objc_msgSend_bridgeBusy(param_1);

  local_39 = 0;

  local_cc = 1;

  if ((uVar1 & 1) == 0) {

    _objc_msgSend_pendingFeedSnapshot(local_28,local_d8);

    local_38 = _objc_retainAutoreleasedReturnValue();

    local_39 = 1;

    local_cc = 1;

    if (local_38 != 0) {

      local_cc = _objc_msgSend_ready(local_28,local_d8);

      local_cc = local_cc ^ 1;

    }

  }

  if ((local_39 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_38);

  }

  if ((local_cc & 1) == 0) {

    _objc_msgSend_pendingFeedSnapshot(local_28,local_d8);

    local_48 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setPendingFeedSnapshot_(local_28,local_d8,0);

    local_49 = _objc_msgSend_pendingFeedPreferLatest(local_28,local_d8);

    _objc_msgSend_setPendingFeedPreferLatest_(local_28,local_d8,0);

    _objc_msgSend_setBridgeBusy_(local_28,local_d8,1);

    _objc_msgSend_bridgeRows(local_28,local_d8);

    local_58 = _objc_retainAutoreleasedReturnValue();

    local_60 = _objc_msgSend_bridgeGeneration(local_28,local_d8);

    _objc_msgSend_assetHandler(local_28,local_d8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_root(uVar2,local_d8);

    local_68 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_initWeak(auStack_70,local_28);

    uVar2 = _objc_msgSend_bridgeQueue(local_28,local_d8);

    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

    local_c8 = PTR___NSConcreteStackBlock_001104f0;

    local_c0 = 0xc2000000;

    local_bc = 0;

    local_b8 = ___39__WCMFeedController_publishPendingFeed__block_invoke;

    local_b0 = &___block_descriptor_73_e8_32s40s48s56w_e5_v8__0l;

    local_a8 = (*(code *)PTR__objc_retain_00110460)(local_48);

    local_80 = local_49 & 1;

    local_a0 = (*(code *)PTR__objc_retain_00110460)(local_58);

    _objc_copyWeak(auStack_90,auStack_70);

    local_88 = local_60;

    local_98 = (*(code *)PTR__objc_retain_00110460)(local_68);

    _objc_msgSend_addOperationWithBlock_(uVar2,local_d8,&local_c8);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_storeStrong(&local_98);

    _objc_destroyWeak(auStack_90);

    _objc_storeStrong(&local_a0,0);

    _objc_storeStrong(&local_a8,0);

    _objc_destroyWeak(auStack_70);

    _objc_storeStrong(&local_68,0);

    _objc_storeStrong(&local_58,0);

    _objc_storeStrong(&local_48,0);

  }

  return;

}






// ---- [d1] web @0x590d8 ----
// CALLERS: isFeedScrolling, pollNativeTimeline, viewDidLoad, refreshPan:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, dealloc, webView:didFinishNavigation:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::web(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_web);

}






// ---- [d1] lastJSON @0x59318 ----
// CALLERS: webView:didFinishNavigation:, showCachedFeed, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, setLastJSON:, .cxx_destruct, _objc_msgSend$lastJSON
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::lastJSON(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_lastJSON);

}






// ---- [d1] setLastJSON: @0x5933c ----
// CALLERS: showCachedFeed, webViewWebContentProcessDidTerminate:, start, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, _objc_msgSend$setLastJSON:
// CALLEES: lastJSON


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastJSON_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_lastJSON);

  return;

}






// ---- [d1] setBridgeRows: @0x5939c ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, _objc_msgSend$setBridgeRows:
// CALLEES: bridgeRows


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setBridgeRows_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_bridgeRows,param_3);

  return;

}






// ---- [d1] bridgeQueue @0x593d8 ----
// CALLERS: viewDidLoad, publishPendingFeed, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, setBridgeQueue:, .cxx_destruct, _objc_msgSend$bridgeQueue
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::bridgeQueue(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bridgeQueue);

}






// ---- [d1] setBridgeBusy: @0x59580 ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, publishPendingFeed, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, _objc_msgSend$setBridgeBusy:
// CALLEES: bridgeBusy


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setBridgeBusy_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_bridgeBusy) = (byte)param_3 & 1;

  return;

}






// ---- [d1] bridgeGeneration @0x595b0 ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, publishPendingFeed, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, setBridgeGeneration:, _objc_msgSend$bridgeGeneration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::bridgeGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bridgeGeneration);

}






// ---- [d1] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}






// ---- [d1] lastTrim @0x5a424 ----
// CALLERS: ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, setLastTrim:, _objc_msgSend$lastTrim
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastTrim(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastTrim);

}






// ---- [d1] setLastTrim: @0x5a448 ----
// CALLERS: ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, _objc_msgSend$setLastTrim:
// CALLEES: lastTrim


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastTrim_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastTrim) = param_3;

  return;

}






// ---- [d1] mediaQueue @0x5a96c ----
// CALLERS: viewDidLoad, exportImage:nativePath:renderKey:mediaKey:quality:, start, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, ___37-[WCMFeedController_openCacheManager]_block_invoke, ___37-[WCMFeedController_openCacheManager]_block_invoke_2, setMediaQueue:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::mediaQueue(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_mediaQueue);

}






// ---- [d2] root @0x5e28 ----
// CALLERS: webView:startURLSchemeTask:, measure, tableView:cellForRowAtIndexPath:, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMAssetHandler::root(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d2] root @0x2eeb4 ----
// CALLERS: webView:startURLSchemeTask:, measure, tableView:cellForRowAtIndexPath:, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMCacheController::root(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_root);

}






// ---- [d2] bridgeRows @0x59378 ----
// CALLERS: publishPendingFeed, setBridgeRows:, .cxx_destruct, _objc_msgSend$bridgeRows
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::bridgeRows(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bridgeRows);

}






// ---- [d2] pendingFeedSnapshot @0x59498 ----
// CALLERS: publishPendingFeed, setPendingFeedSnapshot:, .cxx_destruct, _objc_msgSend$pendingFeedSnapshot
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingFeedSnapshot(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingFeedSnapshot);

}






// ---- [d2] setPendingFeedSnapshot: @0x594bc ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, publishPendingFeed, _objc_msgSend$setPendingFeedSnapshot:
// CALLEES: pendingFeedSnapshot


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPendingFeedSnapshot_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_pendingFeedSnapshot,param_3);

  return;

}






// ---- [d2] pendingFeedPreferLatest @0x594f8 ----
// CALLERS: publishPendingFeed, setPendingFeedPreferLatest:, _objc_msgSend$pendingFeedPreferLatest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::pendingFeedPreferLatest(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_pendingFeedPreferLatest) & 1;

}






// ---- [d2] setPendingFeedPreferLatest: @0x59524 ----
// CALLERS: start, publishPendingFeed, _objc_msgSend$setPendingFeedPreferLatest:
// CALLEES: pendingFeedPreferLatest


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setPendingFeedPreferLatest_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_pendingFeedPreferLatest) = (byte)param_3 & 1;

  return;

}






// ---- [d2] bridgeBusy @0x59554 ----
// CALLERS: publishPendingFeed, setBridgeBusy:, _objc_msgSend$bridgeBusy
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::bridgeBusy(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_bridgeBusy) & 1;

}






// ---- [d2] assetHandler @0x5a258 ----
// CALLERS: viewDidLoad, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed, openCacheManager, ___37-[WCMFeedController_openCacheManager]_block_invoke_3
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::assetHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_assetHandler);

}





