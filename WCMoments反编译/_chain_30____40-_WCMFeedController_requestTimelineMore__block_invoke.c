// ============ 功能链 30  根: ___40-[WCMFeedController_requestTimelineMore]_block_invoke @0x548c0 ============
// 节点 32，按调用深度排序，自上而下读

// ---- [d0] ___40-[WCMFeedController_requestTimelineMore]_block_invoke @0x548c0 ----
// CALLERS: (根)
// CALLEES: traceState:, finishTailWait, requestTimelineMore, loadingTail, pagingGeneration


void ___40__WCMFeedController_requestTimelineMore__block_invoke(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 local_48;

  uint local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  lVar2 = _objc_msgSend_pagingGeneration(uVar1,local_48);

  local_30 = 1;

  if (lVar2 == *(long *)(param_1 + 0x28)) {

    uVar3 = _objc_loadWeakRetained(param_1 + 0x20);

    local_30 = _objc_msgSend_loadingTail(uVar3,local_48);

    local_30 = local_30 ^ 1;

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if ((local_30 & 1) == 0) {

    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

    _objc_msgSend_traceState_(uVar1,local_48,&cf_tail_timeout);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

    _objc_msgSend_finishTailWait(uVar1,local_48);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  return;

}






// ---- [d1] traceState: @0x2f094 ----
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






// ---- [d1] finishTailWait @0x34fe4 ----
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






// ---- [d1] requestTimelineMore @0x5411c ----
// CALLERS: ___40-[WCMFeedController_requestTimelineMore]_block_invoke, ___31-[WCMFeedController_openVideo:]_block_invoke, userContentController:didReceiveScriptMessage:, _objc_msgSend$requestTimelineMore
// CALLEES: facade, facade, facade, traceState:, finishTailWait, syncPaging, facade, limit, setLimit:, loadingTail


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::requestTimelineMore(ID param_1,SEL param_2)



{

  undefined *puVar1;

  ID IVar2;

  bool bVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  dispatch_time_t dVar10;

  double dVar11;

  double dVar12;

  long local_1b8;

  long local_178;

  undefined8 local_120;

  undefined *local_110;

  undefined4 local_108;

  undefined4 local_104;

  code *local_100;

  undefined *local_f8;

  undefined1 auStack_f0 [8];

  long local_e8;

  undefined1 auStack_e0 [12];

  uint local_d4;

  undefined8 local_d0;

  long local_c8;

  long local_c0;

  long local_b8;

  long local_b0;

  long local_a8;

  long local_a0;

  long local_98;

  long local_90;

  byte local_81;

  long local_80;

  SEL local_78;

  ID local_70;

  cfstringStruct *local_68;

  cfstringStruct *local_60;

  undefined8 local_58;

  undefined8 local_50;

  cfstringStruct *local_48;

  cfstringStruct *local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_78 = param_2;

  local_70 = param_1;

  uVar4 = _objc_msgSend_initialHeadPending(param_1);

  local_81 = 0;

  bVar3 = true;

  if ((uVar4 & 1) == 0) {

    uVar4 = _objc_msgSend_refreshingHead(local_70,local_120);

    bVar3 = true;

    if ((uVar4 & 1) == 0) {

      uVar4 = _objc_msgSend_loadingTail(local_70,local_120);

      bVar3 = true;

      if ((uVar4 & 1) == 0) {

        uVar4 = _objc_msgSend_exhausted(local_70,local_120);

        bVar3 = true;

        if ((uVar4 & 1) == 0) {

          _objc_msgSend_facade(local_70,local_120);

          local_80 = _objc_retainAutoreleasedReturnValue();

          local_81 = 1;

          bVar3 = local_80 == 0;

        }

      }

    }

  }

  if ((local_81 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_80);

  }

  if (bVar3) {

    _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_120);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    dVar11 = (double)_objc_msgSend_systemUptime(uVar5,local_120);

    dVar12 = (double)_objc_msgSend_lastBlockedTrace(local_70,local_120);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    if (2.0 < dVar11 - dVar12) {

      _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_120);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_systemUptime(uVar5,local_120);

      _objc_msgSend_setLastBlockedTrace_(local_70,local_120);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_msgSend_traceState_(local_70,local_120,&cf_tail_blocked);

    }

    _objc_msgSend_syncPaging(local_70,local_120);

  }

  else {

    _objc_msgSend_facade(local_70,local_120);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar5,&cf_countOfTimelineDataItem,PTR____NSArray0__struct_00110718);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    lVar7 = _objc_msgSend_integerValue(uVar6,local_120);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    local_90 = lVar7;

    lVar8 = _objc_msgSend_limit(local_70,local_120);

    if (lVar7 - lVar8 == 0 || lVar7 < lVar8) {

      uVar5 = _objc_msgSend_limit(lVar7 - lVar8,local_70,local_120);

      _objc_msgSend_setTailPreviousLimit_(local_70,local_120,uVar5);

      local_b0 = local_90;

      local_b8 = _objc_msgSend_limit(local_70,local_120);

      local_1b8 = local_b8;

      if (local_b8 <= local_b0) {

        local_1b8 = local_b0;

      }

      local_c0 = local_1b8;

      _objc_msgSend_setLimit_(local_70,local_120,local_1b8 + 0x28);

      _objc_msgSend_setTailRetryRequired_(local_70,local_120,0);

      _objc_msgSend_setLoadingTail_(local_70,local_120,1);

      _objc_msgSend_setTailStartCount_(local_70,local_120,local_90);

      _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_120);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_timeIntervalSinceReferenceDate(uVar5,local_120);

      _objc_msgSend_setLastTailRequest_(local_70,local_120);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      IVar2 = local_70;

      lVar7 = _objc_msgSend_pagingGeneration(local_70,local_120);

      _objc_msgSend_setPagingGeneration_(IVar2,local_120);

      local_c8 = lVar7 + 1;

      _objc_msgSend_syncPaging(local_70,local_120);

      _objc_msgSend_traceState_(local_70,local_120,&cf_tail_request);

      _objc_msgSend_facade(local_70,local_120);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _Call(uVar5,&cf_updateTimelineTail,PTR____NSArray0__struct_00110718);

      local_d0 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar5);

      local_68 = &cf_accepted;

      uVar5 = _objc_msgSend_boolValue(local_d0,local_120);

      _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_120,uVar5);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_60 = &cf_count;

      local_58 = uVar5;

      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_120,local_90);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      local_50 = uVar6;

      _objc_msgSend_dictionaryWithObjects_forKeys_count_

                (&_OBJC_CLASS___NSDictionary,local_120,&local_58,&local_68,2);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _Trace(&cf_tail_request_result);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      uVar4 = _objc_msgSend_boolValue(local_d0,local_120);

      bVar3 = (uVar4 & 1) != 0;

      if (bVar3) {

        _objc_initWeak(auStack_e0,local_70);

        dVar10 = _dispatch_time(0,8000000000);

        puVar1 = PTR___dispatch_main_q_00110528;

        _objc_retainAutoreleaseReturnValue();

        uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);

        local_110 = PTR___NSConcreteStackBlock_001104f0;

        local_108 = 0xc2000000;

        local_104 = 0;

        local_100 = ___40__WCMFeedController_requestTimelineMore__block_invoke;

        local_f8 = &___block_descriptor_48_e8_32w_e5_v8__0l;

        _objc_copyWeak(auStack_f0,auStack_e0);

        local_e8 = local_c8;

        _dispatch_after(dVar10,uVar5,&local_110);

        (*(code *)PTR__objc_release_00110458)(uVar5);

        _objc_destroyWeak(auStack_f0);

        _objc_destroyWeak(auStack_e0);

      }

      else {

        _objc_msgSend_finishTailWait(local_70,local_120);

      }

      local_d4 = (uint)!bVar3;

      _objc_storeStrong(&local_d0,0);

    }

    else {

      local_98 = local_90;

      local_a0 = _objc_msgSend_limit(local_70,local_120);

      local_a0 = local_a0 + 0x28;

      local_178 = local_a0;

      if (local_98 < local_a0) {

        local_178 = local_98;

      }

      local_a8 = local_178;

      _objc_msgSend_setLimit_(local_70,local_120,local_178);

      local_48 = &cf_count;

      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_120,local_90);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_40 = &cf_limit;

      local_38 = uVar5;

      uVar6 = _objc_msgSend_limit(local_70,local_120);

      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_120,uVar6);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      local_30 = uVar6;

      _objc_msgSend_dictionaryWithObjects_forKeys_count_

                (&_OBJC_CLASS___NSDictionary,local_120,&local_38,&local_48,2);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _Trace(&cf_tail_local_page);

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_msgSend_reloadFeed(local_70,local_120);

    }

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d1] loadingTail @0x59f94 ----
// CALLERS: traceState:, pollNativeTimeline, timelineFinished:, syncPaging, requestTimelineMore, ___40-[WCMFeedController_requestTimelineMore]_block_invoke, setLoadingTail:, _objc_msgSend$loadingTail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::loadingTail(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_loadingTail) & 1;

}






