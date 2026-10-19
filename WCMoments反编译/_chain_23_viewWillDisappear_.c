// ============ 功能链 23  根: viewWillDisappear: @0x35a9c ============
// 节点 54，按调用深度排序，自上而下读

// ---- [d0] viewWillDisappear: @0x35a9c ----
// CALLERS: (根)
// CALLEES: restoreChrome, stop


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::viewWillDisappear_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 local_40;

  ID local_38;

  class_t *local_30;

  undefined1 local_21;

  SEL local_20;

  ID local_18;

  

  local_21 = (undefined1)param_3;

  local_30 = &objc::class_t::WCMFeedController;

  local_38 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_38,"viewWillDisappear:",param_3 & 1);

  _objc_msgSend_stop(local_18,local_40);

  _objc_msgSend_restoreChrome(local_18,local_40);

  return;

}






// ---- [d1] restoreChrome @0x39140 ----
// CALLERS: viewWillDisappear:, openAuthor:chat:, openMyMoments, openMessages, -[UIViewController(WCMoments)_wcm_toggleFeed], ___Install_block_invoke_4.3077, _objc_msgSend$restoreChrome
// CALLEES: host, capturedChrome, setCapturedChrome:, previousHidesBottomBar, previousNavigationHidden, previousEdges, previousOpaqueBars


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::restoreChrome(ID param_1,SEL param_2)



{

  undefined4 uVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 local_30;

  

  uVar2 = _objc_msgSend_capturedChrome(param_1);

  if ((uVar2 & 1) != 0) {

    uVar1 = _objc_msgSend_previousHidesBottomBar(param_1,local_30);

    _objc_msgSend_host(param_1,local_30);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setHidesBottomBarWhenPushed_(uVar3,local_30,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_msgSend_previousEdges(param_1,local_30);

    _objc_msgSend_host(param_1,local_30);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setEdgesForExtendedLayout_(uVar4,local_30,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    uVar1 = _objc_msgSend_previousOpaqueBars(param_1,local_30);

    _objc_msgSend_host(param_1,local_30);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setExtendedLayoutIncludesOpaqueBars_(uVar3,local_30,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_host(param_1,local_30);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_navigationController(uVar3,local_30);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar5 = _objc_msgSend_previousNavigationHidden(param_1,local_30);

    _objc_msgSend_setNavigationBarHidden_animated_(uVar4,local_30,uVar5,0);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_setCapturedChrome_(param_1,local_30,0);

  }

  return;

}






// ---- [d1] stop @0x3b5f4 ----
// CALLERS: viewWillDisappear:, background:, ___26-[WCMFeedController_start]_block_invoke_2, -[UIViewController(WCMoments)_wcm_toggleFeed], ___Install_block_invoke_4.3077, _objc_msgSend$stop
// CALLEES: cancelFeedback, facade, setFacade:, facade, setFacade:, timer, setTimer:, timer, setTimer:, facade


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::stop(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 local_30;

  

  _objc_msgSend_facade(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar1 != 0) {

    _objc_msgSend_traceState_(param_1,local_30,&cf_session_stop);

  }

  _objc_msgSend_timer(param_1,local_30);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_invalidate(uVar2,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setTimer_(param_1,local_30,0);

  _objc_msgSend_setRefreshingHead_(param_1,local_30,0);

  lVar1 = _objc_msgSend_refreshGeneration(param_1,local_30);

  _objc_msgSend_setRefreshGeneration_(param_1,local_30,lVar1 + 1);

  _objc_msgSend_refreshControl(param_1,local_30);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_cancelFeedback(uVar2,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar3 = _objc_msgSend_began(param_1,local_30);

  if ((uVar3 & 1) != 0) {

    _objc_msgSend_facade(param_1,local_30);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar2,&cf_endTimeline,PTR____NSArray0__struct_00110718);

    _objc_unsafeClaimAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  _objc_msgSend_setBegan_(param_1,local_30,0);

  _objc_msgSend_setFacade_(param_1,local_30);

  _objc_msgSend_setNativeVideoEnvironment_(param_1,local_30,0);

  _objc_msgSend_setNativeVideoEnvironmentAccount_(param_1,local_30,0);

  _objc_msgSend_setLoadingTail_(param_1,local_30,0);

  lVar1 = _objc_msgSend_pagingGeneration(param_1,local_30);

  _objc_msgSend_setPagingGeneration_(param_1,local_30,lVar1 + 1);

  _objc_msgSend_setInitialHeadPending_(param_1,local_30,0);

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






// ---- [d2] capturedChrome @0x59cb4 ----
// CALLERS: coverHost, restoreChrome, setCapturedChrome:, _objc_msgSend$capturedChrome
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::capturedChrome(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_capturedChrome) & 1;

}






// ---- [d2] setCapturedChrome: @0x59ce0 ----
// CALLERS: coverHost, restoreChrome, _objc_msgSend$setCapturedChrome:
// CALLEES: capturedChrome


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setCapturedChrome_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_capturedChrome) = (byte)param_3 & 1;

  return;

}






// ---- [d2] previousHidesBottomBar @0x59d10 ----
// CALLERS: restoreChrome, setPreviousHidesBottomBar:, _objc_msgSend$previousHidesBottomBar
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::previousHidesBottomBar(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_previousHidesBottomBar) & 1;

}






// ---- [d2] previousNavigationHidden @0x59d6c ----
// CALLERS: restoreChrome, setPreviousNavigationHidden:, _objc_msgSend$previousNavigationHidden
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::previousNavigationHidden(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_previousNavigationHidden) & 1;

}






// ---- [d2] previousEdges @0x59dc8 ----
// CALLERS: restoreChrome, setPreviousEdges:, _objc_msgSend$previousEdges
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::previousEdges(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_previousEdges);

}






