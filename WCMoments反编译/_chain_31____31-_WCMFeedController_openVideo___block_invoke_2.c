// ============ 功能链 31  根: ___31-[WCMFeedController_openVideo:]_block_invoke_2 @0x55e34 ============
// 节点 22，按调用深度排序，自上而下读

// ---- [d0] ___31-[WCMFeedController_openVideo:]_block_invoke_2 @0x55e34 ----
// CALLERS: (根)
// CALLEES: openAuthor:chat:


void ___31__WCMFeedController_openVideo___block_invoke_2(long param_1)



{

  undefined8 uVar1;

  undefined8 local_48;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_openAuthor_chat_(uVar1,local_48,local_20,0);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- [d1] openAuthor:chat: @0x46d48 ----
// CALLERS: ___31-[WCMFeedController_openVideo:]_block_invoke_2, userContentController:didReceiveScriptMessage:, _objc_msgSend$openAuthor:chat:
// CALLEES: _Service, coverHost, restoreChrome, status:, host


/* Function Stack Size: 0x1c bytes */



void WCMFeedController::openAuthor_chat_(ID param_1,SEL param_2,ID param_3,bool param_4)



{

  undefined1 uVar1;

  bool bVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 local_e0;

  undefined8 local_d0;

  long local_c8;

  long local_c0;

  long local_b8;

  uint local_b0;

  undefined1 local_a9;

  long local_a8;

  byte local_99;

  long local_98;

  byte local_89;

  undefined8 local_88;

  byte local_79;

  undefined8 local_78;

  byte local_69;

  undefined8 local_68;

  SEL local_60;

  ID local_58;

  long local_50;

  long local_48;

  undefined8 local_40;

  undefined *local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_68 = 0;

  local_60 = param_2;

  local_58 = param_1;

  _objc_storeStrong(&local_68,param_3);

  local_69 = (byte)param_4;

  lVar3 = _objc_msgSend_length(local_68,local_e0);

  local_79 = 0;

  local_89 = 0;

  local_99 = 0;

  local_a9 = 0;

  bVar2 = true;

  uVar1 = lVar3 != 0;

  if ((bool)uVar1) {

    _objc_msgSend_host(local_58,local_e0);

    local_78 = _objc_retainAutoreleasedReturnValue();

    local_79 = 1;

    _objc_msgSend_navigationController(local_78,local_e0);

    local_88 = _objc_retainAutoreleasedReturnValue();

    local_89 = 1;

    _objc_msgSend_topViewController(local_88,local_e0);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    local_99 = 1;

    local_98 = lVar3;

    _objc_msgSend_host(local_58,local_e0);

    local_a8 = _objc_retainAutoreleasedReturnValue();

    bVar2 = lVar3 != local_a8;

    local_a9 = uVar1;

    (*(code *)PTR__objc_release_00110458)(local_a8);

    uVar1 = local_a9;

  }

  local_a9 = uVar1;

  if ((local_99 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_98);

  }

  if ((local_89 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_88);

  }

  if ((local_79 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_78);

  }

  if (bVar2) {

    local_b0 = 1;

    goto LAB_00047338;

  }

  _Service(&cf_CContactMgr);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_30 = local_68;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_e0,&local_30,1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar4,&cf_getContactByName_);

  local_b8 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  if (local_b8 == 0) {

    _objc_msgSend_status_(local_58,local_e0,&cf_feelSMOgSvDe);

    local_b0 = 1;

  }

  else if ((local_69 & 1) == 0) {

    lVar3 = _NSClassFromString(&cf_ContactInfoViewController);

    local_c8 = lVar3;

    if (lVar3 != 0) {

      uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

      uVar7 = _objc_msgSend_isSubclassOfClass_(lVar3,local_e0,uVar4);

      if ((uVar7 & 1) != 0) {

        uVar4 = _objc_alloc_init(local_c8);

        local_50 = local_b8;

        local_d0 = uVar4;

        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_e0,&local_50,1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _Call(uVar4,&cf_setM_contact_);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)();

        (*(code *)PTR__objc_release_00110458)(uVar5);

        if (lVar3 != 0) {

          _objc_msgSend_setHidesBottomBarWhenPushed_(local_d0,local_e0,1);

          _objc_msgSend_restoreChrome(local_58,local_e0);

          _objc_msgSend_host(local_58,local_e0);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_navigationController(uVar4,local_e0);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_pushViewController_animated_(uVar5,local_e0,local_d0,1);

          (*(code *)PTR__objc_release_00110458)(uVar5);

          (*(code *)PTR__objc_release_00110458)(uVar4);

        }

        local_b0 = (uint)(lVar3 == 0);

        _objc_storeStrong(&local_d0,0);

        goto joined_r0x00047314;

      }

    }

    _objc_msgSend_status_(local_58,local_e0,&cf_S_MR_ODeucSNS_u);

    local_b0 = 1;

  }

  else {

    _Service(&cf_MMMsgLogicManager);

    local_c0 = _objc_retainAutoreleasedReturnValue();

    if (local_c0 == 0) {

      _objc_msgSend_status_(local_58,local_e0,&cf_S_MR_OJ_YcSNS_u);

      local_b0 = 1;

    }

    else {

      _objc_msgSend_restoreChrome(local_58,local_e0);

      lVar3 = local_c0;

      local_48 = local_b8;

      _objc_msgSend_host(local_58,local_e0);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_navigationController(uVar4,local_e0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_38 = PTR____kCFBooleanTrue_00110730;

      local_40 = uVar5;

      _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_e0,&local_48,3);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _Call(lVar3,&cf_PushOtherBaseMsgControllerByContact_navigationController_animated_);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      if (lVar3 == 0) {

        _objc_msgSend_coverHost(local_58,local_e0);

        _objc_msgSend_status_(local_58,local_e0,&cf_feelSb);

      }

      local_b0 = 0;

    }

    _objc_storeStrong(&local_c0,0);

joined_r0x00047314:

    if (local_b0 == 0) {

      local_b0 = 0;

    }

  }

  _objc_storeStrong(&local_b8,0);

