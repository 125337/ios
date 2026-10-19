// ============ 功能链 16  根: viewDidAppear: @0x1b528 ============
// 节点 148，按调用深度排序，自上而下读

// ---- [d0] viewDidAppear: @0x1b528 ----
// CALLERS: (根)
// CALLEES: _CGPointMake, timer, setTimer:, updateVideoCounts, activateVideo, index, collection, timer, setTimer:, setAudioCategory:


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x14 bytes */



void WCMVideoController::viewDidAppear_(ID param_1,SEL param_2,bool param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  double in_d3;

  undefined8 local_d0;

  undefined *local_b0;

  undefined4 local_a8;

  undefined4 local_a4;

  code *local_a0;

  undefined *local_98;

  undefined1 auStack_90 [8];

  undefined1 auStack_88 [8];

  undefined8 local_80;

  undefined8 local_60;

  double local_58;

  undefined8 local_50;

  ID local_48;

  class_t *local_40;

  undefined1 local_31;

  SEL local_30;

  ID local_28;

  

  local_31 = (undefined1)param_3;

  local_40 = &objc::class_t::WCMVideoController;

  local_48 = param_1;

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSendSuper2(&local_48,"viewDidAppear:",param_3 & 1);

  _objc_msgSend_timer(local_28,local_d0);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar1 == 0) {

    _objc_msgSend_sharedInstance(&_OBJC_CLASS___AVAudioSession,local_d0);

    local_50 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_category(local_50,local_d0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setAudioCategory_(local_28,local_d0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_mode(local_50,local_d0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setAudioMode_(local_28,local_d0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_msgSend_categoryOptions(local_50,local_d0);

    _objc_msgSend_setAudioOptions_(local_28,local_d0,uVar2);

    _objc_msgSend_setCategory_mode_options_error_

              (local_50,local_d0,*(undefined8 *)PTR__AVAudioSessionCategoryPlayback_00110698,

               *(undefined8 *)PTR__AVAudioSessionModeMoviePlayback_001106a0,0);

    _objc_msgSend_setActive_error_(local_50,local_d0,1,0);

    _objc_msgSend_collection(local_28,local_d0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_layoutIfNeeded(uVar2,local_d0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_collection(local_28,local_d0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar1 = _objc_msgSend_index(local_28,local_d0);

    _objc_msgSend_collection(local_28,local_d0);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_80 = _objc_msgSend_bounds(uVar3,local_d0);

    in_d3 = (double)lVar1 * in_d3;

    local_60 = _CGPointMake(0);

    local_58 = in_d3;

    _objc_msgSend_setContentOffset_animated_(local_60,in_d3,uVar2,local_d0,0);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_activateVideo(local_28,local_d0);

    _objc_initWeak(auStack_88,local_28);

    local_b0 = PTR___NSConcreteStackBlock_001104f0;

    local_a8 = 0xc2000000;

    local_a4 = 0;

    local_a0 = ___36__WCMVideoController_viewDidAppear___block_invoke;

    local_98 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;

    _objc_copyWeak(auStack_90,auStack_88);

    uVar2 = _objc_msgSend_timerWithTimeInterval_repeats_block_

                      (0x3fd0000000000000,&_OBJC_CLASS___NSTimer,local_d0,1,&local_b0);

    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

    _objc_msgSend_setTimer_(local_28,local_d0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_msgSend_mainRunLoop(&_OBJC_CLASS___NSRunLoop,local_d0);

    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

    uVar3 = _objc_msgSend_timer(local_28,local_d0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_addTimer_forMode_

              (uVar2,local_d0,uVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_destroyWeak(auStack_90);

    _objc_destroyWeak(auStack_88);

    _objc_storeStrong(&local_50,0);

  }

  else {

    _objc_msgSend_updateVideoCounts(local_28,local_d0);

  }

  return;

}






// ---- [d1] _CGPointMake @0x77d0 ----
// CALLERS: positionIndicator, layoutIndicatorContent, drawRing:color:, _WCMSoftenMediaEdges, viewDidLayoutSubviews, viewDidAppear:, respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGPointMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d1] timer @0x15b2c ----
// CALLERS: viewWillDisappear:, dealloc, viewDidAppear:, viewWillDisappear:, dealloc, close, showVideoAuthor, detail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::timer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_timer);

}






// ---- [d1] setTimer: @0x15b50 ----
// CALLERS: viewDidAppear:, viewWillDisappear:, viewDidAppear:, viewWillDisappear:, close, showVideoAuthor, detail, start
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoComments::setTimer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_timer,param_3);

  return;

}






// ---- [d1] updateVideoCounts @0x1a158 ----
// CALLERS: viewDidAppear:, activateVideo, toggleVideoLike, ___37-[WCMVideoController_toggleVideoLike]_block_invoke, _objc_msgSend$updateVideoCounts
// CALLEES: facade, facade, videos, index, facade, resolveItem, likeCountLabel, commentCountLabel, facade, index


/* Function Stack Size: 0x10 bytes */



void WCMVideoController::updateVideoCounts(ID param_1,SEL param_2)



{

  undefined1 uVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  bool bVar4;

  uint uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  long lVar12;

  undefined8 local_118;

  undefined8 local_b8;

  undefined8 local_80;

  undefined8 local_70;

  undefined8 local_60;

  undefined1 local_51;

  long local_50;

  long local_48;

  SEL local_40;

  ID local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_40 = param_2;

  local_38 = param_1;

  _objc_msgSend_facade(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_videos(local_38,local_b8);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  uVar8 = _objc_msgSend_index(local_38,local_b8);

  _objc_msgSend_objectAtIndexedSubscript_(uVar7,local_b8,uVar8);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar8,local_b8,&cf_id);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar9;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_b8,&local_30,1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar6,&cf_getDataItemByID_);

  local_48 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  local_51 = 0;

  bVar4 = false;

  uVar1 = local_48 == 0;

  if ((bool)uVar1) {

    _objc_msgSend_resolveItem(local_38,local_b8);

    local_50 = _objc_retainAutoreleasedReturnValue();

    bVar4 = local_50 != 0;

    local_51 = uVar1;

    (*(code *)PTR__objc_release_00110458)(local_50);

    uVar1 = local_51;

  }

  local_51 = uVar1;

  if (bVar4) {

    _objc_msgSend_resolveItem(local_38,local_b8);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_videos(local_38,local_b8);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar7 = _objc_msgSend_index(local_38,local_b8);

    _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_b8,uVar7);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectForKeyedSubscript_(uVar7,local_b8,&cf_id);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar11 + 0x10))();

    lVar12 = _objc_retainAutoreleasedReturnValue();

    lVar3 = local_48;

    local_48 = lVar12;

    (*(code *)PTR__objc_release_00110458)(lVar3);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    (*(code *)PTR__objc_release_00110458)(uVar7);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(lVar11);

  }

  _objc_msgSend_view(local_38,local_b8);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_viewWithTag_(uVar6,local_b8,0x2c0);

  local_60 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _Call(local_48,&cf_likeFlag,PTR____NSArray0__struct_00110718);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar5 = _objc_msgSend_boolValue(uVar6,local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  uVar6 = local_60;

  pcVar2 = &cf_heart_fill;

  if ((uVar5 & 1) == 0) {

    pcVar2 = &cf_heart;

  }

  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_b8,pcVar2);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar7,0);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  bVar4 = (uVar5 & 1) == 0;

  if (bVar4) {

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);

    local_118 = _objc_retainAutoreleasedReturnValue();

    local_80 = local_118;

  }

  else {

    _objc_msgSend_systemPinkColor(&_OBJC_CLASS___UIColor,local_b8);

    local_118 = _objc_retainAutoreleasedReturnValue();

    local_70 = local_118;

  }

  _objc_msgSend_setTintColor_(local_60,local_b8,local_118);

  if (bVar4) {

    (*(code *)PTR__objc_release_00110458)(local_80);

  }

  else {

    (*(code *)PTR__objc_release_00110458)(local_70);

  }

  pcVar2 = &cf_Smp_;

  if ((uVar5 & 1) == 0) {

    pcVar2 = &cf_p_;

  }

  _objc_msgSend_setAccessibilityLabel_(local_60,local_b8,pcVar2);

  _Call(local_48,&cf_likeCount,PTR____NSArray0__struct_00110718);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_b8,&cf___);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_likeCountLabel(local_38,local_b8);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setText_(uVar8,local_b8,uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _Call(local_48,&cf_commentCount,PTR____NSArray0__struct_00110718);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_b8,&cf___);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_commentCountLabel(local_38,local_b8);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setText_(uVar8,local_b8,uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _objc_storeStrong(&local_60);

  _objc_storeStrong(&local_48,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d1] activateVideo @0x2056c ----
// CALLERS: viewDidAppear:, settleVideo, retryVideo, _objc_msgSend$activateVideo
// CALLEES: _Service, poster, updateVideoCounts, _TraceVideo, warmNeighbors, resetVideoSurface, updateVideoFollowing, videos, index, collection


/* Function Stack Size: 0x10 bytes */



void WCMVideoController::activateVideo(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  cfstringStruct *pcVar7;

  ulong uVar8;

  long lVar9;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_2b8;

  cfstringStruct *local_298;

  ulong local_200;

  ulong local_1f8;

  undefined8 local_1a8;

  undefined8 local_148;

  byte local_139;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  undefined1 auStack_120 [8];

  long local_118;

  long *local_110;

  undefined8 local_e0;

  SEL local_d8;

  ID local_d0;

  undefined8 local_c8;

  undefined **local_c0;

  undefined1 auStack_b8 [128];

  cfstringStruct *local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_d8 = param_2;

  local_d0 = param_1;

  _objc_msgSend_videos(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_index(local_d0,local_1a8);

  _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_1a8,uVar3);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1a8,&cf_media);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_38 = &cf_index;

  uVar5 = _objc_msgSend_index(local_d0,local_1a8);

  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_1a8,uVar5);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar5;

  _objc_msgSend_dictionaryWithObjects_forKeys_count_

            (&_OBJC_CLASS___NSDictionary,local_1a8,&local_30,&local_38,1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _TraceVideo(&cf_video_activate,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _memset(auStack_120,0,0x40);

  _objc_msgSend_collection(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_visibleCells(uVar2,local_1a8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  local_1f8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar3,local_1a8,auStack_120,auStack_b8,0x10);

  if (local_1f8 != 0) {

    lVar9 = *local_110;

    local_200 = 0;

    do {

      do {

        if (*local_110 - lVar9 != 0) {

          _objc_enumerationMutation(*local_110 - lVar9,uVar3);

        }

        local_e0 = *(undefined8 *)(local_118 + local_200 * 8);

        _objc_msgSend_poster(local_e0,local_1a8);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_setHidden_(uVar2,local_1a8,0);

        (*(code *)PTR__objc_release_00110458)(uVar2);

        local_200 = local_200 + 1;

      } while (local_200 < local_1f8);

      local_1f8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar3,local_1a8,auStack_120,auStack_b8,0x10);

      local_200 = 0;

    } while (local_1f8 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_player(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_pause(uVar2,local_1a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_player(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_replaceCurrentItemWithPlayerItem_(uVar2,local_1a8,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_resetVideoSurface(local_d0,local_1a8);

  _objc_msgSend_setUserPaused_(local_d0,local_1a8,0);

  _objc_msgSend_setSeeking_(local_d0,local_1a8,0);

  _objc_msgSend_setPlaybackFailed_(local_d0,local_1a8,0);

  _objc_msgSend_setRepairedVideoLayer_(local_d0,local_1a8,0);

  _objc_msgSend_progress(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setValue_(0,uVar2,local_1a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_pauseButton(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar2,local_1a8,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setLastDownloadRequest_(local_d0,local_1a8);

  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemUptime(uVar2,local_1a8);

  _objc_msgSend_setLoadingStarted_(local_d0,local_1a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_loadingStarted(local_d0,local_1a8);

  _objc_msgSend_setLastPlaybackProgress_(local_d0,local_1a8);

  _objc_msgSend_loadingStarted(local_d0,local_1a8);

  _objc_msgSend_setLastDownloadProgress_(local_d0,local_1a8);

  _objc_msgSend_setObservedVideoBytes_(local_d0,local_1a8,0);

  _objc_msgSend_setObservedVideoModification_(0,local_d0,local_1a8);

  _objc_msgSend_setPreviousPlaybackTime_(0xbff0000000000000,local_d0,local_1a8);

  _objc_msgSend_view(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_viewWithTag_(uVar2,local_1a8,0x2bf);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar3,local_1a8,1);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_hint(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setText_(uVar2,local_1a8,&cf___);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_videos(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_index(local_d0,local_1a8);

  _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_1a8,uVar3);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1a8,&cf_username);

  pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  local_298 = pcVar7;

  if (pcVar7 == (cfstringStruct *)0x0) {

    local_298 = &cf___;

  }

  local_128 = (*(code *)PTR__objc_retain_00110460)(local_298);

  (*(code *)PTR__objc_release_00110458)(pcVar7);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_updateVideoFollowing(local_d0,local_1a8);

  _objc_msgSend_updateVideoCounts(local_d0,local_1a8);

  _Service(&cf_MMHeadImageMgr);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_c8 = local_128;

  local_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1a8,&local_c8,2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar2,&cf_getHeadImage_withCategory_);

  local_130 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = local_130;

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar8 = _objc_opt_isKindOfClass(uVar2,uVar3);

  local_139 = 0;

  bVar1 = (uVar8 & 1) == 0;

  if (bVar1) {

    _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_1a8,&cf_person_crop_circle_fill);

    local_2b8 = _objc_retainAutoreleasedReturnValue();

    local_138 = local_2b8;

  }

  else {

    local_2b8 = local_130;

  }

  local_139 = bVar1;

  _objc_msgSend_view(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_viewWithTag_(uVar2,local_1a8,0x2c3);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_(uVar3,local_1a8,local_2b8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if ((local_139 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_138);

  }

  _objc_msgSend_collection(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_layoutIfNeeded(uVar2,local_1a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_collection(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_index(local_d0,local_1a8);

  _objc_msgSend_indexPathForItem_inSection_(&_OBJC_CLASS___NSIndexPath,local_1a8,uVar3,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_cellForItemAtIndexPath_(uVar2,local_1a8);

  local_148 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_playerLayer(local_d0,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_removeFromSuperlayer(uVar2,local_1a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_1a8);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_1a8,1);

  _objc_msgSend_contentView(local_148,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_layer(uVar2,local_1a8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_playerLayer(local_d0,local_1a8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_poster(local_148,local_1a8);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_layer(uVar5,local_1a8);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_insertSublayer_below_(uVar3,local_1a8,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_contentView(local_148,local_1a8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_bounds(uVar2,local_1a8);

  _objc_msgSend_playerLayer(local_d0,local_1a8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFrame_(uVar4,in_d1,in_d2,in_d3,uVar3,local_1a8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_1a8);

  _objc_msgSend_tickVideo(local_d0,local_1a8);

  _objc_msgSend_warmNeighbors(local_d0,local_1a8);

  _objc_storeStrong(&local_148);

  _objc_storeStrong(&local_130,0);

  _objc_storeStrong(&local_128,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d1] index @0x2b1f4 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMVideoController::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + _index);

}






// ---- [d1] collection @0x2b244 ----
// CALLERS: viewDidLoad, gestureRecognizer:shouldReceiveTouch:, viewDidLayoutSubviews, viewDidAppear:, collectionView:numberOfItemsInSection:, collectionView:layout:sizeForItemAtIndexPath:, collectionView:cellForItemAtIndexPath:, ___60-[WCMVideoController_collectionView:cellForItemAtIndexPath:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::collection(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_collection);

}






// ---- [d1] timer @0x2b364 ----
// CALLERS: viewWillDisappear:, dealloc, viewDidAppear:, viewWillDisappear:, dealloc, close, showVideoAuthor, detail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::timer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_timer);

}






// ---- [d1] setTimer: @0x2b388 ----
// CALLERS: viewDidAppear:, viewWillDisappear:, viewDidAppear:, viewWillDisappear:, close, showVideoAuthor, detail, start
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setTimer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_timer,param_3);

  return;

}






// ---- [d1] setAudioCategory: @0x2b738 ----
// CALLERS: viewDidAppear:, viewDidDisappear:, _objc_msgSend$setAudioCategory:
// CALLEES: audioCategory


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setAudioCategory_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_audioCategory);

  return;

}






// ---- [d1] setAudioMode: @0x2b798 ----
// CALLERS: viewDidAppear:, _objc_msgSend$setAudioMode:
// CALLEES: audioMode


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setAudioMode_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_audioMode);

  return;

}






// ---- [d1] setAudioOptions: @0x2b7f8 ----
// CALLERS: viewDidAppear:, _objc_msgSend$setAudioOptions:
// CALLEES: audioOptions


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setAudioOptions_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_audioOptions) = param_3;

  return;

}






// ---- [d1] timer @0x59198 ----
// CALLERS: viewWillDisappear:, dealloc, viewDidAppear:, viewWillDisappear:, dealloc, close, showVideoAuthor, detail
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::timer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_timer);

}






// ---- [d1] setTimer: @0x591bc ----
// CALLERS: viewDidAppear:, viewWillDisappear:, viewDidAppear:, viewWillDisappear:, close, showVideoAuthor, detail, start
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setTimer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_timer,param_3);

  return;

}






// ---- [d1] index @0x93290 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMYYImageFrame::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + 8);

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






// ---- [d2] videos @0x2b0e4 ----
// CALLERS: updateVideoCounts, collectionView:numberOfItemsInSection:, collectionView:cellForItemAtIndexPath:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, warmNeighbors, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::videos(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_videos);

}






// ---- [d2] facade @0x2b824 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] resolveItem @0x2b944 ----
// CALLERS: updateVideoCounts, toggleVideoLike, showComments, setResolveItem:, .cxx_destruct, _objc_msgSend$resolveItem
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::resolveItem(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_resolveItem);

}






// ---- [d2] likeCountLabel @0x2bac4 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, setLikeCountLabel:, .cxx_destruct, _objc_msgSend$likeCountLabel
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::likeCountLabel(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_likeCountLabel);

}






// ---- [d2] commentCountLabel @0x2bb24 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, setCommentCountLabel:, .cxx_destruct, _objc_msgSend$commentCountLabel
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::commentCountLabel(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_commentCountLabel);

}






// ---- [d2] facade @0x59138 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d2] view @0x9d4cc ----
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






// ---- [d2] poster @0x17a84 ----
// CALLERS: initWithFrame:, layoutSubviews, collectionView:cellForItemAtIndexPath:, activateVideo, _objc_msgSend$poster
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoCell::poster(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_poster);

}






// ---- [d2] _TraceVideo @0x1e0c0 ----
// CALLERS: prepareVideoPaths:index:offset:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, warmNeighbors, activateVideo, toggleVideoLike, ___Install_block_invoke, ___Install_block_invoke_3, ___Install_block_invoke.3018
// CALLEES: _VideoNumber


void _TraceVideo(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  bool bVar1;

  undefined8 local_68;

  undefined8 local_40;

  uint local_34;

  long local_30;

  undefined8 local_28;

  undefined8 local_20;

  undefined8 local_18;

  

  local_18 = 0;

  _objc_storeStrong(&local_18,param_1);

  local_20 = 0;

  _objc_storeStrong(&local_20,param_2);

  local_28 = 0;

  _objc_storeStrong(&local_28,param_3);

  _VideoNumber(local_20,0);

  local_30 = _objc_retainAutoreleasedReturnValue();

  bVar1 = local_30 != 0;

  if (bVar1) {

    local_40 = _objc_msgSend_mutableCopy(local_28,local_68);

    _objc_msgSend_setObject_forKeyedSubscript_(local_40,local_68,local_30,&cf_video);

    _Trace(local_18,local_40);

    _objc_storeStrong(&local_40,0);

  }

  local_34 = (uint)!bVar1;

  _objc_storeStrong(&local_30);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_20,0);

  _objc_storeStrong(&local_18,0);

  return;

}






