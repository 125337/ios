// ============ 功能链 24  根: ___26-[WCMFeedController_start]_block_invoke_2 @0x3b304 ============
// 节点 242，按调用深度排序，自上而下读

// ---- [d0] ___26-[WCMFeedController_start]_block_invoke_2 @0x3b304 ----
// CALLERS: (根)
// CALLEES: _Context, pollNativeTimeline, start, stop


void ___26__WCMFeedController_start__block_invoke_2(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 local_60;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_account(uVar2,local_60);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Context();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar4,&cf_userName,PTR____NSArray0__struct_00110718);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Text();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_msgSend_isEqualToString_(uVar3,local_60);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if ((uVar1 & 1) == 0) {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x20);

    _objc_msgSend_stop(uVar2,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_loadWeakRetained(param_1 + 0x20);

    _objc_msgSend_start(uVar2,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  else {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x20);

    _objc_msgSend_pollNativeTimeline(uVar2,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- [d1] _Context @0xb06c ----
// CALLERS: viewDidLoad, _Service, viewDidLoad, reloadComments, ___31-[WCMVideoComments_sendComment]_block_invoke, viewDidLoad, start, ___26-[WCMFeedController_start]_block_invoke_2
// CALLEES: (叶)


void _Context(void)



{

  undefined8 uVar1;

  

  uVar1 = _NSClassFromString(&cf_MMContext);

  _Call(uVar1,&cf_activeUserContext,PTR____NSArray0__struct_00110718);

  return;

}






// ---- [d1] pollNativeTimeline @0x2f84c ----
// CALLERS: ___26-[WCMFeedController_start]_block_invoke_2, _objc_msgSend$pollNativeTimeline
// CALLEES: facade, facade, facade, traceState:, isFeedScrolling, finishRefresh, finishTailWait, syncPaging, acknowledgeSeenItems, host


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::pollNativeTimeline(ID param_1,SEL param_2)



{

  undefined *puVar1;

  bool bVar2;

  byte bVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  double dVar12;

  double dVar13;

  double local_280;

  uint local_16c;

  undefined8 local_138;

  uint local_124;

  undefined8 local_120;

  double local_118;

  double local_110;

  double local_108;

  byte local_f9;

  long local_f8;

  byte local_e9;

  long local_e8;

  byte local_d9;

  undefined8 local_d8;

  byte local_c9;

  undefined8 local_c8;

  byte local_b9;

  undefined8 local_b8;

  byte local_ac;

  byte local_ab;

  byte local_aa;

  byte local_a9;

  undefined8 local_a8;

  undefined8 local_a0;

  byte local_91;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  byte local_71;

  undefined8 local_70;

  undefined8 local_68;

  double local_60;

  SEL local_58;

  ID local_50;

  cfstringStruct *local_48;

  undefined8 local_40;

  cfstringStruct *local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_58 = param_2;

  local_50 = param_1;

  _objc_msgSend_facade(param_1);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  local_124 = 1;

  if (lVar4 != 0) {

    local_124 = _objc_msgSend_ready(local_50,local_138);

    local_124 = local_124 ^ 1;

  }

  (*(code *)PTR__objc_release_00110458)(lVar4);

  if ((local_124 & 1) != 0) goto LAB_000306f8;

  _objc_msgSend_acknowledgeSeenItems(local_50,local_138);

  _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_138);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  dVar12 = (double)_objc_msgSend_timeIntervalSinceReferenceDate(uVar5,local_138);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  local_60 = dVar12;

  _objc_msgSend_facade(local_50,local_138);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR____NSArray0__struct_00110718;

  _Call(uVar5,&cf_timelineMgr);

  local_68 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _Call(local_68,&cf_getCache,puVar1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_71 = 0;

  local_70 = uVar5;

  uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar7 = _objc_opt_isKindOfClass(uVar5,uVar6);

  if ((uVar7 & 1) != 0) {

    local_80 = (*(code *)PTR__objc_retain_00110460)(local_70);

    _objc_msgSend_firstObject(local_80,local_138);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar5,&cf_itemID,PTR____NSArray0__struct_00110718);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _Text();

    local_88 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    _objc_msgSend_nativeFirstID(local_50,local_138);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    lVar4 = _objc_msgSend_length(uVar5,local_138);

    local_91 = 0;

    local_16c = 0;

    if (lVar4 != 0) {

      lVar4 = _objc_msgSend_length(local_88,local_138);

      local_16c = 0;

      if (lVar4 != 0) {

        _objc_msgSend_nativeFirstID(local_50,local_138);

        local_90 = _objc_retainAutoreleasedReturnValue();

        local_91 = 1;

        local_16c = _objc_msgSend_isEqual_(local_90,local_138,local_88);

        local_16c = local_16c ^ 1;

      }

    }

    if ((local_91 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_90);

    }

    (*(code *)PTR__objc_release_00110458)(uVar5);

    if ((local_16c & 1) != 0) {

      _objc_msgSend_setHeadOrderPending_(local_50,local_138,1);

    }

    _objc_msgSend_setNativeFirstID_(local_50,local_138,local_88);

    _objc_msgSend_count(local_80,local_138);

    _objc_msgSend_firstObject(local_80,local_138);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    puVar1 = PTR____NSArray0__struct_00110718;

    _Call();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _Text();

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_lastObject(local_80,local_138);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar9,&cf_itemID,puVar1);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    _Text();

    uVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_138,&cf__lu______);

    local_a0 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar11);

    (*(code *)PTR__objc_release_00110458)(uVar10);

    (*(code *)PTR__objc_release_00110458)(uVar9);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    uVar5 = local_a0;

    _objc_msgSend_nativeCacheSignature(local_50,local_138);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    bVar3 = _objc_msgSend_isEqualToString_(uVar5,local_138);

    local_71 = (bVar3 ^ 1) & 1;

    (*(code *)PTR__objc_release_00110458)(uVar6);

    if ((local_71 & 1) != 0) {

      _objc_msgSend_setNativeCacheSignature_(local_50,local_138,local_a0);

      _objc_msgSend_setNativeListDirty_(local_50,local_138,1);

      local_38 = &cf_managerCount;

      uVar5 = _objc_msgSend_count(local_80,local_138);

      _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_138,uVar5);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_30 = uVar5;

      _objc_msgSend_dictionaryWithObjects_forKeys_count_

                (&_OBJC_CLASS___NSDictionary,local_138,&local_30,&local_38,1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _Trace(&cf_poll_cache_changed);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar5);

    }

    _objc_storeStrong(&local_a0);

    _objc_storeStrong(&local_88,0);

    _objc_storeStrong(&local_80,0);

  }

  puVar1 = PTR____NSArray0__struct_00110718;

  _Call(local_68,&cf_dataProvider);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar5,&cf_isUpdating,puVar1);

  local_a8 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar5 = local_a8;

  uVar6 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

  uVar7 = _objc_opt_isKindOfClass(uVar5,uVar6);

  bVar3 = 0;

  if ((uVar7 & 1) != 0) {

    bVar3 = _objc_msgSend_boolValue(local_a8,local_138);

    bVar3 = bVar3 ^ 1;

  }

  local_a9 = bVar3 & 1;

  local_aa = false;

  if ((bVar3 & 1) != 0) {

    uVar7 = _objc_msgSend_initialHeadPending(local_50,local_138);

    if ((uVar7 & 1) == 0) {

      uVar7 = _objc_msgSend_refreshingHead(local_50,local_138);

      local_aa = false;

      if ((uVar7 & 1) == 0) goto LAB_0002ff2c;

    }

    dVar12 = local_60;

    dVar13 = (double)_objc_msgSend_lastHeadRequest(local_50,local_138);

    local_aa = 0.3 <= dVar12 - dVar13;

  }

LAB_0002ff2c:

  local_ab = false;

  if ((local_a9 & 1) != 0) {

    uVar7 = _objc_msgSend_loadingTail(local_50,local_138);

    dVar12 = local_60;

    local_ab = false;

    if ((uVar7 & 1) != 0) {

      dVar13 = (double)_objc_msgSend_lastTailRequest(local_50,local_138);

      local_ab = 0.3 <= dVar12 - dVar13;

    }

  }

  uVar7 = _objc_msgSend_initialHeadPending(local_50,local_138);

  bVar3 = 1;

  if ((uVar7 & 1) == 0) {

    uVar7 = _objc_msgSend_refreshingHead(local_50,local_138);

    bVar3 = 1;

    if ((uVar7 & 1) == 0) {

      bVar3 = _objc_msgSend_loadingTail(local_50,local_138);

    }

  }

  local_ac = bVar3 & 1;

  local_b9 = 0;

  local_c9 = 0;

  local_d9 = 0;

  local_e9 = 0;

  local_f9 = 0;

  bVar2 = false;

  if (((local_a9 & 1) != 0) && (bVar2 = false, (bVar3 & 1) == 0)) {

    uVar7 = _objc_msgSend_isFeedScrolling(local_50,local_138);

    bVar2 = false;

    if ((uVar7 & 1) == 0) {

      _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_138);

      local_b8 = _objc_retainAutoreleasedReturnValue();

      local_b9 = 1;

      lVar4 = _objc_msgSend_applicationState(local_b8,local_138);

      bVar2 = false;

      if (lVar4 == 0) {

        _objc_msgSend_host(local_50,local_138);

        local_c8 = _objc_retainAutoreleasedReturnValue();

        local_c9 = 1;

        _objc_msgSend_navigationController(local_c8,local_138);

        local_d8 = _objc_retainAutoreleasedReturnValue();

        local_d9 = 1;

        _objc_msgSend_topViewController(local_d8,local_138);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        local_e9 = 1;

        local_e8 = lVar4;

        _objc_msgSend_host(local_50,local_138);

        local_f8 = _objc_retainAutoreleasedReturnValue();

        dVar12 = local_60;

        local_f9 = 1;

        bVar2 = false;

        if (lVar4 == local_f8) {

          local_108 = (double)_objc_msgSend_lastHeadRequest(local_50,local_138);

          local_110 = (double)_objc_msgSend_lastAutomaticHeadRequest(local_50,local_138);

          local_280 = local_110;

          if (local_110 <= local_108) {

            local_280 = local_108;

          }

          local_118 = local_280;

          bVar2 = 30.0 <= dVar12 - local_280;

        }

      }

    }

  }

  if ((local_f9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_f8);

  }

  if ((local_e9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_e8);

  }

  if ((local_d9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_d8);

  }

  if ((local_c9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_c8);

  }

  if ((local_b9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_b8);

  }

  if (bVar2) {

    _objc_msgSend_setLastAutomaticHeadRequest_(local_60,local_50,local_138);

    _objc_msgSend_setLastHeadRequest_(local_60,local_50,local_138);

    _objc_msgSend_facade(local_50,local_138);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar5,&cf_updateTimelineHead,PTR____NSArray0__struct_00110718);

    local_120 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar5);

    local_48 = &cf_accepted;

    uVar5 = _objc_msgSend_boolValue(local_120,local_138);

    _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_138,uVar5);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_40 = uVar5;

    _objc_msgSend_dictionaryWithObjects_forKeys_count_

              (&_OBJC_CLASS___NSDictionary,local_138,&local_40,&local_48,1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _Trace(&cf_head_automatic);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    uVar7 = _objc_msgSend_boolValue(local_120,local_138);

    if ((uVar7 & 1) != 0) {

      _objc_msgSend_setInitialHeadPending_(local_50,local_138,1);

      _objc_msgSend_setHeadOrderPending_(local_50,local_138,1);

      _objc_msgSend_setNativeListDirty_(local_50,local_138,1);

      _objc_msgSend_syncPaging(local_50,local_138);

    }

    _objc_storeStrong(&local_120,0);

  }

  dVar12 = local_60;

  if ((((local_ac & 1) != 0) && ((local_a9 & 1) != 0)) ||

     (dVar13 = (double)_objc_msgSend_lastNativeListSync(local_50,local_138), 3.0 <= dVar12 - dVar13)

     ) {

    _objc_msgSend_setNativeListDirty_(local_50,local_138,1);

  }

  if ((local_aa & 1) != 0) {

    _objc_msgSend_traceState_(local_50,local_138,&cf_poll_head_finished);

    _objc_msgSend_setHeadOrderPending_(local_50,local_138,1);

    _objc_msgSend_setInitialHeadPending_(local_50,local_138,0);

    uVar7 = _objc_msgSend_refreshingHead(local_50,local_138);

    if ((uVar7 & 1) != 0) {

      _objc_msgSend_setHeadOrderPending_(local_50,local_138,1);

      _objc_msgSend_finishRefresh(local_50,local_138);

    }

  }

  if ((((local_71 & 1) != 0) ||

      (uVar7 = _objc_msgSend_nativeListDirty(local_50,local_138), (uVar7 & 1) != 0)) ||

     ((uVar7 = _objc_msgSend_needsMediaProbe(local_50,local_138), dVar12 = local_60,

      (uVar7 & 1) != 0 ||

      (dVar13 = (double)_objc_msgSend_lastFeedPoll(local_50,local_138), 3.0 <= dVar12 - dVar13)))) {

    _objc_msgSend_setLastFeedPoll_(local_60,local_50,local_138);

    _objc_msgSend_reloadFeed(local_50,local_138);

  }

  uVar7 = _objc_msgSend_needsBindingMore(local_50,local_138);

  if ((((uVar7 & 1) != 0) &&

      (uVar7 = _objc_msgSend_tailRetryRequired(local_50,local_138), (uVar7 & 1) == 0)) &&

     ((uVar7 = _objc_msgSend_initialHeadPending(local_50,local_138), (uVar7 & 1) == 0 &&

      (((uVar7 = _objc_msgSend_refreshingHead(local_50,local_138), (uVar7 & 1) == 0 &&

        (uVar7 = _objc_msgSend_loadingTail(local_50,local_138), (uVar7 & 1) == 0)) &&

       (uVar7 = _objc_msgSend_exhausted(local_50,local_138), (uVar7 & 1) == 0)))))) {

    _objc_msgSend_setNeedsBindingMore_(local_50,local_138,0);

    _objc_msgSend_web(local_50,local_138);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_evaluateJavaScript_completionHandler_(uVar5,local_138,&cf_send__more__,0);

    (*(code *)PTR__objc_release_00110458)(uVar5);

  }

  if (((local_ab & 1) != 0) &&

     (uVar7 = _objc_msgSend_loadingTail(local_50,local_138), (uVar7 & 1) != 0)) {

    _objc_msgSend_traceState_(local_50,local_138,&cf_poll_tail_finished_empty);

    _objc_msgSend_finishTailWait(local_50,local_138);

  }

  _objc_storeStrong(&local_a8);

  _objc_storeStrong(&local_70,0);

  _objc_storeStrong(&local_68,0);

LAB_000306f8:

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d1] start @0x39718 ----
// CALLERS: refreshHead, viewDidAppear:, foreground:, ___26-[WCMFeedController_start]_block_invoke, ___26-[WCMFeedController_start]_block_invoke_2, _Attach, ___Install_block_invoke_3.3073, _objc_msgSend$start
// CALLEES: root, setRoot:, accountToken, setAccountToken:, _Service, _Context, facade, setFacade:, account, setAccount:


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::start(ID param_1,SEL param_2)