// ---- [d2] previousOpaqueBars @0x59e18 ----
// CALLERS: restoreChrome, setPreviousOpaqueBars:, _objc_msgSend$previousOpaqueBars
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::previousOpaqueBars(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_previousOpaqueBars) & 1;

}






// ---- [d2] cancelFeedback @0x9574 ----
// CALLERS: refreshPan:, finishRefreshWithSuccess:, stop, _objc_msgSend$cancelFeedback
// CALLEES: qqIndicatorView, qqRingLayer, setQqShowingFeedback:, qqFeedbackGeneration, setQqFeedbackGeneration:


/* Function Stack Size: 0x10 bytes */



void WCMQQRefreshControl::cancelFeedback(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  lVar1 = _objc_msgSend_qqFeedbackGeneration();

  _objc_msgSend_setQqFeedbackGeneration_(param_1,local_38,lVar1 + 1);

  _objc_msgSend_setQqShowingFeedback_(param_1,local_38,0);

  _objc_msgSend_qqRingLayer(param_1,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_removeAnimationForKey_(uVar2,local_38,&cf_refresh);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_endRefreshing(param_1,local_38);

  _objc_msgSend_qqIndicatorView(param_1,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar2,local_38,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return;

}






// ---- [d2] facade @0xea18 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] setFacade: @0xea3c ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, stop, _objc_msgSend$setFacade:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMInboxController::setFacade_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_facade,param_3);

  return;

}






// ---- [d2] facade @0x1588c ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] setFacade: @0x158b0 ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, stop, _objc_msgSend$setFacade:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoComments::setFacade_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_facade,param_3);

  return;

}






// ---- [d2] timer @0x15b2c ----
// CALLERS: viewWillDisappear:, dealloc, viewDidAppear:, viewWillDisappear:, dealloc, close, showVideoAuthor, detail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::timer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_timer);

}






// ---- [d2] setTimer: @0x15b50 ----
// CALLERS: viewDidAppear:, viewWillDisappear:, viewDidAppear:, viewWillDisappear:, close, showVideoAuthor, detail, start
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoComments::setTimer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_timer,param_3);

  return;

}






