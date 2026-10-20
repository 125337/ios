// ============================================================
// WCMoments 数据链反编译 · 01_拉新与翻页
// 下拉拉新（refreshHead）、滚底翻页（requestTimelineMore）、重载推送
// 函数数: 8
// ============================================================

// ---- scheduleMediaReload @0x3217c ----


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::scheduleMediaReload(ID param_1,SEL param_2)



{

  undefined *puVar1;

  uint uVar2;

  ulong uVar3;

  dispatch_time_t dVar4;

  undefined8 uVar5;

  undefined8 local_88;

  undefined *local_78;

  undefined4 local_70;

  undefined4 local_6c;

  code *local_68;

  undefined *local_60;

  undefined8 local_58;

  undefined1 auStack_50 [24];

  double local_38;

  undefined1 auStack_30 [8];

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  uVar3 = _objc_msgSend_mediaReloadScheduled(param_1);

  if ((uVar3 & 1) == 0) {

    _objc_msgSend_setMediaReloadScheduled_(local_18,local_88,1);

    _objc_msgSend_account(local_18,local_88);

    local_28 = _objc_retainAutoreleasedReturnValue();

    _objc_initWeak(auStack_30,local_18);

    uVar2 = _objc_msgSend_isFeedScrolling(local_18,local_88);

    local_38 = 0.16;

    if ((uVar2 & 1) == 0) {

      local_38 = 0.05;

    }

    dVar4 = _dispatch_time(0,(long)(local_38 * 1000000000.0));

    puVar1 = PTR___dispatch_main_q_00110528;

    _objc_retainAutoreleaseReturnValue();

    uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);

    local_78 = PTR___NSConcreteStackBlock_001104f0;

    local_70 = 0xc2000000;

    local_6c = 0;

    local_68 = ___40__WCMFeedController_scheduleMediaReload__block_invoke;

    local_60 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;

    _objc_copyWeak();

    local_58 = (*(code *)PTR__objc_retain_00110460)(local_28);

    _dispatch_after(dVar4,uVar5,&local_78);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    _objc_storeStrong(&local_58);

    _objc_destroyWeak(auStack_50);

    _objc_destroyWeak(auStack_30);

    _objc_storeStrong(&local_28,0);

  }

  return;

}






// ---- ___40-[WCMFeedController_scheduleMediaReload]_block_invoke @0x3234c ----