{

  undefined1 uVar1;

  ID IVar2;

  bool bVar3;

  uint uVar4;

  undefined4 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined *puVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  dispatch_time_t dVar16;

  double dVar17;

  double dVar18;

  undefined *local_248;

  undefined8 local_1b8;

  undefined *local_160;

  undefined4 local_158;

  undefined4 local_154;

  code *local_150;

  undefined *local_148;

  undefined1 auStack_140 [8];

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  undefined1 local_119;

  undefined *local_118;

  undefined4 local_110;

  undefined4 local_10c;

  code *local_108;

  undefined *local_100;

  undefined1 auStack_f8 [8];

  undefined1 auStack_f0 [12];

  undefined4 local_e4;

  undefined1 local_dd;

  undefined *local_d0;

  undefined4 local_c8;

  undefined4 local_c4;

  code *local_c0;

  undefined *local_b8;

  undefined1 auStack_b0 [8];

  undefined1 auStack_a8 [15];

  undefined1 local_99;

  long local_98;

  undefined8 local_90;

  SEL local_88;

  ID local_80;

  cfstringStruct *local_78;

  undefined8 local_70;

  cfstringStruct *local_68;

  cfstringStruct *local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined **local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_88 = param_2;

  local_80 = param_1;

  uVar6 = _objc_msgSend_timer(param_1);

  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);

  (*(code *)PTR__objc_release_00110458)();

  if (lVar7 == 0) {

    uVar6 = _Context();

    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

    uVar8 = _Call(uVar6,&cf_userName,PTR____NSArray0__struct_00110718);

    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

    uVar9 = _Text();

    local_90 = _objc_retainAutoreleasedReturnValue(uVar9);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    uVar6 = local_90;

    uVar8 = _objc_msgSend_account(local_80,local_1b8);

    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

    uVar4 = _objc_msgSend_isEqualToString_(uVar6,local_1b8);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    if ((uVar4 & 1) == 0) {

      _objc_msgSend_setItems_(local_80,local_1b8,PTR____NSDictionary0__struct_00110720);

      uVar6 = _objc_msgSend_images(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_avatars(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_requestedAvatars(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_setLastJSON_(local_80,local_1b8,0);

      _objc_msgSend_setAccount_(local_80,local_1b8,local_90);

      uVar6 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

      _objc_msgSend_setHiddenUsers_(local_80,local_1b8,uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

      _objc_msgSend_setPermissionRequests_(local_80,local_1b8,uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_syncHiddenUsers(local_80,local_1b8);

      uVar6 = _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar8 = _objc_msgSend_followingKey(local_80,local_1b8);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      uVar9 = _objc_msgSend_arrayForKey_(uVar6,local_1b8);

      puVar10 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar9);

      local_248 = puVar10;

      if (puVar10 == (undefined *)0x0) {

        local_248 = PTR____NSArray0__struct_00110718;

      }

      uVar9 = _objc_msgSend_setWithArray_(&_OBJC_CLASS___NSMutableSet,local_1b8,local_248);

      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

      _objc_msgSend_setFollowing_(local_80,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(puVar10);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_setLimit_(local_80,local_1b8,0x28);

      _objc_msgSend_setLoadingTail_(local_80,local_1b8,0);

      _objc_msgSend_setExhausted_(local_80,local_1b8,0);

      _objc_msgSend_setTailRetryRequired_(local_80,local_1b8,0);

      IVar2 = local_80;

      lVar7 = _objc_msgSend_pagingGeneration(local_80,local_1b8);

      _objc_msgSend_setPagingGeneration_(IVar2,local_1b8,lVar7 + 1);

      uVar6 = _objc_msgSend_visibleIDs(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_rowOrder(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_nativeContentByID(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_nativeMediaByID(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      IVar2 = local_80;

      lVar7 = _objc_msgSend_bridgeGeneration(local_80,local_1b8);

      _objc_msgSend_setBridgeGeneration_(IVar2,local_1b8,lVar7 + 1);

      _objc_msgSend_setBridgeBusy_(local_80,local_1b8,0);

      _objc_msgSend_setPendingFeedSnapshot_(local_80,local_1b8,0);

      _objc_msgSend_setLatestFeedSnapshot_(local_80,local_1b8,0);

      _objc_msgSend_setPendingFeedPreferLatest_(local_80,local_1b8,0);

      _objc_msgSend_setNeedsBindingMore_(local_80,local_1b8,0);

      _objc_msgSend_setBridgeRows_(local_80,local_1b8,0);

      uVar6 = _objc_msgSend_itemMediaKeys(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_mediaTargets(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_setLastSeenCreateTime_(local_80,local_1b8,0);

      _objc_msgSend_setLastSeenItemID_(local_80,local_1b8,0);

      _objc_msgSend_setPendingSeenIDs_(local_80,local_1b8,0);

      uVar6 = _objc_msgSend_renderKeys(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_renderQualities(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_mediaRequestTimes(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      IVar2 = local_80;

      lVar7 = _objc_msgSend_mediaGeneration(local_80,local_1b8);

      _objc_msgSend_setMediaGeneration_(IVar2,local_1b8,lVar7 + 1);

      uVar6 = _objc_msgSend_mediaQueue(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_cancelAllOperations(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_pendingExports(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_previewQueue(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_cancelAllOperations(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_pendingOriginalExports(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_cachedRows(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_setMetadataRefreshPending_(local_80,local_1b8,0);

      uVar6 = _objc_msgSend_mediaProbeTimes(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_setNativeCacheSignature_(local_80,local_1b8,0);

      _objc_msgSend_setNativeFirstID_(local_80,local_1b8,0);

      _objc_msgSend_setLastNativeListSync_(0,local_80,local_1b8);

      _objc_msgSend_setLastFeedPoll_(0,local_80,local_1b8);

      uVar6 = _objc_msgSend_videoRequests(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_videoURIs(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_removeAllObjects(uVar6,local_1b8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_setCachedFeedShown_(local_80,local_1b8,0);

      uVar6 = _Digest(local_90);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar8 = _objc_msgSend_assetHandler(local_80,local_1b8);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      _objc_msgSend_setAccountToken_(uVar8,local_1b8,uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar8 = _objc_msgSend_firstObject(uVar6,local_1b8);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      uVar9 = _objc_msgSend_stringByAppendingPathComponent_(uVar8,local_1b8,&cf_WCMoments);

      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

      uVar11 = _objc_msgSend_assetHandler(local_80,local_1b8);

      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);

      uVar12 = _objc_msgSend_accountToken(uVar11,local_1b8);

      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);

      uVar13 = _objc_msgSend_stringByAppendingPathComponent_(uVar9,local_1b8);

      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);

      uVar14 = _objc_msgSend_copy(uVar13,local_1b8);

      uVar15 = _objc_msgSend_assetHandler(local_80,local_1b8);

      uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);

      _objc_msgSend_setRoot_(uVar15,local_1b8,uVar14);

      (*(code *)PTR__objc_release_00110458)(uVar15);

      (*(code *)PTR__objc_release_00110458)(uVar14);

      (*(code *)PTR__objc_release_00110458)(uVar13);

      (*(code *)PTR__objc_release_00110458)(uVar12);

      (*(code *)PTR__objc_release_00110458)(uVar11);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar8 = _objc_msgSend_assetHandler(local_80,local_1b8);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      uVar9 = _objc_msgSend_root(uVar8,local_1b8);

      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

      local_48 = *(undefined8 *)PTR__NSFilePosixPermissions_00110160;

      local_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fd70;

      local_40 = *(undefined8 *)PTR__NSFileProtectionKey_00110170;

      local_30 = *(undefined8 *)PTR__NSFileProtectionCompleteUntilFirstUserAuthentication_00110168;

      uVar11 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                         (&_OBJC_CLASS___NSDictionary,local_1b8,&local_38,&local_48,2);

      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);

      _objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_

                (uVar6,local_1b8,uVar9,1,uVar11,0);

      (*(code *)PTR__objc_release_00110458)(uVar11);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = _objc_msgSend_assetHandler(local_80,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar8 = _objc_msgSend_root(uVar6,local_1b8);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      uVar9 = _objc_msgSend_fileURLWithPath_(&_OBJC_CLASS___NSURL,local_1b8);

      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

      _objc_msgSend_setResourceValue_forKey_error_

                (uVar9,local_1b8,PTR____kCFBooleanTrue_00110730,

                 *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_00110708,0);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar4 = _objc_msgSend_ready(local_80,local_1b8);

      if ((uVar4 & 1) != 0) {

        uVar6 = _objc_msgSend_web(local_80,local_1b8);

        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

        _objc_msgSend_evaluateJavaScript_completionHandler_(uVar6,local_1b8,&cf_clearFeed__,0);

        (*(code *)PTR__objc_release_00110458)(uVar6);

      }

    }

    uVar6 = _Service(&cf_WCFacade);

    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

    _objc_msgSend_setFacade_(local_80,local_1b8);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    _objc_msgSend_applyHeaderBrand(local_80,local_1b8);

    _objc_msgSend_showCachedFeed(local_80,local_1b8);

    lVar7 = _objc_msgSend_length(local_90,local_1b8);

    local_99 = 0;

    bVar3 = true;

    uVar1 = lVar7 != 0;

    if ((bool)uVar1) {

      uVar6 = _objc_msgSend_facade(local_80,local_1b8);

      local_98 = _objc_retainAutoreleasedReturnValue(uVar6);

      bVar3 = local_98 == 0;

      local_99 = uVar1;

      (*(code *)PTR__objc_release_00110458)(local_98);

      uVar1 = local_99;

    }

    local_99 = uVar1;

    if (bVar3) {

      local_68 = &cf_loggedIn;

      lVar7 = _objc_msgSend_length(local_90,local_1b8);

      uVar6 = _objc_msgSend_numberWithInt_(lVar7,&_OBJC_CLASS___NSNumber,local_1b8,lVar7 != 0);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      local_60 = &cf_facadeAvailable;

      local_58 = uVar6;

      uVar8 = _objc_msgSend_facade(local_80,local_1b8);

      lVar7 = _objc_retainAutoreleasedReturnValue(uVar8);

      uVar8 = _objc_msgSend_numberWithInt_(lVar7,&_OBJC_CLASS___NSNumber,local_1b8,lVar7 != 0);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      local_50 = uVar8;

      uVar9 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                        (&_OBJC_CLASS___NSDictionary,local_1b8,&local_58,&local_68,2);

      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

      _Trace(&cf_session_unavailable);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(lVar7);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      _objc_msgSend_status_(local_80,local_1b8,&cf_ck_WI___OgSWgR_);

      _objc_initWeak(auStack_a8,local_80);

      local_d0 = PTR___NSConcreteStackBlock_001104f0;

      local_c8 = 0xc2000000;

      local_c4 = 0;

      local_c0 = ___26__WCMFeedController_start__block_invoke;

      local_b8 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;

      _objc_copyWeak(auStack_b0,auStack_a8);

      local_dd = 1;

      uVar6 = _objc_msgSend_scheduledTimerWithTimeInterval_repeats_block_

                        (0x4008000000000000,&_OBJC_CLASS___NSTimer,local_1b8,0,&local_d0);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      _objc_msgSend_setTimer_(local_80,local_1b8);

      local_dd = 0;

      (*(code *)PTR__objc_release_00110458)(uVar6);

      local_e4 = 1;

      _objc_destroyWeak(auStack_b0);

      _objc_destroyWeak(auStack_a8);

    }

    else {

      uVar4 = _objc_msgSend_began(local_80,local_1b8);

      if ((uVar4 & 1) == 0) {

        uVar6 = _objc_msgSend_facade(local_80,local_1b8);

        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

        uVar8 = _Call(uVar6,&cf_beginTimeline,PTR____NSArray0__struct_00110718);

        lVar7 = _objc_retainAutoreleasedReturnValue(uVar8);

        _objc_msgSend_setBegan_(lVar7,local_80,local_1b8,lVar7 != 0);

        (*(code *)PTR__objc_release_00110458)(lVar7);

        (*(code *)PTR__objc_release_00110458)(uVar6);

        _objc_msgSend_setNativeListDirty_(local_80,local_1b8,1);

        _objc_msgSend_traceState_(local_80,local_1b8,&cf_session_begin);

      }

      uVar4 = _objc_msgSend_began(local_80,local_1b8);

      if ((uVar4 & 1) == 0) {

        _objc_msgSend_status_(local_80,local_1b8,&cf_gSWcSN_Q_b_YSHr);

        local_e4 = 1;

      }

      else {

        _objc_msgSend_reloadFeed(local_80,local_1b8);

        _objc_initWeak(auStack_f0,local_80);

        local_118 = PTR___NSConcreteStackBlock_001104f0;

        local_110 = 0xc2000000;

        local_10c = 0;

        local_108 = ___26__WCMFeedController_start__block_invoke_2;

        local_100 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;

        _objc_copyWeak(auStack_f8,auStack_f0);

        local_119 = 1;

        uVar6 = _objc_msgSend_timerWithTimeInterval_repeats_block_

                          (0x3fe0000000000000,&_OBJC_CLASS___NSTimer,local_1b8,1,&local_118);

        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

        _objc_msgSend_setTimer_(local_80,local_1b8);

        local_119 = 0;

        (*(code *)PTR__objc_release_00110458)(uVar6);

        uVar6 = _objc_msgSend_mainRunLoop(&_OBJC_CLASS___NSRunLoop,local_1b8);

        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

        uVar8 = _objc_msgSend_timer(local_80,local_1b8);

        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

        _objc_msgSend_addTimer_forMode_

                  (uVar6,local_1b8,uVar8,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        (*(code *)PTR__objc_release_00110458)(uVar6);

        uVar6 = _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_1b8);

        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

        dVar17 = (double)_objc_msgSend_timeIntervalSinceReferenceDate(uVar6,local_1b8);

        dVar18 = (double)_objc_msgSend_lastHeadRequest(local_80,local_1b8);

        (*(code *)PTR__objc_release_00110458)(uVar6);

        if (5.0 < dVar17 - dVar18) {

          _objc_msgSend_setInitialHeadPending_(local_80,local_1b8,1);

          _objc_msgSend_syncPaging(local_80,local_1b8);

          uVar6 = _objc_msgSend_facade(local_80,local_1b8);

          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

          uVar8 = _Call(uVar6,&cf_updateTimelineHead,PTR____NSArray0__struct_00110718);

          local_128 = _objc_retainAutoreleasedReturnValue(uVar8);

          (*(code *)PTR__objc_release_00110458)(uVar6);

          uVar6 = _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_1b8);

          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

          uVar8 = _objc_msgSend_timeIntervalSinceReferenceDate(uVar6,local_1b8);

          _objc_msgSend_setLastHeadRequest_(uVar8,local_80,local_1b8);

          (*(code *)PTR__objc_release_00110458)(uVar6);

          local_78 = &cf_accepted;

          uVar5 = _objc_msgSend_boolValue(local_128,local_1b8);

          uVar6 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_1b8,uVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

          local_70 = uVar6;

          uVar8 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                            (&_OBJC_CLASS___NSDictionary,local_1b8,&local_70,&local_78,1);

          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

          _Trace(&cf_head_initial_request);

          (*(code *)PTR__objc_release_00110458)(uVar8);

          (*(code *)PTR__objc_release_00110458)(uVar6);

          local_130 = _objc_msgSend_lastHeadRequest(local_80,local_1b8);

          dVar16 = _dispatch_time(0,5000000000);

          _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);

          uVar6 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);

          local_160 = PTR___NSConcreteStackBlock_001104f0;

          local_158 = 0xc2000000;

          local_154 = 0;

          local_150 = ___26__WCMFeedController_start__block_invoke_3;

          local_148 = &___block_descriptor_48_e8_32w_e5_v8__0l;

          _objc_copyWeak(auStack_140,auStack_f0);

          local_138 = local_130;

          _dispatch_after(dVar16,uVar6,&local_160);

          (*(code *)PTR__objc_release_00110458)(uVar6);

          _objc_destroyWeak(auStack_140);

          _objc_storeStrong(&local_128,0);

        }

        _objc_destroyWeak(auStack_f8);

        _objc_destroyWeak(auStack_f0);

        local_e4 = 0;

      }

    }

    _objc_storeStrong(&local_90,0);

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

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






// ---- [d2] facade @0xea18 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] facade @0x1588c ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] facade @0x2b824 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

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






// ---- [d2] isFeedScrolling @0x2f6d8 ----
// CALLERS: pollNativeTimeline, scheduleMediaReload, acknowledgeSeenItems, _objc_msgSend$isFeedScrolling
// CALLEES: web, lastWebScrollTime, scrollView


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::isFeedScrolling(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  ulong uVar3;

  double dVar4;

  double dVar5;

  undefined8 local_48;

  undefined8 local_38;

  undefined8 local_30;

  SEL local_28;

  ID local_20;

  byte local_11;

  

  local_28 = param_2;

  local_20 = param_1;

  _objc_msgSend_web(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_48);

  local_30 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar3 = _objc_msgSend_isTracking(local_30,local_48);

  bVar1 = false;

  local_11 = true;

  if ((uVar3 & 1) == 0) {

    uVar3 = _objc_msgSend_isDragging(local_30,local_48);

    local_11 = true;

    if ((uVar3 & 1) == 0) {

      uVar3 = _objc_msgSend_isDecelerating(local_30,local_48);

      local_11 = true;

      if ((uVar3 & 1) == 0) {

        _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_48);

        local_38 = _objc_retainAutoreleasedReturnValue();

        bVar1 = true;

        dVar4 = (double)_objc_msgSend_systemUptime(local_38,local_48);

        dVar5 = (double)_objc_msgSend_lastWebScrollTime(local_20,local_48);

        local_11 = dVar4 - dVar5 < 0.24;

      }

    }

  }

  if (bVar1) {

    (*(code *)PTR__objc_release_00110458)(local_38);

  }

  _objc_storeStrong(&local_30,0);

  return local_11 & 1;

}






// ---- [d2] finishRefresh @0x34438 ----
// CALLERS: pollNativeTimeline, finishRefreshWithSuccess:, timelineFinished:, ___32-[WCMFeedController_refreshHead]_block_invoke, noMore:, _objc_msgSend$finishRefresh, _objc_msgSend$finishRefreshWithSuccess:
// CALLEES: finishRefreshWithSuccess:


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::finishRefresh(ID param_1,SEL param_2)



{

  _objc_msgSend_finishRefreshWithSuccess_(param_1,param_2,1);

  return;

}






// ---- [d2] finishTailWait @0x34fe4 ----
// CALLERS: pollNativeTimeline, timelineFinished:, requestTimelineMore, ___40-[WCMFeedController_requestTimelineMore]_block_invoke, _objc_msgSend$finishTailWait
// CALLEES: traceState:, syncPaging, setLimit:, setLoadingTail:, tailStartCount, tailPreviousLimit, setTailRetryRequired:, pagingGeneration, setPagingGeneration:


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::finishTailWait(ID param_1,SEL param_2)



{

  long lVar1;

  long local_58;

  undefined8 local_40;

  

  _objc_msgSend_traceState_(param_1,param_2,&cf_tail_wait_finished);

  _objc_msgSend_setLoadingTail_(param_1,local_40,0);

  _objc_msgSend_setTailRetryRequired_(param_1,local_40,1);

  lVar1 = _objc_msgSend_pagingGeneration(param_1,local_40);

  _objc_msgSend_setPagingGeneration_(param_1,local_40,lVar1 + 1);

  local_58 = _objc_msgSend_tailPreviousLimit(param_1,local_40);

  lVar1 = _objc_msgSend_tailStartCount(param_1,local_40);

  if (local_58 < lVar1) {

    local_58 = lVar1;

  }

  _objc_msgSend_setLimit_(param_1,local_40,local_58);

  _objc_msgSend_syncPaging(param_1,local_40);

  return;

}






// ---- [d2] syncPaging @0x350dc ----
// CALLERS: pollNativeTimeline, refreshHead, noMore:, finishTailWait, ___31-[WCMFeedController_syncPaging]_block_invoke, start, ___26-[WCMFeedController_start]_block_invoke_3, requestTimelineMore
// CALLEES: facade, facade, facade, web, facade, ready, loadingTail, exhausted, tailRetryRequired, refreshingHead


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::syncPaging(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_40;

  

  uVar1 = _objc_msgSend_ready(param_1);

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_facade(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar2,&cf_getUnReadMessageCount,PTR____NSArray0__struct_00110718);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_unsignedIntegerValue(uVar3,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_web(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_loadingTail(param_1,local_40);

    _objc_msgSend_exhausted(param_1,local_40);

    _objc_msgSend_tailRetryRequired(param_1,local_40);

    uVar1 = _objc_msgSend_refreshingHead(param_1,local_40);

    if ((uVar1 & 1) == 0) {

      _objc_msgSend_initialHeadPending(param_1,local_40);

    }

    _objc_msgSend_stringWithFormat_

              (&_OBJC_CLASS___NSString,local_40,&cf_setMessageCount__lu__setPaging_____________);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_evaluateJavaScript_completionHandler_

              (uVar2,local_40,uVar3,&___block_literal_global_1749);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  return;

}






// ---- [d2] acknowledgeSeenItems @0x56aa0 ----
// CALLERS: pollNativeTimeline, userContentController:didReceiveScriptMessage:, _objc_msgSend$acknowledgeSeenItems
// CALLEES: facade, facade, facade, isFeedScrolling, host, facade, items, lastSeenCreateTime, setLastSeenCreateTime:, lastSeenItemID


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x10 bytes */



void WCMFeedController::acknowledgeSeenItems(ID param_1,SEL param_2)



{

  bool bVar1;

  bool bVar2;

  uint uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ulong local_280;

  ulong local_278;

  undefined8 local_238;

  undefined8 local_1e8;

  long local_1d8;

  undefined1 auStack_1d0 [8];

  long local_1c8;

  long *local_1c0;

  undefined8 local_190;

  undefined8 local_188;

  uint local_17c;

  long local_178;

  undefined4 local_16c;

  undefined8 local_168;

  byte local_159;

  undefined8 local_158;

  byte local_149;

  long local_148;

  byte local_139;

  long local_138;

  byte local_129;

  undefined8 local_128;

  byte local_119;

  undefined8 local_118;

  byte local_109;

  long local_108;

  byte local_f9;

  undefined8 local_f8;

  byte local_e9;

  undefined8 local_e8;

  byte local_d9;

  long local_d8;

  SEL local_d0;

  ID local_c8;

  cfstringStruct *local_c0;

  undefined8 local_b8;

  long local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_d0 = param_2;

  local_c8 = param_1;

  uVar4 = _objc_msgSend_ready(param_1);

  local_d9 = 0;

  local_e9 = 0;

  local_f9 = 0;

  local_109 = 0;

  local_119 = 0;

  local_129 = 0;

  local_139 = 0;

  local_149 = 0;

  local_159 = 0;

  bVar1 = true;

  if ((uVar4 & 1) != 0) {

    _objc_msgSend_facade(local_c8,local_238);

    local_d8 = _objc_retainAutoreleasedReturnValue();

    local_d9 = 1;

    bVar1 = true;

    if (local_d8 != 0) {

      _objc_msgSend_view(local_c8,local_238);

      local_e8 = _objc_retainAutoreleasedReturnValue();

      local_e9 = 1;

      uVar4 = _objc_msgSend_isHidden(local_e8,local_238);

      bVar1 = true;

      if ((uVar4 & 1) == 0) {

        _objc_msgSend_view(local_c8,local_238);

        local_f8 = _objc_retainAutoreleasedReturnValue();

        local_f9 = 1;

        _objc_msgSend_window(local_f8,local_238);

        local_108 = _objc_retainAutoreleasedReturnValue();

        local_109 = 1;

        bVar1 = true;

        if (local_108 != 0) {

          _objc_msgSend_host(local_c8,local_238);

          local_118 = _objc_retainAutoreleasedReturnValue();

          local_119 = 1;

          _objc_msgSend_navigationController(local_118,local_238);

          local_128 = _objc_retainAutoreleasedReturnValue();

          local_129 = 1;

          _objc_msgSend_topViewController(local_128,local_238);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          local_139 = 1;

          local_138 = lVar5;

          _objc_msgSend_host(local_c8,local_238);

          local_148 = _objc_retainAutoreleasedReturnValue();

          local_149 = 1;

          bVar1 = true;

          if (lVar5 == local_148) {

            _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_238);

            local_158 = _objc_retainAutoreleasedReturnValue();

            local_159 = 1;

            lVar5 = _objc_msgSend_applicationState(local_158,local_238);

            bVar1 = lVar5 != 0;

          }

        }

      }

    }

  }

  if ((local_159 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_158);

  }

  if ((local_149 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_148);

  }

  if ((local_139 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_138);

  }

  if ((local_129 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_128);

  }

  if ((local_119 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_118);

  }

  if ((local_109 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_108);

  }

  if ((local_f9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_f8);

  }

  if ((local_e9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_e8);

  }

  if ((local_d9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_d8);

  }

  if (!bVar1) {

    _objc_msgSend_pendingSeenIDs(local_c8,local_238);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    local_168 = uVar6;

    uVar7 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar4 = _objc_opt_isKindOfClass(uVar6,uVar7);

    if (((uVar4 & 1) == 0) || (uVar4 = _objc_msgSend_count(local_168,local_238), 0x28 < uVar4)) {

      local_16c = 1;

    }

    else {

      uVar4 = _objc_msgSend_isFeedScrolling(local_c8,local_238);

      if ((uVar4 & 1) == 0) {

        _objc_msgSend_setPendingSeenIDs_(local_c8,local_238,0);

        local_178 = 0;

        local_17c = _objc_msgSend_lastSeenCreateTime(local_c8,local_238);

        local_188 = 0;

        _memset(auStack_1d0,0,0x40);

        uVar6 = (*(code *)PTR__objc_retain_00110460)(local_168);

        local_278 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar6,local_238,auStack_1d0,auStack_a8,0x10);

        if (local_278 != 0) {

          lVar5 = *local_1c0;

          local_280 = 0;

          do {

            do {

              if (*local_1c0 - lVar5 != 0) {

                _objc_enumerationMutation(*local_1c0 - lVar5,uVar6);

              }

              uVar8 = *(undefined8 *)(local_1c8 + local_280 * 8);

              local_190 = uVar8;

              uVar7 = _objc_opt_class(&_OBJC_CLASS___NSString);

              uVar4 = _objc_opt_isKindOfClass(uVar8,uVar7);

              if ((uVar4 & 1) != 0) {

                _objc_msgSend_items(local_c8,local_238);

                uVar7 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_objectForKeyedSubscript_(uVar7,local_238,local_190);

                local_1d8 = _objc_retainAutoreleasedReturnValue();

                (*(code *)PTR__objc_release_00110458)(uVar7);

                if (local_1d8 == 0) {

                  local_16c = 3;

                }

                else {

                  _Call(local_1d8,&cf_createtime,PTR____NSArray0__struct_00110718);

                  uVar7 = _objc_retainAutoreleasedReturnValue();

                  uVar3 = _objc_msgSend_unsignedIntValue(uVar7,local_238);

                  (*(code *)PTR__objc_release_00110458)(uVar7);

                  uVar7 = local_190;

                  bVar1 = false;

                  bVar2 = true;

                  if ((uVar3 <= local_17c) && (bVar2 = false, uVar3 == local_17c)) {

                    _objc_msgSend_lastSeenItemID(local_c8,local_238);

                    local_1e8 = _objc_retainAutoreleasedReturnValue();

                    bVar1 = true;

                    uVar4 = _objc_msgSend_isEqual_(uVar7,local_238);

                    bVar2 = false;

                    if ((uVar4 & 1) == 0) {

                      bVar2 = local_178 == 0;

                    }

                  }

                  if (bVar1) {

                    (*(code *)PTR__objc_release_00110458)(local_1e8);

                  }

                  if (bVar2) {

                    _objc_storeStrong(&local_178,local_1d8);

                    local_17c = uVar3;

                    _objc_storeStrong(&local_188,local_190);

                  }

                  local_16c = 0;

                }

                _objc_storeStrong(&local_1d8,0);

              }

              local_280 = local_280 + 1;

            } while (local_280 < local_278);

            local_278 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                  (uVar6,local_238,auStack_1d0,auStack_a8,0x10);

            local_280 = 0;

          } while (local_278 != 0);

        }

        (*(code *)PTR__objc_release_00110458)(uVar6);

        bVar1 = false;

        if (local_178 != 0) {

          _objc_msgSend_host(local_c8,local_238);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          local_b0 = local_178;

          _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_238,&local_b0,1);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _Call(uVar6,&cf_onMarkWCObjectAsRead_);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          bVar1 = lVar5 != 0;

          (*(code *)PTR__objc_release_00110458)(lVar5);

          (*(code *)PTR__objc_release_00110458)(uVar7);

          (*(code *)PTR__objc_release_00110458)(uVar6);

        }

        if (bVar1) {

          _objc_msgSend_setLastSeenCreateTime_(local_c8,local_238,local_17c);

          _objc_msgSend_setLastSeenItemID_(local_c8,local_238,local_188);

          local_c0 = &cf_count;

          uVar6 = _objc_msgSend_count(local_168,local_238);

          _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_238,uVar6);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          local_b8 = uVar6;

          _objc_msgSend_dictionaryWithObjects_forKeys_count_

                    (&_OBJC_CLASS___NSDictionary,local_238,&local_b8,&local_c0,1);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _Trace(&cf_timeline_seen_ack);

          (*(code *)PTR__objc_release_00110458)(uVar7);

          (*(code *)PTR__objc_release_00110458)(uVar6);

        }

        _objc_storeStrong(&local_188);

        _objc_storeStrong(&local_178,0);

        local_16c = 0;

      }

      else {

        local_16c = 1;

      }

    }

    _objc_storeStrong(&local_168,0);

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

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






// ---- [d2] web @0x590d8 ----
// CALLERS: isFeedScrolling, pollNativeTimeline, viewDidLoad, refreshPan:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, dealloc, webView:didFinishNavigation:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::web(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_web);

}






// ---- [d2] facade @0x59138 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] lastAutomaticHeadRequest @0x59870 ----
// CALLERS: pollNativeTimeline, setLastAutomaticHeadRequest:, _objc_msgSend$lastAutomaticHeadRequest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastAutomaticHeadRequest(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastAutomaticHeadRequest);

}






// ---- [d2] setLastAutomaticHeadRequest: @0x59894 ----
// CALLERS: pollNativeTimeline, _objc_msgSend$setLastAutomaticHeadRequest:
// CALLEES: lastAutomaticHeadRequest


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastAutomaticHeadRequest_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastAutomaticHeadRequest) = param_3;

  return;

}






// ---- [d2] needsBindingMore @0x59980 ----
// CALLERS: pollNativeTimeline, setNeedsBindingMore:, _objc_msgSend$needsBindingMore
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::needsBindingMore(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_needsBindingMore) & 1;

}






// ---- [d2] setNeedsBindingMore: @0x599ac ----
// CALLERS: pollNativeTimeline, start, _objc_msgSend$setNeedsBindingMore:
// CALLEES: needsBindingMore


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setNeedsBindingMore_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_needsBindingMore) = (byte)param_3 & 1;

  return;

}






// ---- [d2] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}






// ---- [d2] loadingTail @0x59f94 ----
// CALLERS: traceState:, pollNativeTimeline, timelineFinished:, syncPaging, requestTimelineMore, ___40-[WCMFeedController_requestTimelineMore]_block_invoke, setLoadingTail:, _objc_msgSend$loadingTail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::loadingTail(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_loadingTail) & 1;

}






// ---- [d2] exhausted @0x59ff0 ----
// CALLERS: traceState:, pollNativeTimeline, syncPaging, requestTimelineMore, setExhausted:, _objc_msgSend$exhausted
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::exhausted(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_exhausted) & 1;

}






// ---- [d2] tailRetryRequired @0x5a0ec ----
// CALLERS: pollNativeTimeline, syncPaging, ___31-[WCMFeedController_openVideo:]_block_invoke, setTailRetryRequired:, _objc_msgSend$tailRetryRequired
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::tailRetryRequired(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_tailRetryRequired) & 1;

}






// ---- [d2] lastHeadRequest @0x5a3d4 ----
// CALLERS: pollNativeTimeline, start, ___26-[WCMFeedController_start]_block_invoke_3, setLastHeadRequest:, _objc_msgSend$lastHeadRequest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastHeadRequest(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastHeadRequest);

}






// ---- [d2] setLastHeadRequest: @0x5a3f8 ----
// CALLERS: pollNativeTimeline, refreshHead, start, _objc_msgSend$setLastHeadRequest:
// CALLEES: lastHeadRequest


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastHeadRequest_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastHeadRequest) = param_3;

  return;

}






// ---- [d2] nativeListDirty @0x5a62c ----
// CALLERS: pollNativeTimeline, setNativeListDirty:, _objc_msgSend$nativeListDirty
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::nativeListDirty(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_nativeListDirty) & 1;

}






// ---- [d2] setNativeListDirty: @0x5a658 ----
// CALLERS: pollNativeTimeline, viewDidLoad, timelineChanged:, timelineFinished:, noMore:, start, _objc_msgSend$setNativeListDirty:
// CALLEES: nativeListDirty


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setNativeListDirty_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_nativeListDirty) = (byte)param_3 & 1;

  return;

}






// ---- [d2] refreshingHead @0x5a748 ----
// CALLERS: traceState:, pollNativeTimeline, refreshPan:, timelineChanged:, finishRefreshWithSuccess:, timelineFinished:, refreshHead, ___32-[WCMFeedController_refreshHead]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::refreshingHead(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_refreshingHead) & 1;

}






// ---- [d2] setHeadOrderPending: @0x5a7d0 ----
// CALLERS: pollNativeTimeline, timelineChanged:, timelineFinished:, _objc_msgSend$setHeadOrderPending:
// CALLEES: headOrderPending


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setHeadOrderPending_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_headOrderPending) = (byte)param_3 & 1;

  return;

}