// ---- [d2] timer @0x2b364 ----
// CALLERS: viewWillDisappear:, dealloc, viewDidAppear:, viewWillDisappear:, dealloc, close, showVideoAuthor, detail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::timer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_timer);

}






// ---- [d2] setTimer: @0x2b388 ----
// CALLERS: viewDidAppear:, viewWillDisappear:, viewDidAppear:, viewWillDisappear:, close, showVideoAuthor, detail, start
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setTimer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_timer,param_3);

  return;

}






// ---- [d2] facade @0x2b824 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] setFacade: @0x2b848 ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, stop, _objc_msgSend$setFacade:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setFacade_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_facade,param_3);

  return;

}






// ---- [d2] traceState: @0x2f094 ----
// CALLERS: pollNativeTimeline, timelineChanged:, timelineFinished:, noMore:, finishTailWait, start, stop, requestTimelineMore
// CALLEES: facade, facade, facade, facade, limit, ready, loadingTail, exhausted, refreshingHead, pendingExports


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::traceState_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined **ppuVar4;

  undefined **ppuVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 uVar8;

  undefined **ppuVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  uint local_184;

  undefined **local_180;

  undefined8 local_168;

  undefined **local_150;

  undefined **local_140;

  undefined8 local_130;

  undefined8 local_108;

  undefined8 local_100;

  undefined8 local_f8;

  undefined8 local_f0;

  SEL local_e8;

  ID local_e0;

  cfstringStruct *local_d8;

  cfstringStruct *local_d0;

  cfstringStruct *local_c8;

  cfstringStruct *local_c0;

  cfstringStruct *local_b8;

  cfstringStruct *local_b0;

  cfstringStruct *local_a8;

  cfstringStruct *local_a0;

  cfstringStruct *local_98;

  cfstringStruct *local_90;

  cfstringStruct *local_88;

  undefined **local_80;

  undefined **local_78;

  undefined8 local_70;

  undefined **local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_f0 = 0;

  local_e8 = param_2;

  local_e0 = param_1;

  _objc_storeStrong(&local_f0,param_3);

  _objc_msgSend_facade(local_e0,local_130);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR____NSArray0__struct_00110718;

  _Call(uVar2,&cf_timelineMgr);

  local_f8 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _Call(local_f8,&cf_getCache,puVar1);

  local_100 = _objc_retainAutoreleasedReturnValue();

  _Call(local_f8,&cf_dataProvider,puVar1);

  local_108 = _objc_retainAutoreleasedReturnValue();

  uVar2 = local_f0;

  local_d8 = &cf_nativeCount;

  _objc_msgSend_facade(local_e0,local_130);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar3,&cf_countOfTimelineDataItem,puVar1);

  ppuVar4 = (undefined **)_objc_retainAutoreleasedReturnValue();

  local_140 = ppuVar4;

  if (ppuVar4 == (undefined **)0x0) {

    local_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fce0;

  }

  local_80 = local_140;

  local_d0 = &cf_sessionActive;

  _Call(local_f8,&cf_isInSession,PTR____NSArray0__struct_00110718);

  ppuVar5 = (undefined **)_objc_retainAutoreleasedReturnValue();

  uVar8 = local_100;

  local_150 = ppuVar5;

  if (ppuVar5 == (undefined **)0x0) {

    local_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fce0;

  }

  local_78 = local_150;

  local_c8 = &cf_managerCount;

  uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar7 = _objc_opt_isKindOfClass(uVar8,uVar6);

  if ((uVar7 & 1) == 0) {

    local_168 = 0xffffffffffffffff;

  }

  else {

    local_168 = _objc_msgSend_count(local_100,local_130);

  }

  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_130,local_168);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_c0 = &cf_providerBusy;

  local_70 = uVar8;

  _Call(local_108,&cf_isUpdating,PTR____NSArray0__struct_00110718);

  ppuVar9 = (undefined **)_objc_retainAutoreleasedReturnValue();

  local_180 = ppuVar9;

  if (ppuVar9 == (undefined **)0x0) {

    local_180 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fce0;

  }

  local_68 = local_180;

  local_b8 = &cf_limit;

  uVar6 = _objc_msgSend_limit(local_e0,local_130);

  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_130,uVar6);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_b0 = &cf_headPending;

  local_60 = uVar6;

  uVar7 = _objc_msgSend_initialHeadPending(local_e0,local_130);

  local_184 = 1;

  if ((uVar7 & 1) == 0) {

    local_184 = _objc_msgSend_refreshingHead(local_e0,local_130);

  }

  _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_130,local_184 & 1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_a8 = &cf_tailPending;

  local_58 = uVar10;

  uVar11 = _objc_msgSend_loadingTail(local_e0,local_130);

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_130,uVar11);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_a0 = &cf_end;

  local_50 = uVar11;

  uVar12 = _objc_msgSend_exhausted(local_e0,local_130);

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_130,uVar12);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  local_98 = &cf_webReady;

  local_48 = uVar12;

  uVar13 = _objc_msgSend_ready(local_e0,local_130);

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_130,uVar13);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  local_90 = &cf_exportPending;

  local_40 = uVar13;

  _objc_msgSend_pendingExports(local_e0,local_130);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = _objc_msgSend_count(uVar14,local_130);

  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_130,uVar15);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  local_88 = &cf_renderedRows;

  local_38 = uVar15;

  _objc_msgSend_cachedRows(local_e0,local_130);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  uVar17 = _objc_msgSend_count(uVar16,local_130);

  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_130,uVar17);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar17;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_130,&local_80,&local_d8,0xb);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  _Trace(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar18);

  (*(code *)PTR__objc_release_00110458)(uVar17);

  (*(code *)PTR__objc_release_00110458)(uVar16);

  (*(code *)PTR__objc_release_00110458)(uVar15);

  (*(code *)PTR__objc_release_00110458)(uVar14);

  (*(code *)PTR__objc_release_00110458)(uVar13);

  (*(code *)PTR__objc_release_00110458)(uVar12);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(ppuVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(ppuVar5);

  (*(code *)PTR__objc_release_00110458)(ppuVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_storeStrong(&local_108);

  _objc_storeStrong(&local_100,0);

  _objc_storeStrong(&local_f8,0);

  _objc_storeStrong(&local_f0,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d2] facade @0x59138 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] setFacade: @0x5915c ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, stop, _objc_msgSend$setFacade:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setFacade_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_facade,param_3);

  return;

}