// ---- [d1] pagingGeneration @0x5a148 ----
// CALLERS: refreshHead, noMore:, finishTailWait, start, stop, requestTimelineMore, ___40-[WCMFeedController_requestTimelineMore]_block_invoke, setPagingGeneration:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMFeedController::pagingGeneration(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_pagingGeneration);

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






// ---- [d2] facade @0x59138 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] limit @0x59bac ----
// CALLERS: traceState:, requestTimelineMore, _objc_msgSend$limit
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMFeedController::limit(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_limit);

}






// ---- [d2] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}






// ---- [d2] exhausted @0x59ff0 ----
// CALLERS: traceState:, pollNativeTimeline, syncPaging, requestTimelineMore, setExhausted:, _objc_msgSend$exhausted
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::exhausted(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_exhausted) & 1;

}






// ---- [d2] refreshingHead @0x5a748 ----
// CALLERS: traceState:, pollNativeTimeline, refreshPan:, timelineChanged:, finishRefreshWithSuccess:, timelineFinished:, refreshHead, ___32-[WCMFeedController_refreshHead]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::refreshingHead(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_refreshingHead) & 1;

}






// ---- [d2] pendingExports @0x5aa2c ----
// CALLERS: traceState:, mediaFinished:, exportImage:nativePath:renderKey:mediaKey:quality:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, start, ___37-[WCMFeedController_openCacheManager]_block_invoke, setPendingExports:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingExports(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingExports);

}