// ---- [d2] initialHeadPending @0x5ac58 ----
// CALLERS: traceState:, pollNativeTimeline, timelineChanged:, timelineFinished:, syncPaging, ___26-[WCMFeedController_start]_block_invoke_3, requestTimelineMore, setInitialHeadPending:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::initialHeadPending(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_initialHeadPending) & 1;

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






// ---- [d2] nativeCacheSignature @0x5ad04 ----
// CALLERS: pollNativeTimeline, setNativeCacheSignature:, .cxx_destruct, _objc_msgSend$nativeCacheSignature
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeCacheSignature(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeCacheSignature);

}






// ---- [d2] setNativeCacheSignature: @0x5ad28 ----
// CALLERS: pollNativeTimeline, start, _objc_msgSend$setNativeCacheSignature:
// CALLEES: nativeCacheSignature


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setNativeCacheSignature_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_nativeCacheSignature);

  return;

}






// ---- [d2] nativeFirstID @0x5ad64 ----
// CALLERS: pollNativeTimeline, setNativeFirstID:, .cxx_destruct, _objc_msgSend$nativeFirstID
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeFirstID(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeFirstID);

}






// ---- [d2] setNativeFirstID: @0x5ad88 ----
// CALLERS: pollNativeTimeline, start, _objc_msgSend$setNativeFirstID:
// CALLEES: nativeFirstID


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setNativeFirstID_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_nativeFirstID);

  return;

}






// ---- [d2] lastNativeListSync @0x5b51c ----
// CALLERS: pollNativeTimeline, setLastNativeListSync:, _objc_msgSend$lastNativeListSync
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastNativeListSync(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastNativeListSync);

}






// ---- [d2] lastFeedPoll @0x5b56c ----
// CALLERS: pollNativeTimeline, setLastFeedPoll:, _objc_msgSend$lastFeedPoll
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastFeedPoll(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastFeedPoll);

}






// ---- [d2] setLastFeedPoll: @0x5b590 ----
// CALLERS: pollNativeTimeline, start, _objc_msgSend$setLastFeedPoll:
// CALLEES: lastFeedPoll


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastFeedPoll_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastFeedPoll) = param_3;

  return;

}






// ---- [d2] lastTailRequest @0x5b5bc ----
// CALLERS: pollNativeTimeline, setLastTailRequest:, _objc_msgSend$lastTailRequest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastTailRequest(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastTailRequest);

}






// ---- [d2] needsMediaProbe @0x5b60c ----
// CALLERS: pollNativeTimeline, setNeedsMediaProbe:, _objc_msgSend$needsMediaProbe
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::needsMediaProbe(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_needsMediaProbe) & 1;

}






// ---- [d2] isEqual: @0x9cba0 ----
// CALLERS: isMine:, changeCategory, reloadComments, prepareVideoPaths:index:offset:, updateVideoFollowing, _WCMCacheAssets, pollNativeTimeline, toggleFollowing:
// CALLEES: isEqual:


/* Function Stack Size: 0x18 bytes */



bool _YYImageWeakProxy::isEqual_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar2 = _objc_loadWeakRetained(local_18 + (long)_target);

  bVar1 = _objc_msgSend_isEqual_(uVar2,local_50,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return bVar1;

}






// ---- [d2] isEqual: @0xae354 ----
// CALLERS: isMine:, changeCategory, reloadComments, prepareVideoPaths:index:offset:, updateVideoFollowing, _WCMCacheAssets, pollNativeTimeline, toggleFollowing:
// CALLEES: ___CGSizeEqualToSize, size, title


/* Function Stack Size: 0x18 bytes */



bool WCMTOCropViewControllerAspectRatioPreset::isEqual_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  ID IVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 in_d1;

  undefined8 local_98;

  byte local_8c;

  undefined8 local_78;

  undefined8 local_68;

  undefined8 local_40;

  undefined4 local_34;

  ID local_30;

  SEL local_28;

  ID local_20;

  byte local_11;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  IVar2 = local_30;

  if (local_20 == local_30) {

    local_11 = 1;

    local_34 = 1;

  }

  else {

    uVar3 = _objc_opt_class(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

    uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);

    if ((uVar4 & 1) == 0) {

      local_11 = 0;

      local_34 = 1;

    }

    else {

      local_40 = (*(code *)PTR__objc_retain_00110460)(local_30);

      uVar5 = _objc_msgSend_size(local_20,local_98);

      uVar3 = in_d1;

      uVar6 = _objc_msgSend_size(local_40,local_98);

      uVar4 = ___CGSizeEqualToSize(uVar5,in_d1,uVar6,uVar3);

      local_8c = 0;

      bVar1 = (uVar4 & 1) != 0;

      if (bVar1) {

        _objc_msgSend_title(local_20,local_98);

        local_68 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_title(local_40,local_98);

        local_78 = _objc_retainAutoreleasedReturnValue();

        local_8c = _objc_msgSend_isEqualToString_(local_68,local_98);

      }

      local_11 = local_8c & 1;

      if (bVar1) {

        (*(code *)PTR__objc_release_00110458)(local_78);

        (*(code *)PTR__objc_release_00110458)(local_68);

      }

      local_34 = 1;

      _objc_storeStrong(&local_40,0);

    }

  }

  _objc_storeStrong(&local_30,0);

  return local_11 & 1;

}






// ---- [d2] root @0x5e28 ----
// CALLERS: webView:startURLSchemeTask:, measure, tableView:cellForRowAtIndexPath:, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMAssetHandler::root(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d2] setRoot: @0x5e44 ----
// CALLERS: start, openCacheManager, _objc_msgSend$setRoot:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMAssetHandler::setRoot_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,8);

  return;

}






// ---- [d2] accountToken @0x5e7c ----
// CALLERS: webView:startURLSchemeTask:, ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke.47, exportImage:nativePath:renderKey:mediaKey:quality:, extractVideoCover:mediaKey:, start, _objc_msgSend$accountToken
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMAssetHandler::accountToken(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d2] setAccountToken: @0x5e98 ----
// CALLERS: start, _objc_msgSend$setAccountToken:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMAssetHandler::setAccountToken_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);

  return;

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






// ---- [d2] setFacade: @0xea3c ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, stop, _objc_msgSend$setFacade:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMInboxController::setFacade_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_facade,param_3);

  return;

}






// ---- [d2] account @0xea78 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] setAccount: @0xea9c ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, _objc_msgSend$setAccount:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMInboxController::setAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_account);

  return;

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






// ---- [d2] account @0x15c4c ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] setAccount: @0x15c70 ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, _objc_msgSend$setAccount:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoComments::setAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_account);

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






// ---- [d2] account @0x2b6b4 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] setAccount: @0x2b6d8 ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, _objc_msgSend$setAccount:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_account);

  return;

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






// ---- [d2] root @0x2eeb4 ----
// CALLERS: webView:startURLSchemeTask:, measure, tableView:cellForRowAtIndexPath:, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMCacheController::root(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_root);

}






// ---- [d2] setRoot: @0x2eed8 ----
// CALLERS: start, openCacheManager, _objc_msgSend$setRoot:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMCacheController::setRoot_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_root);

  return;

}






// ---- [d2] followingKey @0x3543c ----
// CALLERS: toggleFollowing:, start, _objc_msgSend$followingKey
// CALLEES: account, account, account, account, following


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::followingKey(ID param_1,SEL param_2)



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

  _objc_msgSend_stringByAppendingString_(&cf_WCMomentsFollowing_,local_40,local_30);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(pcVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d2] showCachedFeed @0x36ad8 ----
// CALLERS: webView:didFinishNavigation:, start, _objc_msgSend$showCachedFeed
// CALLEES: root, root, syncHiddenUsers, web, lastJSON, setLastJSON:, coverRevision, setCoverRevision:, rowOrder, ready


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::showCachedFeed(ID param_1,SEL param_2)



