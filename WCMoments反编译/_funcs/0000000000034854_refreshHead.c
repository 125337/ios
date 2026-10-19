// refreshHead @0x34854

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

