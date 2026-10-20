// ============================================================
// WCMoments 数据链反编译 · 00_安装与启动
// 插件安装、会话启动/停止、状态追踪、屏蔽用户同步
// 函数数: 25
// ============================================================

// ---- start @0x39718 ----


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






// ---- stop @0x3b5f4 ----


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






// ---- syncHiddenUsers @0x442a4 ----


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






// ---- _Install @0x5c58c ----


undefined1 _Install(void)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  ulong local_828;

  ulong local_820;

  ulong local_758;

  ulong local_750;

  ulong local_6b0;

  ulong local_6a8;

  undefined8 local_660;

  undefined *local_650;

  undefined4 local_648;

  undefined4 local_644;

  code *local_640;

  undefined *local_638;

  undefined8 local_630;

  undefined8 local_628;

  undefined8 local_620;

  long local_618;

  undefined *local_610;

  undefined4 local_608;

  undefined4 local_604;

  code *local_600;

  undefined *local_5f8;

  undefined8 local_5f0;

  undefined8 local_5e8;

  undefined8 local_5e0;

  long local_5d8;

  undefined *local_5d0;

  undefined4 local_5c8;

  undefined4 local_5c4;

  code *local_5c0;

  undefined *local_5b8;

  undefined8 local_5b0;

  undefined8 local_5a8;

  undefined8 local_5a0;

  long local_598;

  undefined *local_590;

  undefined4 local_588;

  undefined4 local_584;

  code *local_580;

  undefined *local_578;

  undefined8 local_570;

  undefined8 local_568;

  undefined8 local_560;

  undefined *local_558;

  undefined4 local_550;

  undefined4 local_54c;

  code *local_548;

  undefined *local_540;

  undefined8 local_538;

  undefined8 local_530;

  undefined8 local_528;

  undefined8 local_520;

  undefined8 local_518;

  undefined8 local_510;

  undefined *local_508;

  undefined4 local_500;

  undefined4 local_4fc;

  code *local_4f8;

  undefined *local_4f0;

  undefined8 local_4e8;

  undefined8 local_4e0;

  byte local_4d8;

  undefined8 local_4d0;

  byte local_4c1;

  undefined8 local_4c0;

  undefined8 local_4b8;

  undefined8 local_4b0;

  undefined1 auStack_4a8 [8];

  long local_4a0;

  long *local_498;

  undefined8 local_468;

  undefined *local_460;

  undefined4 local_458;

  undefined4 local_454;

  code *local_450;

  undefined *local_448;

  undefined8 local_440;

  undefined8 local_438;

  undefined8 local_430;

  undefined8 local_428;

  undefined8 local_420;

  undefined8 local_418;

  undefined *local_410;

  undefined4 local_408;

  undefined4 local_404;

  code *local_400;

  undefined *local_3f8;

  undefined8 local_3f0;

  undefined8 local_3e8;

  undefined8 local_3e0;

  undefined8 local_3d8;

  undefined8 local_3d0;

  undefined8 local_3c8;

  undefined *local_3c0;

  undefined4 local_3b8;

  undefined4 local_3b4;

  code *local_3b0;

  undefined *local_3a8;

  undefined8 local_3a0;

  undefined8 local_398;

  undefined8 local_390;

  undefined8 local_388;

  undefined8 local_380;

  undefined8 local_378;

  undefined8 local_370;

  undefined8 local_368;

  undefined1 auStack_360 [8];

  long local_358;

  long *local_350;

  undefined8 local_320;

  undefined8 local_318;

  undefined *local_310;

  undefined4 local_308;

  undefined4 local_304;

  code *local_300;

  undefined *local_2f8;

  undefined8 local_2f0;

  undefined8 local_2e8;

  undefined8 local_2e0;

  undefined8 local_2d8;

  undefined8 local_2d0;

  undefined8 local_2c8;

  undefined *local_2c0;

  undefined4 local_2b8;

  undefined4 local_2b4;

  code *local_2b0;

  undefined *local_2a8;

  undefined8 local_2a0;

  undefined8 local_298;

  undefined8 local_290;

  undefined8 local_288;

  undefined8 local_280;

  undefined8 local_278;

  undefined8 local_270;

  undefined8 local_268;

  undefined1 auStack_260 [8];

  long local_258;

  long *local_250;

  undefined8 local_220;

  undefined *local_218;

  undefined4 local_210;

  undefined4 local_20c;

  code *local_208;

  undefined *local_200;

  undefined8 local_1f8;

  undefined8 local_1f0;

  undefined8 local_1e8;

  undefined8 local_1e0;

  undefined8 local_1d8;

  undefined8 local_1d0;

  undefined8 local_1c8;

  long local_1c0;

  undefined8 local_1b8;

  undefined1 local_1a9;

  undefined1 auStack_1a8 [128];

  undefined1 auStack_128 [128];

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  if ((_HookInstalled & 1) == 0) {

    local_1b8 = _NSClassFromString(&cf_FindFriendEntryViewController);

    local_1c0 = _class_getInstanceMethod(local_1b8,"viewDidAppear:");

    uVar4 = local_1b8;

    if (local_1c0 != 0) {

      uVar2 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

      uVar3 = _objc_msgSend_isSubclassOfClass_(uVar4,local_660,uVar2);

      if ((uVar3 & 1) != 0) {

        _InstallMessageStyleHooks();

        local_1c8 = _NSClassFromString(&cf_WCFacade);

        local_1d0 = _NSSelectorFromString(&cf_onDownloadFinish_downloadType_);

        local_1d8 = _class_getInstanceMethod(local_1c8,local_1d0);

        uVar3 = _HookEncodingMatches(local_1d8,"v32@0:8@16q24");

        if ((uVar3 & 1) != 0) {

          local_1f8 = _method_getImplementation(local_1d8);

          local_218 = PTR___NSConcreteStackBlock_001104f0;

          local_210 = 0xc0000000;

          local_20c = 0;

          local_208 = ___Install_block_invoke;

          local_200 = &___block_descriptor_48_e14_v32__0_8_16q24l;

          local_1f0 = local_1d0;

          local_1e0 = local_1f8;

          uVar4 = _objc_retainBlock(&local_218);

          uVar5 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar2 = local_1c8;

          uVar4 = local_1d0;

          local_1e8 = uVar5;

          uVar6 = _method_getTypeEncoding(local_1d8);

          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_1d8,local_1e8);

          }

        }

        _memset(auStack_260,0,0x40);

        uVar4 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010fb30);

        local_6a8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar4,local_660,auStack_260,auStack_a8,0x10);

        if (local_6a8 != 0) {

          lVar8 = *local_250;

          local_6b0 = 0;

          do {

            do {

              if (*local_250 - lVar8 != 0) {

                _objc_enumerationMutation(*local_250 - lVar8,uVar4);

              }

              local_220 = *(undefined8 *)(local_258 + local_6b0 * 8);

              local_268 = _NSSelectorFromString(local_220);

              local_270 = _class_getInstanceMethod(local_1c8,local_268);

              uVar3 = _HookEncodingMatches(local_270,"v32@0:8@16q24");

              if ((uVar3 & 1) != 0) {

                local_278 = _method_getImplementation(local_270);

                uVar3 = _objc_msgSend_hasPrefix_(local_220,local_660,&cf_onBegin);

                pcVar1 = &cf_video_native_begin;

                if ((uVar3 & 1) == 0) {

                  pcVar1 = &cf_video_native_queued;

                }

                local_280 = (*(code *)PTR__objc_retain_00110460)(pcVar1);

                local_2c0 = PTR___NSConcreteStackBlock_001104f0;

                local_2b8 = 0xc2000000;

                local_2b4 = 0;

                local_2b0 = ___Install_block_invoke_3;

                local_2a8 = &___block_descriptor_56_e8_32s_e14_v32__0_8_16q24l;

                local_298 = local_278;

                local_290 = local_268;

                local_2a0 = (*(code *)PTR__objc_retain_00110460)(local_280);

                uVar2 = _objc_retainBlock(&local_2c0);

                uVar6 = _imp_implementationWithBlock();

                (*(code *)PTR__objc_release_00110458)(uVar2);

                uVar5 = local_1c8;

                uVar2 = local_268;

                local_288 = uVar6;

                uVar7 = _method_getTypeEncoding(local_270);

                uVar3 = _class_addMethod(uVar5,uVar2,uVar6,uVar7);

                if ((uVar3 & 1) == 0) {

                  _method_setImplementation(local_270,local_288);

                }

                _objc_storeStrong(&local_2a0);

                _objc_storeStrong(&local_280,0);

              }

              local_6b0 = local_6b0 + 1;

            } while (local_6b0 < local_6a8);

            local_6a8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                  (uVar4,local_660,auStack_260,auStack_a8,0x10);

            local_6b0 = 0;

          } while (local_6a8 != 0);

        }

        (*(code *)PTR__objc_release_00110458)(uVar4);

        local_2c8 = _NSSelectorFromString

                              (&cf_onDownloadMediaProcessChange_downloadType_current_total_);

        local_2d0 = _class_getInstanceMethod(local_1c8,local_2c8);

        uVar3 = _HookEncodingMatches(local_2d0,"v40@0:8@16q24i32i36");

        if ((uVar3 & 1) != 0) {

          local_2f0 = _method_getImplementation(local_2d0);

          local_310 = PTR___NSConcreteStackBlock_001104f0;

          local_308 = 0xc0000000;

          local_304 = 0;

          local_300 = ___Install_block_invoke_3018;

          local_2f8 = &___block_descriptor_48_e20_v40__0_8_16q24i32i36l;

          local_2e8 = local_2c8;

          local_2d8 = local_2f0;

          uVar4 = _objc_retainBlock(&local_310);

          uVar5 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar2 = local_1c8;

          uVar4 = local_2c8;

          local_2e0 = uVar5;

          uVar6 = _method_getTypeEncoding(local_2d0);

          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_2d0,local_2e0);

          }

        }

        local_318 = _NSClassFromString(&cf_WCDownloadVideoCDNMgr);

        _memset(auStack_360,0,0x40);

        uVar4 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010fb48);

        local_750 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar4,local_660,auStack_360,auStack_128,0x10);

        if (local_750 != 0) {

          lVar8 = *local_350;

          local_758 = 0;

          do {

            do {

              if (*local_350 - lVar8 != 0) {

                _objc_enumerationMutation(*local_350 - lVar8,uVar4);

              }

              local_320 = *(undefined8 *)(local_358 + local_758 * 8);

              local_368 = _NSSelectorFromString(local_320);

              local_370 = _class_getInstanceMethod(local_318,local_368);

              uVar3 = _HookEncodingMatches(local_370,"v32@0:8@16@24");

              if ((uVar3 & 1) != 0) {

                local_378 = _method_getImplementation(local_370);

                uVar3 = _objc_msgSend_containsString_(local_320,local_660,&cf_Complete);

                pcVar1 = &cf_video_native_complete;

                if ((uVar3 & 1) == 0) {

                  pcVar1 = &cf_video_native_stop;

                }

                local_380 = (*(code *)PTR__objc_retain_00110460)(pcVar1);

                local_3c0 = PTR___NSConcreteStackBlock_001104f0;

                local_3b8 = 0xc2000000;

                local_3b4 = 0;

                local_3b0 = ___Install_block_invoke_2_3042;

                local_3a8 = &___block_descriptor_56_e8_32s_e14_v32__0_8_16_24l;

                local_398 = local_378;

                local_390 = local_368;

                local_3a0 = (*(code *)PTR__objc_retain_00110460)(local_380);

                uVar2 = _objc_retainBlock(&local_3c0);

                uVar6 = _imp_implementationWithBlock();

                (*(code *)PTR__objc_release_00110458)(uVar2);

                uVar5 = local_318;

                uVar2 = local_368;

                local_388 = uVar6;

                uVar7 = _method_getTypeEncoding(local_370);

                uVar3 = _class_addMethod(uVar5,uVar2,uVar6,uVar7);

                if ((uVar3 & 1) == 0) {

                  _method_setImplementation(local_370,local_388);

                }

                _objc_storeStrong(&local_3a0);

                _objc_storeStrong(&local_380,0);

              }

              local_758 = local_758 + 1;

            } while (local_758 < local_750);

            local_750 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                  (uVar4,local_660,auStack_360,auStack_128,0x10);

            local_758 = 0;

          } while (local_750 != 0);

        }

        (*(code *)PTR__objc_release_00110458)(uVar4);

        local_3c8 = _NSSelectorFromString(&cf_onPlayerDownloadStartFail_argsWrap_);

        local_3d0 = _class_getInstanceMethod(local_318,local_3c8);

        uVar3 = _HookEncodingMatches(local_3d0,"v28@0:8i16@20");

        if ((uVar3 & 1) != 0) {

          local_3f0 = _method_getImplementation(local_3d0);

          local_410 = PTR___NSConcreteStackBlock_001104f0;

          local_408 = 0xc0000000;

          local_404 = 0;

          local_400 = ___Install_block_invoke_3047;

          local_3f8 = &___block_descriptor_48_e14_v28__0_8i16_20l;

          local_3e8 = local_3c8;

          local_3d8 = local_3f0;

          uVar4 = _objc_retainBlock(&local_410);

          uVar5 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar2 = local_318;

          uVar4 = local_3c8;

          local_3e0 = uVar5;

          uVar6 = _method_getTypeEncoding(local_3d0);

          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_3d0,local_3e0);

          }

        }

        local_418 = _NSSelectorFromString(&cf_onTimelineDataChangedWithAdded_andChanged_andDeleted_)

        ;

        local_420 = _class_getInstanceMethod(local_1c8,local_418);

        uVar3 = _HookEncodingMatches(local_420,"v40@0:8@16@24@32");

        if ((uVar3 & 1) != 0) {

          local_440 = _method_getImplementation(local_420);

          local_460 = PTR___NSConcreteStackBlock_001104f0;

          local_458 = 0xc0000000;

          local_454 = 0;

          local_450 = ___Install_block_invoke_2_3055;

          local_448 = &___block_descriptor_48_e17_v40__0_8_16_24_32l;

          local_438 = local_418;

          local_428 = local_440;

          uVar4 = _objc_retainBlock(&local_460);

          uVar5 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar2 = local_1c8;

          uVar4 = local_418;

          local_430 = uVar5;

          uVar6 = _method_getTypeEncoding(local_420);

          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_420,local_430);

          }

        }

        _memset(auStack_4a8,0,0x40);

        uVar4 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010fb60);

        local_820 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar4,local_660,auStack_4a8,auStack_1a8,0x10);

        if (local_820 != 0) {

          lVar8 = *local_498;

          local_828 = 0;

          do {

            do {

              if (*local_498 - lVar8 != 0) {

                _objc_enumerationMutation(*local_498 - lVar8,uVar4);

              }

              local_468 = *(undefined8 *)(local_4a0 + local_828 * 8);

              local_4b0 = _NSSelectorFromString(local_468);

              local_4b8 = _class_getInstanceMethod(local_1c8,local_4b0);

              uVar3 = _HookEncodingMatches(local_4b8,"v16@0:8");

              if ((uVar3 & 1) != 0) {

                local_4c0 = _method_getImplementation(local_4b8);

                local_4c1 = _objc_msgSend_isEqualToString_

                                      (local_468,local_660,&cf_onTimelineServerError);

                local_508 = PTR___NSConcreteStackBlock_001104f0;

                local_500 = 0xc0000000;

                local_4fc = 0;

                local_4f8 = ___Install_block_invoke_4;

                local_4f0 = &___block_descriptor_49_e8_v16__0_8l;

                local_4e8 = local_4c0;

                local_4e0 = local_4b0;

                local_4d8 = local_4c1 & 1;

                uVar2 = _objc_retainBlock(&local_508);

                uVar6 = _imp_implementationWithBlock();

                (*(code *)PTR__objc_release_00110458)(uVar2);

                uVar5 = local_1c8;

                uVar2 = local_4b0;

                local_4d0 = uVar6;

                uVar7 = _method_getTypeEncoding(local_4b8);

                uVar3 = _class_addMethod(uVar5,uVar2,uVar6,uVar7);

                if ((uVar3 & 1) == 0) {

                  _method_setImplementation(local_4b8,local_4d0);

                }

              }

              local_828 = local_828 + 1;

            } while (local_828 < local_820);

            local_820 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                  (uVar4,local_660,auStack_4a8,auStack_1a8,0x10);

            local_828 = 0;

          } while (local_820 != 0);

        }

        (*(code *)PTR__objc_release_00110458)(uVar4);

        local_510 = _NSSelectorFromString(&cf_onNoMoreTimelineData);

        local_518 = _class_getInstanceMethod(local_1c8,local_510);

        uVar3 = _HookEncodingMatches(local_518,"v16@0:8");

        if ((uVar3 & 1) != 0) {

          local_538 = _method_getImplementation(local_518);

          local_558 = PTR___NSConcreteStackBlock_001104f0;

          local_550 = 0xc0000000;

          local_54c = 0;

          local_548 = ___Install_block_invoke_3070;

          local_540 = &___block_descriptor_48_e8_v16__0_8l;

          local_530 = local_510;

          local_520 = local_538;

          uVar4 = _objc_retainBlock(&local_558);

          uVar5 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar2 = local_1c8;

          uVar4 = local_510;

          local_528 = uVar5;

          uVar6 = _method_getTypeEncoding(local_518);

          uVar3 = _class_addMethod(uVar2,uVar4,uVar5,uVar6);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_518,local_528);

          }

        }

        local_570 = _method_getImplementation(local_1c0);

        local_590 = PTR___NSConcreteStackBlock_001104f0;

        local_588 = 0xc0000000;

        local_584 = 0;

        local_580 = ___Install_block_invoke_3_3073;

        local_578 = &___block_descriptor_40_e29_v20__0__UIViewController_8B16l;

        local_560 = local_570;

        uVar4 = _objc_retainBlock(&local_590);

        uVar2 = _imp_implementationWithBlock();

        (*(code *)PTR__objc_release_00110458)(uVar4);

        uVar4 = local_1b8;

        local_568 = uVar2;

        uVar5 = _method_getTypeEncoding(local_1c0);

        uVar3 = _class_addMethod(uVar4,"viewDidAppear:",uVar2,uVar5);

        if ((uVar3 & 1) == 0) {

          _method_setImplementation(local_1c0,local_568);

        }

        local_598 = _class_getInstanceMethod(local_1b8,"viewWillDisappear:");

        if (local_598 != 0) {

          local_5b0 = _method_getImplementation(local_598);

          local_5d0 = PTR___NSConcreteStackBlock_001104f0;

          local_5c8 = 0xc0000000;

          local_5c4 = 0;

          local_5c0 = ___Install_block_invoke_4_3077;

          local_5b8 = &___block_descriptor_40_e29_v20__0__UIViewController_8B16l;

          local_5a0 = local_5b0;

          uVar4 = _objc_retainBlock(&local_5d0);

          uVar2 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar4 = local_1b8;

          local_5a8 = uVar2;

          uVar5 = _method_getTypeEncoding(local_598);

          uVar3 = _class_addMethod(uVar4,"viewWillDisappear:",uVar2,uVar5);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_598,local_5a8);

          }

        }

        local_5d8 = _class_getInstanceMethod(local_1b8,"viewWillAppear:");

        if (local_5d8 != 0) {

          local_5f0 = _method_getImplementation(local_5d8);

          local_610 = PTR___NSConcreteStackBlock_001104f0;

          local_608 = 0xc0000000;

          local_604 = 0;

          local_600 = ___Install_block_invoke_5_3078;

          local_5f8 = &___block_descriptor_40_e29_v20__0__UIViewController_8B16l;

          local_5e0 = local_5f0;

          uVar4 = _objc_retainBlock(&local_610);

          uVar2 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar4 = local_1b8;

          local_5e8 = uVar2;

          uVar5 = _method_getTypeEncoding(local_5d8);

          uVar3 = _class_addMethod(uVar4,"viewWillAppear:",uVar2,uVar5);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_5d8,local_5e8);

          }

        }

        local_618 = _class_getInstanceMethod(local_1b8,"viewDidLayoutSubviews");

        if (local_618 != 0) {

          local_630 = _method_getImplementation(local_618);

          local_650 = PTR___NSConcreteStackBlock_001104f0;

          local_648 = 0xc0000000;

          local_644 = 0;

          local_640 = ___Install_block_invoke_6;

          local_638 = &___block_descriptor_40_e26_v16__0__UIViewController_8l;

          local_620 = local_630;

          uVar4 = _objc_retainBlock(&local_650);

          uVar2 = _imp_implementationWithBlock();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          uVar4 = local_1b8;

          local_628 = uVar2;

          uVar5 = _method_getTypeEncoding(local_618);

          uVar3 = _class_addMethod(uVar4,"viewDidLayoutSubviews",uVar2,uVar5);

          if ((uVar3 & 1) == 0) {

            _method_setImplementation(local_618,local_628);

          }

        }

        _HookInstalled = 1;

        local_1a9 = 1;

        goto LAB_0005d680;

      }

    }

    local_1a9 = 0;

  }

  else {

    local_1a9 = 1;

  }