{

  bool bVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  ulong local_380;

  ulong local_378;

  ulong local_348;

  uint local_2fc;

  ulong local_2e0;

  ulong local_2d8;

  undefined8 local_290;

  undefined8 local_260;

  undefined8 local_250;

  undefined1 auStack_248 [8];

  long local_240;

  long *local_238;

  undefined8 local_208;

  undefined8 local_200;

  ulong local_1f8;

  ulong local_1f0;

  ulong local_1e8;

  byte local_1d9;

  undefined8 local_1d8;

  undefined1 auStack_1d0 [8];

  long local_1c8;

  long *local_1c0;

  undefined8 local_190;

  bool local_181;

  undefined8 local_180;

  undefined8 local_178;

  long local_170;

  byte local_161;

  undefined8 local_160;

  byte local_151;

  undefined8 local_150;

  SEL local_148;

  ID local_140;

  undefined1 auStack_138 [128];

  undefined1 auStack_b8 [128];

  cfstringStruct *local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_148 = param_2;

  local_140 = param_1;

  uVar2 = _objc_msgSend_ready(param_1);

  local_151 = 0;

  local_161 = 0;

  bVar1 = true;

  if ((uVar2 & 1) != 0) {

    uVar2 = _objc_msgSend_cachedFeedShown(local_140,local_260);

    bVar1 = true;

    if ((uVar2 & 1) == 0) {

      _objc_msgSend_assetHandler(local_140,local_260);

      local_150 = _objc_retainAutoreleasedReturnValue();

      local_151 = 1;

      _objc_msgSend_root(local_150,local_260);

      local_160 = _objc_retainAutoreleasedReturnValue();

      local_161 = 1;

      lVar3 = _objc_msgSend_length(local_160,local_260);

      bVar1 = lVar3 == 0;

    }

  }

  if ((local_161 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_160);

  }

  if ((local_151 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_150);

  }

  if (!bVar1) {

    _objc_msgSend_setCachedFeedShown_(local_140,local_260,1);

    _objc_msgSend_assetHandler(local_140,local_260);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_root(uVar4,local_260);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_stringByAppendingPathComponent_(uVar5,local_260,&cf_feed_json);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_260);

    local_170 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_181 = false;

    bVar1 = local_170 == 0;

    if (bVar1) {

      local_290 = 0;

    }

    else {

      _objc_msgSend_JSONObjectWithData_options_error_

                (&_OBJC_CLASS___NSJSONSerialization,local_260,local_170,0,0);

      local_290 = _objc_retainAutoreleasedReturnValue();

      local_180 = local_290;

    }

    local_181 = !bVar1;

    local_178 = (*(code *)PTR__objc_retain_00110460)(local_290);

    if ((local_181 & 1U) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_180);

    }

    uVar4 = local_178;

    uVar5 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar2 = _objc_opt_isKindOfClass(uVar4,uVar5);

    if (((uVar2 & 1) != 0) && (lVar3 = _objc_msgSend_count(local_178,local_260), lVar3 != 0)) {

      local_38 = &cf_rows;

      uVar4 = _objc_msgSend_count(local_178,local_260);

      _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_260,uVar4);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      local_30 = uVar4;

      _objc_msgSend_dictionaryWithObjects_forKeys_count_

                (&_OBJC_CLASS___NSDictionary,local_260,&local_30,&local_38,1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _Trace(&cf_cache_snapshot);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _memset(auStack_1d0,0,0x40);

      uVar4 = (*(code *)PTR__objc_retain_00110460)(local_178);

      local_2d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar4,local_260,auStack_1d0,auStack_b8,0x10);

      if (local_2d8 != 0) {

        lVar3 = *local_1c0;

        local_2e0 = 0;

        do {

          do {

            if (*local_1c0 - lVar3 != 0) {

              _objc_enumerationMutation(*local_1c0 - lVar3,uVar4);

            }

            uVar6 = *(undefined8 *)(local_1c8 + local_2e0 * 8);

            local_190 = uVar6;

            uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

            uVar2 = _objc_opt_isKindOfClass(uVar6,uVar5);

            local_1d9 = 0;

            local_2fc = 0;

            if ((uVar2 & 1) != 0) {

              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_id);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              local_1d9 = 1;

              local_1d8 = uVar5;

              uVar6 = _objc_opt_class(&_OBJC_CLASS___NSString);

              local_2fc = _objc_opt_isKindOfClass(uVar5,uVar6);

            }

            if ((local_1d9 & 1) != 0) {

              (*(code *)PTR__objc_release_00110458)(local_1d8);

            }

            uVar5 = local_190;

            if ((local_2fc & 1) != 0) {

              _objc_msgSend_cachedRows(local_140,local_260);

              uVar6 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_id);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_setObject_forKeyedSubscript_(uVar6,local_260,uVar5);

              (*(code *)PTR__objc_release_00110458)(uVar7);

              (*(code *)PTR__objc_release_00110458)(uVar6);

              local_1e8 = _objc_msgSend_coverRevision(local_140,local_260);

              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_coverVersion);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              uVar2 = _objc_msgSend_unsignedIntegerValue(uVar5,local_260);

              (*(code *)PTR__objc_release_00110458)(uVar5);

              local_348 = uVar2;

              if (uVar2 <= local_1e8) {

                local_348 = local_1e8;

              }

              local_1f8 = local_348;

              local_1f0 = uVar2;

              _objc_msgSend_setCoverRevision_(local_140,local_260,local_348);

              _objc_msgSend_rowOrder(local_140,local_260);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_id);

              uVar6 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_addObject_(uVar5,local_260);

              (*(code *)PTR__objc_release_00110458)(uVar6);

              (*(code *)PTR__objc_release_00110458)(uVar5);

            }

            local_2e0 = local_2e0 + 1;

          } while (local_2e0 < local_2d8);

          local_2d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                (uVar4,local_260,auStack_1d0,auStack_b8,0x10);

          local_2e0 = 0;

        } while (local_2d8 != 0);

      }

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _objc_msgSend_syncHiddenUsers(local_140,local_260);

      local_200 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

      _memset(auStack_248,0,0x40);

      _objc_msgSend_rowOrder(local_140,local_260);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      local_378 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar4,local_260,auStack_248,auStack_138,0x10);

      if (local_378 != 0) {

        lVar3 = *local_238;

        local_380 = 0;

        do {

          do {

            if (*local_238 - lVar3 != 0) {

              _objc_enumerationMutation(*local_238 - lVar3,uVar4);

            }

            local_208 = *(undefined8 *)(local_240 + local_380 * 8);

            _objc_msgSend_cachedRows(local_140,local_260);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_objectForKeyedSubscript_(uVar5,local_260,local_208);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            (*(code *)PTR__objc_release_00110458)();

            (*(code *)PTR__objc_release_00110458)(uVar5);

            uVar5 = local_200;

            if (lVar8 != 0) {

              _objc_msgSend_cachedRows(local_140,local_260);

              uVar6 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_objectForKeyedSubscript_(uVar6,local_260,local_208);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_addObject_(uVar5,local_260);

              (*(code *)PTR__objc_release_00110458)(uVar7);

              (*(code *)PTR__objc_release_00110458)(uVar6);

            }

            local_380 = local_380 + 1;

          } while (local_380 < local_378);

          local_378 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                (uVar4,local_260,auStack_248,auStack_138,0x10);

          local_380 = 0;

        } while (local_378 != 0);

      }

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _objc_msgSend_dataWithJSONObject_options_error_

                (&_OBJC_CLASS___NSJSONSerialization,local_260,local_200,0);

      local_250 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_alloc(&_OBJC_CLASS___NSString);

      uVar4 = _objc_msgSend_initWithData_encoding_(uVar4,local_260,local_250,4);

      _objc_msgSend_setLastJSON_(local_140,local_260);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _objc_msgSend_web(local_140,local_260);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_lastJSON(local_140,local_260);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_260,&cf_setFeed____);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_evaluateJavaScript_completionHandler_(uVar4,local_260,uVar6,0);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _objc_storeStrong(&local_250,0);

      _objc_storeStrong(&local_200,0);

    }

    _objc_storeStrong(&local_178);

    _objc_storeStrong(&local_170,0);

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

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






// ---- [d2] syncHiddenUsers @0x442a4 ----
// CALLERS: showCachedFeed, start, _objc_msgSend$syncHiddenUsers
// CALLEES: _Service, facade, facade, facade, facade, hiddenUsers, setHiddenUsers:, permissionRequests, cachedRows


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::syncHiddenUsers(ID param_1,SEL param_2)



{

  byte bVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  undefined *puVar7;

  cfstringStruct *pcVar8;

  uint uVar9;

  long lVar10;

  undefined8 uVar11;

  cfstringStruct *local_5a8;

  ulong local_570;

  ulong local_568;

  ulong local_510;

  ulong local_508;

  long local_4e8;

  ulong local_4a0;

  ulong local_498;

  undefined *local_470;

  long local_450;

  ulong local_418;

  ulong local_410;

  undefined8 local_408;

  undefined8 local_3d8;

  byte local_3c9;

  undefined8 local_3c8;

  undefined1 auStack_3c0 [8];

  long local_3b8;

  long *local_3b0;

  undefined8 local_380;

  undefined4 local_374;

  undefined8 local_370;

  undefined1 auStack_368 [8];

  long local_360;

  long *local_358;

  undefined8 local_328;

  byte local_319;

  long local_318;

  undefined8 local_310;

  undefined1 auStack_308 [8];

  long local_300;

  long *local_2f8;

  undefined8 local_2c8;

  byte local_2b9;

  long local_2b8;

  undefined8 local_2b0;

  undefined1 auStack_2a8 [8];

  long local_2a0;

  long *local_298;

  undefined8 local_268;

  undefined8 local_260;

  undefined8 local_258;

  undefined8 local_250;

  SEL local_248;

  ID local_240;

  undefined1 auStack_238 [128];

  undefined8 local_1b8;

  cfstringStruct *local_1b0;

  undefined1 auStack_1a8 [128];

  undefined1 auStack_128 [128];

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_248 = param_2;

  local_240 = param_1;

  _Service(&cf_WCGroupMgr);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar3,&cf_getGroupByID_,&PTR__OBJC_CLASS___NSConstantArray_0010fa88);

  local_250 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _Call(local_250,&cf_memberList,PTR____NSArray0__struct_00110718);

  local_258 = _objc_retainAutoreleasedReturnValue();

  local_260 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

  uVar3 = local_258;

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

  if ((uVar5 & 1) != 0) {

    _memset(auStack_2a8,0,0x40);

    uVar3 = (*(code *)PTR__objc_retain_00110460)(local_258);

    local_410 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar3,local_408,auStack_2a8,auStack_a8,0x10);

    if (local_410 != 0) {

      lVar10 = *local_298;

      local_418 = 0;

      do {

        do {

          if (*local_298 - lVar10 != 0) {

            _objc_enumerationMutation(*local_298 - lVar10,uVar3);

          }

          uVar11 = *(undefined8 *)(local_2a0 + local_418 * 8);

          local_268 = uVar11;

          uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

          uVar5 = _objc_opt_isKindOfClass(uVar11,uVar4);

          if (((uVar5 & 1) != 0) && (lVar6 = _objc_msgSend_length(local_268,local_408), lVar6 != 0))

          {

            _objc_msgSend_addObject_(local_260,local_408,local_268);

          }

          local_418 = local_418 + 1;

        } while (local_418 < local_410);

        local_410 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar3,local_408,auStack_2a8,auStack_a8,0x10);

        local_418 = 0;

      } while (local_410 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  uVar3 = _objc_msgSend_mutableCopy(local_260,local_408);

  local_2b0 = uVar3;

  _objc_msgSend_hiddenUsers(local_240,local_408);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  local_2b9 = 0;

  local_450 = lVar10;

  if (lVar10 == 0) {

    _objc_msgSend_set(&_OBJC_CLASS___NSSet,local_408);

    local_2b8 = _objc_retainAutoreleasedReturnValue();

    local_450 = local_2b8;

  }

  local_2b9 = lVar10 == 0;

  _objc_msgSend_unionSet_(uVar3,local_408,local_450);

  if ((local_2b9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_2b8);

  }

  (*(code *)PTR__objc_release_00110458)(lVar10);

  uVar3 = local_2b0;

  _objc_msgSend_permissionRequests(local_240,local_408);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_allKeys(uVar4,local_408);

  puVar7 = (undefined *)_objc_retainAutoreleasedReturnValue();

  local_470 = puVar7;

  if (puVar7 == (undefined *)0x0) {

    local_470 = PTR____NSArray0__struct_00110718;

  }

  _objc_msgSend_addObjectsFromArray_(uVar3,local_408,local_470);

  (*(code *)PTR__objc_release_00110458)(puVar7);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _memset(auStack_308,0,0x40);

  _objc_msgSend_cachedRows(local_240,local_408);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_allValues(uVar3,local_408);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar3);

  local_498 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar4,local_408,auStack_308,auStack_128,0x10);

  if (local_498 != 0) {

    lVar10 = *local_2f8;

    local_4a0 = 0;

    do {

      do {

        if (*local_2f8 - lVar10 != 0) {

          _objc_enumerationMutation(*local_2f8 - lVar10,uVar4);

        }

        local_2c8 = *(undefined8 *)(local_300 + local_4a0 * 8);

        _objc_msgSend_objectForKeyedSubscript_(local_2c8,local_408,&cf_username);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        lVar6 = _objc_msgSend_length(uVar3,local_408);

        (*(code *)PTR__objc_release_00110458)(uVar3);

        uVar3 = local_2b0;

        if (lVar6 != 0) {

          _objc_msgSend_objectForKeyedSubscript_(local_2c8,local_408,&cf_username);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_addObject_(uVar3,local_408);

          (*(code *)PTR__objc_release_00110458)(uVar11);

        }

        local_4a0 = local_4a0 + 1;

      } while (local_4a0 < local_498);

      local_498 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar4,local_408,auStack_308,auStack_128,0x10);

      local_4a0 = 0;

    } while (local_498 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_facade(local_240,local_408);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  local_319 = 0;

  local_4e8 = lVar10;

  if (lVar10 == 0) {

    _Service(&cf_WCFacade);

    local_318 = _objc_retainAutoreleasedReturnValue();

    local_4e8 = local_318;

  }

  local_319 = lVar10 == 0;

  local_310 = (*(code *)PTR__objc_retain_00110460)(local_4e8);

  if ((local_319 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_318);

  }

  (*(code *)PTR__objc_release_00110458)(lVar10);

  _memset(auStack_368,0,0x40);

  uVar3 = (*(code *)PTR__objc_retain_00110460)(local_2b0);

  local_508 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar3,local_408,auStack_368,auStack_1a8,0x10);

  if (local_508 != 0) {

    lVar10 = *local_358;

    local_510 = 0;

    do {

      do {

        if (*local_358 - lVar10 != 0) {

          _objc_enumerationMutation(*local_358 - lVar10,uVar3);

        }

        uVar4 = local_310;

        local_328 = *(undefined8 *)(local_360 + local_510 * 8);

        local_1b0 = &cf_5;

        local_1b8 = local_328;

        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_408,&local_1b8,2);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        _Call(uVar4,&cf_isUserInGroup_GroupID_);

        local_370 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)(uVar11);

        uVar4 = local_370;

        uVar11 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

        uVar5 = _objc_opt_isKindOfClass(uVar4,uVar11);

        if ((uVar5 & 1) == 0) {

          local_374 = 7;

        }

        else {

          uVar5 = _objc_msgSend_boolValue(local_370,local_408);

          if ((uVar5 & 1) == 0) {

            _objc_msgSend_removeObject_(local_260,local_408,local_328);

          }

          else {

            _objc_msgSend_addObject_(local_260,local_408,local_328);

          }

          local_374 = 0;

        }

        _objc_storeStrong(&local_370,0);

        local_510 = local_510 + 1;

      } while (local_510 < local_508);

      local_508 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar3,local_408,auStack_368,auStack_1a8,0x10);

      local_510 = 0;

    } while (local_508 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_setHiddenUsers_(local_240,local_408,local_260);

  _memset(auStack_3c0,0,0x40);

  _objc_msgSend_cachedRows(local_240,local_408);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_allKeys(uVar3,local_408);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar3);

  local_568 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar4,local_408,auStack_3c0,auStack_238,0x10);

  if (local_568 != 0) {

    lVar10 = *local_3b0;

    local_570 = 0;

    do {

      do {

        if (*local_3b0 - lVar10 != 0) {

          _objc_enumerationMutation(*local_3b0 - lVar10,uVar4);

        }

        local_380 = *(undefined8 *)(local_3b8 + local_570 * 8);

        _objc_msgSend_cachedRows(local_240,local_408);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_objectForKeyedSubscript_(uVar3,local_408,local_380);

        local_3c8 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)(uVar3);

        uVar3 = local_260;

        _objc_msgSend_objectForKeyedSubscript_(local_3c8,local_408,&cf_username);

        pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        local_5a8 = pcVar8;

        if (pcVar8 == (cfstringStruct *)0x0) {

          local_5a8 = &cf___;

        }

        bVar1 = _objc_msgSend_containsObject_(uVar3,local_408,local_5a8);

        (*(code *)PTR__objc_release_00110458)(pcVar8);

        local_3c9 = bVar1;

        _objc_msgSend_objectForKeyedSubscript_(local_3c8,local_408,&cf_hidden);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        iVar2 = _objc_msgSend_boolValue(uVar3,local_408);

        uVar9 = (uint)local_3c9;

        (*(code *)PTR__objc_release_00110458)(uVar3);

        iVar2 = iVar2 - (uVar9 & 1);

        if (iVar2 != 0) {

          local_3d8 = _objc_msgSend_mutableCopy(iVar2,local_3c8,local_408);

          _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_408,local_3c9 & 1);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_setObject_forKeyedSubscript_(local_3d8,local_408,uVar3,&cf_hidden);

          (*(code *)PTR__objc_release_00110458)(uVar3);

          uVar3 = local_3d8;

          _objc_msgSend_cachedRows(local_240,local_408);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_setObject_forKeyedSubscript_(uVar11,local_408,uVar3,local_380);

          (*(code *)PTR__objc_release_00110458)(uVar11);

          _objc_storeStrong(&local_3d8,0);

        }

        _objc_storeStrong(&local_3c8,0);

        local_570 = local_570 + 1;

      } while (local_570 < local_568);

      local_568 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar4,local_408,auStack_3c0,auStack_238,0x10);

      local_570 = 0;

    } while (local_568 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_storeStrong(&local_310);

  _objc_storeStrong(&local_2b0,0);

  _objc_storeStrong(&local_260,0);

  _objc_storeStrong(&local_258,0);

  _objc_storeStrong(&local_250,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d2] applyHeaderBrand @0x4fdcc ----
// CALLERS: webView:didFinishNavigation:, start, saveHeaderText:, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke.2091, ___36-[WCMFeedController_customizeHeader]_block_invoke_3, _objc_msgSend$applyHeaderBrand
// CALLEES: headerBrandKey, web, ready


/* WARNING: Removing unreachable block (ram,0x000500a0) */

/* WARNING: Removing unreachable block (ram,0x000500b4) */

/* WARNING: Removing unreachable block (ram,0x000500b8) */

/* WARNING: Removing unreachable block (ram,0x000500c0) */

/* WARNING: Removing unreachable block (ram,0x000500d4) */

/* WARNING: Removing unreachable block (ram,0x000500d8) */

/* WARNING: Removing unreachable block (ram,0x000500e4) */

/* WARNING: Removing unreachable block (ram,0x000500ec) */

/* WARNING: Removing unreachable block (ram,0x0004ffec) */

/* WARNING: Removing unreachable block (ram,0x00050008) */

/* WARNING: Removing unreachable block (ram,0x0005000c) */

/* WARNING: Removing unreachable block (ram,0x00050014) */

/* WARNING: Removing unreachable block (ram,0x00050028) */

/* WARNING: Removing unreachable block (ram,0x0005002c) */

/* WARNING: Removing unreachable block (ram,0x00050038) */

/* WARNING: Removing unreachable block (ram,0x00050040) */

/* Function Stack Size: 0x10 bytes */



void WCMFeedController::applyHeaderBrand(ID param_1,SEL param_2)



{

  bool bVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  double dVar6;

  cfstringStruct *local_198;

  cfstringStruct *local_190;

  double local_180;

  double local_178;

  undefined8 local_148;

  undefined8 local_128;

  long local_118;

  undefined8 local_110;

  bool local_101;

  cfstringStruct *local_100;

  byte local_f1;

  undefined8 local_f0;

  double local_e8;

  double local_e0;

  double local_d8;

  undefined8 local_d0;

  double local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  double local_b0;

  bool local_a1;

  undefined8 local_a0;

  long local_98;

  cfstringStruct *local_90;

  undefined8 local_88;

  SEL local_80;

  ID local_78;

  double local_68;

  cfstringStruct *local_58;

  cfstringStruct *local_50;

  cfstringStruct *local_48;

  undefined8 local_40;

  cfstringStruct *local_38;

  cfstringStruct *local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_80 = param_2;

  local_78 = param_1;

  uVar2 = _objc_msgSend_ready(param_1);

  if ((uVar2 & 1) != 0) {

    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_128);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_headerBrandKey(local_78,local_128);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_dictionaryForKey_(uVar3,local_128);

    local_88 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_text);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _Text();

    local_90 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_png);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSData);

    uVar2 = _objc_opt_isKindOfClass(uVar3,uVar4);

    local_a1 = false;

    bVar1 = (uVar2 & 1) == 0;

    if (bVar1) {

      local_148 = 0;

    }

    else {

      _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_png);

      local_148 = _objc_retainAutoreleasedReturnValue();

      local_a0 = local_148;

    }

    local_a1 = !bVar1;

    local_98 = (*(code *)PTR__objc_retain_00110460)(local_148);

    if ((local_a1 & 1U) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_a0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_scale);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    dVar6 = (double)_objc_msgSend_doubleValue(uVar3,local_128);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    if ((ABS(dVar6) == INFINITY) || (local_b0 = dVar6, dVar6 <= 0.0)) {

      local_b0 = 1.0;

    }

    local_58 = &cf_scale;

    local_c0 = 0x3fe3333333333333;

    local_d0 = 0x3ff6666666666666;

    local_d8 = local_b0;

    if (local_b0 <= 1.4) {

      local_178 = local_b0;

    }

    else {

      local_178 = 1.4;

    }

    local_e0 = local_178;

    local_c8 = local_178;

    if (local_178 <= 0.6) {

      local_180 = 0.6;

    }

    else {

      local_180 = local_178;

    }

    local_e8 = local_180;

    local_68 = dVar6;

    _objc_msgSend_numberWithDouble_(local_180,&_OBJC_CLASS___NSNumber,local_128);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_50 = &cf_text;

    local_40 = uVar3;

    lVar5 = _objc_msgSend_length(local_90,local_128);

    if (lVar5 == 0) {

      local_190 = &cf_gSW;

    }

    else {

      local_190 = local_90;

    }

    local_38 = local_190;

    local_48 = &cf_image;

    local_f1 = 0;

    local_101 = false;

    bVar1 = local_98 == 0;

    if (bVar1) {

      local_198 = &cf___;

    }

    else {

      _objc_msgSend_base64EncodedStringWithOptions_(local_98,local_128,0);

      local_f0 = _objc_retainAutoreleasedReturnValue();

      local_f1 = 1;

      _objc_msgSend_stringByAppendingString_(&cf_data_image_png_base64_,local_128);

      local_198 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      local_100 = local_198;

    }

    local_101 = !bVar1;

    local_30 = local_198;

    _objc_msgSend_dictionaryWithObjects_forKeys_count_

              (&_OBJC_CLASS___NSDictionary,local_128,&local_40,&local_58,3);

    local_b8 = _objc_retainAutoreleasedReturnValue();

    if ((local_101 & 1U) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_100);

    }

    if ((local_f1 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_f0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_dataWithJSONObject_options_error_

              (&_OBJC_CLASS___NSJSONSerialization,local_128,local_b8,0,0);

    local_110 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);

    local_118 = _objc_msgSend_initWithData_encoding_(uVar3,local_128,local_110,4);

    if (local_118 != 0) {

      _objc_msgSend_web(local_78,local_128);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_128,&cf_setHeaderBrand____);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_evaluateJavaScript_completionHandler_(uVar3,local_128,uVar4,0);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    _objc_storeStrong(&local_118);

    _objc_storeStrong(&local_110,0);

    _objc_storeStrong(&local_b8,0);

    _objc_storeStrong(&local_98,0);

    _objc_storeStrong(&local_90,0);

    _objc_storeStrong(&local_88,0);

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

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






// ---- [d2] setItems: @0x5921c ----
// CALLERS: viewDidLoad, start, _objc_msgSend$setItems:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setItems_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_items,param_3);

  return;

}






