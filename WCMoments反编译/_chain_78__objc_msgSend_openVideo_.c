// ============ 功能链 78  根: _objc_msgSend$openVideo: @0xcd940 ============
// 节点 47，按调用深度排序，自上而下读

// ---- [d0] _objc_msgSend$openVideo: @0xcd940 ----
// CALLERS: (根)
// CALLEES: openVideo:


void _objc_msgSend_openVideo_(undefined8 param_1)



{

  (*(code *)PTR__objc_msgSend_00110420)(param_1,"openVideo:");

  return;

}






// ---- [d1] openVideo: @0x551c0 ----
// CALLERS: userContentController:didReceiveScriptMessage:, _objc_msgSend$openVideo:
// CALLEES: setVideos:, setNextVideos:, setIndex:, setOpenDetail:, setOpenAuthorProfile:, setResolveItem:, setIsFollowing:, setFollowAuthor:, prepareNativeVideoEnvironment, videoQueueRows


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::openVideo_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  ulong uVar2;

  uint uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  undefined8 uVar7;

  undefined8 local_180;

  undefined *local_168;

  undefined4 local_160;

  undefined4 local_15c;

  code *local_158;

  undefined *local_150;

  undefined1 auStack_148 [8];

  undefined *local_140;

  undefined4 local_138;

  undefined4 local_134;

  code *local_130;

  undefined *local_128;

  undefined1 auStack_120 [8];

  undefined *local_118;

  undefined4 local_110;

  undefined4 local_10c;

  code *local_108;

  undefined *local_100;

  undefined1 auStack_f8 [8];

  undefined *local_f0;

  undefined4 local_e8;

  undefined4 local_e4;

  code *local_e0;

  undefined *local_d8;

  undefined1 auStack_d0 [8];

  undefined *local_c8;

  undefined4 local_c0;

  undefined4 local_bc;

  code *local_b8;

  undefined *local_b0;

  undefined1 auStack_a8 [24];

  undefined *local_90;

  undefined4 local_88;

  undefined4 local_84;

  code *local_80;

  undefined *local_78;

  undefined1 auStack_70 [8];

  undefined1 auStack_68 [8];

  undefined8 local_60;

  ulong local_58;

  ulong local_50;

  undefined8 local_48;

  uint local_3c;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  _objc_msgSend_host(local_28,local_180);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_presentedViewController(uVar4,local_180);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  (*(code *)PTR__objc_release_00110458)(uVar4);

  if (lVar5 == 0) {

    _objc_msgSend_prepareNativeVideoEnvironment(local_28,local_180);

    _objc_msgSend_videoQueueRows(local_28,local_180);

    local_48 = _objc_retainAutoreleasedReturnValue();

    local_50 = 0xffffffffffffffff;

    local_58 = 0;

    while( true ) {

      uVar2 = local_58;

      uVar6 = _objc_msgSend_count(local_48,local_180);

      if (uVar6 <= uVar2) break;

      _objc_msgSend_objectAtIndexedSubscript_(uVar2 - uVar6,local_48,local_180,local_58);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_objectForKeyedSubscript_(uVar4,local_180,&cf_id);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      uVar3 = _objc_msgSend_isEqual_(uVar7,local_180,local_38);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      if ((uVar3 & 1) != 0) {

        local_50 = local_58;

        break;

      }

      local_58 = local_58 + 1;

    }

    bVar1 = -1 < (long)local_50;

    if (bVar1) {

      local_60 = _objc_opt_new(&objc::class_t::WCMVideoController);

      _objc_msgSend_setVideos_(local_60,local_180,local_48);

      _objc_msgSend_setIndex_(local_60,local_180,local_50);

      _objc_msgSend_setModalPresentationStyle_(local_60,local_180,5);

      _objc_msgSend_setModalPresentationCapturesStatusBarAppearance_(local_60,local_180,1);

      _objc_initWeak(auStack_68,local_28);

      local_90 = PTR___NSConcreteStackBlock_001104f0;

      local_88 = 0xc2000000;

      local_84 = 0;

      local_80 = ___31__WCMFeedController_openVideo___block_invoke;

      local_78 = &___block_descriptor_40_e8_32w_e17___NSArray_12__0B8l;

      _objc_copyWeak(auStack_70,auStack_68);

      _objc_msgSend_setNextVideos_(local_60,local_180,&local_90);

      local_c8 = PTR___NSConcreteStackBlock_001104f0;

      local_c0 = 0xc2000000;

      local_bc = 0;

      local_b8 = ___31__WCMFeedController_openVideo___block_invoke_2153;

      local_b0 = &___block_descriptor_40_e8_32w_e18__16__0__NSString_8l;

      _objc_copyWeak(auStack_a8,auStack_68);

      _objc_msgSend_setResolveItem_(local_60,local_180,&local_c8);

      local_f0 = PTR___NSConcreteStackBlock_001104f0;

      local_e8 = 0xc2000000;

      local_e4 = 0;

      local_e0 = ___31__WCMFeedController_openVideo___block_invoke_2155;

      local_d8 = &___block_descriptor_40_e8_32w_e18_v16__0__NSString_8l;

      _objc_copyWeak(auStack_d0,auStack_68);

      _objc_msgSend_setOpenDetail_(local_60,local_180,&local_f0);

      local_118 = PTR___NSConcreteStackBlock_001104f0;

      local_110 = 0xc2000000;

      local_10c = 0;

      local_108 = ___31__WCMFeedController_openVideo___block_invoke_2157;

      local_100 = &___block_descriptor_40_e8_32w_e18_B16__0__NSString_8l;

      _objc_copyWeak(auStack_f8,auStack_68);

      _objc_msgSend_setIsFollowing_(local_60,local_180,&local_118);

      local_140 = PTR___NSConcreteStackBlock_001104f0;

      local_138 = 0xc2000000;

      local_134 = 0;

      local_130 = ___31__WCMFeedController_openVideo___block_invoke_2159;

      local_128 = &___block_descriptor_40_e8_32w_e18_v16__0__NSString_8l;

      _objc_copyWeak(auStack_120,auStack_68);

      _objc_msgSend_setFollowAuthor_(local_60,local_180,&local_140);

      local_168 = PTR___NSConcreteStackBlock_001104f0;

      local_160 = 0xc2000000;

      local_15c = 0;

      local_158 = ___31__WCMFeedController_openVideo___block_invoke_2;

      local_150 = &___block_descriptor_40_e8_32w_e18_v16__0__NSString_8l;

      _objc_copyWeak(auStack_148,auStack_68);

      _objc_msgSend_setOpenAuthorProfile_(local_60,local_180,&local_168);

      uVar4 = _objc_msgSend_host(local_28,local_180);

      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

      _objc_msgSend_presentViewController_animated_completion_(uVar4,local_180,local_60,1,0);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _objc_destroyWeak(auStack_148);

      _objc_destroyWeak(auStack_120);

      _objc_destroyWeak(auStack_f8);

      _objc_destroyWeak(auStack_d0);

      _objc_destroyWeak(auStack_a8);

      _objc_destroyWeak(auStack_70);

      _objc_destroyWeak(auStack_68);

      _objc_storeStrong(&local_60,0);

    }

    else {

      _objc_msgSend_openNativeDetail_(local_28,local_180,local_38);

    }

    local_3c = (uint)!bVar1;

    _objc_storeStrong(&local_48,0);

  }

  else {

    local_3c = 1;

  }

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d2] setVideos: @0x2b108 ----
// CALLERS: extendVideoQueue:, openVideo:, _objc_msgSend$setVideos:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setVideos_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_videos,param_3);

  return;

}