// ---- [d2] warmNeighbors @0x1f1e4 ----
// CALLERS: activateVideo, extendVideoQueue:, _objc_msgSend$warmNeighbors
// CALLEES: facade, facade, localVideoPath:, prepareVideoAtIndex:, _TraceVideo, videos, index, player, playbackFailed, facade


/* Function Stack Size: 0x10 bytes */



void WCMVideoController::warmNeighbors(ID param_1,SEL param_2)



{

  undefined1 uVar1;

  ID IVar2;

  bool bVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  double dVar11;

  double dVar12;

  uint local_47c;

  long local_410;

  long local_3f0;

  ulong local_3a8;

  ulong local_3a0;

  ulong local_350;

  ulong local_348;

  undefined8 local_318;

  long local_2f8;

  byte local_2e9;

  undefined8 local_2e8;

  byte local_2d9;

  undefined8 local_2d8;

  byte local_2c9;

  undefined8 local_2c8;

  double local_2c0;

  undefined8 local_2b8;

  byte local_2a9;

  long local_2a8;

  byte local_299;

  undefined8 local_298;

  byte local_289;

  undefined8 local_288;

  byte local_279;

  undefined8 local_278;

  int local_270;

  undefined1 local_269;

  long local_268;

  byte local_259;

  undefined8 local_258;

  undefined8 local_250;

  long local_248;

  long local_240;

  long local_238;

  long local_230;

  long local_228;

  int local_21c;

  long local_218;

  undefined1 auStack_210 [8];

  long local_208;

  long *local_200;

  undefined8 local_1d0;

  undefined1 auStack_1c8 [8];

  long local_1c0;

  long *local_1b8;

  undefined8 local_188;

  byte local_179;

  undefined8 local_178;

  SEL local_170;

  ID local_168;

  cfstringStruct *local_160;

  undefined8 local_158;

  undefined8 local_150;

  long local_148;

  undefined8 local_140;

  undefined8 local_138;

  undefined *local_130;

  undefined1 auStack_128 [128];

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_170 = param_2;

  local_168 = param_1;

  _objc_msgSend_view(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_window(uVar4,local_318);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  local_179 = 0;

  bVar3 = true;

  if (lVar5 != 0) {

    uVar6 = _objc_msgSend_playbackFailed(local_168,local_318);

    bVar3 = true;

    if ((uVar6 & 1) == 0) {

      _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_318);

      local_178 = _objc_retainAutoreleasedReturnValue();

      local_179 = 1;

      lVar7 = _objc_msgSend_applicationState(local_178,local_318);

      bVar3 = lVar7 != 0;

    }

  }

  if ((local_179 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_178);

  }

  (*(code *)PTR__objc_release_00110458)(lVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  if (!bVar3) {

    _memset(auStack_1c8,0,0x40);

    _objc_msgSend_preparedItems(local_168,local_318);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_allKeys(uVar4,local_318);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_348 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar8,local_318,auStack_1c8,auStack_a8,0x10);

    if (local_348 != 0) {

      lVar5 = *local_1b8;

      local_350 = 0;

      do {

        do {

          if (*local_1b8 - lVar5 != 0) {

            _objc_enumerationMutation(*local_1b8 - lVar5,uVar8);

          }

          local_188 = *(undefined8 *)(local_1c0 + local_350 * 8);

          lVar9 = _objc_msgSend_integerValue(local_188,local_318);

          lVar7 = _objc_msgSend_index(local_168,local_318);

          lVar9 = lVar9 - lVar7;

          lVar7 = -lVar9;

          if (0 < lVar9) {

            lVar7 = lVar9;

          }

          if (lVar7 + -2 != 0 && 1 < lVar7) {

            _objc_msgSend_preparedItems(lVar7 + -2,local_168,local_318);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_removeObjectForKey_(uVar4,local_318,local_188);

            (*(code *)PTR__objc_release_00110458)(uVar4);

          }

          local_350 = local_350 + 1;

        } while (local_350 < local_348);

        local_348 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar8,local_318,auStack_1c8,auStack_a8,0x10);

        local_350 = 0;

      } while (local_348 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar8);

    _memset(auStack_210,0,0x40);

    _objc_msgSend_preparingAssets(local_168,local_318);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_allKeys(uVar4,local_318);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_3a0 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar8,local_318,auStack_210,auStack_128,0x10);

    if (local_3a0 != 0) {

      lVar5 = *local_200;

      local_3a8 = 0;

      do {

        do {

          if (*local_200 - lVar5 != 0) {

            _objc_enumerationMutation(*local_200 - lVar5,uVar8);

          }

          local_1d0 = *(undefined8 *)(local_208 + local_3a8 * 8);

          lVar9 = _objc_msgSend_integerValue(local_1d0,local_318);

          lVar7 = _objc_msgSend_index(local_168,local_318);

          lVar9 = lVar9 - lVar7;

          lVar7 = -lVar9;

          if (0 < lVar9) {

            lVar7 = lVar9;

          }

          if (lVar7 + -2 != 0 && 1 < lVar7) {

            _objc_msgSend_preparingAssets(lVar7 + -2,local_168,local_318);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_objectForKeyedSubscript_(uVar4,local_318,local_1d0);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_cancelLoading(uVar10,local_318);

            (*(code *)PTR__objc_release_00110458)(uVar10);

            (*(code *)PTR__objc_release_00110458)(uVar4);

            _objc_msgSend_preparingAssets(local_168,local_318);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_removeObjectForKey_(uVar4,local_318,local_1d0);

            (*(code *)PTR__objc_release_00110458)(uVar4);

          }

          local_3a8 = local_3a8 + 1;

        } while (local_3a8 < local_3a0);

        local_3a0 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar8,local_318,auStack_210,auStack_128,0x10);

        local_3a8 = 0;

      } while (local_3a0 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar8);

    IVar2 = local_168;

    uVar4 = _objc_msgSend_index(local_168,local_318);

    _objc_msgSend_prepareVideoAtIndex_(IVar2,local_318,uVar4);

    local_21c = 0;

    local_228 = _objc_msgSend_index(local_168,local_318);

    local_228 = local_228 + -1;

    local_3f0 = local_228;

    if (local_228 <= local_21c) {

      local_3f0 = (long)local_21c;

    }

    local_230 = local_3f0;

    local_218 = local_3f0;

    while( true ) {

      lVar5 = local_218;

      _objc_msgSend_videos(local_168,local_318);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar7 = _objc_msgSend_count(uVar4,local_318);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      local_238 = lVar7 + -1;

      local_240 = _objc_msgSend_index(local_168,local_318);

      lVar7 = local_218;

      local_240 = local_240 + 2;

      local_410 = local_240;

      if (local_238 < local_240) {

        local_410 = local_238;

      }

      local_248 = local_410;

      if (local_410 < lVar5) break;

      lVar5 = _objc_msgSend_index(local_168,local_318);

      if (lVar7 != lVar5) {

        _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_318,local_218);

        local_250 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_prepareVideoAtIndex_(local_168,local_318,local_218);

        _objc_msgSend_preparedItems(local_168,local_318);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_objectForKeyedSubscript_(uVar4,local_318,local_250);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        local_259 = 0;

        local_269 = 0;

        bVar3 = true;

        uVar1 = lVar5 == 0;

        if ((bool)uVar1) {

          _objc_msgSend_preparingAssets(local_168,local_318);

          local_258 = _objc_retainAutoreleasedReturnValue();

          local_259 = 1;

          _objc_msgSend_objectForKeyedSubscript_(local_258,local_318,local_250);

          local_268 = _objc_retainAutoreleasedReturnValue();

          bVar3 = local_268 != 0;

          local_269 = uVar1;

          (*(code *)PTR__objc_release_00110458)(local_268);

          uVar1 = local_269;

        }

        local_269 = uVar1;

        if ((local_259 & 1) != 0) {

          (*(code *)PTR__objc_release_00110458)(local_258);

        }

        (*(code *)PTR__objc_release_00110458)(lVar5);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        lVar5 = local_218;

        if (bVar3) {

          local_270 = 8;

        }

        else {

          lVar7 = _objc_msgSend_index(local_168,local_318);

          local_279 = 0;

          local_289 = 0;

          local_299 = 0;

          local_2a9 = 0;

          bVar3 = false;

          if (lVar7 < lVar5) {

            _objc_msgSend_player(local_168,local_318);

            local_278 = _objc_retainAutoreleasedReturnValue();

            local_279 = 1;

            _objc_msgSend_currentItem(local_278,local_318);

            local_288 = _objc_retainAutoreleasedReturnValue();

            local_289 = 1;

            lVar5 = _objc_msgSend_status(local_288,local_318);

            bVar3 = false;

            if (lVar5 == 1) {

              _objc_msgSend_player(local_168,local_318);

              local_298 = _objc_retainAutoreleasedReturnValue();

              local_299 = 1;

              _objc_msgSend_currentItem(local_298,local_318);

              local_2a8 = _objc_retainAutoreleasedReturnValue();

              local_2a9 = 1;

              bVar3 = local_2a8 != 0;

            }

          }

          if ((local_2a9 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_2a8);

          }

          if ((local_299 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_298);

          }

          if ((local_289 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_288);

          }

          if ((local_279 & 1) != 0) {

            (*(code *)PTR__objc_release_00110458)(local_278);

          }

          if (bVar3) {

            _objc_msgSend_videos(local_168,local_318);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_objectAtIndexedSubscript_(uVar4,local_318,local_218);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_objectForKeyedSubscript_(uVar8,local_318,&cf_media);

            local_2b8 = _objc_retainAutoreleasedReturnValue();

            (*(code *)PTR__objc_release_00110458)(uVar8);

            (*(code *)PTR__objc_release_00110458)(uVar4);

            _objc_msgSend_localVideoPath_(local_168,local_318,local_2b8);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            lVar5 = _objc_msgSend_length(uVar4,local_318);

            (*(code *)PTR__objc_release_00110458)(uVar4);

            if (lVar5 == 0) {

              _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_318);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              dVar11 = (double)_objc_msgSend_systemUptime(uVar4,local_318);

              (*(code *)PTR__objc_release_00110458)(uVar4);

              local_2c0 = dVar11;

              _objc_msgSend_prefetchRequests(local_168,local_318);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_objectForKeyedSubscript_(uVar4,local_318,local_250);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              dVar12 = (double)_objc_msgSend_doubleValue(uVar8,local_318);

              local_2c9 = 0;

              local_2d9 = 0;

              local_2e9 = 0;

              local_47c = 0;

              if (15.0 < dVar11 - dVar12) {

                _objc_msgSend_facade(local_168,local_318);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                local_2c9 = 1;

                local_138 = local_2b8;

                local_130 = PTR____kCFBooleanTrue_00110730;

                local_2c8 = uVar10;

                _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_318,&local_138,2)

                ;

                local_2d8 = _objc_retainAutoreleasedReturnValue();

                local_2d9 = 1;

                _Call(uVar10,&cf_IsMediaItemInDownloadQueue_isIncludePlayerDownload_);

                local_2e8 = _objc_retainAutoreleasedReturnValue();

                local_2e9 = 1;

                local_47c = _objc_msgSend_boolValue(local_2e8,local_318);

                local_47c = local_47c ^ 1;

              }

              if ((local_2e9 & 1) != 0) {

                (*(code *)PTR__objc_release_00110458)(local_2e8);

              }

              if ((local_2d9 & 1) != 0) {

                (*(code *)PTR__objc_release_00110458)(local_2d8);

              }

              if ((local_2c9 & 1) != 0) {

                (*(code *)PTR__objc_release_00110458)(local_2c8);

              }

              (*(code *)PTR__objc_release_00110458)(uVar8);

              (*(code *)PTR__objc_release_00110458)(uVar4);

              if ((local_47c & 1) != 0) {

                _objc_msgSend_numberWithDouble_(local_2c0,&_OBJC_CLASS___NSNumber,local_318);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_prefetchRequests(local_168,local_318);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_setObject_forKeyedSubscript_(uVar8,local_318,uVar4,local_250);

                (*(code *)PTR__objc_release_00110458)(uVar8);

                (*(code *)PTR__objc_release_00110458)(uVar4);

                _objc_msgSend_facade(local_168,local_318);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                local_140 = local_2b8;

                _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_318,&local_140,1)

                ;

                uVar8 = _objc_retainAutoreleasedReturnValue();

                _Call(uVar4,&cf_GetWCVideoDownloadMode_);

                local_2f8 = _objc_retainAutoreleasedReturnValue();

                (*(code *)PTR__objc_release_00110458)(uVar8);

                (*(code *)PTR__objc_release_00110458)(uVar4);

                if (local_2f8 != 0) {

                  _objc_msgSend_facade(local_168,local_318);

                  uVar4 = _objc_retainAutoreleasedReturnValue();

                  local_150 = local_2b8;

                  local_148 = local_2f8;

                  _objc_msgSend_arrayWithObjects_count_

                            (&_OBJC_CLASS___NSArray,local_318,&local_150,2);

                  uVar8 = _objc_retainAutoreleasedReturnValue();

                  _Call(uVar4,&cf_startDownloadSightMedia_DownloadMode_);

                  _objc_unsafeClaimAutoreleasedReturnValue();

                  (*(code *)PTR__objc_release_00110458)(uVar8);

                  (*(code *)PTR__objc_release_00110458)(uVar4);

                  lVar5 = local_218;

                  uVar4 = local_2b8;

                  local_160 = &cf_offset;

                  lVar7 = _objc_msgSend_index(local_168,local_318);

                  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_318,lVar5 - lVar7);

                  uVar8 = _objc_retainAutoreleasedReturnValue();

                  local_158 = uVar8;

                  _objc_msgSend_dictionaryWithObjects_forKeys_count_

                            (&_OBJC_CLASS___NSDictionary,local_318,&local_158,&local_160,1);

                  uVar10 = _objc_retainAutoreleasedReturnValue();

                  _TraceVideo(&cf_video_prefetch_request,uVar4);

                  (*(code *)PTR__objc_release_00110458)(uVar10);

                  (*(code *)PTR__objc_release_00110458)(uVar8);

                }

                _objc_storeStrong(&local_2f8,0);

              }

              local_270 = 0;

            }

            else {

              local_270 = 8;

            }

            _objc_storeStrong(&local_2b8,0);

            if (local_270 != 0) goto LAB_000200ec;

          }

          local_270 = 0;

        }