// ---- [d2] images @0x59258 ----
// CALLERS: viewDidLoad, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke_3, userContentController:didReceiveScriptMessage:, -[UIImage(WCMYYImageCoder)_wcm_yy_isDecodedForDisplay], _objc_msgSend$images
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::images(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_images);

}






// ---- [d2] account @0x592b8 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d2] setAccount: @0x592dc ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, start, _objc_msgSend$setAccount:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_account);

  return;

}






// ---- [d2] setLastJSON: @0x5933c ----
// CALLERS: showCachedFeed, webViewWebContentProcessDidTerminate:, start, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, _objc_msgSend$setLastJSON:
// CALLEES: lastJSON


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastJSON_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_lastJSON);

  return;

}






// ---- [d2] setBridgeRows: @0x5939c ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, _objc_msgSend$setBridgeRows:
// CALLEES: bridgeRows


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setBridgeRows_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_bridgeRows,param_3);

  return;

}






// ---- [d2] setLatestFeedSnapshot: @0x5945c ----
// CALLERS: start, _objc_msgSend$setLatestFeedSnapshot:
// CALLEES: latestFeedSnapshot


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLatestFeedSnapshot_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_latestFeedSnapshot,param_3);

  return;

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






// ---- [d2] setPendingFeedPreferLatest: @0x59524 ----
// CALLERS: start, publishPendingFeed, _objc_msgSend$setPendingFeedPreferLatest:
// CALLEES: pendingFeedPreferLatest


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setPendingFeedPreferLatest_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_pendingFeedPreferLatest) = (byte)param_3 & 1;

  return;

}






// ---- [d2] setBridgeBusy: @0x59580 ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, publishPendingFeed, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, _objc_msgSend$setBridgeBusy:
// CALLEES: bridgeBusy


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setBridgeBusy_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_bridgeBusy) = (byte)param_3 & 1;

  return;

}






// ---- [d2] bridgeGeneration @0x595b0 ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, publishPendingFeed, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, setBridgeGeneration:, _objc_msgSend$bridgeGeneration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::bridgeGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bridgeGeneration);

}






// ---- [d2] setBridgeGeneration: @0x595d4 ----
// CALLERS: webViewWebContentProcessDidTerminate:, start, _objc_msgSend$setBridgeGeneration:
// CALLEES: bridgeGeneration


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setBridgeGeneration_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_bridgeGeneration) = param_3;

  return;

}






// ---- [d2] nativeContentByID @0x596a0 ----
// CALLERS: start, setNativeContentByID:, .cxx_destruct, _objc_msgSend$nativeContentByID
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeContentByID(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeContentByID);

}






// ---- [d2] nativeMediaByID @0x59700 ----
// CALLERS: start, videoQueueRows, setNativeMediaByID:, .cxx_destruct, _objc_msgSend$nativeMediaByID
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeMediaByID(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeMediaByID);

}






// ---- [d2] rowOrder @0x59760 ----
// CALLERS: showCachedFeed, start, videoQueueRows, setRowOrder:, .cxx_destruct, _objc_msgSend$rowOrder
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::rowOrder(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_rowOrder);

}






// ---- [d2] setHiddenUsers: @0x597e4 ----
// CALLERS: start, syncHiddenUsers, _objc_msgSend$setHiddenUsers:
// CALLEES: hiddenUsers


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setHiddenUsers_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_hiddenUsers,param_3);

  return;

}






// ---- [d2] setPermissionRequests: @0x59944 ----
// CALLERS: start, setUser:hidden:, _objc_msgSend$setPermissionRequests:
// CALLEES: permissionRequests


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPermissionRequests_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_permissionRequests,param_3);

  return;

}






// ---- [d2] itemMediaKeys @0x599dc ----
// CALLERS: start, setItemMediaKeys:, .cxx_destruct, _objc_msgSend$itemMediaKeys
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::itemMediaKeys(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_itemMediaKeys);

}






// ---- [d2] mediaTargets @0x59a3c ----
// CALLERS: start, setMediaTargets:, .cxx_destruct, _objc_msgSend$mediaTargets
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::mediaTargets(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_mediaTargets);

}






// ---- [d2] setLastSeenCreateTime: @0x59ac0 ----
// CALLERS: start, acknowledgeSeenItems, _objc_msgSend$setLastSeenCreateTime:
// CALLEES: lastSeenCreateTime


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setLastSeenCreateTime_(ID param_1,SEL param_2,unsigned_int param_3)



{

  *(unsigned_int *)(param_1 + (long)_lastSeenCreateTime) = param_3;

  return;

}






// ---- [d2] setLastSeenItemID: @0x59b10 ----
// CALLERS: start, acknowledgeSeenItems, _objc_msgSend$setLastSeenItemID:
// CALLEES: lastSeenItemID


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastSeenItemID_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_lastSeenItemID);

  return;

}






// ---- [d2] setPendingSeenIDs: @0x59b70 ----
// CALLERS: start, acknowledgeSeenItems, userContentController:didReceiveScriptMessage:, _objc_msgSend$setPendingSeenIDs:
// CALLEES: pendingSeenIDs


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPendingSeenIDs_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_pendingSeenIDs);

  return;

}






// ---- [d2] setLimit: @0x59bd0 ----
// CALLERS: viewDidLoad, finishTailWait, start, requestTimelineMore, _objc_msgSend$setLimit:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLimit_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_limit) = param_3;

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






// ---- [d2] following @0x59e74 ----
// CALLERS: followingKey, toggleFollowing:, start, ___31-[WCMFeedController_openVideo:]_block_invoke.2157, setFollowing:, .cxx_destruct, _objc_msgSend$following, _objc_msgSend$followingKey
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::following(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_following);

}






// ---- [d2] setFollowing: @0x59e98 ----
// CALLERS: viewDidLoad, start, _objc_msgSend$setFollowing:
// CALLEES: following


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setFollowing_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_following,param_3);

  return;

}






// ---- [d2] avatars @0x59ed4 ----
// CALLERS: viewDidLoad, start, _objc_msgSend$avatars
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::avatars(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_avatars);

}






// ---- [d2] requestedAvatars @0x59f34 ----
// CALLERS: start, setRequestedAvatars:, .cxx_destruct, _objc_msgSend$requestedAvatars
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::requestedAvatars(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_requestedAvatars);

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






// ---- [d2] setExhausted: @0x5a01c ----
// CALLERS: refreshHead, noMore:, start, _objc_msgSend$setExhausted:
// CALLEES: exhausted


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setExhausted_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_exhausted) = (byte)param_3 & 1;

  return;

}






// ---- [d2] setTailRetryRequired: @0x5a118 ----
// CALLERS: refreshHead, noMore:, finishTailWait, start, requestTimelineMore, _objc_msgSend$setTailRetryRequired:
// CALLEES: tailRetryRequired


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setTailRetryRequired_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_tailRetryRequired) = (byte)param_3 & 1;

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






// ---- [d2] visibleIDs @0x5a198 ----
// CALLERS: start, userContentController:didReceiveScriptMessage:, setVisibleIDs:, .cxx_destruct, _objc_msgSend$visibleIDs
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::visibleIDs(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_visibleIDs);

}






// ---- [d2] renderKeys @0x5a1f8 ----
// CALLERS: ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke_3, userContentController:didReceiveScriptMessage:, setRenderKeys:, .cxx_destruct, _objc_msgSend$renderKeys
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::renderKeys(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_renderKeys);

}






// ---- [d2] assetHandler @0x5a258 ----
// CALLERS: viewDidLoad, exportImage:nativePath:renderKey:mediaKey:quality:, showCachedFeed, extractVideoCover:mediaKey:, start, publishPendingFeed, openCacheManager, ___37-[WCMFeedController_openCacheManager]_block_invoke_3
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::assetHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_assetHandler);

}






// ---- [d2] videoRequests @0x5a2b8 ----
// CALLERS: extractVideoCover:mediaKey:, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke_3, setVideoRequests:, .cxx_destruct, _objc_msgSend$videoRequests
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::videoRequests(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_videoRequests);

}






// ---- [d2] setCachedFeedShown: @0x5a344 ----
// CALLERS: showCachedFeed, start, _objc_msgSend$setCachedFeedShown:
// CALLEES: cachedFeedShown


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setCachedFeedShown_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_cachedFeedShown) = (byte)param_3 & 1;

  return;

}






// ---- [d2] videoURIs @0x5a374 ----
// CALLERS: ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke_3, setVideoURIs:, .cxx_destruct, _objc_msgSend$videoURIs
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::videoURIs(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_videoURIs);

}






// ---- [d2] mediaRequestTimes @0x5a850 ----
// CALLERS: refreshHead, start, setMediaRequestTimes:, .cxx_destruct, _objc_msgSend$mediaRequestTimes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::mediaRequestTimes(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_mediaRequestTimes);

}






// ---- [d2] renderQualities @0x5a8b0 ----
// CALLERS: ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke_3, userContentController:didReceiveScriptMessage:, setRenderQualities:, .cxx_destruct, _objc_msgSend$renderQualities
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::renderQualities(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_renderQualities);

}






// ---- [d2] mediaQueue @0x5a96c ----
// CALLERS: viewDidLoad, exportImage:nativePath:renderKey:mediaKey:quality:, start, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, ___37-[WCMFeedController_openCacheManager]_block_invoke, ___37-[WCMFeedController_openCacheManager]_block_invoke_2, setMediaQueue:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::mediaQueue(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_mediaQueue);

}






// ---- [d2] previewQueue @0x5a9cc ----
// CALLERS: viewDidLoad, exportImage:nativePath:renderKey:mediaKey:quality:, start, ___37-[WCMFeedController_openCacheManager]_block_invoke, ___37-[WCMFeedController_openCacheManager]_block_invoke_2, setPreviewQueue:, .cxx_destruct, _objc_msgSend$previewQueue
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::previewQueue(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_previewQueue);

}






// ---- [d2] pendingExports @0x5aa2c ----
// CALLERS: traceState:, mediaFinished:, exportImage:nativePath:renderKey:mediaKey:quality:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke, setPendingExports:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingExports(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingExports);

}






// ---- [d2] pendingOriginalExports @0x5aa8c ----
// CALLERS: exportImage:nativePath:renderKey:mediaKey:quality:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke, setPendingOriginalExports:, .cxx_destruct, _objc_msgSend$pendingOriginalExports
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingOriginalExports(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingOriginalExports);

}






// ---- [d2] mediaGeneration @0x5aaec ----
// CALLERS: exportImage:nativePath:renderKey:mediaKey:quality:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke, setMediaGeneration:, _objc_msgSend$mediaGeneration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::mediaGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_mediaGeneration);

}






// ---- [d2] setMediaGeneration: @0x5ab10 ----
// CALLERS: start, ___37-[WCMFeedController_openCacheManager]_block_invoke, _objc_msgSend$setMediaGeneration:
// CALLEES: mediaGeneration


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setMediaGeneration_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_mediaGeneration) = param_3;

  return;

}






// ---- [d2] cachedRows @0x5ab3c ----
// CALLERS: traceState:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, toggleFollowing:, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, start, syncHiddenUsers, verifyHiddenUser:request:attempt:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::cachedRows(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cachedRows);

}






// ---- [d2] setMetadataRefreshPending: @0x5abc8 ----
// CALLERS: start, _objc_msgSend$setMetadataRefreshPending:
// CALLEES: metadataRefreshPending


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::setMetadataRefreshPending_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_metadataRefreshPending) = (byte)param_3 & 1;

  return;

}






// ---- [d2] mediaProbeTimes @0x5abf8 ----
// CALLERS: mediaFinished:, start, ___37-[WCMFeedController_openCacheManager]_block_invoke_3, setMediaProbeTimes:, .cxx_destruct, _objc_msgSend$mediaProbeTimes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::mediaProbeTimes(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_mediaProbeTimes);

}






// ---- [d2] setLastNativeListSync: @0x5b540 ----
// CALLERS: start, _objc_msgSend$setLastNativeListSync:
// CALLEES: lastNativeListSync


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastNativeListSync_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastNativeListSync) = param_3;

  return;

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






// ---- [d3] limit @0x59bac ----
// CALLERS: traceState:, requestTimelineMore, _objc_msgSend$limit
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMFeedController::limit(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_limit);

}






// ---- [d3] lastWebScrollTime @0x59650 ----
// CALLERS: isFeedScrolling, setLastWebScrollTime:, _objc_msgSend$lastWebScrollTime
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastWebScrollTime(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastWebScrollTime);

}






// ---- [d3] scrollView @0xbc040 ----
// CALLERS: scrollViewWillBeginDragging:, scrollViewDidEndDecelerating:, scrollViewDidEndDragging:willDecelerate:, isFeedScrolling, viewDidLoad, refreshPan:, dealloc, scrollViewDidScroll:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::scrollView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_scrollView);

}