// ---- [d2] setNextVideos: @0x2b168 ----
// CALLERS: openVideo:, _objc_msgSend$setNextVideos:
// CALLEES: nextVideos


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setNextVideos_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_nextVideos);

  return;

}






// ---- [d2] setIndex: @0x2b218 ----
// CALLERS: settleVideo, openVideo:, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setIndex_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_index) = param_3;

  return;

}






// ---- [d2] setOpenDetail: @0x2b8a8 ----
// CALLERS: openVideo:, _objc_msgSend$setOpenDetail:
// CALLEES: openDetail


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setOpenDetail_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_openDetail);

  return;

}






// ---- [d2] setOpenAuthorProfile: @0x2b908 ----
// CALLERS: openVideo:, _objc_msgSend$setOpenAuthorProfile:
// CALLEES: openAuthorProfile


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setOpenAuthorProfile_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_openAuthorProfile);

  return;

}






// ---- [d2] setResolveItem: @0x2b968 ----
// CALLERS: openVideo:, _objc_msgSend$setResolveItem:
// CALLEES: resolveItem


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setResolveItem_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_resolveItem);

  return;

}






// ---- [d2] setIsFollowing: @0x2b9c8 ----
// CALLERS: openVideo:, _objc_msgSend$setIsFollowing:
// CALLEES: isFollowing


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setIsFollowing_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_isFollowing);

  return;

}






// ---- [d2] setFollowAuthor: @0x2ba28 ----
// CALLERS: openVideo:, _objc_msgSend$setFollowAuthor:
// CALLEES: followAuthor


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setFollowAuthor_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_followAuthor);

  return;

}






// ---- [d2] prepareNativeVideoEnvironment @0x537a8 ----
// CALLERS: openVideo:, _objc_msgSend$prepareNativeVideoEnvironment
// CALLEES: facade, account, facade, account, account, facade, host, facade, account, pendingSeenIDs


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::prepareNativeVideoEnvironment(ID param_1,SEL param_2)