LAB_000200ec:

        _objc_storeStrong(&local_250,0);

      }

      local_218 = local_218 + 1;

    }

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d2] resetVideoSurface @0x20384 ----
// CALLERS: activateVideo, _objc_msgSend$resetVideoSurface
// CALLEES: player, setPlayer:, playerLayer, setPlayerLayer:


/* Function Stack Size: 0x10 bytes */



void WCMVideoController::resetVideoSurface(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_28;

  

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_28,1);

  _objc_msgSend_playerLayer(param_1,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar1,local_28,1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_playerLayer(param_1,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_removeFromSuperlayer(uVar1,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_playerLayer(param_1,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPlayer_(uVar1,local_28,0);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_player(param_1,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_playerLayerWithPlayer_(&_OBJC_CLASS___AVPlayerLayer,local_28);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPlayerLayer_(param_1,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar2 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspect_001101b8;

  _objc_msgSend_playerLayer(param_1,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setVideoGravity_(uVar1,local_28,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_playerLayer(param_1,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar1,local_28,1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_28);

  return;

}






// ---- [d2] updateVideoFollowing @0x27fd8 ----
// CALLERS: activateVideo, toggleVideoFollowing, _objc_msgSend$updateVideoFollowing
// CALLEES: account, account, videos, index, account, isFollowing, followButton, account, index, isEqual:


/* Function Stack Size: 0x10 bytes */



void WCMVideoController::updateVideoFollowing(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 local_f0;

  uint local_bc;

  int local_b4;

  cfstringStruct *local_a8;

  undefined8 local_98;

  undefined8 local_78;

  undefined8 local_68;

  undefined8 local_58;

  long local_48;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSend_videos(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_index(local_28,local_98);

  _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_98,uVar3);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar3,local_98,&cf_username);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  local_a8 = pcVar4;

  if (pcVar4 == (cfstringStruct *)0x0) {

    local_a8 = &cf___;

  }

  local_38 = (*(code *)PTR__objc_retain_00110460)(local_a8);

  (*(code *)PTR__objc_release_00110458)(pcVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_isFollowing(local_28,local_98);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  if (lVar5 == 0) {

    local_b4 = 0;

  }

  else {

    _objc_msgSend_isFollowing(local_28,local_98);

    local_48 = _objc_retainAutoreleasedReturnValue();

    local_b4 = (**(code **)(local_48 + 0x10))(local_48,local_38);

  }

  bVar1 = local_b4 == 0;

  if (lVar5 != 0) {

    (*(code *)PTR__objc_release_00110458)(local_48);

  }

  (*(code *)PTR__objc_release_00110458)(lVar5);

  lVar5 = _objc_msgSend_length(local_38,local_98);

  uVar2 = local_38;

  local_bc = 1;

  if (lVar5 != 0) {

    _objc_msgSend_account(local_28,local_98);

    local_58 = _objc_retainAutoreleasedReturnValue();

    local_bc = _objc_msgSend_isEqual_(uVar2,local_98);

  }

  _objc_msgSend_followButton(local_28,local_98);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar2,local_98,local_bc & 1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (lVar5 != 0) {

    (*(code *)PTR__objc_release_00110458)(local_58);

  }

  _objc_msgSend_followButton(local_28,local_98);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  pcVar4 = &cf_checkmark;

  if (bVar1) {

    pcVar4 = &cf_plus;

  }

  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_98,pcVar4);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar2,local_98,uVar3,0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (bVar1) {

    _objc_msgSend_colorWithWhite_alpha_

              (0x3ff0000000000000,0x3fbeb851eb851eb8,&_OBJC_CLASS___UIColor,local_98);

    local_f0 = _objc_retainAutoreleasedReturnValue();

    local_78 = local_f0;

  }

  else {

    _objc_msgSend_colorWithWhite_alpha_

              (0x3ff0000000000000,0x3faeb851eb851eb8,&_OBJC_CLASS___UIColor,local_98);

    local_f0 = _objc_retainAutoreleasedReturnValue();

    local_68 = local_f0;

  }

  _objc_msgSend_followButton(local_28,local_98);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_viewWithTag_(uVar2,local_98,0x2c4);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_contentView(uVar3,local_98);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar6,local_98,local_f0);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (bVar1) {

    (*(code *)PTR__objc_release_00110458)(local_78);

  }

  else {

    (*(code *)PTR__objc_release_00110458)(local_68);

  }

  pcVar4 = &cf_SmsQlMOgS;

  if (bVar1) {

    pcVar4 = &cf_sQlMOgS;

  }

  _objc_msgSend_followButton(local_28,local_98);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccessibilityLabel_(uVar2,local_98,pcVar4);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d2] player @0x2b2a4 ----
// CALLERS: viewDidLoad, viewWillDisappear:, viewDidDisappear:, dealloc, prepareVideoAtIndex:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, warmNeighbors, resetVideoSurface
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::player(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_player);

}






// ---- [d2] playerLayer @0x2b304 ----
// CALLERS: viewDidLoad, viewDidLayoutSubviews, resetVideoSurface, activateVideo, setPlayerLayer:, .cxx_destruct, _objc_msgSend$playerLayer, _objc_msgSend$playerLayerWithPlayer:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::playerLayer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_playerLayer);

}






// ---- [d2] hint @0x2b3c4 ----
// CALLERS: viewDidLoad, viewDidLayoutSubviews, activateVideo, toggleVideoLike, _objc_msgSend$hint
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::hint(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_hint);

}






// ---- [d2] pauseButton @0x2b424 ----
// CALLERS: viewDidLoad, viewDidLayoutSubviews, activateVideo, togglePlayback, setPauseButton:, .cxx_destruct, _objc_msgSend$pauseButton
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::pauseButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_pauseButton);

}






