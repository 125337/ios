// pollNativeTimeline @0x2f84c

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

