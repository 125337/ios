// requestTimelineMore @0x5411c

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