// ---- [d2] timer @0x59198 ----
// CALLERS: viewWillDisappear:, dealloc, viewDidAppear:, viewWillDisappear:, dealloc, close, showVideoAuthor, detail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::timer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_timer);

}






// ---- [d2] setTimer: @0x591bc ----
// CALLERS: viewDidAppear:, viewWillDisappear:, viewDidAppear:, viewWillDisappear:, close, showVideoAuthor, detail, start
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setTimer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_timer,param_3);

  return;

}






// ---- [d2] began @0x59bfc ----
// CALLERS: refreshHead, start, stop, _objc_msgSend$began
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::began(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_began) & 1;

}






// ---- [d2] setBegan: @0x59c28 ----
// CALLERS: start, stop, _objc_msgSend$setBegan:
// CALLEES: (叶)


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setBegan_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_began) = (byte)param_3 & 1;

  return;

}






// ---- [d2] setLoadingTail: @0x59fc0 ----
// CALLERS: refreshHead, noMore:, finishTailWait, start, stop, requestTimelineMore, _objc_msgSend$setLoadingTail:
// CALLEES: loadingTail


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setLoadingTail_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_loadingTail) = (byte)param_3 & 1;

  return;

}






// ---- [d2] pagingGeneration @0x5a148 ----
// CALLERS: refreshHead, noMore:, finishTailWait, start, stop, requestTimelineMore, ___40-[WCMFeedController_requestTimelineMore]_block_invoke, setPagingGeneration:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::pagingGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_pagingGeneration);

}