LAB_0005d680:

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return local_1a9;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- _InstallMessageStyleHooks @0x606fc ----


void _InstallMessageStyleHooks(void)



{

  char *pcVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined *local_178;

  undefined4 local_170;

  undefined4 local_16c;

  code *local_168;

  undefined *local_160;

  undefined8 local_158;

  char *local_150;

  undefined8 local_148;

  undefined8 local_140;

  long local_138;

  char *local_130;

  undefined8 local_128;

  undefined *local_120;

  undefined4 local_118;

  undefined4 local_114;

  code *local_110;

  undefined *local_108;

  undefined8 local_100;

  undefined8 local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined *local_c8;

  undefined4 local_c0;

  undefined4 local_bc;

  code *local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined *local_78;

  undefined4 local_70;

  undefined4 local_6c;

  code *local_68;

  undefined *local_60;

  undefined8 local_58;

  char *local_50;

  undefined8 local_48;

  undefined8 local_40;

  long local_38;

  char *local_30;

  long local_28;

  

  local_28 = _NSClassFromString(&cf_WCCommentListViewController);

  if (local_28 != 0) {

    local_30 = "viewDidLayoutSubviews";

    local_38 = _class_getInstanceMethod(local_28,"viewDidLayoutSubviews");

    if (local_38 != 0) {

      local_58 = _method_getImplementation(local_38);

      local_78 = PTR___NSConcreteStackBlock_001104f0;

      local_70 = 0xc0000000;

      local_6c = 0;

      local_68 = ___InstallMessageStyleHooks_block_invoke;

      local_60 = &___block_descriptor_48_e26_v16__0__UIViewController_8l;

      local_50 = local_30;

      local_40 = local_58;

      uVar3 = _objc_retainBlock(&local_78);

      uVar4 = _imp_implementationWithBlock();

      (*(code *)PTR__objc_release_00110458)(uVar3);

      lVar2 = local_28;

      pcVar1 = local_30;

      local_48 = uVar4;

      uVar3 = _method_getTypeEncoding(local_38);

      uVar5 = _class_addMethod(lVar2,pcVar1,uVar4,uVar3);

      if ((uVar5 & 1) == 0) {

        _method_setImplementation(local_38,local_48);

      }

    }

    local_80 = _NSSelectorFromString(&cf_tableView_cellForRowAtIndexPath_);

    local_88 = _class_getInstanceMethod(local_28,local_80);

    uVar5 = _HookEncodingMatches(local_88,"@32@0:8@16@24");

    if ((uVar5 & 1) != 0) {

      local_a8 = _method_getImplementation(local_88);

      local_c8 = PTR___NSConcreteStackBlock_001104f0;

      local_c0 = 0xc0000000;

      local_bc = 0;

      local_b8 = ___InstallMessageStyleHooks_block_invoke_2;

      local_b0 = &

                 ___block_descriptor_48_e58__32__0__UIViewController_8__UITableView_16__NSIndexPath_24l

      ;

      local_a0 = local_80;

      local_90 = local_a8;

      uVar3 = _objc_retainBlock(&local_c8);

      uVar4 = _imp_implementationWithBlock();

      (*(code *)PTR__objc_release_00110458)(uVar3);

      lVar2 = local_28;

      uVar3 = local_80;

      local_98 = uVar4;

      uVar6 = _method_getTypeEncoding(local_88);

      uVar5 = _class_addMethod(lVar2,uVar3,uVar4,uVar6);

      if ((uVar5 & 1) == 0) {

        _method_setImplementation(local_88,local_98);

      }

    }

    local_d0 = _NSClassFromString(&cf_WCNewCommentListViewController);

    local_d8 = _NSSelectorFromString(&cf_tableView_viewForHeaderInSection_);

    local_e0 = _class_getInstanceMethod(local_d0,local_d8);

    uVar5 = _HookEncodingMatches(local_e0,"@32@0:8@16q24");

    if ((uVar5 & 1) != 0) {

      local_100 = _method_getImplementation(local_e0);

      local_120 = PTR___NSConcreteStackBlock_001104f0;

      local_118 = 0xc0000000;

      local_114 = 0;

      local_110 = ___InstallMessageStyleHooks_block_invoke_3;

      local_108 = &___block_descriptor_48_e45__32__0__UIViewController_8__UITableView_16q24l;

      local_f8 = local_d8;

      local_e8 = local_100;

      uVar3 = _objc_retainBlock(&local_120);

      uVar6 = _imp_implementationWithBlock();

      (*(code *)PTR__objc_release_00110458)(uVar3);

      uVar4 = local_d0;

      uVar3 = local_d8;

      local_f0 = uVar6;

      uVar7 = _method_getTypeEncoding(local_e0);

      uVar5 = _class_addMethod(uVar4,uVar3,uVar6,uVar7);

      if ((uVar5 & 1) == 0) {

        _method_setImplementation(local_e0,local_f0);

      }

    }

    local_128 = _NSClassFromString(&cf_WCCommentListContentView);

    local_130 = "layoutSubviews";

    local_138 = _class_getInstanceMethod(local_128,"layoutSubviews");

    if (local_138 != 0) {

      local_158 = _method_getImplementation(local_138);

      local_178 = PTR___NSConcreteStackBlock_001104f0;

      local_170 = 0xc0000000;

      local_16c = 0;

      local_168 = ___InstallMessageStyleHooks_block_invoke_4;

      local_160 = &___block_descriptor_48_e16_v16__0__UIView_8l;

      local_150 = local_130;

      local_140 = local_158;

      uVar3 = _objc_retainBlock(&local_178);

      uVar4 = _imp_implementationWithBlock();

      (*(code *)PTR__objc_release_00110458)(uVar3);

      uVar3 = local_128;

      pcVar1 = local_130;

      local_148 = uVar4;

      uVar6 = _method_getTypeEncoding(local_138);

      uVar5 = _class_addMethod(uVar3,pcVar1,uVar4,uVar6);

      if ((uVar5 & 1) == 0) {

        _method_setImplementation(local_138,local_148);

      }

    }

  }

  return;

}