{

  undefined1 uVar1;

  bool bVar2;

  uint uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  uint local_11c;

  undefined8 local_118;

  long local_f8 [4];

  undefined1 local_d1;

  long local_d0;

  byte local_c1;

  long local_c0;

  long local_b8;

  long local_b0;

  byte local_a1;

  undefined8 local_a0;

  byte local_91;

  undefined8 local_90;

  SEL local_88;

  ID local_80;

  cfstringStruct *local_78;

  cfstringStruct *local_70;

  cfstringStruct *local_68;

  cfstringStruct *local_60;

  cfstringStruct *local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_88 = param_2;

  local_80 = param_1;

  uVar4 = _objc_msgSend_nativeVideoEnvironment(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  uVar3 = _objc_msgSend_isViewLoaded(uVar4,local_118);

  local_91 = 0;

  local_a1 = 0;

  local_11c = 0;

  if ((uVar3 & 1) != 0) {

    uVar5 = _objc_msgSend_nativeVideoEnvironmentAccount(local_80,local_118);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    local_91 = 1;

    local_90 = uVar5;

    uVar6 = _objc_msgSend_account(local_80,local_118);

    local_a0 = _objc_retainAutoreleasedReturnValue(uVar6);

    local_a1 = 1;

    local_11c = _objc_msgSend_isEqual_(uVar5,local_118);

  }

  if ((local_a1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_a0);

  }

  if ((local_91 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_90);

  }

  (*(code *)PTR__objc_release_00110458)(uVar4);

  if ((local_11c & 1) == 0) {

    uVar4 = _objc_msgSend_host(local_80,local_118);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    uVar5 = _objc_msgSend_navigationController(uVar4,local_118);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    uVar6 = _objc_msgSend_topViewController(uVar5,local_118);

    local_b0 = _objc_retainAutoreleasedReturnValue(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    uVar4 = _objc_msgSend_pendingSeenIDs(local_80,local_118);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    lVar7 = _objc_msgSend_count(uVar4,local_118);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_b8 = lVar7;

    uVar4 = _objc_msgSend_host(local_80,local_118);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    uVar5 = _Call(uVar4,&cf_preOpenAlbumView,PTR____NSArray0__struct_00110718);

    local_c0 = _objc_retainAutoreleasedReturnValue(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    lVar7 = local_c0;

    local_c1 = 0;

    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

    uVar3 = _objc_opt_isKindOfClass(lVar7,uVar4);

    lVar7 = local_c0;

    local_d1 = 0;

    bVar2 = false;

    uVar1 = (uVar3 & 1) != 0;

    if ((bool)uVar1) {

      uVar4 = _objc_msgSend_host(local_80,local_118);

      local_d0 = _objc_retainAutoreleasedReturnValue(uVar4);

      bVar2 = lVar7 != local_d0;

      local_d1 = uVar1;

      (*(code *)PTR__objc_release_00110458)(local_d0);

      uVar1 = local_d1;

    }

    local_d1 = uVar1;

    if (bVar2) {

      _objc_msgSend_loadViewIfNeeded(local_c0,local_118);

      local_c1 = _objc_msgSend_isViewLoaded(local_c0,local_118);

      if ((local_c1 & 1) != 0) {

        _objc_msgSend_setNativeVideoEnvironment_(local_80,local_118,local_c0);

        uVar4 = _objc_msgSend_account(local_80,local_118);

        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

        _objc_msgSend_setNativeVideoEnvironmentAccount_(local_80,local_118);

        (*(code *)PTR__objc_release_00110458)(uVar4);

      }

    }

    uVar4 = _objc_msgSend_facade(local_80,local_118);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    uVar5 = _Call(uVar4,&cf_updateDownloadConcurrentCount,PTR____NSArray0__struct_00110718);

    local_f8[0] = _objc_retainAutoreleasedReturnValue(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    lVar7 = local_c0;

    local_78 = &cf_nativePage;

    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

    uVar3 = _objc_opt_isKindOfClass(lVar7,uVar4);

    uVar4 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_118,uVar3 & 1);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    local_70 = &cf_loaded;

    local_50 = uVar4;

    uVar5 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_118,local_c1 & 1);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    local_68 = &cf_downloadPrepared;

    local_48 = uVar5;

    uVar6 = _objc_msgSend_numberWithInt_

                      (local_f8[0],&_OBJC_CLASS___NSNumber,local_118,local_f8[0] != 0);

    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

    lVar7 = local_b0;

    local_60 = &cf_navigationUnchanged;

    local_40 = uVar6;

    uVar8 = _objc_msgSend_host(local_80,local_118);

    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

    uVar9 = _objc_msgSend_navigationController(uVar8,local_118);

    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);

    uVar10 = _objc_msgSend_topViewController(uVar9,local_118);

    lVar11 = _objc_retainAutoreleasedReturnValue(uVar10);

    uVar10 = _objc_msgSend_numberWithInt_

                       (lVar7 - lVar11,&_OBJC_CLASS___NSNumber,local_118,lVar7 - lVar11 == 0);

    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);

    lVar7 = local_b8;

    local_58 = &cf_pendingSeenUnchanged;

    local_38 = uVar10;

    uVar12 = _objc_msgSend_pendingSeenIDs(local_80,local_118);

    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);

    lVar13 = _objc_msgSend_count(uVar12,local_118);

    uVar14 = _objc_msgSend_numberWithInt_

                       (lVar7 - lVar13,&_OBJC_CLASS___NSNumber,local_118,lVar7 - lVar13 == 0);

    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);

    local_30 = uVar14;

    uVar15 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                       (&_OBJC_CLASS___NSDictionary,local_118,&local_50,&local_78,5);

    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);

    _Trace(&cf_video_environment_prepare);

    (*(code *)PTR__objc_release_00110458)(uVar15);

    (*(code *)PTR__objc_release_00110458)(uVar14);

    (*(code *)PTR__objc_release_00110458)(uVar12);

    (*(code *)PTR__objc_release_00110458)(uVar10);

    (*(code *)PTR__objc_release_00110458)(lVar11);

    (*(code *)PTR__objc_release_00110458)(uVar9);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_storeStrong(local_f8,0);

    _objc_storeStrong(&local_c0,0);

    _objc_storeStrong(&local_b0,0);

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d2] videoQueueRows @0x54a10 ----
// CALLERS: openVideo:, ___31-[WCMFeedController_openVideo:]_block_invoke, _objc_msgSend$videoQueueRows
// CALLEES: facade, facade, _VideoNumber, facade, facade, items, nativeMediaByID, rowOrder, cachedRows


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::videoQueueRows(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  cfstringStruct *pcVar9;

  cfstringStruct *pcVar10;

  ID IVar11;

  long lVar12;

  cfstringStruct *local_2a8;

  cfstringStruct *local_298;

  cfstringStruct *local_288;

  long local_240;

  uint local_20c;

  ulong local_1f0;

  ulong local_1e8;

  undefined8 local_1e0;

  undefined8 local_1c0;

  long local_1b8;

  byte local_1a9;

  long local_1a8;

  byte local_199;

  undefined8 local_198;

  byte local_189;

  undefined8 local_188;

  undefined8 local_180;

  undefined4 local_178;

  byte local_171;

  undefined8 local_170;

  undefined8 local_168;

  undefined1 auStack_160 [8];

  long local_158;

  long *local_150;

  undefined8 local_120;

  undefined8 local_118;

  SEL local_110;

  ID local_108;

  cfstringStruct *local_100;

  cfstringStruct *local_f8;

  cfstringStruct *local_f0;

  cfstringStruct *local_e8;

  cfstringStruct *local_e0;

  undefined8 local_d8;

  cfstringStruct *local_d0;

  cfstringStruct *local_c8;

  cfstringStruct *local_c0;

  long local_b8;

  undefined8 local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_110 = param_2;

  local_108 = param_1;

  local_118 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  _memset(auStack_160,0,0x40);

  _objc_msgSend_rowOrder(local_108,local_1e0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_1e8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar2,local_1e0,auStack_160,auStack_a8,0x10);

  if (local_1e8 != 0) {

    lVar12 = *local_150;

    local_1f0 = 0;

    do {

      do {

        if (*local_150 - lVar12 != 0) {

          _objc_enumerationMutation(*local_150 - lVar12,uVar2);

        }

        local_120 = *(undefined8 *)(local_158 + local_1f0 * 8);

        _objc_msgSend_cachedRows(local_108,local_1e0);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1e0,local_120);

        local_168 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)(uVar3);

        _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0,&cf_video);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar4 = _objc_msgSend_boolValue(uVar3,local_1e0);

        local_171 = 0;

        local_20c = 1;

        if ((uVar4 & 1) != 0) {

          _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0,&cf_hidden);

          local_170 = _objc_retainAutoreleasedReturnValue();

          local_171 = 1;

          local_20c = _objc_msgSend_boolValue(local_170,local_1e0);

        }

        if ((local_171 & 1) != 0) {

          (*(code *)PTR__objc_release_00110458)(local_170);

        }

        (*(code *)PTR__objc_release_00110458)(uVar3);

        if ((local_20c & 1) == 0) {

          _objc_msgSend_items(local_108,local_1e0);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1e0,local_120);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          local_189 = 0;

          local_199 = 0;

          local_1a9 = 0;

          local_240 = lVar5;

          if (lVar5 == 0) {

            _objc_msgSend_facade(local_108,local_1e0);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            local_189 = 1;

            local_b0 = local_120;

            local_188 = uVar6;

            _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1e0,&local_b0,1);

            local_198 = _objc_retainAutoreleasedReturnValue();

            local_199 = 1;

            _Call(uVar6,&cf_getDataItemByID_);

            local_1a8 = _objc_retainAutoreleasedReturnValue();

            local_240 = local_1a8;

          }

          local_1a9 = lVar5 == 0;

          local_180 = (*(code *)PTR__objc_retain_00110460)(local_240);

          if ((local_1a9 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_1a8);

          }

          if ((local_199 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_198);

          }

          if ((local_189 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_188);

          }

          (*(code *)PTR__objc_release_00110458)(lVar5);

          (*(code *)PTR__objc_release_00110458)(uVar3);

          _objc_msgSend_nativeMediaByID(local_108,local_1e0);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1e0,local_120);

          local_1b8 = _objc_retainAutoreleasedReturnValue();

          (*(code *)PTR__objc_release_00110458)(uVar3);

          puVar1 = PTR____NSArray0__struct_00110718;

          if (local_1b8 == 0) {

            _Call(local_180,&cf_contentObj);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            _Call(uVar3,&cf_mediaList,puVar1);

            local_1c0 = _objc_retainAutoreleasedReturnValue();

            (*(code *)PTR__objc_release_00110458)(uVar3);

            uVar3 = local_1c0;

            uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

            uVar4 = _objc_opt_isKindOfClass(uVar3,uVar6);

            if ((uVar4 & 1) != 0) {

              _objc_msgSend_firstObject(local_1c0,local_1e0);

              lVar7 = _objc_retainAutoreleasedReturnValue();

              lVar5 = local_1b8;

              local_1b8 = lVar7;

              (*(code *)PTR__objc_release_00110458)(lVar5);

            }

            _objc_storeStrong(&local_1c0,0);

          }

          if (local_1b8 == 0) {

            local_178 = 3;

          }

          else {

            _VideoNumber(local_1b8,1);

            _objc_unsafeClaimAutoreleasedReturnValue();

            uVar3 = local_118;

            local_100 = &cf_id;

            local_d8 = local_120;

            local_f8 = &cf_name;

            _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0);

            pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            local_288 = pcVar8;

            if (pcVar8 == (cfstringStruct *)0x0) {

              local_288 = &cf___;

            }

            local_d0 = local_288;

            local_f0 = &cf_text;

            _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0);

            pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            local_298 = pcVar9;

            if (pcVar9 == (cfstringStruct *)0x0) {

              local_298 = &cf___;

            }

            local_c8 = local_298;

            local_e8 = &cf_username;

            _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0);

            pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            local_2a8 = pcVar10;

            if (pcVar10 == (cfstringStruct *)0x0) {

              local_2a8 = &cf___;

            }

            local_c0 = local_2a8;

            local_e0 = &cf_media;

            local_b8 = local_1b8;

            _objc_msgSend_dictionaryWithObjects_forKeys_count_

                      (&_OBJC_CLASS___NSDictionary,local_1e0,&local_d8,&local_100,5);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_addObject_(uVar3,local_1e0);

            (*(code *)PTR__objc_release_00110458)(uVar6);

            (*(code *)PTR__objc_release_00110458)(pcVar10);

            (*(code *)PTR__objc_release_00110458)(pcVar9);

            (*(code *)PTR__objc_release_00110458)(pcVar8);

            local_178 = 0;

          }

          _objc_storeStrong(&local_1b8);

          _objc_storeStrong(&local_180,0);

        }

        else {

          local_178 = 3;

        }

        _objc_storeStrong(&local_168,0);

        local_1f0 = local_1f0 + 1;

      } while (local_1f0 < local_1e8);

      local_1e8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar2,local_1e0,auStack_160,auStack_a8,0x10);

      local_1f0 = 0;

    } while (local_1e8 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_118);

  local_178 = 1;

  _objc_storeStrong(&local_118,0);

  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  IVar11 = _objc_autoreleaseReturnValue(0,uVar2);

  return IVar11;

}