// ---- [d2] progress @0x2b4e4 ----
// CALLERS: viewDidLoad, viewDidLayoutSubviews, activateVideo, endSeeking, setProgress:, .cxx_destruct, wcm_yb_imageData:downloadProgress:, loadURL_download
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::progress(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_progress);

}






// ---- [d2] setUserPaused: @0x2b570 ----
// CALLERS: activateVideo, togglePlayback, _objc_msgSend$setUserPaused:
// CALLEES: userPaused


/* Function Stack Size: 0x14 bytes */



void WCMVideoController::setUserPaused_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_userPaused) = (byte)param_3 & 1;

  return;

}






// ---- [d2] setSeeking: @0x2b628 ----
// CALLERS: activateVideo, beginSeeking, endSeeking, _objc_msgSend$setSeeking:
// CALLEES: (叶)


/* Function Stack Size: 0x14 bytes */



void WCMVideoController::setSeeking_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_seeking) = (byte)param_3 & 1;

  return;

}






// ---- [d2] setPlaybackFailed: @0x2b684 ----
// CALLERS: activateVideo, _objc_msgSend$setPlaybackFailed:
// CALLEES: playbackFailed


/* Function Stack Size: 0x14 bytes */



void WCMVideoController::setPlaybackFailed_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_playbackFailed) = (byte)param_3 & 1;

  return;

}