LAB_00047338:

  _objc_storeStrong(&local_68,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d2] _Service @0xa38c ----
// CALLERS: viewDidLoad, tableView:cellForRowAtIndexPath:, viewDidLoad, tableView:cellForRowAtIndexPath:, viewDidLoad, activateVideo, start, syncHiddenUsers
// CALLEES: _Context


void _Service(undefined8 param_1)



{

  long lVar1;

  undefined8 local_88;

  undefined8 local_70;

  undefined8 local_60;

  undefined8 local_50;

  undefined8 local_40;

  undefined8 local_30;

  undefined8 local_28;

  long local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_30 = 0;

  _objc_storeStrong(&local_30,param_1);

  lVar1 = _NSClassFromString(local_30);

  if (lVar1 == 0) {

    local_70 = 0;

  }

  else {

    _Context();

    local_40 = _objc_retainAutoreleasedReturnValue();

    local_20 = lVar1;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_88,&local_20,1);

    local_50 = _objc_retainAutoreleasedReturnValue();

    _Call(local_40,&cf_getService_);

    local_70 = _objc_retainAutoreleasedReturnValue();

    local_60 = local_70;

  }

  local_28 = (*(code *)PTR__objc_retain_00110460)(local_70);

  if (lVar1 != 0) {

    (*(code *)PTR__objc_release_00110458)(local_60);

    (*(code *)PTR__objc_release_00110458)(local_50);

    (*(code *)PTR__objc_release_00110458)(local_40);

  }

  _objc_storeStrong(&local_30,0);

  if (*(long *)PTR____stack_chk_guard_00110518 == local_18) {

    _objc_autoreleaseReturnValue(0,local_28);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ---- [d2] coverHost @0x38d40 ----
// CALLERS: openAuthor:chat:, wcm_yb_imageBrowser:beginTransitioningWithIsShow:, openMyMoments, _Attach, _objc_msgSend$coverHost
// CALLEES: ensureTabBarVisible, host, capturedChrome, setCapturedChrome:, setPreviousHidesBottomBar:, setPreviousNavigationHidden:, setPreviousEdges:, setPreviousOpaqueBars:, view


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::coverHost(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_28;

  

  uVar1 = _objc_msgSend_capturedChrome(param_1);

  if ((uVar1 & 1) == 0) {

    _objc_msgSend_host(param_1,local_28);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_navigationController(uVar2,local_28);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_msgSend_isNavigationBarHidden(uVar3,local_28);

    _objc_msgSend_setPreviousNavigationHidden_(param_1,local_28,uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_host(param_1,local_28);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_msgSend_hidesBottomBarWhenPushed(uVar2,local_28);

    _objc_msgSend_setPreviousHidesBottomBar_(param_1,local_28,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_host(param_1,local_28);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_msgSend_edgesForExtendedLayout(uVar2,local_28);

    _objc_msgSend_setPreviousEdges_(param_1,local_28,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_host(param_1,local_28);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_msgSend_extendedLayoutIncludesOpaqueBars(uVar2,local_28);

    _objc_msgSend_setPreviousOpaqueBars_(param_1,local_28,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setCapturedChrome_(param_1,local_28,1);

  }

  _objc_msgSend_host(param_1,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setEdgesForExtendedLayout_(uVar2,local_28,0xf);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_host(param_1,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setExtendedLayoutIncludesOpaqueBars_(uVar2,local_28,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_host(param_1,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_navigationController(uVar2,local_28);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setNavigationBarHidden_animated_(uVar3,local_28,1,0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(param_1,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar2,local_28,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_host(param_1,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(uVar2,local_28);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(param_1,local_28);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bringSubviewToFront_(uVar3,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_host(param_1,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_navigationController(uVar2,local_28);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(uVar3,local_28);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setNeedsLayout(uVar4,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_host(param_1,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_navigationController(uVar2,local_28);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(uVar3,local_28);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_layoutIfNeeded(uVar4,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_ensureTabBarVisible(param_1,local_28);

  return;

}






// ---- [d2] restoreChrome @0x39140 ----
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






// ---- [d2] status: @0x39544 ----
// CALLERS: timelineFinished:, refreshHead, ___32-[WCMFeedController_refreshHead]_block_invoke, start, verifyHiddenUser:request:attempt:, setUser:hidden:, openAuthor:chat:, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke.2091
// CALLEES: web, ready


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::status_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  uint local_3c;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  uVar2 = _objc_msgSend_ready(local_28,local_58);

  bVar1 = (uVar2 & 1) != 0;

  if (bVar1) {

    local_20 = local_38;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_58,&local_20,1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_dataWithJSONObject_options_error_

              (&_OBJC_CLASS___NSJSONSerialization,local_58,uVar3,0);

    local_48 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);

    local_50 = _objc_msgSend_initWithData_encoding_(uVar3,local_58,local_48,4);

    _objc_msgSend_web(local_28,local_58);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_58,&cf_showStatus______0__);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_evaluateJavaScript_completionHandler_(uVar3,local_58,uVar4,0);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_storeStrong(&local_50,0);

    _objc_storeStrong(&local_48,0);

  }

  local_3c = (uint)!bVar1;

  _objc_storeStrong(&local_38,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

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






// ---- [d3] _Context @0xb06c ----
// CALLERS: viewDidLoad, _Service, viewDidLoad, reloadComments, ___31-[WCMVideoComments_sendComment]_block_invoke, viewDidLoad, start, ___26-[WCMFeedController_start]_block_invoke_2
// CALLEES: (叶)


void _Context(void)



{

  undefined8 uVar1;

  

  uVar1 = _NSClassFromString(&cf_MMContext);

  _Call(uVar1,&cf_activeUserContext,PTR____NSArray0__struct_00110718);

  return;

}






// ---- [d3] ensureTabBarVisible @0x385dc ----
// CALLERS: coverHost, ___Install_block_invoke_6, _objc_msgSend$ensureTabBarVisible
// CALLEES: host, view


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::ensureTabBarVisible(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined1 uVar2;

  uint uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  double dVar10;

  undefined8 local_f8;

  long local_e0;

  undefined1 local_d1;

  long local_d0;

  byte local_c1;

  long local_c0;

  undefined4 local_b8;

  byte local_b1;

  long local_b0;

  byte local_a1;

  undefined8 local_a0;

  byte local_91;

  undefined8 local_90;

  byte local_81;

  long local_80;

  byte local_71;

  long local_70;

  long local_68;

  long local_60;

  SEL local_58;

  ID local_50;

  cfstringStruct *local_48;

  cfstringStruct *local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_58 = param_2;

  local_50 = param_1;

  _objc_msgSend_host(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_navigationController(uVar4,local_f8);

  local_60 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_host(local_50,local_f8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_tabBarController(uVar4,local_f8);

  local_68 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_71 = 0;

  local_81 = 0;

  local_91 = 0;

  local_a1 = 0;

  local_b1 = 0;

  bVar1 = true;

  if (local_68 != 0) {

    _objc_msgSend_topViewController(local_60,local_f8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    local_71 = 1;

    local_70 = lVar5;

    _objc_msgSend_host(local_50,local_f8);

    local_80 = _objc_retainAutoreleasedReturnValue();

    local_81 = 1;

    bVar1 = true;

    if (lVar5 == local_80) {

      _objc_msgSend_view(local_50,local_f8);

      local_90 = _objc_retainAutoreleasedReturnValue();

      local_91 = 1;

      uVar6 = _objc_msgSend_isHidden(local_90,local_f8);

      bVar1 = true;

      if ((uVar6 & 1) == 0) {

        _objc_msgSend_view(local_50,local_f8);

        local_a0 = _objc_retainAutoreleasedReturnValue();

        local_a1 = 1;

        _objc_msgSend_window(local_a0,local_f8);

        local_b0 = _objc_retainAutoreleasedReturnValue();

        local_b1 = 1;

        bVar1 = local_b0 == 0;

      }

    }

  }

  if ((local_b1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_b0);

  }

  if ((local_a1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_a0);

  }

  if ((local_91 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_90);

  }

  if ((local_81 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_80);

  }

  if ((local_71 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_70);

  }

  if (bVar1) {

    local_b8 = 1;

  }

  else {

    _objc_msgSend_selectedViewController(local_68,local_f8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    local_c1 = 0;

    local_d1 = 0;

    uVar2 = lVar5 != local_60;

    bVar1 = false;

    if ((bool)uVar2) {

      _objc_msgSend_selectedViewController(local_68,local_f8);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      local_c1 = 1;

      local_c0 = lVar7;

      _objc_msgSend_host(local_50,local_f8);

      local_d0 = _objc_retainAutoreleasedReturnValue();

      bVar1 = lVar7 != local_d0;

      local_d1 = uVar2;

      (*(code *)PTR__objc_release_00110458)(local_d0);

      uVar2 = local_d1;

    }

    local_d1 = uVar2;

    if ((local_c1 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_c0);

    }

    (*(code *)PTR__objc_release_00110458)(lVar5);

    if (bVar1) {

      local_b8 = 1;

    }

    else {

      _objc_msgSend_tabBar(local_68,local_f8);

      local_e0 = _objc_retainAutoreleasedReturnValue();

      uVar6 = _objc_msgSend_isHidden(local_e0,local_f8);

      if (((uVar6 & 1) != 0) ||

         (dVar10 = (double)_objc_msgSend_alpha(local_e0,local_f8), dVar10 < 0.99)) {

        local_48 = &cf_hidden;

        uVar4 = _objc_msgSend_isHidden(local_e0,local_f8);

        _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_f8,uVar4);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        local_40 = &cf_alpha;

        local_38 = uVar4;

        _objc_msgSend_alpha(local_e0,local_f8);

        _objc_msgSend_numberWithDouble_(&_OBJC_CLASS___NSNumber,local_f8);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        local_30 = uVar8;

        _objc_msgSend_dictionaryWithObjects_forKeys_count_

                  (&_OBJC_CLASS___NSDictionary,local_f8,&local_38,&local_48,2);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _Trace(&cf_chrome_tab_recovered);

        (*(code *)PTR__objc_release_00110458)(uVar9);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        (*(code *)PTR__objc_release_00110458)(uVar4);

      }

      _objc_msgSend_host(local_50,local_f8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = _objc_msgSend_hidesBottomBarWhenPushed(uVar4,local_f8);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      if ((uVar3 & 1) != 0) {

        _objc_msgSend_host(local_50,local_f8);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_setHidesBottomBarWhenPushed_(uVar4,local_f8,0);

        (*(code *)PTR__objc_release_00110458)(uVar4);

      }

      uVar6 = _objc_msgSend_isHidden(local_e0,local_f8);

      if ((uVar6 & 1) != 0) {

        _objc_msgSend_setHidden_(local_e0,local_f8,0);

      }

      dVar10 = (double)_objc_msgSend_alpha(local_e0,local_f8);

      if (dVar10 < 0.99) {

        _objc_msgSend_setAlpha_(0x3ff0000000000000,local_e0,local_f8);

      }

      _objc_msgSend_superview(local_e0,local_f8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_subviews(uVar4,local_f8);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_lastObject(uVar8,local_f8);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      lVar5 = local_e0;

      (*(code *)PTR__objc_release_00110458)();

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      if (lVar7 - lVar5 != 0) {

        _objc_msgSend_superview(lVar7 - lVar5,local_e0,local_f8);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_bringSubviewToFront_(uVar4,local_f8,local_e0);

        (*(code *)PTR__objc_release_00110458)(uVar4);

      }

      _objc_storeStrong(&local_e0,0);

      local_b8 = 0;

    }

  }

  _objc_storeStrong(&local_68);

  _objc_storeStrong(&local_60,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d3] capturedChrome @0x59cb4 ----
// CALLERS: coverHost, restoreChrome, setCapturedChrome:, _objc_msgSend$capturedChrome
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::capturedChrome(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_capturedChrome) & 1;

}






// ---- [d3] setCapturedChrome: @0x59ce0 ----
// CALLERS: coverHost, restoreChrome, _objc_msgSend$setCapturedChrome:
// CALLEES: capturedChrome


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setCapturedChrome_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_capturedChrome) = (byte)param_3 & 1;

  return;

}






// ---- [d3] setPreviousHidesBottomBar: @0x59d3c ----
// CALLERS: coverHost, _objc_msgSend$setPreviousHidesBottomBar:
// CALLEES: previousHidesBottomBar


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setPreviousHidesBottomBar_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_previousHidesBottomBar) = (byte)param_3 & 1;

  return;

}






// ---- [d3] setPreviousNavigationHidden: @0x59d98 ----
// CALLERS: coverHost, _objc_msgSend$setPreviousNavigationHidden:
// CALLEES: previousNavigationHidden


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setPreviousNavigationHidden_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_previousNavigationHidden) = (byte)param_3 & 1;

  return;

}






// ---- [d3] setPreviousEdges: @0x59dec ----
// CALLERS: coverHost, _objc_msgSend$setPreviousEdges:
// CALLEES: previousEdges


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPreviousEdges_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_previousEdges) = param_3;

  return;

}






// ---- [d3] setPreviousOpaqueBars: @0x59e44 ----
// CALLERS: coverHost, _objc_msgSend$setPreviousOpaqueBars:
// CALLEES: previousOpaqueBars


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setPreviousOpaqueBars_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_previousOpaqueBars) = (byte)param_3 & 1;

  return;

}






// ---- [d3] view @0x9d4cc ----
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






// ---- [d3] previousHidesBottomBar @0x59d10 ----
// CALLERS: restoreChrome, setPreviousHidesBottomBar:, _objc_msgSend$previousHidesBottomBar
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::previousHidesBottomBar(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_previousHidesBottomBar) & 1;

}






// ---- [d3] previousNavigationHidden @0x59d6c ----
// CALLERS: restoreChrome, setPreviousNavigationHidden:, _objc_msgSend$previousNavigationHidden
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::previousNavigationHidden(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_previousNavigationHidden) & 1;

}






// ---- [d3] previousEdges @0x59dc8 ----
// CALLERS: restoreChrome, setPreviousEdges:, _objc_msgSend$previousEdges
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::previousEdges(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_previousEdges);

}






// ---- [d3] previousOpaqueBars @0x59e18 ----
// CALLERS: restoreChrome, setPreviousOpaqueBars:, _objc_msgSend$previousOpaqueBars
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::previousOpaqueBars(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_previousOpaqueBars) & 1;

}






// ---- [d3] web @0x590d8 ----
// CALLERS: isFeedScrolling, pollNativeTimeline, viewDidLoad, refreshPan:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, dealloc, webView:didFinishNavigation:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::web(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_web);

}






// ---- [d3] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}