// ---- [d2] openNativeDetail: @0x55eb0 ----
// CALLERS: openGallery:, openVideo:, ___31-[WCMFeedController_openVideo:]_block_invoke.2155, userContentController:didReceiveScriptMessage:, _objc_msgSend$openNativeDetail:
// CALLEES: facade, facade, facade, status:, host, facade, items


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x18 bytes */



void WCMFeedController::openNativeDetail_(ID param_1,SEL param_2,ID param_3)



{

  undefined1 uVar1;

  undefined *puVar2;

  bool bVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 uVar8;

  long local_158;

  undefined8 local_148;

  long local_100;

  undefined8 local_f8;

  undefined1 local_e9;

  long local_e8;

  byte local_d9;

  undefined8 local_d8;

  byte local_c9;

  undefined8 local_c8;

  undefined8 local_c0;

  uint local_b8;

  byte local_b1;

  long local_b0;

  byte local_a1;

  undefined8 local_a0;

  byte local_91;

  undefined8 local_90;

  long local_88;

  undefined8 local_80;

  SEL local_78;

  ID local_70;

  long local_68;

  undefined **local_60;

  undefined8 local_58;

  long local_50;

  long local_48;

  undefined8 local_40;

  undefined *local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_80 = 0;

  local_78 = param_2;

  local_70 = param_1;

  _objc_storeStrong(&local_80,param_3);

  _objc_msgSend_items(local_70,local_148);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar4,local_148,local_80);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  local_91 = 0;

  local_a1 = 0;

  local_b1 = 0;

  local_158 = lVar5;

  if (lVar5 == 0) {

    _objc_msgSend_facade(local_70,local_148);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    local_91 = 1;

    local_30 = local_80;

    local_90 = uVar6;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_148,&local_30,1);

    local_a0 = _objc_retainAutoreleasedReturnValue();

    local_a1 = 1;

    _Call(uVar6,&cf_getDataItemByID_);

    local_b0 = _objc_retainAutoreleasedReturnValue();

    local_158 = local_b0;

  }

  local_b1 = lVar5 == 0;

  local_88 = (*(code *)PTR__objc_retain_00110460)(local_158);

  if ((local_b1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_b0);

  }

  if ((local_a1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_a0);

  }

  if ((local_91 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_90);

  }

  (*(code *)PTR__objc_release_00110458)(lVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  if (local_88 == 0) {

    _objc_msgSend_status_(local_70,local_148,&cf_R__fe7ReT);

    local_b8 = 1;

  }

  else {

    local_c0 = _NSClassFromString(&cf_WCTimelineRouterHelper);

    _Call(local_c0,&cf_isFlutterDetailEnabled,PTR____NSArray0__struct_00110718);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar7 = _objc_msgSend_boolValue(uVar6,local_148);

    uVar4 = local_c0;

    local_c9 = 0;

    local_d9 = 0;

    local_e9 = 0;

    bVar3 = false;

    uVar1 = (uVar7 & 1) != 0;

    if ((bool)uVar1) {

      local_48 = local_88;

      _objc_msgSend_host(local_70,local_148);

      local_c8 = _objc_retainAutoreleasedReturnValue();

      local_c9 = 1;

      local_38 = PTR____kCFBooleanFalse_00110728;

      local_40 = local_c8;

      _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_148,&local_48,3);

      local_d8 = _objc_retainAutoreleasedReturnValue();

      local_d9 = 1;

      _Call(uVar4,&cf_navigateToFlutterDetailViewController_currentViewController_forbidComment_);

      local_e8 = _objc_retainAutoreleasedReturnValue();

      bVar3 = local_e8 != 0;

      local_e9 = uVar1;

      (*(code *)PTR__objc_release_00110458)(local_e8);

      uVar1 = local_e9;

    }

    local_e9 = uVar1;

    if ((local_d9 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_d8);

    }

    if ((local_c9 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_c8);

    }

    (*(code *)PTR__objc_release_00110458)(uVar6);

    if (bVar3) {

      local_b8 = 1;

    }

    else {

      _objc_msgSend_host(local_70,local_148);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      puVar2 = PTR____NSArray0__struct_00110718;

      _Call(uVar4,&cf_preOpenAlbumView);

      local_f8 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _Call(local_f8,&cf_pageContext,puVar2);

      local_100 = _objc_retainAutoreleasedReturnValue();

      uVar4 = local_c0;

      bVar3 = false;

      if (local_100 != 0) {

        local_68 = local_88;

        local_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;

        _objc_msgSend_host(local_70,local_148);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        local_50 = local_100;

        local_58 = uVar6;

        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_148,&local_68,4);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        _Call(uVar4,&

                    cf_navigateToCommentDetailViewController_tipType_currentViewController_pageContext_

             );

        lVar5 = _objc_retainAutoreleasedReturnValue();

        bVar3 = lVar5 != 0;

        (*(code *)PTR__objc_release_00110458)(lVar5);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        (*(code *)PTR__objc_release_00110458)(uVar6);

      }

      if (!bVar3) {

        _objc_msgSend_host(local_70,local_148);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _Call(uVar4,&cf_openAlbum,PTR____NSArray0__struct_00110718);

        _objc_unsafeClaimAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)(uVar4);

      }

      local_b8 = (uint)bVar3;

      _objc_storeStrong(&local_100);

      _objc_storeStrong(&local_f8,0);

    }

  }

  _objc_storeStrong(&local_88);

  _objc_storeStrong(&local_80,0);

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