// ---- [d3] finishRefreshWithSuccess: @0x3446c ----
// CALLERS: finishRefresh, timelineFinished:, ___32-[WCMFeedController_refreshHead]_block_invoke, _objc_msgSend$finishRefreshWithSuccess:
// CALLEES: finishWithSuccess:, cancelFeedback, qqShowingFeedback, finishRefresh, refreshControl, refreshingHead, setRefreshingHead:, refreshGeneration, setRefreshGeneration:


/* Function Stack Size: 0x14 bytes */



void WCMFeedController::finishRefreshWithSuccess_(ID param_1,SEL param_2,bool param_3)



{

  byte bVar1;

  uint uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 local_38;

  

  bVar1 = _objc_msgSend_refreshingHead(param_1);

  _objc_msgSend_setRefreshingHead_(param_1,local_38,0);

  lVar3 = _objc_msgSend_refreshGeneration(param_1,local_38);

  _objc_msgSend_setRefreshGeneration_(param_1,local_38,lVar3 + 1);

  if ((bVar1 & 1) == 0) {

    _objc_msgSend_refreshControl(param_1,local_38);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_msgSend_qqShowingFeedback(uVar4,local_38);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    if ((uVar2 & 1) == 0) {

      _objc_msgSend_refreshControl(param_1,local_38);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_cancelFeedback(uVar4,local_38);

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

  }

  else {

    _objc_msgSend_refreshControl(param_1,local_38);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_finishWithSuccess_(uVar4,local_38,param_3 & 1);

    (*(code *)PTR__objc_release_00110458)(uVar4);

  }

  return;

}






// ---- [d3] tailStartCount @0x5a04c ----
// CALLERS: finishTailWait, setTailStartCount:, _objc_msgSend$tailStartCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMFeedController::tailStartCount(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_tailStartCount);

}






// ---- [d3] tailPreviousLimit @0x5a09c ----
// CALLERS: finishTailWait, setTailPreviousLimit:, _objc_msgSend$tailPreviousLimit
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMFeedController::tailPreviousLimit(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_tailPreviousLimit);

}






// ---- [d3] items @0x591f8 ----
// CALLERS: openGallery:, videoQueueRows, ___31-[WCMFeedController_openVideo:]_block_invoke.2153, openNativeDetail:, acknowledgeSeenItems, userContentController:didReceiveScriptMessage:, _objc_msgSend$items
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::items(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_items);

}






// ---- [d3] lastSeenCreateTime @0x59a9c ----
// CALLERS: acknowledgeSeenItems, setLastSeenCreateTime:, _objc_msgSend$lastSeenCreateTime
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_int WCMFeedController::lastSeenCreateTime(ID param_1,SEL param_2)



{

  return *(unsigned_int *)(param_1 + (long)_lastSeenCreateTime);

}






// ---- [d3] lastSeenItemID @0x59aec ----
// CALLERS: acknowledgeSeenItems, setLastSeenItemID:, .cxx_destruct, _objc_msgSend$lastSeenItemID
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::lastSeenItemID(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_lastSeenItemID);

}






// ---- [d3] pendingSeenIDs @0x59b4c ----
// CALLERS: prepareNativeVideoEnvironment, acknowledgeSeenItems, setPendingSeenIDs:, .cxx_destruct, _objc_msgSend$pendingSeenIDs
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingSeenIDs(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingSeenIDs);

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






// ---- [d3] headOrderPending @0x5a7a4 ----
// CALLERS: setHeadOrderPending:, _objc_msgSend$headOrderPending
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::headOrderPending(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_headOrderPending) & 1;

}






// ---- [d3] ___CGSizeEqualToSize @0x1b4d0 ----
// CALLERS: viewDidLayoutSubviews, viewWillAppear:, viewWillTransitionToSize:withTransitionCoordinator:, isEqual:
// CALLEES: (叶)


bool ___CGSizeEqualToSize(double param_1,double param_2,double param_3,double param_4)



{

  return param_1 == param_3 && param_2 == param_4;

}






// ---- [d3] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d3] title @0xaf10c ----
// CALLERS: viewDidLayoutSubviews, showAspectRatioDialog, setTitle:, titleLabel, isEqual:, hash, _objc_msgSend$title
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerAspectRatioPreset::title(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d3] lastJSON @0x59318 ----
// CALLERS: webView:didFinishNavigation:, showCachedFeed, ___39-[WCMFeedController_publishPendingFeed]_block_invoke_2, setLastJSON:, .cxx_destruct, _objc_msgSend$lastJSON
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::lastJSON(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_lastJSON);

}






// ---- [d3] coverRevision @0x59600 ----
// CALLERS: ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, setCoverRevision:, _objc_msgSend$coverRevision
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::coverRevision(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_coverRevision);

}






// ---- [d3] setCoverRevision: @0x59624 ----
// CALLERS: ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, _objc_msgSend$setCoverRevision:
// CALLEES: coverRevision


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setCoverRevision_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_coverRevision) = param_3;

  return;

}






// ---- [d3] cachedFeedShown @0x5a318 ----
// CALLERS: showCachedFeed, setCachedFeedShown:, _objc_msgSend$cachedFeedShown
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::cachedFeedShown(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_cachedFeedShown) & 1;

}






// ---- [d3] hiddenUsers @0x597c0 ----
// CALLERS: syncHiddenUsers, verifyHiddenUser:request:attempt:, setHiddenUsers:, .cxx_destruct, _objc_msgSend$hiddenUsers
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::hiddenUsers(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_hiddenUsers);

}






// ---- [d3] permissionRequests @0x59920 ----
// CALLERS: syncHiddenUsers, verifyHiddenUser:request:attempt:, setUser:hidden:, setPermissionRequests:, .cxx_destruct, _objc_msgSend$permissionRequests
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::permissionRequests(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_permissionRequests);

}






// ---- [d3] headerBrandKey @0x4fd38 ----
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






// ---- [d3] bridgeRows @0x59378 ----
// CALLERS: publishPendingFeed, setBridgeRows:, .cxx_destruct, _objc_msgSend$bridgeRows
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::bridgeRows(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bridgeRows);

}






// ---- [d3] latestFeedSnapshot @0x59438 ----
// CALLERS: setLatestFeedSnapshot:, .cxx_destruct, _objc_msgSend$latestFeedSnapshot
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::latestFeedSnapshot(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_latestFeedSnapshot);

}






// ---- [d3] pendingFeedSnapshot @0x59498 ----
// CALLERS: publishPendingFeed, setPendingFeedSnapshot:, .cxx_destruct, _objc_msgSend$pendingFeedSnapshot
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingFeedSnapshot(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingFeedSnapshot);

}






// ---- [d3] pendingFeedPreferLatest @0x594f8 ----
// CALLERS: publishPendingFeed, setPendingFeedPreferLatest:, _objc_msgSend$pendingFeedPreferLatest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::pendingFeedPreferLatest(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_pendingFeedPreferLatest) & 1;

}






// ---- [d3] bridgeBusy @0x59554 ----
// CALLERS: publishPendingFeed, setBridgeBusy:, _objc_msgSend$bridgeBusy
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::bridgeBusy(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_bridgeBusy) & 1;

}






// ---- [d3] metadataRefreshPending @0x5ab9c ----
// CALLERS: setMetadataRefreshPending:, _objc_msgSend$metadataRefreshPending
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::metadataRefreshPending(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_metadataRefreshPending) & 1;

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






// ---- [d4] finishWithSuccess: @0x8bec ----
// CALLERS: finishRefreshWithSuccess:, _objc_msgSend$finishWithSuccess:
// CALLEES: positionIndicator, layoutIndicatorContent, drawRing:color:, qqMessageLabel, qqSymbolView, qqRingLayer, setQqShowingFeedback:, qqFeedbackGeneration, setQqFeedbackGeneration:, setImage:


/* Function Stack Size: 0x14 bytes */



void WCMQQRefreshControl::finishWithSuccess_(ID param_1,SEL param_2,bool param_3)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  ID IVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  dispatch_time_t dVar8;

  undefined8 local_1e0;

  undefined8 local_170;

  undefined8 local_130;

  undefined *local_118;

  undefined4 local_110;

  undefined4 local_10c;

  code *local_108;

  undefined *local_100;

  undefined1 auStack_f8 [8];

  long local_f0;

  undefined1 auStack_e8 [15];

  byte local_d9;

  undefined8 local_d8;

  byte local_c9;

  undefined8 local_c8;

  byte local_b9;

  undefined8 local_b8;

  byte local_a9;

  undefined8 local_a8;

  undefined1 auStack_a0 [48];

  undefined1 auStack_70 [48];

  long local_40;

  byte local_31;

  SEL local_30;

  ID local_28;

  

  local_31 = (byte)param_3;

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSend_positionIndicator(param_1);

  _objc_msgSend_setQqShowingFeedback_(local_28,local_130,1);

  IVar3 = local_28;

  lVar4 = _objc_msgSend_qqFeedbackGeneration(local_28,local_130);

  _objc_msgSend_setQqFeedbackGeneration_(IVar3,local_130);

  local_40 = lVar4 + 1;

  _objc_msgSend_qqRingLayer(local_28,local_130);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_removeAnimationForKey_(uVar5,local_130,&cf_refresh);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _memcpy(auStack_70,PTR__CGAffineTransformIdentity_00110738,0x30);

  _objc_msgSend_qqSymbolView(local_28,local_130);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _memcpy(auStack_a0,auStack_70,0x30);

  _objc_msgSend_setTransform_(uVar5,local_130,auStack_a0);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_qqSymbolView(local_28,local_130);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar5,local_130,0);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  local_a9 = 0;

  local_b9 = 0;

  if ((local_31 & 1) == 0) {

    _objc_msgSend_systemOrangeColor(&_OBJC_CLASS___UIColor,local_130);

    local_170 = _objc_retainAutoreleasedReturnValue();

    local_b9 = 1;

    local_b8 = local_170;

  }

  else {

    _objc_msgSend_systemGreenColor(&_OBJC_CLASS___UIColor,local_130);

    local_170 = _objc_retainAutoreleasedReturnValue();

    local_a9 = 1;

    local_a8 = local_170;

  }

  _objc_msgSend_qqSymbolView(local_28,local_130);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(uVar5,local_130,local_170);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  if ((local_b9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_b8);

  }

  if ((local_a9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_a8);

  }

  pcVar1 = &cf_checkmark;

  if ((local_31 & 1) == 0) {

    pcVar1 = &cf_exclamationmark;

  }

  _objc_msgSend_configurationWithPointSize_weight_

            (0x4024000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,local_130,6);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_withConfiguration_(&_OBJC_CLASS___UIImage,local_130,pcVar1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_qqSymbolView(local_28,local_130);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_(uVar7,local_130,uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  pcVar1 = &cf_7Re_b;

  if ((local_31 & 1) == 0) {

    pcVar1 = &cf_7Re_g_b;

  }

  _objc_msgSend_qqMessageLabel(local_28,local_130);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setText_(uVar5,local_130,pcVar1);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_layoutIndicatorContent(local_28,local_130);

  _objc_msgSend_qqMessageLabel(local_28,local_130);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_text(uVar5,local_130);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccessibilityLabel_(local_28,local_130);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  IVar3 = local_28;

  local_c9 = 0;

  local_d9 = 0;

  if ((local_31 & 1) == 0) {

    _objc_msgSend_systemOrangeColor(&_OBJC_CLASS___UIColor,local_130);

    local_1e0 = _objc_retainAutoreleasedReturnValue();

    local_d9 = 1;

    local_d8 = local_1e0;

  }

  else {

    _objc_msgSend_systemGreenColor(&_OBJC_CLASS___UIColor,local_130);

    local_1e0 = _objc_retainAutoreleasedReturnValue();

    local_c9 = 1;

    local_c8 = local_1e0;

  }

  _objc_msgSend_drawRing_color_(0x3ff0000000000000,IVar3,local_130,local_1e0);

  if ((local_d9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_d8);

  }

  if ((local_c9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_c8);

  }

  _objc_initWeak(auStack_e8,local_28);

  dVar8 = _dispatch_time(0,450000000);

  puVar2 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  uVar5 = _objc_retainAutoreleasedReturnValue(puVar2);

  local_118 = PTR___NSConcreteStackBlock_001104f0;

  local_110 = 0xc2000000;

  local_10c = 0;

  local_108 = ___41__WCMQQRefreshControl_finishWithSuccess___block_invoke;

  local_100 = &___block_descriptor_48_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_f8,auStack_e8);

  local_f0 = local_40;

  _dispatch_after(dVar8,uVar5,&local_118);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_destroyWeak(auStack_f8);

  _objc_destroyWeak(auStack_e8);

  return;

}






// ---- [d4] qqShowingFeedback @0x9820 ----
// CALLERS: setPullDistance:, setQqShowingFeedback:, finishRefreshWithSuccess:, _objc_msgSend$qqShowingFeedback
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMQQRefreshControl::qqShowingFeedback(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_qqShowingFeedback) & 1;

}






// ---- [d5] positionIndicator @0x7368 ----
// CALLERS: layoutSubviews, setPullDistance:, showLoading, finishWithSuccess:, _objc_msgSend$positionIndicator
// CALLEES: _CGPointMake, _CGRectMake, qqIndicatorView, qqSafeTop, fromView


/* Function Stack Size: 0x10 bytes */



void WCMQQRefreshControl::positionIndicator(ID param_1,SEL param_2)



{

  bool bVar1;

  ID IVar2;

  double dVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  double in_d3;

  double local_1d8;

  double local_1c8;

  undefined8 local_1c0;

  double local_1b8;

  undefined8 local_140;

  double dStack_138;

  long local_78;

  double local_70;

  undefined8 local_68;

  double local_48;

  int local_3c;

  double local_38;

  SEL local_30;

  ID local_28;

  

  local_3c = 0;

  local_30 = param_2;

  local_28 = param_1;

  local_68 = _objc_msgSend_bounds(param_1);

  local_48 = in_d3 - 64.0;

  local_1b8 = local_48;

  if (local_48 <= (double)(long)local_3c) {

    local_1b8 = (double)(long)local_3c;

  }

  local_70 = local_1b8;

  local_38 = local_1b8 + 28.0;

  _objc_msgSend_window(local_28,local_1c0);

  local_78 = _objc_retainAutoreleasedReturnValue();

  if (local_78 != 0) {

    local_1c8 = (double)_objc_msgSend_safeAreaInsets(local_78,local_1c0);

    dVar3 = (double)_objc_msgSend_qqSafeTop(local_28,local_1c0);

    IVar2 = local_28;

    if (local_1c8 < dVar3) {

      local_1c8 = dVar3;

    }

    local_1d8 = local_1c8 + 18.0;

    uVar4 = _CGPointMake(0);

    _objc_msgSend_convertPoint_fromView_(uVar4,IVar2,local_1c0,local_78);

    if (local_1d8 <= local_38) {

      local_1d8 = local_38;

    }

    local_38 = local_1d8;

  }

  dVar3 = 220.0;

  uVar5 = _CGRectMake(0);

  _objc_msgSend_qqIndicatorView(local_28,local_1c0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBounds_(uVar5,uVar4,local_1c0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_bounds(local_28,local_1c0);

  dStack_138 = local_38 + 32.0;

  local_140 = _CGPointMake(dVar3 / 2.0);

  bVar1 = false;

  if (local_78 != 0) {

    _objc_msgSend_qqIndicatorView(local_28,local_1c0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_superview(uVar4,local_1c0);

    IVar2 = _objc_retainAutoreleasedReturnValue();

    bVar1 = IVar2 != local_28;

    (*(code *)PTR__objc_release_00110458)(IVar2);

    (*(code *)PTR__objc_release_00110458)(uVar4);

  }

  IVar2 = local_28;

  if (bVar1) {

    _objc_msgSend_qqIndicatorView(local_28,local_1c0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_superview(uVar4,local_1c0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_140 = _objc_msgSend_convertPoint_toView_(local_140,IVar2,local_1c0);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

  }

  _objc_msgSend_qqIndicatorView(local_28,local_1c0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCenter_(local_140,dStack_138,uVar4,local_1c0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_storeStrong(&local_78,0);

  return;

}






// ---- [d5] layoutIndicatorContent @0x7848 ----
// CALLERS: layoutSubviews, setPullDistance:, showLoading, finishWithSuccess:, _objc_msgSend$layoutIndicatorContent
// CALLEES: _CGPointMake, _CGRectMake, _CGSizeMake, qqMessageLabel, qqSymbolView, qqRingLayer, setFrame:


/* Function Stack Size: 0x10 bytes */



void WCMQQRefreshControl::layoutIndicatorContent(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 local_150;

  

  _objc_msgSend_qqMessageLabel(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _CGSizeMake(0x4066800000000000);

  dVar3 = (double)_objc_msgSend_sizeThatFits_(uVar2,uVar1,local_150);

  dVar3 = (double)(long)dVar3;

  (*(code *)PTR__objc_release_00110458)(uVar1);

  dVar4 = (191.0 - dVar3) / 2.0;

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_150);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_150,1);

  uVar7 = 0x4036000000000000;

  uVar6 = 0x4010000000000000;

  uVar1 = uVar7;

  uVar5 = _CGRectMake(dVar4);

  _objc_msgSend_qqRingLayer(param_1,local_150);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFrame_(uVar5,uVar6,uVar7,uVar1,uVar2,local_150);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_150);

  uVar5 = 0;

  uVar7 = 0x402c000000000000;

  uVar6 = 0x402c000000000000;

  uVar2 = _CGRectMake(0);

  _objc_msgSend_qqSymbolView(param_1,local_150);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBounds_(uVar2,uVar5,uVar6,uVar7,uVar1,local_150);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar5 = 0x402e000000000000;

  uVar2 = _CGPointMake(dVar4 + 11.0);

  _objc_msgSend_qqSymbolView(param_1,local_150);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCenter_(uVar2,uVar5,uVar1,local_150);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar5 = 0x4010000000000000;

  uVar6 = 0x4036000000000000;

  uVar2 = _CGRectMake(dVar4 + 29.0);

  _objc_msgSend_qqMessageLabel(param_1,local_150);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFrame_(uVar2,uVar5,dVar3,uVar6,uVar1,local_150);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- [d5] drawRing:color: @0x7c14 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, _objc_msgSend$drawRing:color:
// CALLEES: _CGPointMake, qqRingLayer


/* Function Stack Size: 0x20 bytes */



void WCMQQRefreshControl::drawRing_color_(ID param_1,SEL param_2,double param_3,ID param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  double local_118;

  double local_110;

  undefined8 local_a8;

  undefined8 local_48;

  undefined8 local_40;

  double local_38;

  SEL local_30;

  ID local_28;

  

  local_40 = 0;

  local_38 = param_3;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_40,param_4);

  uVar3 = 0x4026000000000000;

  uVar2 = _CGPointMake(0x4026000000000000);

  _objc_msgSend_bezierPathWithArcCenter_radius_startAngle_endAngle_clockwise_

            (uVar2,uVar3,0x4022000000000000,0xbff921fb54442d18,0x4012d97c7f3321d2,

             &_OBJC_CLASS___UIBezierPath,local_a8,1);

  local_48 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_a8);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_a8,1);

  uVar2 = local_48;

  _objc_retainAutorelease();

  uVar2 = _objc_msgSend_CGPath(uVar2,local_a8);

  _objc_msgSend_qqRingLayer(local_28,local_a8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPath_(uVar3,local_a8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_retainAutorelease();

  uVar3 = _objc_msgSend_CGColor(uVar2,local_a8);

  _objc_msgSend_qqRingLayer(local_28,local_a8);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFillColor_(uVar1,local_a8,uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = local_40;

  _objc_retainAutorelease();

  uVar2 = _objc_msgSend_CGColor(uVar2,local_a8);

  _objc_msgSend_qqRingLayer(local_28,local_a8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setStrokeColor_(uVar3,local_a8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_qqRingLayer(local_28,local_a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLineWidth_(0x4004000000000000,uVar2,local_a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar3 = *(undefined8 *)PTR__kCALineCapRound_001101f8;

  _objc_msgSend_qqRingLayer(local_28,local_a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLineCap_(uVar2,local_a8,uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (local_38 <= 1.0) {

    local_110 = local_38;

  }

  else {

    local_110 = 1.0;

  }

  if (local_110 <= 0.03) {

    local_118 = 0.03;

  }

  else {

    local_118 = local_110;

  }

  _objc_msgSend_qqRingLayer(local_28,local_a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setStrokeEnd_(local_118,uVar2,local_a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_a8);

  _objc_storeStrong(&local_48);

  _objc_storeStrong(&local_40,0);

  return;

}






// ---- [d5] qqMessageLabel @0x96b0 ----
// CALLERS: init, layoutIndicatorContent, setPullDistance:, showLoading, finishWithSuccess:, setQqMessageLabel:, .cxx_destruct, _objc_msgSend$qqMessageLabel
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMQQRefreshControl::qqMessageLabel(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_qqMessageLabel);

}






// ---- [d5] qqSymbolView @0x9710 ----
// CALLERS: init, layoutIndicatorContent, setPullDistance:, showLoading, finishWithSuccess:, setQqSymbolView:, .cxx_destruct, _objc_msgSend$qqSymbolView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMQQRefreshControl::qqSymbolView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_qqSymbolView);

}






// ---- [d5] setImage: @0x7cf24 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setImage_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x78);

  return;

}






// ---- [d5] setImage: @0x934ac ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x48,param_3);

  return;

}






// ---- [d5] setImage: @0x9e194 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: image, image, setImage:withType:, image, image, image, image


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_image(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,1);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] setImage: @0xab96c ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d5] setImage: @0xac990 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOActivityCroppedImageProvider::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d5] setImage: @0xadc14 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewControllerTransitioning::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x10,param_3);

  return;

}






// ---- [d5] setImage: @0xbb800 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d6] _CGPointMake @0x77d0 ----
// CALLERS: positionIndicator, layoutIndicatorContent, drawRing:color:, _WCMSoftenMediaEdges, viewDidLayoutSubviews, viewDidAppear:, respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGPointMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d6] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d6] qqSafeTop @0x97d0 ----
// CALLERS: positionIndicator, setQqSafeTop:, viewDidLayoutSubviews, _objc_msgSend$qqSafeTop
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMQQRefreshControl::qqSafeTop(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_qqSafeTop);

}






// ---- [d6] fromView @0xadc48 ----
// CALLERS: positionIndicator, keyboard:, presentAnimatedFromParentViewController:fromView:fromFrame:setup:completion:, presentAnimatedFromParentViewController:fromImage:fromView:fromFrame:angle:toImageFrame:setup:completion:, ___132-[WCMTOCropViewController_presentAnimatedFromParentViewController:fromImage:fromView:fromFrame:angle:toImageFrame:setup:completion:]_block_invoke, ___107-[WCMTOCropViewController_animationControllerForPresentedController:presentingController:sourceController:]_block_invoke, animateTransition:, clampButtonFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::fromView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x18);

}






// ---- [d6] _CGSizeMake @0x7b08 ----
// CALLERS: layoutIndicatorContent, tableView:cellForRowAtIndexPath:, tableView:cellForRowAtIndexPath:, layoutSubviews, viewDidLoad, webView:didFinishNavigation:, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, ___39-[WCMFeedController_galleryPlaceholder]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGSizeMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d6] setFrame: @0xbd0e8 ----
// CALLERS: layoutIndicatorContent, layoutSubviews, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, containerViewWillLayoutSubviews, ___37-[WCMCommentPresentation_dragHeader:]_block_invoke, animateTransition:
// CALLEES: layoutLines, outerLineViews


/* Function Stack Size: 0x30 bytes */



void WCMTOCropOverlayView::setFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined8 local_58;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  ID local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_48 = &objc::class_t::WCMTOCropOverlayView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = param_1;

  _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"setFrame:");

  if (*(long *)(local_38 + (long)_outerLineViews) != 0) {

    _objc_msgSend_layoutLines(local_38,local_58);

  }

  return;

}