// ---- [d2] cachedRows @0x5ab3c ----
// CALLERS: traceState:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, toggleFollowing:, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, start, syncHiddenUsers, verifyHiddenUser:request:attempt:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::cachedRows(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cachedRows);

}






// ---- [d2] initialHeadPending @0x5ac58 ----
// CALLERS: traceState:, pollNativeTimeline, timelineChanged:, timelineFinished:, syncPaging, ___26-[WCMFeedController_start]_block_invoke_3, requestTimelineMore, setInitialHeadPending:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::initialHeadPending(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_initialHeadPending) & 1;

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






// ---- [d2] setLimit: @0x59bd0 ----
// CALLERS: viewDidLoad, finishTailWait, start, requestTimelineMore, _objc_msgSend$setLimit:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLimit_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_limit) = param_3;

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






// ---- [d2] tailStartCount @0x5a04c ----
// CALLERS: finishTailWait, setTailStartCount:, _objc_msgSend$tailStartCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMFeedController::tailStartCount(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_tailStartCount);

}






// ---- [d2] tailPreviousLimit @0x5a09c ----
// CALLERS: finishTailWait, setTailPreviousLimit:, _objc_msgSend$tailPreviousLimit
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMFeedController::tailPreviousLimit(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_tailPreviousLimit);

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






// ---- [d2] setPagingGeneration: @0x5a16c ----
// CALLERS: refreshHead, noMore:, finishTailWait, start, stop, requestTimelineMore, _objc_msgSend$setPagingGeneration:
// CALLEES: pagingGeneration


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setPagingGeneration_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_pagingGeneration) = param_3;

  return;

}






// ---- [d2] setTailStartCount: @0x5a070 ----
// CALLERS: requestTimelineMore, _objc_msgSend$setTailStartCount:
// CALLEES: tailStartCount


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setTailStartCount_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_tailStartCount) = param_3;

  return;

}






// ---- [d2] setTailPreviousLimit: @0x5a0c0 ----
// CALLERS: requestTimelineMore, _objc_msgSend$setTailPreviousLimit:
// CALLEES: tailPreviousLimit


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setTailPreviousLimit_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_tailPreviousLimit) = param_3;

  return;

}






// ---- [d2] lastBlockedTrace @0x5acb4 ----
// CALLERS: requestTimelineMore, setLastBlockedTrace:, _objc_msgSend$lastBlockedTrace
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastBlockedTrace(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastBlockedTrace);

}






// ---- [d2] setLastBlockedTrace: @0x5acd8 ----
// CALLERS: requestTimelineMore, _objc_msgSend$setLastBlockedTrace:
// CALLEES: lastBlockedTrace


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastBlockedTrace_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastBlockedTrace) = param_3;

  return;

}






// ---- [d2] setLastTailRequest: @0x5b5e0 ----
// CALLERS: requestTimelineMore, _objc_msgSend$setLastTailRequest:
// CALLEES: lastTailRequest


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setLastTailRequest_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastTailRequest) = param_3;

  return;

}






// ---- [d3] web @0x590d8 ----
// CALLERS: isFeedScrolling, pollNativeTimeline, viewDidLoad, refreshPan:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, dealloc, webView:didFinishNavigation:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::web(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_web);

}






// ---- [d3] tailRetryRequired @0x5a0ec ----
// CALLERS: pollNativeTimeline, syncPaging, ___31-[WCMFeedController_openVideo:]_block_invoke, setTailRetryRequired:, _objc_msgSend$tailRetryRequired
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::tailRetryRequired(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_tailRetryRequired) & 1;

}






// ---- [d3] lastTailRequest @0x5b5bc ----
// CALLERS: pollNativeTimeline, setLastTailRequest:, _objc_msgSend$lastTailRequest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMFeedController::lastTailRequest(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastTailRequest);

}