// ---- [d2] setIndex: @0x932ac ----
// CALLERS: settleVideo, openVideo:, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 8) = param_3;

  return;

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






// ---- [d3] nextVideos @0x2b144 ----
// CALLERS: extendVideoQueue:, setNextVideos:, .cxx_destruct, _objc_msgSend$nextVideos
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::nextVideos(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nextVideos);

}






// ---- [d3] openDetail @0x2b884 ----
// CALLERS: detail, setOpenDetail:, .cxx_destruct, _objc_msgSend$openDetail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::openDetail(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_openDetail);

}






// ---- [d3] openAuthorProfile @0x2b8e4 ----
// CALLERS: showVideoAuthor, setOpenAuthorProfile:, .cxx_destruct, _objc_msgSend$openAuthorProfile
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::openAuthorProfile(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_openAuthorProfile);

}






// ---- [d3] resolveItem @0x2b944 ----
// CALLERS: updateVideoCounts, toggleVideoLike, showComments, setResolveItem:, .cxx_destruct, _objc_msgSend$resolveItem
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::resolveItem(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_resolveItem);

}






// ---- [d3] isFollowing @0x2b9a4 ----
// CALLERS: updateVideoFollowing, setIsFollowing:, .cxx_destruct, _objc_msgSend$isFollowing
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::isFollowing(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_isFollowing);

}