// ---- [d2] setPagingGeneration: @0x5a16c ----
// CALLERS: refreshHead, noMore:, finishTailWait, start, stop, requestTimelineMore, _objc_msgSend$setPagingGeneration:
// CALLEES: pagingGeneration


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPagingGeneration_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_pagingGeneration) = param_3;

  return;

}






// ---- [d2] refreshControl @0x5a474 ----
// CALLERS: viewDidLoad, loadMessages, viewDidLoad, viewDidLayoutSubviews, observeValueForKeyPath:ofObject:change:context:, refreshPan:, finishRefreshWithSuccess:, refreshHead
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::refreshControl(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_refreshControl);

}






// ---- [d2] setNativeVideoEnvironment: @0x5a6ac ----
// CALLERS: stop, prepareNativeVideoEnvironment, _objc_msgSend$setNativeVideoEnvironment:
// CALLEES: nativeVideoEnvironment


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setNativeVideoEnvironment_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_nativeVideoEnvironment,param_3);

  return;

}






// ---- [d2] setNativeVideoEnvironmentAccount: @0x5a70c ----
// CALLERS: stop, prepareNativeVideoEnvironment, _objc_msgSend$setNativeVideoEnvironmentAccount:
// CALLEES: nativeVideoEnvironment, nativeVideoEnvironmentAccount


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setNativeVideoEnvironmentAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_nativeVideoEnvironmentAccount);

  return;

}






// ---- [d2] setRefreshingHead: @0x5a774 ----
// CALLERS: finishRefreshWithSuccess:, refreshHead, stop, _objc_msgSend$setRefreshingHead:
// CALLEES: refreshingHead


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setRefreshingHead_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_refreshingHead) = (byte)param_3 & 1;

  return;

}






// ---- [d2] refreshGeneration @0x5a800 ----
// CALLERS: finishRefreshWithSuccess:, refreshHead, ___32-[WCMFeedController_refreshHead]_block_invoke, stop, setRefreshGeneration:, _objc_msgSend$refreshGeneration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::refreshGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_refreshGeneration);

}






// ---- [d2] setRefreshGeneration: @0x5a824 ----
// CALLERS: finishRefreshWithSuccess:, refreshHead, stop, _objc_msgSend$setRefreshGeneration:
// CALLEES: refreshGeneration


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setRefreshGeneration_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_refreshGeneration) = param_3;

  return;

}






// ---- [d2] setInitialHeadPending: @0x5ac84 ----
// CALLERS: pollNativeTimeline, timelineFinished:, noMore:, start, ___26-[WCMFeedController_start]_block_invoke_3, stop, _objc_msgSend$setInitialHeadPending:
// CALLEES: initialHeadPending


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setInitialHeadPending_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_initialHeadPending) = (byte)param_3 & 1;

  return;

}






// ---- [d3] qqIndicatorView @0x9650 ----
// CALLERS: init, positionIndicator, layoutSubviews, setPullDistance:, showLoading, ___34-[WCMQQRefreshControl_showLoading]_block_invoke, ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke_2, ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke.223
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMQQRefreshControl::qqIndicatorView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_qqIndicatorView);

}






// ---- [d3] qqRingLayer @0x9770 ----
// CALLERS: init, layoutIndicatorContent, drawRing:color:, showLoading, finishWithSuccess:, cancelFeedback, setQqRingLayer:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMQQRefreshControl::qqRingLayer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_qqRingLayer);

}






// ---- [d3] setQqShowingFeedback: @0x984c ----
// CALLERS: showLoading, finishWithSuccess:, ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke.223, cancelFeedback, _objc_msgSend$setQqShowingFeedback:
// CALLEES: qqShowingFeedback


/* Function Stack Size: 0x14 bytes */



void WCMQQRefreshControl::setQqShowingFeedback_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_qqShowingFeedback) = (byte)param_3 & 1;

  return;

}