// ---- ___Install_block_invoke @0x60ba8 ----


void ___Install_block_invoke(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_d8;

  undefined8 local_58;

  long local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  long local_30;

  cfstringStruct *local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_38 = 0;

  local_30 = param_1;

  _objc_storeStrong();

  local_40 = 0;

  _objc_storeStrong(&local_40,param_3);

  local_50 = param_1;

  local_48 = param_4;

  (**(code **)(param_1 + 0x20))(local_38,*(undefined8 *)(param_1 + 0x28),local_40,param_4);

  uVar4 = local_40;

  local_28 = &cf_type;

  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_d8,local_48);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_20 = uVar2;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_d8,&local_20,&local_28,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _TraceVideo(&cf_video_native_facadeFinished,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  puVar1 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  uVar4 = _objc_retainAutoreleasedReturnValue(puVar1);

  local_58 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _dispatch_async(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_storeStrong(&local_58,0);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_38,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return;

}






// ---- ___Install_block_invoke_2 @0x60dac ----


void ___Install_block_invoke_2(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_postNotificationName_object_

            (uVar1,local_30,&cf_WCMomentsMediaFinished,*(undefined8 *)(param_1 + 0x20));

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___Install_block_invoke_3 @0x60e14 ----


void ___Install_block_invoke_3

               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_98;

  undefined8 local_40;

  undefined8 local_38;

  long local_30;

  cfstringStruct *local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_38 = 0;

  local_30 = param_1;

  _objc_storeStrong();

  local_40 = 0;

  _objc_storeStrong(&local_40,param_3);

  (**(code **)(param_1 + 0x28))(local_38,*(undefined8 *)(param_1 + 0x30),local_40,param_4);

  uVar1 = local_40;

  uVar4 = *(undefined8 *)(param_1 + 0x20);

  local_28 = &cf_type;

  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_98,param_4);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_20 = uVar2;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_98,&local_20,&local_28,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _TraceVideo(uVar4,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_38,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return;

}






// ---- ___Install_block_invoke.3018 @0x60f80 ----


void ___Install_block_invoke_3018

               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,

               int param_6)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  double dVar6;

  double dVar7;

  undefined8 local_100;

  undefined8 local_a0;

  int local_94;

  long local_90;

  long local_88;

  int local_80;

  int local_7c;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  long local_60;

  cfstringStruct *local_58;

  cfstringStruct *local_50;

  cfstringStruct *local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_68 = 0;

  local_60 = param_1;

  _objc_storeStrong(&local_68);

  local_70 = 0;

  _objc_storeStrong(&local_70,param_3);

  local_88 = param_1;

  local_80 = param_6;

  local_7c = param_5;

  local_78 = param_4;

  (**(code **)(param_1 + 0x20))

            (local_68,*(undefined8 *)(param_1 + 0x28),local_70,param_4,param_5,param_6);

  uVar1 = _VideoNumber(local_70,0);

  local_90 = _objc_retainAutoreleasedReturnValue(uVar1);

  if (local_90 == 0) {

    local_94 = 1;

  }

  else {

    uVar1 = (*(code *)PTR__objc_retain_00110460)(local_70);

    _objc_sync_enter();

    uVar2 = _objc_getAssociatedObject(local_70,&_VideoDiagnosticProgressKey);

    local_a0 = _objc_retainAutoreleasedReturnValue(uVar2);

    uVar2 = _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_100);

    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

    dVar6 = (double)_objc_msgSend_systemUptime(uVar2,local_100);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if ((local_80 <= local_7c) ||

       (dVar7 = (double)_objc_msgSend_doubleValue(local_7c - local_80,local_a0,local_100),

       1.0 <= dVar6 - dVar7)) {

      uVar2 = local_70;

      uVar3 = _objc_msgSend_numberWithDouble_(dVar6,&_OBJC_CLASS___NSNumber,local_100);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      _objc_setAssociatedObject(uVar2,&_VideoDiagnosticProgressKey,uVar3,1);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      local_94 = 0;

    }

    else {

      local_94 = 1;

    }

    _objc_storeStrong(&local_a0,0);

    if (local_94 == 0) {

      local_94 = 0;

    }

    _objc_sync_exit(uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = local_70;

    if (local_94 == 0) {

      local_58 = &cf_type;

      uVar2 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_100,local_78);

      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

      local_50 = &cf_current;

      local_40 = uVar2;

      uVar3 = _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_100,local_7c);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      local_48 = &cf_total;

      local_38 = uVar3;

      uVar4 = _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_100,local_80);

      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

      local_30 = uVar4;

      uVar5 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                        (&_OBJC_CLASS___NSDictionary,local_100,&local_40,&local_58,3);

      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

      _TraceVideo(&cf_video_native_bytes,uVar1);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      local_94 = 0;

    }

  }

  _objc_storeStrong(&local_90,0);

  if (local_94 == 0) {

    local_94 = 0;

  }

  _objc_storeStrong(&local_70,0);

  _objc_storeStrong(&local_68,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- ___Install_block_invoke_2.3042 @0x61434 ----


void ___Install_block_invoke_2_3042

               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined8 local_40;

  long local_38;

  undefined8 local_30;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_28 = 0;

  _objc_storeStrong(&local_28,param_3);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  local_38 = param_1;

  _VideoMediaForArgs(local_28);

  local_40 = _objc_retainAutoreleasedReturnValue();

  (**(code **)(param_1 + 0x28))(local_20,*(undefined8 *)(param_1 + 0x30),local_28,local_30);

  _TraceVideo(*(undefined8 *)(param_1 + 0x20),local_40,PTR____NSDictionary0__struct_00110720);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___Install_block_invoke.3047 @0x61644 ----


void ___Install_block_invoke_3047

               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_a0;

  undefined8 local_58;

  long local_50;

  undefined8 local_48;

  undefined4 local_3c;

  undefined8 local_38;

  long local_30;

  cfstringStruct *local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_38 = 0;

  local_30 = param_1;

  _objc_storeStrong();

  local_48 = 0;

  local_3c = param_3;

  _objc_storeStrong(&local_48,param_4);

  local_50 = param_1;

  _VideoMediaForArgs(local_48);

  local_58 = _objc_retainAutoreleasedReturnValue();

  (**(code **)(param_1 + 0x20))(local_38,*(undefined8 *)(param_1 + 0x28),local_3c,local_48);

  uVar1 = local_58;

  local_28 = &cf_error;

  _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_a0,local_3c);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_20 = uVar2;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_a0,&local_20,&local_28,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _TraceVideo(&cf_video_native_startFailed,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_58,0);

  _objc_storeStrong(&local_48,0);

  _objc_storeStrong(&local_38,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return;

}