// ---- [d6] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d6] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d6] setImage:withType: @0x9e720 ----
// CALLERS: setImage:, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, initWithCoder:, _objc_msgSend$setImage:withType:
// CALLEES: setImage:, resetAnimated, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, imageChanged, stopAnimating


/* Function Stack Size: 0x20 bytes */



void WCMYYAnimatedImageView::setImage_withType_

               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)



{

  undefined8 local_78;

  ID local_70;

  class_t *local_68;

  ID local_60;

  class_t *local_58;

  ID local_50;

  class_t *local_48;

  ID local_40;

  class_t *local_38;

  unsigned_long_long local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_30 = param_4;

  _objc_msgSend_stopAnimating(local_18,local_78);

  if (*(long *)(local_18 + (long)_link) != 0) {

    _objc_msgSend_resetAnimated(local_18,local_78);

  }

  _objc_storeStrong(local_18 + (long)_curFrame,0);

  if (local_30 != 0) {

    if (local_30 == 1) {

      local_40 = local_18;

      local_38 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_40,"setImage:",local_28);

    }

    else if (local_30 == 2) {

      local_50 = local_18;

      local_48 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_50,"setHighlightedImage:",local_28);

    }

    else if (local_30 == 3) {

      local_60 = local_18;

      local_58 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_60,"setAnimationImages:",local_28);

    }

    else if (local_30 == 4) {

      local_70 = local_18;

      local_68 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_70,"setHighlightedAnimationImages:",local_28);

    }

  }

  _objc_msgSend_imageChanged(local_18,local_78);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d6] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d6] image @0xac96c ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOActivityCroppedImageProvider::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d6] image @0xadbf8 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d6] image @0xbb7dc ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d7] layoutLines @0xbd1e0 ----
// CALLERS: setFrame:, didMoveToSuperview, setDisplayHorizontalGridLines:, setDisplayVerticalGridLines:, _objc_msgSend$layoutLines
// CALLEES: setFrame:, horizontalGridLines, verticalGridLines, outerLineViews, topLeftLineViews, bottomLeftLineViews, bottomRightLineViews, topRightLineViews


/* Function Stack Size: 0x10 bytes */



void WCMTOCropOverlayView::layoutLines(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double in_d2;

  double dVar9;

  double in_d3;

  double local_4f0;

  undefined8 local_488;

  undefined8 local_3f0;

  long local_3e8;

  undefined8 local_3e0;

  double local_3d8;

  double local_3d0;

  double local_3c8;

  undefined8 local_3c0;

  double dStack_3b8;

  double local_3b0;

  double dStack_3a8;

  undefined8 local_3a0;

  double dStack_398;

  double local_390;

  double dStack_388;

  undefined8 local_380;

  double local_378;

  double local_370;

  double local_368;

  undefined8 local_360;

  double dStack_358;

  double local_350;

  double dStack_348;

  undefined8 local_340;

  long local_338;

  undefined8 local_330;

  double local_328;

  double local_320;

  double local_318;

  double local_310;

  long local_308;

  double local_300;

  double local_2f8;

  float local_2ec;

  double local_2e8;

  undefined8 local_2e0;

  double dStack_2d8;

  undefined8 local_2d0;

  undefined8 uStack_2c8;

  undefined8 local_2c0;

  double dStack_2b8;

  undefined8 local_2b0;

  undefined8 uStack_2a8;

  double local_2a0;

  double dStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  double local_280;

  double dStack_278;

  undefined8 local_270;

  undefined8 uStack_268;

  double local_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  double local_240;

  undefined8 uStack_238;

  undefined8 local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  double local_1e0;

  double dStack_1d8;

  double local_1d0;

  double dStack_1c8;

  double local_1c0;

  double dStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_198;

  long local_190;

  undefined8 local_188;

  double local_180;

  double dStack_178;

  double local_170;

  double dStack_168;

  double local_160;

  double dStack_158;

  double local_150;

  double dStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  double dStack_128;

  undefined8 local_120;

  double dStack_118;

  double local_110;

  undefined8 uStack_108;

  double local_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  double dStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  double local_d0;

  undefined8 uStack_c8;

  double local_c0;

  double dStack_b8;

  double local_b0;

  double dStack_a8;

  undefined8 local_a0;

  long local_98;

  undefined8 local_90;

  double local_70;

  double dStack_68;

  SEL local_58;

  ID local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_58 = param_2;

  local_50 = param_1;

  local_90 = _objc_msgSend_bounds(param_1);

  local_70 = in_d2;

  dStack_68 = in_d3;

  for (local_98 = 0; local_98 < 4; local_98 = local_98 + 1) {

    _objc_msgSend_outerLineViews(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_98);

    local_a0 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dStack_b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_c0 = *(double *)PTR__CGRectZero_001108d8;

    dStack_a8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_b0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    if (local_98 == 0) {

      local_e0 = 0xbff0000000000000;

      uStack_d8 = 0xbff0000000000000;

      local_d0 = local_70 + 2.0;

      uStack_c8 = 0x3ff0000000000000;

      dStack_b8 = -1.0;

      local_c0 = -1.0;

      dStack_a8 = 1.0;

      local_b0 = local_d0;

    }

    else if (local_98 == 1) {

      local_100 = local_70;

      uStack_f8 = 0;

      local_f0 = 0x3ff0000000000000;

      dStack_e8 = dStack_68;

      dStack_b8 = 0.0;

      local_c0 = local_70;

      dStack_a8 = dStack_68;

      local_b0 = 1.0;

    }

    else if (local_98 == 2) {

      local_120 = 0xbff0000000000000;

      dStack_118 = dStack_68;

      local_110 = local_70 + 2.0;

      uStack_108 = 0x3ff0000000000000;

      dStack_b8 = dStack_68;

      local_c0 = -1.0;

      dStack_a8 = 1.0;

      local_b0 = local_110;

    }

    else if (local_98 == 3) {

      local_140 = 0xbff0000000000000;

      uStack_138 = 0;

      local_130 = 0x3ff0000000000000;

      dStack_128 = dStack_68 + 1.0;

      dStack_b8 = 0.0;

      local_c0 = -1.0;

      local_b0 = 1.0;

      dStack_a8 = dStack_128;

    }

    dStack_158 = dStack_b8;

    local_160 = local_c0;

    dStack_148 = dStack_a8;

    local_150 = local_b0;

    dStack_178 = dStack_b8;

    local_180 = local_c0;

    dStack_168 = dStack_a8;

    local_170 = local_b0;

    in_d2 = local_b0;

    in_d3 = dStack_a8;

    _objc_msgSend_setFrame_(local_c0,dStack_b8,local_a0,local_488);

    _objc_storeStrong(&local_a0,0);

  }

  _objc_msgSend_topLeftLineViews(local_98 + -4,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar1;

  _objc_msgSend_topRightLineViews(local_50,local_488);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar2;

  _objc_msgSend_bottomRightLineViews(local_50,local_488);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_38 = uVar3;

  _objc_msgSend_bottomLeftLineViews(local_50,local_488);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar4;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_488,&local_48,4);

  local_188 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  for (local_190 = 0; local_190 < 4; local_190 = local_190 + 1) {

    _objc_msgSend_objectAtIndexedSubscript_(local_188,local_488,local_190);

    local_198 = _objc_retainAutoreleasedReturnValue();

    dStack_1b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_1c0 = *(double *)PTR__CGRectZero_001108d8;

    uStack_1a8 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18);

    local_1b0 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

    dStack_1d8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_1e0 = *(double *)PTR__CGRectZero_001108d8;

    dStack_1c8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_1d0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    if (local_190 == 0) {

      local_200 = 0xc008000000000000;

      uStack_1f8 = 0xc008000000000000;

      local_1f0 = 0x4008000000000000;

      uStack_1e8 = 0x4037000000000000;

      dStack_1b8 = -3.0;

      local_1c0 = -3.0;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_220 = 0;

      uStack_218 = 0xc008000000000000;

      local_210 = 0x4034000000000000;

      uStack_208 = 0x4008000000000000;

      dStack_1d8 = -3.0;

      local_1e0 = 0.0;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

    }

    else if (local_190 == 1) {

      local_240 = local_70;

      uStack_238 = 0xc008000000000000;

      local_230 = 0x4008000000000000;

      uStack_228 = 0x4037000000000000;

      dStack_1b8 = -3.0;

      local_1c0 = local_70;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_260 = local_70 - 20.0;

      uStack_258 = 0xc008000000000000;

      local_250 = 0x4034000000000000;

      uStack_248 = 0x4008000000000000;

      dStack_1d8 = -3.0;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

      local_1e0 = local_260;

    }

    else if (local_190 == 2) {

      local_280 = local_70;

      dStack_278 = dStack_68 - 20.0;

      local_270 = 0x4008000000000000;

      uStack_268 = 0x4037000000000000;

      local_1c0 = local_70;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_2a0 = local_70 - 20.0;

      dStack_298 = dStack_68;

      local_290 = 0x4034000000000000;

      uStack_288 = 0x4008000000000000;

      dStack_1d8 = dStack_68;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

      local_1e0 = local_2a0;

      dStack_1b8 = dStack_278;

    }

    else if (local_190 == 3) {

      local_2c0 = 0xc008000000000000;

      dStack_2b8 = dStack_68 - 20.0;

      local_2b0 = 0x4008000000000000;

      uStack_2a8 = 0x4034000000000000;

      local_1c0 = -3.0;

      uStack_1a8 = 0x4034000000000000;

      local_1b0 = 0x4008000000000000;

      local_2e0 = 0xc008000000000000;

      dStack_2d8 = dStack_68;

      local_2d0 = 0x4037000000000000;

      uStack_2c8 = 0x4008000000000000;

      dStack_1d8 = dStack_68;

      local_1e0 = -3.0;

      dStack_1c8 = 3.0;

      local_1d0 = 23.0;

      dStack_1b8 = dStack_2b8;

    }

    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFrame_(local_1c0,dStack_1b8,local_1b0,uStack_1a8,uVar1,local_488);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    in_d2 = local_1d0;

    in_d3 = dStack_1c8;

    _objc_msgSend_setFrame_(local_1e0,dStack_1d8,uVar1,local_488);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_198,0);

  }

  local_2ec = 1.0;

  _objc_msgSend_traitCollection(local_190 + -4,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  dVar6 = (double)_objc_msgSend_displayScale(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_4f0 = dVar6;

  if (dVar6 <= (double)local_2ec) {

    local_4f0 = (double)local_2ec;

  }

  local_300 = local_4f0;

  local_2e8 = 1.0 / local_4f0;

  local_2f8 = dVar6;

  _objc_msgSend_horizontalGridLines(local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar5 = _objc_msgSend_count(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_308 = lVar5;

  local_330 = _objc_msgSend_bounds(local_50,local_488);

  local_328 = local_4f0;

  local_320 = in_d2;

  local_318 = in_d3;

  dVar6 = (double)_CGRectGetHeight(local_330,local_4f0,in_d2);

  dVar8 = (double)(local_308 + 1);

  local_310 = (dVar6 - (double)local_308 * local_2e8) / dVar8;

  for (local_338 = 0; local_338 < local_308; local_338 = local_338 + 1) {

    _objc_msgSend_horizontalGridLines(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_338);

    local_340 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dStack_358 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_360 = *(undefined8 *)PTR__CGRectZero_001108d8;

    local_350 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    dStack_348 = local_2e8;

    local_380 = _objc_msgSend_bounds(local_50,local_488);

    local_378 = dVar8;

    local_370 = dVar6;

    local_368 = in_d3;

    dVar6 = (double)_CGRectGetWidth(local_380,dVar8,dVar6,in_d3);

    dVar8 = local_2e8 * (double)local_338 + (double)(local_338 + 1) * local_310;

    local_3a0 = local_360;

    dStack_388 = dStack_348;

    local_3c0 = local_360;

    dStack_3a8 = dStack_348;

    in_d3 = dStack_348;

    dStack_3b8 = dVar8;

    local_3b0 = dVar6;

    dStack_398 = dVar8;

    local_390 = dVar6;

    dStack_358 = dVar8;

    local_350 = dVar6;

    _objc_msgSend_setFrame_(local_360,local_340,local_488);

    _objc_storeStrong(&local_340,0);

  }

  _objc_msgSend_verticalGridLines(local_338 - local_308,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_308 = _objc_msgSend_count(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_3e0 = _objc_msgSend_bounds(local_50,local_488);

  local_3d8 = dVar8;

  local_3d0 = dVar6;

  local_3c8 = in_d3;

  dVar8 = (double)_CGRectGetWidth(local_3e0,dVar8,dVar6);

  local_310 = (dVar8 - (double)local_308 * local_2e8) / (double)(local_308 + 1);

  dVar6 = (double)(local_308 + 1);

  for (local_3e8 = 0; local_3e8 < local_308; local_3e8 = local_3e8 + 1) {

    _objc_msgSend_verticalGridLines(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_3e8);

    local_3f0 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dVar9 = local_2e8;

    dVar7 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    uVar1 = _objc_msgSend_bounds(local_50,local_488);

    in_d3 = (double)_CGRectGetHeight(uVar1,dVar6,dVar8,in_d3);

    _objc_msgSend_setFrame_

              (local_2e8 * (double)local_3e8 + (double)(local_3e8 + 1) * local_310,local_3f0,

               local_488);

    _objc_storeStrong(&local_3f0,0);

    dVar6 = dVar7;

    dVar8 = dVar9;

  }

  _objc_storeStrong(local_3e8 - local_308,&local_188,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d7] outerLineViews @0xbe9c0 ----
// CALLERS: setup, setFrame:, didMoveToSuperview, layoutLines, setOuterLineViews:, .cxx_destruct, _objc_msgSend$outerLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::outerLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_outerLineViews);

}






// ---- [d7] resetAnimated @0x9db04 ----
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






// ---- [d7] setHighlightedImage: @0x9e23c ----
// CALLERS: initWithImage:highlightedImage:, setImage:withType:, initWithCoder:, _objc_msgSend$setHighlightedImage:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedImage(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,2);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d7] setAnimationImages: @0x9e2e4 ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_animationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,3);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d7] setHighlightedAnimationImages: @0x9e38c ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedAnimationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,4);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d7] imageChanged @0x9e8c8 ----
// CALLERS: setHighlighted:, setImage:withType:, _objc_msgSend$imageChanged
// CALLEES: _CGRectMake, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount, animatedImageContentsRectAtIndex:, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::imageChanged(ID param_1,SEL param_2)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_100;

  byte local_49;

  ulong local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  local_38 = _objc_msgSend_currentImageType(param_1);

  _objc_msgSend_imageForType_(local_28,local_100,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_48 = 0;

  local_49 = 0;

  local_40 = uVar2;

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

  if ((((uVar4 & 1) != 0) &&

      (uVar4 = _objc_msgSend_conformsToProtocol_

                         (local_40,local_100,&objc::protocol_t::WCMYYAnimatedImage),

      (uVar4 & 1) != 0)) &&

     (local_48 = _objc_msgSend_animatedImageFrameCount(local_40,local_100), 1 < local_48)) {

    local_49 = _objc_opt_respondsToSelector(local_40,"animatedImageContentsRectAtIndex:");

    local_49 = local_49 & 1;

  }

  if ((local_49 == 0) && ((*(byte *)(local_28 + (long)_curImageHasContentsRect) & 1) != 0)) {

    _objc_msgSend_layer(local_28,local_100);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_msgSend_contentsRect(uVar2,local_100);

    _CGRectMake(0);

    uVar1 = _CGRectEqualToRect(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if ((uVar1 & 1) == 0) {

      _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_100);

      _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_100,1);

      in_d1 = 0;

      in_d3 = 0x3ff0000000000000;

      in_d2 = 0x3ff0000000000000;

      uVar3 = _CGRectMake(0);

      _objc_msgSend_layer(local_28,local_100);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setContentsRect_(uVar3,uVar2,local_100);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_100);

    }

  }

  *(byte *)(local_28 + (long)_curImageHasContentsRect) = local_49;

  if (local_49 != 0) {

    uVar2 = _objc_msgSend_animatedImageContentsRectAtIndex_(local_40,local_100,0);

    _objc_msgSend_setContentsRect_forImage_(uVar2,in_d1,in_d2,in_d3,local_28,local_100,local_40);

  }

  if (local_48 != 0 && local_48 - 1 != 0) {

    _objc_msgSend_resetAnimated(local_48 - 1,local_28,local_100);

    _objc_storeStrong(local_28 + (long)_curAnimatedImage,local_40);

    _objc_storeStrong(local_28 + (long)_curFrame,local_40);

    uVar2 = _objc_msgSend_animatedImageLoopCount

                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);

    *(undefined8 *)(local_28 + (long)_totalLoop) = uVar2;

    uVar2 = _objc_msgSend_animatedImageFrameCount

                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);

    *(undefined8 *)(local_28 + (long)_totalFrameCount) = uVar2;

    _objc_msgSend_calcMaxBufferCount(local_28,local_100);

  }

  _objc_msgSend_setNeedsDisplay(local_28,local_100);

  _objc_msgSend_didMoved(local_28,local_100);

  _objc_storeStrong(&local_40,0);

  return;

}






// ---- [d7] stopAnimating @0x9eff0 ----
// CALLERS: setImage:withType:, step:, didMoved, _objc_msgSend$stopAnimating
// CALLEES: setCurrentIsPlayingAnimation:


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::stopAnimating(ID param_1,SEL param_2)



{

  undefined8 local_38;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = &objc::class_t::WCMYYAnimatedImageView;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_30,"stopAnimating");

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_18 + (long)_requestQueue),local_38);

  _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_38,1);

  _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_38,0);

  return;

}