// ---- [d2] setRepairedVideoLayer: @0x2bbb0 ----
// CALLERS: activateVideo, _objc_msgSend$setRepairedVideoLayer:
// CALLEES: repairedVideoLayer


/* Function Stack Size: 0x14 bytes */



void WCMVideoController::setRepairedVideoLayer_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_repairedVideoLayer) = (byte)param_3 & 1;

  return;

}






// ---- [d2] setLastDownloadRequest: @0x2bc60 ----
// CALLERS: activateVideo, _objc_msgSend$setLastDownloadRequest:
// CALLEES: lastDownloadRequest


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setLastDownloadRequest_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastDownloadRequest) = param_3;

  return;

}






// ---- [d2] loadingStarted @0x2bc8c ----
// CALLERS: activateVideo, setLoadingStarted:, _objc_msgSend$loadingStarted
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMVideoController::loadingStarted(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_loadingStarted);

}






// ---- [d2] setLoadingStarted: @0x2bcb0 ----
// CALLERS: activateVideo, _objc_msgSend$setLoadingStarted:
// CALLEES: loadingStarted


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setLoadingStarted_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_loadingStarted) = param_3;

  return;

}






// ---- [d2] setLastPlaybackProgress: @0x2bda0 ----
// CALLERS: activateVideo, togglePlayback, beginSeeking, foregroundVideo:, _objc_msgSend$setLastPlaybackProgress:
// CALLEES: lastPlaybackProgress


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setLastPlaybackProgress_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastPlaybackProgress) = param_3;

  return;

}






// ---- [d2] setPreviousPlaybackTime: @0x2bdf0 ----
// CALLERS: activateVideo, _objc_msgSend$setPreviousPlaybackTime:
// CALLEES: previousPlaybackTime


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setPreviousPlaybackTime_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_previousPlaybackTime) = param_3;

  return;

}






// ---- [d2] setLastDownloadProgress: @0x2c070 ----
// CALLERS: activateVideo, _objc_msgSend$setLastDownloadProgress:
// CALLEES: lastDownloadProgress


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setLastDownloadProgress_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastDownloadProgress) = param_3;

  return;

}






// ---- [d2] setObservedVideoBytes: @0x2c110 ----
// CALLERS: activateVideo, _objc_msgSend$setObservedVideoBytes:
// CALLEES: observedVideoBytes


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setObservedVideoBytes_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_observedVideoBytes) = param_3;

  return;

}






// ---- [d2] setObservedVideoModification: @0x2c160 ----
// CALLERS: activateVideo, _objc_msgSend$setObservedVideoModification:
// CALLEES: observedVideoModification


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setObservedVideoModification_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_observedVideoModification) = param_3;

  return;

}






// ---- [d2] setImage: @0x7cf24 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setImage_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x78);

  return;

}






// ---- [d2] progress @0x7fb6c ----
// CALLERS: viewDidLoad, viewDidLayoutSubviews, activateVideo, endSeeking, _objc_msgSend$progress
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBProgressDrawView::progress(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_progress);

}






// ---- [d2] setImage: @0x934ac ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x48,param_3);

  return;

}






// ---- [d2] setImage: @0x9e194 ----
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






// ---- [d2] setImage: @0xab96c ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d2] setImage: @0xac990 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOActivityCroppedImageProvider::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d2] setImage: @0xadc14 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewControllerTransitioning::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x10,param_3);

  return;

}






// ---- [d2] setImage: @0xbb800 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d2] setFrame: @0xbd0e8 ----
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






// ---- [d2] audioCategory @0x2b714 ----
// CALLERS: viewDidDisappear:, setAudioCategory:, .cxx_destruct, _objc_msgSend$audioCategory
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::audioCategory(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_audioCategory);

}






// ---- [d2] audioMode @0x2b774 ----
// CALLERS: viewDidDisappear:, setAudioMode:, .cxx_destruct, _objc_msgSend$audioMode
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::audioMode(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_audioMode);

}






// ---- [d2] audioOptions @0x2b7d4 ----
// CALLERS: viewDidDisappear:, setAudioOptions:, _objc_msgSend$audioOptions
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMVideoController::audioOptions(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_audioOptions);

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