// ---- ___Install_block_invoke_2.3055 @0x617d0 ----


void ___Install_block_invoke_2_3055

               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

               undefined8 param_5)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 local_48;

  long local_40;

  undefined8 local_38;

  undefined8 local_30;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_28 = 0;

  _objc_storeStrong(&local_28,param_3);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  local_38 = 0;

  _objc_storeStrong(&local_38,param_5);

  local_40 = param_1;

  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),local_28,local_30,local_38)

  ;

  puVar1 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);

  local_48 = (*(code *)PTR__objc_retain_00110460)(local_20);

  _dispatch_async(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_48,0);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___Install_block_invoke_3.3056 @0x61948 ----


void ___Install_block_invoke_3_3056(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_postNotificationName_object_

            (uVar1,local_30,&cf_WCMomentsTimelineChanged,*(undefined8 *)(param_1 + 0x20));

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___Install_block_invoke_4 @0x619b0 ----


void ___Install_block_invoke_4(long param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 local_38;

  byte local_30;

  long local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_28 = param_1;

  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));

  puVar1 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);

  local_38 = (*(code *)PTR__objc_retain_00110460)(local_20);

  local_30 = *(byte *)(param_1 + 0x30) & 1;

  _dispatch_async(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___Install_block_invoke_5 @0x61ac0 ----


void ___Install_block_invoke_5(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_60;

  cfstringStruct *local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar4 = *(undefined8 *)(param_1 + 0x20);

  local_28 = &cf_failed;

  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_60,*(byte *)(param_1 + 0x28) & 1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_20 = uVar2;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_60,&local_20,&local_28,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_postNotificationName_object_userInfo_

            (uVar1,local_60,&cf_WCMomentsTimelineFinished,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return;

}






// ---- ___Install_block_invoke.3070 @0x61bec ----


void ___Install_block_invoke_3070(long param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 local_30;

  long local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_28 = param_1;

  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));

  puVar1 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);

  local_30 = (*(code *)PTR__objc_retain_00110460)(local_20);

  _dispatch_async(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___Install_block_invoke_2.3071 @0x61cec ----


void ___Install_block_invoke_2_3071(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_postNotificationName_object_

            (uVar1,local_30,&cf_WCMomentsNoMoreTimeline,*(undefined8 *)(param_1 + 0x20));

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___Install_block_invoke_3.3073 @0x61d54 ----


void ___Install_block_invoke_3_3073(long param_1,undefined8 param_2,byte param_3)



{

  uint uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined *puVar4;

  undefined8 uVar5;

  undefined *local_80;

  undefined8 local_70;

  undefined8 local_40;

  undefined8 local_38;

  long local_30;

  byte local_21;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  local_30 = param_1;

  local_21 = param_3;

  (**(code **)(param_1 + 0x20))(local_20,"viewDidAppear:",param_3 & 1);

  _objc_getAssociatedObject(local_20,&_ButtonKey);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 == 0) {

    uVar3 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

    local_38 = _objc_msgSend_initWithTitle_style_target_action_

                         (uVar3,local_70,&cf_SRgSW,0,local_20,"wcm_toggleFeed");

    _objc_msgSend_navigationItem(local_20,local_70);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_rightBarButtonItems(uVar3,local_70);

    puVar4 = (undefined *)_objc_retainAutoreleasedReturnValue();

    local_80 = puVar4;

    if (puVar4 == (undefined *)0x0) {

      local_80 = PTR____NSArray0__struct_00110718;

    }

    _objc_msgSend_arrayWithArray_(&_OBJC_CLASS___NSMutableArray,local_70,local_80);

    local_40 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(puVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_addObject_(local_40,local_70,local_38);

    uVar3 = local_40;

    _objc_msgSend_navigationItem(local_20,local_70);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setRightBarButtonItems_(uVar5,local_70,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    _objc_setAssociatedObject(local_20,&_ButtonKey,local_38,1);

    _objc_storeStrong(&local_40);

    _objc_storeStrong(&local_38,0);

  }

  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_70);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_msgSend_boolForKey_(uVar3,local_70,&cf_WCMomentsDisabled);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if ((uVar1 & 1) == 0) {

    _Attach(local_20);

  }

  else {

    _objc_getAssociatedObject(local_20,&_PanelKey);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar2 != 0) {

      _objc_msgSend_wcm_toggleFeed(local_20,local_70);

    }

  }

  _objc_getAssociatedObject(local_20,&_PanelKey);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_start(uVar3,local_70);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___Install_block_invoke_4.3077 @0x62034 ----


void ___Install_block_invoke_4_3077(long param_1,undefined8 param_2,byte param_3)



{

  undefined8 local_60;

  undefined8 local_38;

  long local_30;

  byte local_21;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_30 = param_1;

  local_21 = param_3;

  _objc_getAssociatedObject(local_20,&_PanelKey);

  local_38 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_stop(local_38,local_60);

  _objc_msgSend_restoreChrome(local_38,local_60);

  (**(code **)(param_1 + 0x20))(local_20,"viewWillDisappear:",local_21 & 1);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___Install_block_invoke_5.3078 @0x620f4 ----


void ___Install_block_invoke_5_3078(long param_1,undefined8 param_2,uint param_3)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 local_48;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_48);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_msgSend_boolForKey_(uVar2,local_48,&cf_WCMomentsDisabled);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if ((uVar1 & 1) == 0) {

    _Attach(local_20);

  }

  (**(code **)(param_1 + 0x20))(local_20,"viewWillAppear:",param_3 & 1);

  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_48);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_msgSend_boolForKey_(uVar2,local_48,&cf_WCMomentsDisabled);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if ((uVar1 & 1) == 0) {

    _Attach(local_20);

  }

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___Install_block_invoke_6 @0x62218 ----


void ___Install_block_invoke_6(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_58;

  uint local_40;

  long local_30;

  long local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  local_28 = param_1;

  (**(code **)(param_1 + 0x20))(local_20,"viewDidLayoutSubviews");

  _objc_getAssociatedObject(local_20,&_PanelKey);

  local_30 = _objc_retainAutoreleasedReturnValue();

  local_40 = 0;

  if (local_30 != 0) {

    _objc_msgSend_view(local_30,local_58);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_40 = _objc_msgSend_isHidden(uVar1,local_58);

    local_40 = local_40 ^ 1;

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  if ((local_40 & 1) != 0) {

    _objc_msgSend_view(local_20,local_58);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_view(local_30,local_58);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_bringSubviewToFront_(uVar1,local_58);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_ensureTabBarVisible(local_30,local_58);

  }

  _objc_storeStrong(&local_30);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___InstallMessageStyleHooks_block_invoke @0x623ac ----


void ___InstallMessageStyleHooks_block_invoke(long param_1)



{

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));

  _StyleMessageController(local_20);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___InstallMessageStyleHooks_block_invoke_2 @0x62414 ----


void ___InstallMessageStyleHooks_block_invoke_2

               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 local_40;

  long local_38;

  undefined8 local_30;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  local_28 = 0;

  _objc_storeStrong(&local_28,param_3);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  local_38 = param_1;

  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),local_28,local_30);

  local_40 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(local_20,&_MessageStyleKey);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar1 != 0) {

    _StyleMessageCell(local_40);

  }

  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_40);

  _objc_storeStrong(&local_40);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_20,0);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}