// ---- [d8] horizontalGridLines @0xbe900 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayHorizontalGridLines:, setHorizontalGridLines:, .cxx_destruct, _objc_msgSend$horizontalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::horizontalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_horizontalGridLines);

}






// ---- [d8] verticalGridLines @0xbe960 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayVerticalGridLines:, setVerticalGridLines:, .cxx_destruct, _objc_msgSend$verticalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::verticalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_verticalGridLines);

}






// ---- [d8] topLeftLineViews @0xbea20 ----
// CALLERS: setup, layoutLines, setTopLeftLineViews:, .cxx_destruct, _objc_msgSend$topLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topLeftLineViews);

}






// ---- [d8] bottomLeftLineViews @0xbea80 ----
// CALLERS: setup, layoutLines, setBottomLeftLineViews:, .cxx_destruct, _objc_msgSend$bottomLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomLeftLineViews);

}






// ---- [d8] bottomRightLineViews @0xbeae0 ----
// CALLERS: setup, layoutLines, setBottomRightLineViews:, .cxx_destruct, _objc_msgSend$bottomRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomRightLineViews);

}






// ---- [d8] topRightLineViews @0xbeb40 ----
// CALLERS: setup, layoutLines, setTopRightLineViews:, .cxx_destruct, _objc_msgSend$topRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topRightLineViews);

}






// ---- [d8] currentAnimatedImageIndex @0xa07cc ----
// CALLERS: resetAnimated, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, automaticallyNotifiesObserversForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentAnimatedImageIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_curIndex);

}






// ---- [d8] animatedImageFrameCount @0x69f4c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageLoopCount @0x69f84 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageFrameCount @0x8f170 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: contentRects


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  return uVar1;

}






// ---- [d8] animatedImageLoopCount @0x8f1a8 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d8] animatedImageContentsRectAtIndex: @0x8f2ac ----
// CALLERS: contentsRectForCALayerAtIndex:, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, _objc_msgSend$animatedImageContentsRectAtIndex:
// CALLEES: contentRects


/* Function Stack Size: 0x18 bytes */



CGRect WCMYYSpriteSheetImage::animatedImageContentsRectAtIndex_

                 (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  CGRect CVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 in_d2;

  double in_d3;

  undefined8 local_60;

  undefined8 local_30;

  undefined8 uStack_28;

  undefined8 local_20;

  double dStack_18;

  

  uVar2 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  if (param_3 < uVar2) {

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(param_1 + (long)_contentRects),local_60,param_3);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_30 = _objc_msgSend_CGRectValue(uVar3,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uStack_28 = in_d1;

    local_20 = in_d2;

    dStack_18 = in_d3;

  }

  else {

    uStack_28 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);

    local_30 = *(undefined8 *)PTR__CGRectZero_001108d8;

    dStack_18 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_20 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

  }

  CVar1.field0_0x0.field1_0x8 = (double)uStack_28;

  CVar1.field0_0x0.field0_0x0 = (double)local_30;

  CVar1.field1_0x10.field0_0x0 = (double)local_20;

  CVar1.field1_0x10.field1_0x8 = dStack_18;

  return CVar1;

}






// ---- [d8] animatedImageFrameCount @0x9087c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageLoopCount @0x908b4 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageFrameCount @0x9c370 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: imagePath, imageData


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  undefined8 local_30;

  undefined8 local_18;

  

  if (*(long *)(param_1 + (long)_imagePaths) == 0) {

    if (*(long *)(param_1 + (long)_imageDatas) == 0) {

      local_18 = 1;

    }

    else {

      local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imageDatas),local_30);

    }

  }

  else {

    local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imagePaths),local_30);

  }

  return local_18;

}






// ---- [d8] animatedImageLoopCount @0x9c410 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d8] conformsToProtocol: @0x9ce14 ----
// CALLERS: ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110, imageChanged, encodeWithCoder:, _objc_msgSend$conformsToProtocol:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



bool _YYImageWeakProxy::conformsToProtocol_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar2 = _objc_loadWeakRetained(local_18 + (long)_target);

  bVar1 = _objc_msgSend_conformsToProtocol_(uVar2,local_50,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return bVar1;

}






// ---- [d8] curImage @0x9d58c ----
// CALLERS: main, setCurImage:, .cxx_destruct, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::curImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_curImage);

}






// ---- [d8] imageForType: @0x9e4b8 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$imageForType:
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x18 bytes */



ID WCMYYAnimatedImageView::imageForType_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ID IVar1;

  undefined8 local_40;

  undefined8 local_18;

  

  if (param_3 == 0) {

    local_18 = 0;

  }

  else if (param_3 == 1) {

    _objc_msgSend_image(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 2) {

    _objc_msgSend_highlightedImage(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 3) {

    _objc_msgSend_animationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 4) {

    _objc_msgSend_highlightedAnimationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    local_18 = 0;

  }

  IVar1 = _objc_autoreleaseReturnValue(local_18);

  return IVar1;

}






// ---- [d8] currentImageType @0x9e5b0 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$currentImageType
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentImageType(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 local_40;

  undefined8 local_28;

  

  local_28 = 0;

  uVar1 = _objc_msgSend_isHighlighted(param_1);

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_highlightedAnimationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_highlightedImage(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 2;

      }

    }

    else {

      local_28 = 4;

    }

  }

  if (local_28 == 0) {

    _objc_msgSend_animationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_image(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 1;

      }

    }

    else {

      local_28 = 3;

    }

  }

  return local_28;

}






// ---- [d8] calcMaxBufferCount @0x9ecb0 ----
// CALLERS: main, imageChanged, _objc_msgSend$calcMaxBufferCount
// CALLEES: animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, maxBufferSize, __YYDeviceMemoryTotal, __YYDeviceMemoryFree


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::calcMaxBufferCount(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  ulong local_90;

  ulong local_88;

  double local_80;

  double local_78;

  ulong local_40;

  long local_28;

  

  local_28 = _objc_msgSend_animatedImageBytesPerFrame

                       (*(undefined8 *)(param_1 + (long)_curAnimatedImage));

  if (local_28 == 0) {

    local_28 = 0x400;

  }

  lVar1 = __YYDeviceMemoryTotal();

  lVar2 = __YYDeviceMemoryFree();

  local_80 = (double)lVar2 * 0.6;

  if ((double)lVar1 * 0.2 < local_80) {

    local_80 = (double)lVar1 * 0.2;

  }

  local_88 = (ulong)local_80;

  if ((long)local_88 < 0xa00000) {

    local_88 = 0xa00000;

  }

  local_40 = local_88;

  if (*(long *)(param_1 + (long)_maxBufferSize) != 0) {

    if (*(ulong *)(param_1 + (long)_maxBufferSize) < local_88) {

      local_90 = *(ulong *)(param_1 + (long)_maxBufferSize);

    }

    else {

      local_90 = local_88;

    }

    local_40 = local_90;

  }

  local_78 = (double)(long)local_40 / (double)local_28;

  if (1.0 <= local_78) {

    if (512.0 < local_78) {

      local_78 = 512.0;

    }

  }

  else {

    local_78 = 1.0;

  }

  *(long *)(param_1 + (long)_maxBufferCount) = (long)local_78;

  return;

}






// ---- [d8] setContentsRect:forImage: @0x9ffd8 ----
// CALLERS: imageChanged, step:, _objc_msgSend$setContentsRect:forImage:
// CALLEES: _CGRectMake, size


/* Function Stack Size: 0x38 bytes */



void WCMYYAnimatedImageView::setContentsRect_forImage_

               (ID param_1,SEL param_2,CGRect param_3,ID param_4)



{

  ulong uVar1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  undefined8 local_140;

  undefined8 local_80;

  double dStack_78;

  double local_70;

  double dStack_68;

  long local_58;

  SEL local_50;

  ID local_48;

  double local_40;

  double local_38;

  double local_30;

  double local_28;

  

  local_28 = param_3.field1_0x10.field1_0x8;

  local_30 = param_3.field1_0x10.field0_0x0;

  local_38 = param_3.field0_0x0.field1_0x8;

  local_40 = param_3.field0_0x0.field0_0x0;

  local_58 = 0;

  local_50 = param_2;

  local_48 = param_1;

  _objc_storeStrong(&local_58,param_4);

  dStack_78 = 0.0;

  dStack_68 = 1.0;

  local_70 = 1.0;

  local_80 = _CGRectMake(0);

  if (((local_58 != 0) &&

      (dVar5 = dStack_78, dVar3 = (double)_objc_msgSend_size(local_58,local_140), 0.01 < dVar3)) &&

     (0.01 < dVar5)) {

    dVar4 = local_40 / dVar3;

    dStack_78 = local_38 / dVar5;

    local_70 = local_30 / dVar3;

    dStack_68 = local_28 / dVar5;

    _CGRectMake(0);

    local_80 = _CGRectIntersection(dVar4);

    uVar1 = _CGRectIsNull(local_80,dStack_78,local_70,dStack_68);

    if (((uVar1 & 1) != 0) ||

       (uVar1 = _CGRectIsEmpty(local_80,dStack_78,local_70,dStack_68), (uVar1 & 1) != 0)) {

      dStack_78 = 0.0;

      dStack_68 = 1.0;

      local_70 = 1.0;

      local_80 = _CGRectMake(0);

    }

  }

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_140);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_140,1);

  _objc_msgSend_layer(local_48,local_140);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setContentsRect_(local_80,dStack_78,local_70,dStack_68,uVar2,local_140);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_140);

  _objc_storeStrong(&local_58,0);

  return;

}






// ---- [d8] didMoved @0xa026c ----
// CALLERS: imageChanged, didMoveToWindow, didMoveToSuperview, _objc_msgSend$didMoved
// CALLEES: stopAnimating, startAnimating, autoPlayAnimatedImage


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::didMoved(ID param_1,SEL param_2)



{

  bool bVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  undefined8 local_40;

  

  uVar2 = _objc_msgSend_autoPlayAnimatedImage(param_1);

  if ((uVar2 & 1) != 0) {

    _objc_msgSend_superview(param_1,local_40);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    bVar1 = false;

    if (lVar3 != 0) {

      _objc_msgSend_window(param_1,local_40);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      bVar1 = lVar4 != 0;

      (*(code *)PTR__objc_release_00110458)(lVar4);

    }

    (*(code *)PTR__objc_release_00110458)(lVar3);

    if (bVar1) {

      _objc_msgSend_startAnimating(param_1,local_40);

    }

    else {

      _objc_msgSend_stopAnimating(param_1,local_40);

    }

  }

  return;

}






// ---- [d8] setCurrentIsPlayingAnimation: @0xa1060 ----
// CALLERS: stopAnimating, startAnimating, _objc_msgSend$setCurrentIsPlayingAnimation:
// CALLEES: currentIsPlayingAnimation


/* Function Stack Size: 0x14 bytes */



void WCMYYAnimatedImageView::setCurrentIsPlayingAnimation_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_currentIsPlayingAnimation) = (byte)param_3 & 1;

  return;

}






// ---- [d9] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d9] loopCount @0x8f3c8 ----
// CALLERS: animatedImageLoopCount, initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, animatedImageLoopCount, animatedImageLoopCount, initWithImagePaths:oneFrameDuration:loopCount:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:oneFrameDuration:loopCount:, initWithImageDataArray:frameDurations:loopCount:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d9] loopCount @0x97748 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb8);

}






// ---- [d9] loopCount @0x9a214 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x28);

}






// ---- [d9] contentRects @0x8f380 ----
// CALLERS: initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, contentsRectForCALayerAtIndex:, animatedImageFrameCount, animatedImageContentsRectAtIndex:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYSpriteSheetImage::contentRects(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_contentRects);

}






// ---- [d9] imagePath @0x7ce60 ----
// CALLERS: loadData, loadYBImage, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameCount, animatedImageFrameAtIndex:, .cxx_destruct, _objc_msgSend$imagePath
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePath(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x68);

}






// ---- [d9] imageData @0x7ceb4 ----
// CALLERS: galleryImageData:, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, wcm_yb_imageData:downloadProgress:, loadData, loadOriginImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x70);

}






// ---- [d9] animatedImageBytesPerFrame @0x69fbc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d9] animatedImageBytesPerFrame @0x8f1cc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return 0;

}






// ---- [d9] animatedImageBytesPerFrame @0x908ec ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d9] animatedImageBytesPerFrame @0x9c434 ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_oneFrameBytes);

}






// ---- [d9] maxBufferSize @0xa10b4 ----
// CALLERS: calcMaxBufferCount, setMaxBufferSize:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::maxBufferSize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_maxBufferSize);

}






// ---- [d9] __YYDeviceMemoryTotal @0xa11d4 ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryTotal(void)



{

  undefined8 uVar1;

  undefined8 local_30;

  long local_18;

  

  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_18 = _objc_msgSend_physicalMemory(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (local_18 < -1) {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d9] __YYDeviceMemoryFree @0xa124c ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryFree(void)



{

  kern_return_t kVar1;

  uint local_64 [15];

  vm_size_t local_28;

  mach_msg_type_number_t local_20;

  host_t local_1c;

  long local_18;

  

  local_1c = _mach_host_self();

  local_20 = 0xf;

  kVar1 = _host_page_size(local_1c,&local_28);

  if (kVar1 == 0) {

    kVar1 = _host_statistics(local_1c,2,(host_info_t)local_64,&local_20);

    if (kVar1 == 0) {

      local_18 = local_64[0] * local_28;

    }

    else {

      local_18 = -1;

    }

  }

  else {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d9] startAnimating @0x9f080 ----
// CALLERS: didMoved, _objc_msgSend$startAnimating
// CALLEES: imageForType:, currentImageType, setCurrentIsPlayingAnimation:


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::startAnimating(ID param_1,SEL param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 local_48;

  ID local_40;

  class_t *local_38;

  undefined8 local_30;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  local_28 = _objc_msgSend_currentImageType(param_1);

  if ((local_28 == 3) || (local_28 == 4)) {

    _objc_msgSend_imageForType_(0,local_18,local_48,local_28);

    local_30 = _objc_retainAutoreleasedReturnValue();

    lVar1 = _objc_msgSend_count(local_30,local_48);

    if (lVar1 != 0) {

      local_40 = local_18;

      local_38 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_40,"startAnimating");

      _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);

    }

    _objc_storeStrong(&local_30,0);

  }

  else if ((*(long *)(local_18 + (long)_curAnimatedImage) != 0) &&

          (uVar2 = _objc_msgSend_isPaused(*(undefined8 *)(local_18 + (long)_link),local_48),

          (uVar2 & 1) != 0)) {

    *(undefined8 *)(local_18 + (long)_curLoop) = 0;

    *(undefined1 *)(local_18 + (long)_loopEnd) = 0;

    _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_48,0);

    _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);

  }

  return;

}






// ---- [d9] autoPlayAnimatedImage @0xa0fd8 ----
// CALLERS: init, initWithFrame:, initWithImage:, initWithImage:highlightedImage:, didMoved, initWithCoder:, encodeWithCoder:, setAutoPlayAnimatedImage:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::autoPlayAnimatedImage(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_autoPlayAnimatedImage) & 1;

}






// ---- [d9] currentIsPlayingAnimation @0xa1034 ----
// CALLERS: isAnimating, setCurrentIsPlayingAnimation:, _objc_msgSend$currentIsPlayingAnimation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::currentIsPlayingAnimation(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_currentIsPlayingAnimation) & 1;

}





