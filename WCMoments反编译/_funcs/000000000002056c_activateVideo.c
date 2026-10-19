// activateVideo @0x2056c

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