// ---- ___InstallMessageStyleHooks_block_invoke_3 @0x62530 ----


void ___InstallMessageStyleHooks_block_invoke_3

               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  uint local_44;

  undefined8 local_40;

  long local_38;

  undefined8 local_30;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  local_28 = 0;

  _objc_storeStrong(&local_28,param_3);

  local_38 = param_1;

  local_30 = param_4;

  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),local_28,param_4);

  local_40 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(local_20,&_MessageStyleKey);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  uVar3 = local_40;

  local_44 = 0;

  if (lVar1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    local_44 = _objc_opt_isKindOfClass(uVar3,uVar2);

  }

  (*(code *)PTR__objc_release_00110458)(lVar1);

  if ((local_44 & 1) != 0) {

    _StyleMessageSectionHeader(local_40);

  }

  uVar3 = (*(code *)PTR__objc_retain_00110460)(local_40);

  _objc_storeStrong(&local_40);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_20,0);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}






// ---- ___InstallMessageStyleHooks_block_invoke_4 @0x62964 ----


void ___InstallMessageStyleHooks_block_invoke_4(long param_1)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  long local_50;

  undefined8 local_48;

  long local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong(&local_20);

  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));

  uVar2 = _MessageStyleEnabled(local_20);

  lVar1 = local_20;

  if ((uVar2 & 1) != 0) {

    _objc_msgSend_superview(local_20,local_48);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    local_50 = lVar3;

    if (lVar3 == 0) {

      local_50 = local_20;

    }

    _StyleMessageContent(lVar1,local_50);

    (*(code *)PTR__objc_release_00110458)(lVar3);

  }

  _objc_storeStrong(&local_20,0);

  return;

}