// ---- [d3] localVideoPath: @0x1cb8c ----
// CALLERS: warmNeighbors, _objc_msgSend$localVideoPath:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID WCMVideoController::localVideoPath_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  ID IVar8;

  long lVar9;

  ulong local_178;

  ulong local_170;

  undefined8 local_168;

  undefined8 local_118;

  undefined1 auStack_110 [8];

  long local_108;

  long *local_100;

  undefined8 local_d0;

  undefined8 local_c8;

  SEL local_c0;

  ID local_b8;

  undefined8 local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_c8 = 0;

  local_c0 = param_2;

  local_b8 = param_1;

  _objc_storeStrong(&local_c8,param_3);

  _memset(auStack_110,0,0x40);

  uVar3 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f938);

  local_170 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar3,local_168,auStack_110,auStack_a8,0x10);

  if (local_170 != 0) {

    lVar9 = *local_100;

    local_178 = 0;

    do {

      do {

        if (*local_100 - lVar9 != 0) {

          _objc_enumerationMutation(*local_100 - lVar9,uVar3);

        }

        local_d0 = *(undefined8 *)(local_108 + local_178 * 8);

        _Call(local_c8,local_d0,PTR____NSArray0__struct_00110718);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _Text();

        local_118 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)(uVar4);

        lVar5 = _objc_msgSend_length(local_118,local_168);

        bVar1 = false;

        if (lVar5 != 0) {

          _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_168);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_attributesOfItemAtPath_error_(uVar4,local_168,local_118,0);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_objectForKeyedSubscript_

                    (uVar6,local_168,*(undefined8 *)PTR__NSFileSize_00110178);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          lVar5 = _objc_msgSend_unsignedLongLongValue(uVar7,local_168);

          bVar1 = lVar5 != 0;

          (*(code *)PTR__objc_release_00110458)(uVar7);

          (*(code *)PTR__objc_release_00110458)(uVar6);

          (*(code *)PTR__objc_release_00110458)(uVar4);

        }

        if (bVar1) {

          local_b0 = (*(code *)PTR__objc_retain_00110460)(local_118);

        }

        _objc_storeStrong(&local_118,0);

        bVar2 = true;

        if (bVar1) goto LAB_0001cec4;

        local_178 = local_178 + 1;

      } while (local_178 < local_170);

      local_170 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar3,local_168,auStack_110,auStack_a8,0x10);

      local_178 = 0;

    } while (local_170 != 0);

  }

  bVar2 = false;

LAB_0001cec4:

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if (!bVar2) {

    local_b0 = 0;

  }

  _objc_storeStrong(&local_c8,0);

  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  IVar8 = _objc_autoreleaseReturnValue(0,local_b0);

  return IVar8;

}






// ---- [d3] prepareVideoAtIndex: @0x1cf3c ----
// CALLERS: warmNeighbors, _objc_msgSend$prepareVideoAtIndex:
// CALLEES: prepareVideoPaths:index:offset:, videos, index, player, preparedItems, preparingAssets, probeTimes, index


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x18 bytes */



void WCMVideoController::prepareVideoAtIndex_(ID param_1,SEL param_2,long_long param_3)



{

  bool bVar1;

  bool bVar2;

  bool bVar3;

  long_long lVar4;

  bool bVar5;

  undefined8 uVar6;

  long lVar7;

  long_long lVar8;

  undefined8 uVar9;

  long lVar10;

  ulong uVar11;

  double dVar12;

  double dVar13;

  ulong local_248;

  ulong local_240;

  undefined8 local_1b8;

  undefined8 local_198;

  undefined8 local_188;

  undefined8 local_178;

  undefined8 local_170;

  undefined1 auStack_168 [8];

  long local_160;

  long *local_158;

  undefined8 local_128;

  undefined8 local_120;

  undefined8 local_118;

  double local_110;

  uint local_108;

  byte local_101;

  long local_100;

  byte local_f1;

  undefined8 local_f0;

  byte local_e1;

  long local_e0;

  byte local_d1;

  undefined8 local_d0;

  undefined8 local_c8;

  long_long local_c0;

  SEL local_b8;

  ID local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_c0 = param_3;

  local_b8 = param_2;

  local_b0 = param_1;

  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,param_2,param_3);

  local_c8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_preparedItems(local_b0,local_1b8);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar6,local_1b8,local_c8);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  local_d1 = 0;

  local_e1 = 0;

  local_f1 = 0;

  local_101 = 0;

  bVar5 = true;

  if (lVar7 == 0) {

    _objc_msgSend_preparingAssets(local_b0,local_1b8);

    local_d0 = _objc_retainAutoreleasedReturnValue();

    local_d1 = 1;

    _objc_msgSend_objectForKeyedSubscript_(local_d0,local_1b8,local_c8);

    local_e0 = _objc_retainAutoreleasedReturnValue();

    lVar4 = local_c0;

    local_e1 = 1;

    bVar5 = true;

    if (local_e0 == 0) {

      lVar8 = _objc_msgSend_index(local_b0,local_1b8);

      bVar5 = false;

      if (lVar4 == lVar8) {

        _objc_msgSend_player(local_b0,local_1b8);

        local_f0 = _objc_retainAutoreleasedReturnValue();

        local_f1 = 1;

        _objc_msgSend_currentItem(local_f0,local_1b8);

        local_100 = _objc_retainAutoreleasedReturnValue();

        local_101 = 1;

        bVar5 = local_100 != 0;

      }

    }

  }

  if ((local_101 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_100);

  }

  if ((local_f1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_f0);

  }

  if ((local_e1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_e0);

  }

  if ((local_d1 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_d0);

  }

  (*(code *)PTR__objc_release_00110458)(lVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  if (bVar5) {

    local_108 = 1;

  }

  else {

    _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_1b8);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    dVar12 = (double)_objc_msgSend_systemUptime(uVar6,local_1b8);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    local_110 = dVar12;

    _objc_msgSend_probeTimes(local_b0,local_1b8);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectForKeyedSubscript_(uVar6,local_1b8,local_c8);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    dVar13 = (double)_objc_msgSend_doubleValue(uVar9,local_1b8);

    (*(code *)PTR__objc_release_00110458)(uVar9);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    if (1.0 <= dVar12 - dVar13) {

      _objc_msgSend_videos(local_b0,local_1b8);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_1b8,local_c0);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_objectForKeyedSubscript_(uVar9,local_1b8,&cf_media);

      local_118 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar9);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      local_120 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

      _memset(auStack_168,0,0x40);

      uVar6 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f950);

      local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar6,local_1b8,auStack_168,auStack_a8,0x10);

      if (local_240 != 0) {

        lVar7 = *local_158;

        local_248 = 0;

        do {

          do {

            if (*local_158 - lVar7 != 0) {

              _objc_enumerationMutation(*local_158 - lVar7,uVar6);

            }

            local_128 = *(undefined8 *)(local_160 + local_248 * 8);

            _Call(local_118,local_128,PTR____NSArray0__struct_00110718);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            _Text();

            local_170 = _objc_retainAutoreleasedReturnValue();

            (*(code *)PTR__objc_release_00110458)(uVar9);

            lVar10 = _objc_msgSend_length(local_170,local_1b8);

            bVar3 = false;

            bVar2 = false;

            bVar1 = false;

            bVar5 = false;

            if (lVar10 != 0) {

              uVar11 = _objc_msgSend_containsObject_(local_120,local_1b8,local_170);

              bVar5 = false;

              if ((uVar11 & 1) == 0) {

                _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_1b8);

                local_178 = _objc_retainAutoreleasedReturnValue();

                bVar3 = true;

                _objc_msgSend_attributesOfItemAtPath_error_(local_178,local_1b8,local_170,0);

                local_188 = _objc_retainAutoreleasedReturnValue();

                bVar2 = true;

                _objc_msgSend_objectForKeyedSubscript_

                          (local_188,local_1b8,*(undefined8 *)PTR__NSFileSize_00110178);

                local_198 = _objc_retainAutoreleasedReturnValue();

                bVar1 = true;

                lVar10 = _objc_msgSend_unsignedLongLongValue(local_198,local_1b8);

                bVar5 = lVar10 != 0;

              }

            }

            if (bVar1) {

              (*(code *)PTR__objc_release_00110458)(local_198);

            }

            if (bVar2) {

              (*(code *)PTR__objc_release_00110458)(local_188);

            }

            if (bVar3) {

              (*(code *)PTR__objc_release_00110458)(local_178);

            }

            if (bVar5) {

              _objc_msgSend_addObject_(local_120,local_1b8,local_170);

            }

            _objc_storeStrong(&local_170,0);

            local_248 = local_248 + 1;

          } while (local_248 < local_240);

          local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                (uVar6,local_1b8,auStack_168,auStack_a8,0x10);

          local_248 = 0;

        } while (local_240 != 0);

      }

      (*(code *)PTR__objc_release_00110458)(uVar6);

      lVar7 = _objc_msgSend_count(local_120,local_1b8);

      if (lVar7 != 0) {

        _objc_msgSend_numberWithDouble_(local_110,&_OBJC_CLASS___NSNumber,local_1b8);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_probeTimes(local_b0,local_1b8);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_setObject_forKeyedSubscript_(uVar9,local_1b8,uVar6,local_c8);

        (*(code *)PTR__objc_release_00110458)(uVar9);

        (*(code *)PTR__objc_release_00110458)(uVar6);

        _objc_msgSend_prepareVideoPaths_index_offset_(local_b0,local_1b8,local_120,local_c0,0);

      }

      local_108 = (uint)(lVar7 == 0);

      _objc_storeStrong(&local_120);

      _objc_storeStrong(&local_118,0);

    }

    else {

      local_108 = 1;

    }

  }

  _objc_storeStrong(&local_c8,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d3] playbackFailed @0x2b658 ----
// CALLERS: warmNeighbors, setPlaybackFailed:, _objc_msgSend$playbackFailed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMVideoController::playbackFailed(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_playbackFailed) & 1;

}