// ---- [d3] qqFeedbackGeneration @0x987c ----
// CALLERS: showLoading, finishWithSuccess:, ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke, ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke.223, cancelFeedback, setQqFeedbackGeneration:, _objc_msgSend$qqFeedbackGeneration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMQQRefreshControl::qqFeedbackGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_qqFeedbackGeneration);

}






// ---- [d3] setQqFeedbackGeneration: @0x98a0 ----
// CALLERS: showLoading, finishWithSuccess:, cancelFeedback, _objc_msgSend$setQqFeedbackGeneration:
// CALLEES: qqFeedbackGeneration


/* Function Stack Size: 0x18 bytes */



void WCMQQRefreshControl::setQqFeedbackGeneration_

               (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_qqFeedbackGeneration) = param_3;

  return;

}






// ---- [d3] limit @0x59bac ----
// CALLERS: traceState:, requestTimelineMore, _objc_msgSend$limit
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMFeedController::limit(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_limit);

}






// ---- [d3] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}






// ---- [d3] loadingTail @0x59f94 ----
// CALLERS: traceState:, pollNativeTimeline, timelineFinished:, syncPaging, requestTimelineMore, ___40-[WCMFeedController_requestTimelineMore]_block_invoke, setLoadingTail:, _objc_msgSend$loadingTail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::loadingTail(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_loadingTail) & 1;

}






// ---- [d3] exhausted @0x59ff0 ----
// CALLERS: traceState:, pollNativeTimeline, syncPaging, requestTimelineMore, setExhausted:, _objc_msgSend$exhausted
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::exhausted(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_exhausted) & 1;

}






// ---- [d3] refreshingHead @0x5a748 ----
// CALLERS: traceState:, pollNativeTimeline, refreshPan:, timelineChanged:, finishRefreshWithSuccess:, timelineFinished:, refreshHead, ___32-[WCMFeedController_refreshHead]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::refreshingHead(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_refreshingHead) & 1;

}






// ---- [d3] pendingExports @0x5aa2c ----
// CALLERS: traceState:, mediaFinished:, exportImage:nativePath:renderKey:mediaKey:quality:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke, setPendingExports:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingExports(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingExports);

}






// ---- [d3] cachedRows @0x5ab3c ----
// CALLERS: traceState:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, toggleFollowing:, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, start, syncHiddenUsers, verifyHiddenUser:request:attempt:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::cachedRows(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cachedRows);

}






// ---- [d3] initialHeadPending @0x5ac58 ----
// CALLERS: traceState:, pollNativeTimeline, timelineChanged:, timelineFinished:, syncPaging, ___26-[WCMFeedController_start]_block_invoke_3, requestTimelineMore, setInitialHeadPending:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::initialHeadPending(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_initialHeadPending) & 1;

}






// ---- [d3] nativeVideoEnvironment @0x5a688 ----
// CALLERS: prepareNativeVideoEnvironment, setNativeVideoEnvironment:, nativeVideoEnvironmentAccount, setNativeVideoEnvironmentAccount:, .cxx_destruct, _objc_msgSend$nativeVideoEnvironment, _objc_msgSend$nativeVideoEnvironmentAccount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeVideoEnvironment(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeVideoEnvironment);

}






// ---- [d3] nativeVideoEnvironmentAccount @0x5a6e8 ----
// CALLERS: prepareNativeVideoEnvironment, setNativeVideoEnvironmentAccount:, .cxx_destruct, _objc_msgSend$nativeVideoEnvironmentAccount
// CALLEES: nativeVideoEnvironment


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeVideoEnvironmentAccount(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeVideoEnvironmentAccount);

}






// ---- [d4] qqShowingFeedback @0x9820 ----
// CALLERS: setPullDistance:, setQqShowingFeedback:, finishRefreshWithSuccess:, _objc_msgSend$qqShowingFeedback
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMQQRefreshControl::qqShowingFeedback(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_qqShowingFeedback) & 1;

}