// ---- [d3] followAuthor @0x2ba04 ----
// CALLERS: toggleVideoFollowing, setFollowAuthor:, .cxx_destruct, _objc_msgSend$followAuthor
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::followAuthor(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_followAuthor);

}






// ---- [d3] facade @0xea18 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] account @0xea78 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d3] facade @0x1588c ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] account @0x15c4c ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d3] account @0x2b6b4 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d3] facade @0x2b824 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] facade @0x59138 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] account @0x592b8 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d3] pendingSeenIDs @0x59b4c ----
// CALLERS: prepareNativeVideoEnvironment, acknowledgeSeenItems, setPendingSeenIDs:, .cxx_destruct, _objc_msgSend$pendingSeenIDs
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::pendingSeenIDs(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pendingSeenIDs);

}






// ---- [d3] nativeVideoEnvironment @0x5a688 ----
// CALLERS: prepareNativeVideoEnvironment, setNativeVideoEnvironment:, nativeVideoEnvironmentAccount, setNativeVideoEnvironmentAccount:, .cxx_destruct, _objc_msgSend$nativeVideoEnvironment, _objc_msgSend$nativeVideoEnvironmentAccount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeVideoEnvironment(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeVideoEnvironment);

}






// ---- [d3] setNativeVideoEnvironment: @0x5a6ac ----
// CALLERS: stop, prepareNativeVideoEnvironment, _objc_msgSend$setNativeVideoEnvironment:
// CALLEES: nativeVideoEnvironment


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setNativeVideoEnvironment_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_nativeVideoEnvironment,param_3);

  return;

}