// ---- [d3] preparedItems @0x2be1c ----
// CALLERS: prepareVideoAtIndex:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, warmNeighbors, clearVideoPreparation, settleVideo, retryVideo, setPreparedItems:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::preparedItems(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_preparedItems);

}






// ---- [d3] preparingAssets @0x2be7c ----
// CALLERS: prepareVideoAtIndex:, prepareVideoPaths:index:offset:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, warmNeighbors, clearVideoPreparation, setPreparingAssets:, .cxx_destruct, _objc_msgSend$preparingAssets
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::preparingAssets(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_preparingAssets);

}






// ---- [d3] prefetchRequests @0x2bedc ----
// CALLERS: warmNeighbors, setPrefetchRequests:, .cxx_destruct, _objc_msgSend$prefetchRequests
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::prefetchRequests(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_prefetchRequests);

}






// ---- [d3] setPlayer: @0x2b2c8 ----
// CALLERS: viewDidLoad, resetVideoSurface, _objc_msgSend$setPlayer:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setPlayer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_player,param_3);

  return;

}






// ---- [d3] setPlayerLayer: @0x2b328 ----
// CALLERS: viewDidLoad, resetVideoSurface, _objc_msgSend$setPlayerLayer:
// CALLEES: playerLayer


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setPlayerLayer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_playerLayer,param_3);

  return;

}






// ---- [d3] account @0xea78 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

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






// ---- [d3] isFollowing @0x2b9a4 ----
// CALLERS: updateVideoFollowing, setIsFollowing:, .cxx_destruct, _objc_msgSend$isFollowing
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::isFollowing(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_isFollowing);

}






// ---- [d3] followButton @0x2ba64 ----
// CALLERS: viewDidLoad, viewDidLayoutSubviews, updateVideoFollowing, setFollowButton:, .cxx_destruct, _objc_msgSend$followButton
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::followButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_followButton);

}






// ---- [d3] account @0x592b8 ----
// CALLERS: isMine:, changeCategory, reloadComments, updateVideoFollowing, scheduleMediaReload, followingKey, toggleFollowing:, extractVideoCover:mediaKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::account(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_account);

}






// ---- [d3] isEqual: @0x9cba0 ----
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






// ---- [d3] isEqual: @0xae354 ----
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






// ---- [d3] userPaused @0x2b544 ----
// CALLERS: settleVideo, togglePlayback, ___32-[WCMVideoController_endSeeking]_block_invoke, loopVideo:, foregroundVideo:, setUserPaused:, _objc_msgSend$userPaused
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMVideoController::userPaused(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_userPaused) & 1;

}






// ---- [d3] repairedVideoLayer @0x2bb84 ----
// CALLERS: setRepairedVideoLayer:, _objc_msgSend$repairedVideoLayer
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMVideoController::repairedVideoLayer(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_repairedVideoLayer) & 1;

}






// ---- [d3] lastDownloadRequest @0x2bc3c ----
// CALLERS: setLastDownloadRequest:, _objc_msgSend$lastDownloadRequest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMVideoController::lastDownloadRequest(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastDownloadRequest);

}






// ---- [d3] lastPlaybackProgress @0x2bd7c ----
// CALLERS: setLastPlaybackProgress:, _objc_msgSend$lastPlaybackProgress
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMVideoController::lastPlaybackProgress(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastPlaybackProgress);

}






// ---- [d3] previousPlaybackTime @0x2bdcc ----
// CALLERS: setPreviousPlaybackTime:, _objc_msgSend$previousPlaybackTime
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMVideoController::previousPlaybackTime(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_previousPlaybackTime);

}






// ---- [d3] lastDownloadProgress @0x2c04c ----
// CALLERS: setLastDownloadProgress:, _objc_msgSend$lastDownloadProgress
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMVideoController::lastDownloadProgress(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastDownloadProgress);

}






// ---- [d3] observedVideoBytes @0x2c0ec ----
// CALLERS: setObservedVideoBytes:, _objc_msgSend$observedVideoBytes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMVideoController::observedVideoBytes(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_observedVideoBytes);

}






// ---- [d3] observedVideoModification @0x2c13c ----
// CALLERS: setObservedVideoModification:, _objc_msgSend$observedVideoModification
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMVideoController::observedVideoModification(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_observedVideoModification);

}






// ---- [d3] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d3] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d3] setImage:withType: @0x9e720 ----
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






// ---- [d3] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] image @0xac96c ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOActivityCroppedImageProvider::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] image @0xadbf8 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d3] image @0xbb7dc ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] layoutLines @0xbd1e0 ----
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






// ---- [d3] outerLineViews @0xbe9c0 ----
// CALLERS: setup, setFrame:, didMoveToSuperview, layoutLines, setOuterLineViews:, .cxx_destruct, _objc_msgSend$outerLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::outerLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_outerLineViews);

}






// ---- [d4] prepareVideoPaths:index:offset: @0x1d7a0 ----
// CALLERS: prepareVideoAtIndex:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, _objc_msgSend$prepareVideoPaths:index:offset:
// CALLEES: _TraceVideo, videos, index, preparingAssets, index, isEqual:, isEqual:


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x28 bytes */



void WCMVideoController::prepareVideoPaths_index_offset_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,unsigned_long_long param_5)



{

  long lVar1;

  long_long lVar2;

  uint uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ulong uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined **ppuVar14;

  undefined **local_2b0;

  undefined8 local_150;

  undefined *local_110;

  undefined4 local_108;

  undefined4 local_104;

  code *local_100;

  undefined *local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined1 auStack_d8 [8];

  long_long local_d0;

  unsigned_long_long local_c8;

  undefined1 auStack_c0 [8];

  ulong local_b8;

  undefined8 local_b0;

  long local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined4 local_84;

  unsigned_long_long local_80;

  long_long local_78;

  undefined8 local_70;

  SEL local_68;

  ID local_60;

  cfstringStruct *local_58;

  cfstringStruct *local_50;

  cfstringStruct *local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined **local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_70 = 0;

  local_68 = param_2;

  local_60 = param_1;

  _objc_storeStrong(&local_70,param_3);

  local_80 = param_5;

  local_78 = param_4;

  uVar4 = _objc_msgSend_count(local_70,local_150);

  lVar2 = local_78;

  if (param_5 < uVar4) {

    lVar5 = _objc_msgSend_index(local_60,local_150);

    lVar5 = lVar2 - lVar5;

    lVar1 = -lVar5;

    if (0 < lVar5) {

      lVar1 = lVar5;

    }

    if (lVar1 < 3) {

      uVar6 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_150,local_78);

      local_90 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar6 = _objc_msgSend_objectAtIndexedSubscript_(local_70,local_150,local_80);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar7 = _objc_msgSend_fileURLWithPath_(&_OBJC_CLASS___NSURL,local_150);

      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

      uVar8 = _objc_msgSend_URLAssetWithURL_options_(&_OBJC_CLASS___AVURLAsset,local_150,uVar7,0);

      local_98 = _objc_retainAutoreleasedReturnValue(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      uVar6 = local_98;

      uVar7 = _objc_msgSend_preparingAssets(local_60,local_150);

      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

      _objc_msgSend_setObject_forKeyedSubscript_(uVar7,local_150,uVar6,local_90);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      uVar6 = _objc_msgSend_videos(local_60,local_150);

      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

      uVar7 = _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_150,local_78);

      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

      uVar8 = _objc_msgSend_objectForKeyedSubscript_(uVar7,local_150,&cf_media);

      local_a0 = _objc_retainAutoreleasedReturnValue(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      local_a8 = 0;

      local_b0 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f968);

      for (local_b8 = 0; uVar4 = local_b8, uVar9 = _objc_msgSend_count(local_b0,local_150),

          uVar6 = local_a0, uVar4 < uVar9; local_b8 = local_b8 + 1) {

        uVar7 = _objc_msgSend_objectAtIndexedSubscript_(local_b0,local_150,local_b8);

        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

        uVar6 = _Call(uVar6,uVar7,PTR____NSArray0__struct_00110718);

        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

        uVar8 = _Text();

        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

        uVar10 = _objc_msgSend_objectAtIndexedSubscript_(local_70,local_150,local_80);

        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);

        uVar3 = _objc_msgSend_isEqual_(uVar8,local_150);

        (*(code *)PTR__objc_release_00110458)(uVar10);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        (*(code *)PTR__objc_release_00110458)(uVar6);

        (*(code *)PTR__objc_release_00110458)(uVar7);

        if ((uVar3 & 1) != 0) {

          local_a8 = local_b8 + 1;

          break;

        }

      }

      uVar6 = local_a0;

      local_58 = &cf_candidate;

      uVar7 = _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_150,local_80);

      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

      local_50 = &cf_pathType;

      local_40 = uVar7;

      uVar8 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_150,local_a8);

      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

      local_48 = &cf_bytes;

      local_38 = uVar8;

      uVar10 = _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_150);

      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);

      uVar11 = _objc_msgSend_objectAtIndexedSubscript_(local_70,local_150,local_80);

      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);

      uVar12 = _objc_msgSend_attributesOfItemAtPath_error_(uVar10,local_150,uVar11,0);

      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);

      uVar13 = _objc_msgSend_objectForKeyedSubscript_

                         (uVar12,local_150,*(undefined8 *)PTR__NSFileSize_00110178);

      ppuVar14 = (undefined **)_objc_retainAutoreleasedReturnValue(uVar13);

      local_2b0 = ppuVar14;

      if (ppuVar14 == (undefined **)0x0) {

        local_2b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;

      }

      local_30 = local_2b0;

      uVar13 = _objc_msgSend_dictionaryWithObjects_forKeys_count_

                         (&_OBJC_CLASS___NSDictionary,local_150,&local_40,&local_58,3);

      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);

      _TraceVideo(&cf_video_asset_probe,uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar13);

      (*(code *)PTR__objc_release_00110458)(ppuVar14);

      (*(code *)PTR__objc_release_00110458)(uVar12);

      (*(code *)PTR__objc_release_00110458)(uVar11);

      (*(code *)PTR__objc_release_00110458)(uVar10);

      (*(code *)PTR__objc_release_00110458)(uVar8);

      (*(code *)PTR__objc_release_00110458)(uVar7);

      _objc_initWeak(auStack_c0,local_60);

      uVar6 = local_98;

      local_110 = PTR___NSConcreteStackBlock_001104f0;

      local_108 = 0xc2000000;

      local_104 = 0;

      local_100 = ___53__WCMVideoController_prepareVideoPaths_index_offset___block_invoke;

      local_f8 = &___block_descriptor_80_e8_32s40s48s56w_e5_v8__0l;

      _objc_copyWeak(auStack_d8,auStack_c0);

      local_f0 = (*(code *)PTR__objc_retain_00110460)(local_90);

      local_e8 = (*(code *)PTR__objc_retain_00110460)(local_98);

      local_d0 = local_78;

      local_c8 = local_80;

      local_e0 = (*(code *)PTR__objc_retain_00110460)(local_70);

      _objc_msgSend_loadValuesAsynchronouslyForKeys_completionHandler_

                (uVar6,local_150,&PTR__OBJC_CLASS___NSConstantArray_0010f980,&local_110);

      _objc_storeStrong(&local_e0,0);

      _objc_storeStrong(&local_e8,0);

      _objc_storeStrong(&local_f0,0);

      _objc_destroyWeak(auStack_d8);

      _objc_destroyWeak(auStack_c0);

      _objc_storeStrong(&local_b0,0);

      _objc_storeStrong(&local_a0,0);

      _objc_storeStrong(&local_98,0);

      _objc_storeStrong(&local_90,0);

      local_84 = 0;

      goto LAB_0001e038;

    }

  }

  local_84 = 1;