void ___40__WCMFeedController_scheduleMediaReload__block_invoke(long param_1)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 local_60;

  

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  _objc_msgSend_setMediaReloadScheduled_(uVar2,local_60,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar6 = *(undefined8 *)(param_1 + 0x20);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  _objc_msgSend_account(uVar2,local_60);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_isEqualToString_(uVar6,local_60);

  bVar1 = false;

  if ((uVar4 & 1) != 0) {

    uVar6 = _objc_loadWeakRetained(param_1 + 0x28);

    _objc_msgSend_facade(uVar6,local_60);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    bVar1 = lVar5 != 0;

    (*(code *)PTR__objc_release_00110458)(lVar5);

    (*(code *)PTR__objc_release_00110458)(uVar6);

  }

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (bVar1) {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

    _objc_msgSend_reloadFeed(uVar2,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  return;

}






// ---- refreshHead @0x34854 ----


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::refreshHead(ID param_1,SEL param_2)



{

  undefined *puVar1;

  ID IVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  dispatch_time_t dVar7;

  uint local_a4;

  undefined8 local_a0;

  undefined *local_90;

  undefined4 local_88;

  undefined4 local_84;

  code *local_80;

  undefined *local_78;

  undefined1 auStack_70 [8];

  long local_68;

  undefined1 auStack_60 [8];

  long local_58;

  undefined8 local_50;

  SEL local_48;

  ID local_40;

  cfstringStruct *local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_48 = param_2;

  local_40 = param_1;

  uVar3 = _objc_msgSend_refreshingHead(param_1);

  if ((uVar3 & 1) == 0) {

    _objc_msgSend_facade(local_40,local_a0);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar4 == 0) {

      _objc_msgSend_start(local_40,local_a0);

    }

    _objc_msgSend_facade(local_40,local_a0);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    local_a4 = 1;

    if (lVar4 != 0) {

      local_a4 = _objc_msgSend_began(local_40,local_a0);

      local_a4 = local_a4 ^ 1;

    }

    (*(code *)PTR__objc_release_00110458)(lVar4);

    if ((local_a4 & 1) == 0) {

      _objc_msgSend_setRefreshingHead_(local_40,local_a0,1);

      _objc_msgSend_setRefreshedThisDrag_(local_40,local_a0,1);

      _objc_msgSend_refreshControl(local_40,local_a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_showLoading(uVar5,local_a0);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_msgSend_setExhausted_(local_40,local_a0,0);

      _objc_msgSend_setLoadingTail_(local_40,local_a0,0);

      _objc_msgSend_setTailRetryRequired_(local_40,local_a0,0);

      IVar2 = local_40;

      lVar4 = _objc_msgSend_pagingGeneration(local_40,local_a0);

      _objc_msgSend_setPagingGeneration_(IVar2,local_a0,lVar4 + 1);

      _objc_msgSend_syncPaging(local_40,local_a0);

      _objc_msgSend_mediaRequestTimes(local_40,local_a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_removeAllObjects(uVar5,local_a0);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_msgSend_status_(local_40,local_a0,&cf___);

      _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_timeIntervalSinceReferenceDate(uVar5,local_a0);

      _objc_msgSend_setLastHeadRequest_(local_40,local_a0);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_msgSend_facade(local_40,local_a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _Call(uVar5,&cf_updateTimelineHead,PTR____NSArray0__struct_00110718);

      local_50 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar5);

      local_38 = &cf_accepted;

      uVar5 = _objc_msgSend_boolValue(local_50,local_a0);

      _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_a0,uVar5);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_30 = uVar5;

      _objc_msgSend_dictionaryWithObjects_forKeys_count_

                (&_OBJC_CLASS___NSDictionary,local_a0,&local_30,&local_38,1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _Trace(&cf_head_refresh_request);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      IVar2 = local_40;

      lVar4 = _objc_msgSend_refreshGeneration(local_40,local_a0);

      _objc_msgSend_setRefreshGeneration_(IVar2,local_a0);

      local_58 = lVar4 + 1;

      _objc_initWeak(auStack_60,local_40);

      dVar7 = _dispatch_time(0,20000000000);

      puVar1 = PTR___dispatch_main_q_00110528;

      _objc_retainAutoreleaseReturnValue();

      uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);

      local_90 = PTR___NSConcreteStackBlock_001104f0;

      local_88 = 0xc2000000;

      local_84 = 0;

      local_80 = ___32__WCMFeedController_refreshHead__block_invoke;

      local_78 = &___block_descriptor_48_e8_32w_e5_v8__0l;

      _objc_copyWeak(auStack_70,auStack_60);

      local_68 = local_58;

      _dispatch_after(dVar7,uVar5,&local_90);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      _objc_destroyWeak(auStack_70);

      _objc_destroyWeak(auStack_60);

      _objc_storeStrong(&local_50,0);

    }

    else {

      _objc_msgSend_refreshControl(local_40,local_a0);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_endRefreshing(uVar5,local_a0);

      (*(code *)PTR__objc_release_00110458)(uVar5);

    }

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- ___32-[WCMFeedController_refreshHead]_block_invoke @0x34cf4 ----


void ___32__WCMFeedController_refreshHead__block_invoke(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 local_48;

  uint local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  lVar2 = _objc_msgSend_refreshGeneration(uVar1,local_48);

  local_30 = 1;

  if (lVar2 == *(long *)(param_1 + 0x28)) {

    uVar3 = _objc_loadWeakRetained(param_1 + 0x20);

    local_30 = _objc_msgSend_refreshingHead(uVar3,local_48);

    local_30 = local_30 ^ 1;

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if ((local_30 & 1) == 0) {

    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

    _objc_msgSend_finishRefreshWithSuccess_(uVar1,local_48,0);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

    _objc_msgSend_status_(uVar1,local_48,&cf_7ReI__eNb);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  return;

}






// ---- ___31-[WCMFeedController_reloadFeed]_block_invoke @0x42f84 ----


void ___31__WCMFeedController_reloadFeed__block_invoke(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 local_60;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  uVar3 = 0;

  uVar5 = 0x4058000000000000;

  uVar4 = 0x4058000000000000;

  uVar2 = _CGRectMake(0);

  _objc_msgSend_drawInRect_(uVar2,uVar3,uVar4,uVar5,uVar1,local_60);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___31-[WCMFeedController_reloadFeed]_block_invoke.1918 @0x43020 ----


void ___31__WCMFeedController_reloadFeed__block_invoke_1918(long param_1)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 local_58;

  

  uVar6 = *(undefined8 *)(param_1 + 0x20);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  _objc_msgSend_account(uVar2,local_58);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_isEqualToString_(uVar6,local_58);

  bVar1 = false;

  if ((uVar4 & 1) != 0) {

    uVar6 = _objc_loadWeakRetained(param_1 + 0x28);

    _objc_msgSend_facade(uVar6,local_58);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    bVar1 = lVar5 != 0;

    (*(code *)PTR__objc_release_00110458)(lVar5);

    (*(code *)PTR__objc_release_00110458)(uVar6);

  }

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (bVar1) {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

    _objc_msgSend_scheduleMediaReload(uVar2,local_58);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  return;

}






// ---- requestTimelineMore @0x5411c ----


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






// ---- ___40-[WCMFeedController_requestTimelineMore]_block_invoke @0x548c0 ----


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