// ---- [d3] nativeVideoEnvironmentAccount @0x5a6e8 ----
// CALLERS: prepareNativeVideoEnvironment, setNativeVideoEnvironmentAccount:, .cxx_destruct, _objc_msgSend$nativeVideoEnvironmentAccount
// CALLEES: nativeVideoEnvironment


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeVideoEnvironmentAccount(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeVideoEnvironmentAccount);

}






// ---- [d3] setNativeVideoEnvironmentAccount: @0x5a70c ----
// CALLERS: stop, prepareNativeVideoEnvironment, _objc_msgSend$setNativeVideoEnvironmentAccount:
// CALLEES: nativeVideoEnvironment, nativeVideoEnvironmentAccount


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setNativeVideoEnvironmentAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_nativeVideoEnvironmentAccount);

  return;

}






// ---- [d3] _VideoNumber @0x2747c ----
// CALLERS: _TraceVideo, videoQueueRows, ___VideoNumber_block_invoke, ___Install_block_invoke.3018
// CALLEES: (叶)


void _VideoNumber(undefined8 param_1,byte param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  ulong uVar6;

  undefined8 local_b8;

  undefined8 local_a8;

  bool local_61;

  undefined8 local_60;

  undefined8 local_58 [3];

  long local_40;

  undefined4 local_38;

  byte local_31;

  long local_30;

  undefined8 local_28;

  undefined8 local_20;

  long *local_18;

  

  local_30 = 0;

  _objc_storeStrong(&local_30,param_1);

  local_31 = param_2;

  if (local_30 == 0) {

    local_28 = 0;

    local_38 = 1;

  }

  else {

    local_18 = &_VideoNumber_once;

    local_20 = 0;

    _objc_storeStrong(&local_20,&___block_literal_global_2970);

    if (*local_18 + 1 != 0) {

      _dispatch_once(*local_18 + 1,local_18,local_20);

    }

    _objc_storeStrong(&local_20,0);

    uVar1 = (*(code *)PTR__objc_retain_00110460)(_VideoNumber_lock);

    _objc_sync_enter();

    uVar2 = _objc_getAssociatedObject(local_30,&_VideoDiagnosticKey);

    local_40 = _objc_retainAutoreleasedReturnValue(uVar2);

    if (local_40 == 0) {

      uVar2 = _Call(local_30,&cf_mid,PTR____NSArray0__struct_00110718);

      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

      uVar3 = _Text();

      local_58[0] = _objc_retainAutoreleasedReturnValue(uVar3);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      lVar4 = _objc_msgSend_length(local_58[0],local_a8);

      if (lVar4 == 0) {

        local_b8 = 0;

      }

      else {

        uVar2 = _objc_msgSend_objectForKeyedSubscript_(_VideoNumber_ids,local_a8,local_58[0]);

        local_b8 = _objc_retainAutoreleasedReturnValue(uVar2);

        local_60 = local_b8;

      }

      local_61 = lVar4 != 0;

      _objc_storeStrong(&local_40,local_b8);

      if (local_61) {

        (*(code *)PTR__objc_release_00110458)(local_60);

      }

      if ((local_40 == 0) && ((local_31 & 1) != 0)) {

        _VideoNumber_next = _VideoNumber_next + 1;

        uVar2 = _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_a8);

        lVar5 = _objc_retainAutoreleasedReturnValue(uVar2);

        lVar4 = local_40;

        local_40 = lVar5;

        (*(code *)PTR__objc_release_00110458)(lVar4);

      }

      if (local_40 != 0) {

        _objc_setAssociatedObject(local_30,&_VideoDiagnosticKey,local_40,1);

        lVar4 = _objc_msgSend_length(local_58[0],local_a8);

        if (lVar4 != 0) {

          uVar6 = _objc_msgSend_count(_VideoNumber_ids,local_a8);

          if (0x1ff < uVar6) {

            _objc_msgSend_removeAllObjects(_VideoNumber_ids,local_a8);

          }

          _objc_msgSend_setObject_forKeyedSubscript_(_VideoNumber_ids,local_a8,local_40,local_58[0])

          ;

        }

      }

      local_28 = (*(code *)PTR__objc_retain_00110460)(local_40);

      local_38 = 1;

      _objc_storeStrong(local_58,0);

    }

    else {

      local_28 = (*(code *)PTR__objc_retain_00110460)(local_40);

      local_38 = 1;

    }

    _objc_storeStrong(&local_40,0);

    _objc_sync_exit(uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  _objc_storeStrong(&local_30,0);

  _objc_autoreleaseReturnValue(local_28);

  return;

}






// ---- [d3] items @0x591f8 ----
// CALLERS: openGallery:, videoQueueRows, ___31-[WCMFeedController_openVideo:]_block_invoke.2153, openNativeDetail:, acknowledgeSeenItems, userContentController:didReceiveScriptMessage:, _objc_msgSend$items
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::items(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_items);

}