LAB_0001e038:

  _objc_storeStrong(&local_70,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d4] probeTimes @0x2bf3c ----
// CALLERS: prepareVideoAtIndex:, clearVideoPreparation, retryVideo, setProbeTimes:, .cxx_destruct, _objc_msgSend$probeTimes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::probeTimes(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_probeTimes);

}






// ---- [d4] ___CGSizeEqualToSize @0x1b4d0 ----
// CALLERS: viewDidLayoutSubviews, viewWillAppear:, viewWillTransitionToSize:withTransitionCoordinator:, isEqual:
// CALLEES: (叶)


bool ___CGSizeEqualToSize(double param_1,double param_2,double param_3,double param_4)



{

  return param_1 == param_3 && param_2 == param_4;

}






// ---- [d4] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d4] title @0xaf10c ----
// CALLERS: viewDidLayoutSubviews, showAspectRatioDialog, setTitle:, titleLabel, isEqual:, hash, _objc_msgSend$title
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerAspectRatioPreset::title(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d4] resetAnimated @0x9db04 ----
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






// ---- [d4] setHighlightedImage: @0x9e23c ----
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






// ---- [d4] setAnimationImages: @0x9e2e4 ----
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






// ---- [d4] setHighlightedAnimationImages: @0x9e38c ----
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






// ---- [d4] imageChanged @0x9e8c8 ----
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






// ---- [d4] stopAnimating @0x9eff0 ----
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






// ---- [d4] horizontalGridLines @0xbe900 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayHorizontalGridLines:, setHorizontalGridLines:, .cxx_destruct, _objc_msgSend$horizontalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::horizontalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_horizontalGridLines);

}






// ---- [d4] verticalGridLines @0xbe960 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayVerticalGridLines:, setVerticalGridLines:, .cxx_destruct, _objc_msgSend$verticalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::verticalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_verticalGridLines);

}






// ---- [d4] topLeftLineViews @0xbea20 ----
// CALLERS: setup, layoutLines, setTopLeftLineViews:, .cxx_destruct, _objc_msgSend$topLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topLeftLineViews);

}






// ---- [d4] bottomLeftLineViews @0xbea80 ----
// CALLERS: setup, layoutLines, setBottomLeftLineViews:, .cxx_destruct, _objc_msgSend$bottomLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomLeftLineViews);

}






// ---- [d4] bottomRightLineViews @0xbeae0 ----
// CALLERS: setup, layoutLines, setBottomRightLineViews:, .cxx_destruct, _objc_msgSend$bottomRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomRightLineViews);

}






// ---- [d4] topRightLineViews @0xbeb40 ----
// CALLERS: setup, layoutLines, setTopRightLineViews:, .cxx_destruct, _objc_msgSend$topRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topRightLineViews);

}






// ---- [d5] currentAnimatedImageIndex @0xa07cc ----
// CALLERS: resetAnimated, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, automaticallyNotifiesObserversForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentAnimatedImageIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_curIndex);

}






// ---- [d5] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d5] animatedImageFrameCount @0x69f4c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageLoopCount @0x69f84 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageFrameCount @0x8f170 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: contentRects


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  return uVar1;

}






// ---- [d5] animatedImageLoopCount @0x8f1a8 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d5] animatedImageContentsRectAtIndex: @0x8f2ac ----
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






// ---- [d5] animatedImageFrameCount @0x9087c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageLoopCount @0x908b4 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageFrameCount @0x9c370 ----
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






// ---- [d5] animatedImageLoopCount @0x9c410 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d5] conformsToProtocol: @0x9ce14 ----
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






// ---- [d5] curImage @0x9d58c ----
// CALLERS: main, setCurImage:, .cxx_destruct, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::curImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_curImage);

}






// ---- [d5] imageForType: @0x9e4b8 ----
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






// ---- [d5] currentImageType @0x9e5b0 ----
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






// ---- [d5] calcMaxBufferCount @0x9ecb0 ----
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






// ---- [d5] setContentsRect:forImage: @0x9ffd8 ----
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






// ---- [d5] didMoved @0xa026c ----
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






// ---- [d5] setCurrentIsPlayingAnimation: @0xa1060 ----
// CALLERS: stopAnimating, startAnimating, _objc_msgSend$setCurrentIsPlayingAnimation:
// CALLEES: currentIsPlayingAnimation


/* Function Stack Size: 0x14 bytes */



void WCMYYAnimatedImageView::setCurrentIsPlayingAnimation_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_currentIsPlayingAnimation) = (byte)param_3 & 1;

  return;

}






// ---- [d6] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d6] loopCount @0x8f3c8 ----
// CALLERS: animatedImageLoopCount, initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, animatedImageLoopCount, animatedImageLoopCount, initWithImagePaths:oneFrameDuration:loopCount:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:oneFrameDuration:loopCount:, initWithImageDataArray:frameDurations:loopCount:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d6] loopCount @0x97748 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb8);

}






// ---- [d6] loopCount @0x9a214 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x28);

}






// ---- [d6] contentRects @0x8f380 ----
// CALLERS: initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, contentsRectForCALayerAtIndex:, animatedImageFrameCount, animatedImageContentsRectAtIndex:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYSpriteSheetImage::contentRects(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_contentRects);

}






// ---- [d6] imagePath @0x7ce60 ----
// CALLERS: loadData, loadYBImage, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameCount, animatedImageFrameAtIndex:, .cxx_destruct, _objc_msgSend$imagePath
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePath(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x68);

}






// ---- [d6] imageData @0x7ceb4 ----
// CALLERS: galleryImageData:, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, wcm_yb_imageData:downloadProgress:, loadData, loadOriginImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x70);

}






// ---- [d6] animatedImageBytesPerFrame @0x69fbc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d6] animatedImageBytesPerFrame @0x8f1cc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return 0;

}






// ---- [d6] animatedImageBytesPerFrame @0x908ec ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d6] animatedImageBytesPerFrame @0x9c434 ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_oneFrameBytes);

}






// ---- [d6] maxBufferSize @0xa10b4 ----
// CALLERS: calcMaxBufferCount, setMaxBufferSize:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::maxBufferSize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_maxBufferSize);

}






// ---- [d6] __YYDeviceMemoryTotal @0xa11d4 ----
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






// ---- [d6] __YYDeviceMemoryFree @0xa124c ----
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






// ---- [d6] startAnimating @0x9f080 ----
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






// ---- [d6] autoPlayAnimatedImage @0xa0fd8 ----
// CALLERS: init, initWithFrame:, initWithImage:, initWithImage:highlightedImage:, didMoved, initWithCoder:, encodeWithCoder:, setAutoPlayAnimatedImage:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::autoPlayAnimatedImage(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_autoPlayAnimatedImage) & 1;

}






// ---- [d6] currentIsPlayingAnimation @0xa1034 ----
// CALLERS: isAnimating, setCurrentIsPlayingAnimation:, _objc_msgSend$currentIsPlayingAnimation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::currentIsPlayingAnimation(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_currentIsPlayingAnimation) & 1;

}