// ---- [d3] nativeMediaByID @0x59700 ----
// CALLERS: start, videoQueueRows, setNativeMediaByID:, .cxx_destruct, _objc_msgSend$nativeMediaByID
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::nativeMediaByID(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nativeMediaByID);

}






// ---- [d3] rowOrder @0x59760 ----
// CALLERS: showCachedFeed, start, videoQueueRows, setRowOrder:, .cxx_destruct, _objc_msgSend$rowOrder
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::rowOrder(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_rowOrder);

}






// ---- [d3] cachedRows @0x5ab3c ----
// CALLERS: traceState:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, toggleFollowing:, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, start, syncHiddenUsers, verifyHiddenUser:request:attempt:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::cachedRows(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cachedRows);

}






// ---- [d3] status: @0x39544 ----
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






// ---- [d4] web @0x590d8 ----
// CALLERS: isFeedScrolling, pollNativeTimeline, viewDidLoad, refreshPan:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, dealloc, webView:didFinishNavigation:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::web(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_web);

}






// ---- [d4] ready @0x59c58 ----
// CALLERS: traceState:, pollNativeTimeline, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2, syncPaging, showCachedFeed, ___48-[WCMFeedController_extractVideoCover:mediaKey:]_block_invoke_2, status:, start
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMFeedController::ready(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_ready) & 1;

}





