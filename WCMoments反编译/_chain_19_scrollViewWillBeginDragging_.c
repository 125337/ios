// ============ 功能链 19  根: scrollViewWillBeginDragging: @0x27acc ============
// 节点 33，按调用深度排序，自上而下读

// ---- [d0] scrollViewWillBeginDragging: @0x27acc ----
// CALLERS: (根)
// CALLEES: extendVideoQueue:, player, scrollView


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::scrollViewWillBeginDragging_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 local_40;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_player(local_18,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_pause(uVar1,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_extendVideoQueue_(local_18,local_40,1);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d1] extendVideoQueue: @0x21054 ----
// CALLERS: scrollViewWillBeginDragging:, _objc_msgSend$extendVideoQueue:
// CALLEES: warmNeighbors, videos, setVideos:, nextVideos, lastQueueRequest, setLastQueueRequest:, index, collection, index, view


/* Function Stack Size: 0x14 bytes */



void WCMVideoController::extendVideoQueue_(ID param_1,SEL param_2,bool param_3)



{

  bool bVar1;

  uint uVar2;

  long lVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  ulong local_398;

  ulong local_390;

  ulong local_340;

  ulong local_338;

  uint local_304;

  undefined8 local_2d0;

  undefined *local_2b8;

  undefined4 local_2b0;

  undefined4 local_2ac;

  code *local_2a8;

  undefined *local_2a0;

  undefined8 local_298;

  undefined8 local_290;

  undefined1 auStack_288 [8];

  long local_280;

  long *local_278;

  undefined8 local_248;

  undefined8 local_240;

  undefined8 local_238;

  undefined1 auStack_230 [8];

  long local_228;

  long *local_220;

  undefined8 local_1f0;

  undefined8 local_1e8;

  uint local_1e0;

  byte local_1d9;

  undefined8 local_1d8;

  byte local_1c9;

  undefined8 local_1c8;

  undefined8 local_1c0;

  double local_1b8;

  byte local_1a9;

  undefined8 local_1a8;

  byte local_199;

  long local_198;

  byte local_189;

  undefined8 local_188;

  byte local_179;

  long local_178;

  byte local_169;

  SEL local_168;

  ID local_160;

  cfstringStruct *local_158;

  cfstringStruct *local_150;

  cfstringStruct *local_148;

  undefined8 local_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined1 auStack_128 [128];

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_169 = (byte)param_3;

  local_168 = param_2;

  local_160 = param_1;

  _objc_msgSend_nextVideos(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  local_179 = 0;

  local_189 = 0;

  local_199 = 0;

  local_1a9 = 0;

  bVar1 = true;

  if (lVar3 != 0) {

    _objc_msgSend_presentedViewController(local_160,local_2d0);

    local_178 = _objc_retainAutoreleasedReturnValue();

    local_179 = 1;

    bVar1 = true;

    if (local_178 == 0) {

      _objc_msgSend_view(local_160,local_2d0);

      local_188 = _objc_retainAutoreleasedReturnValue();

      local_189 = 1;

      _objc_msgSend_window(local_188,local_2d0);

      local_198 = _objc_retainAutoreleasedReturnValue();

      local_199 = 1;

      bVar1 = true;

      if (local_198 != 0) {

        uVar4 = _objc_msgSend_isBeingDismissed(local_160,local_2d0);

        bVar1 = true;

        if ((uVar4 & 1) == 0) {

          _objc_msgSend_videos(local_160,local_2d0);

          local_1a8 = _objc_retainAutoreleasedReturnValue();

          local_1a9 = 1;

          lVar5 = _objc_msgSend_count(local_1a8,local_2d0);

          lVar6 = _objc_msgSend_index(local_160,local_2d0);

          bVar1 = 3 < (ulong)(lVar5 - lVar6);

        }

      }

    }

  }

  if ((local_1a9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_1a8);

  }

  if ((local_199 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_198);

  }

  if ((local_189 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_188);

  }

  if ((local_179 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_178);

  }

  (*(code *)PTR__objc_release_00110458)(lVar3);

  if (!bVar1) {

    _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_2d0);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    dVar11 = (double)_objc_msgSend_systemUptime(uVar7,local_2d0);

    (*(code *)PTR__objc_release_00110458)(uVar7);

    local_1b8 = dVar11;

    dVar12 = (double)_objc_msgSend_lastQueueRequest(local_160,local_2d0);

    dVar13 = 0.5;

    if ((local_169 & 1) == 0) {

      dVar13 = 1.5;

    }

    if (dVar13 <= dVar11 - dVar12) {

      _objc_msgSend_setLastQueueRequest_(local_169 & 1,local_1b8,local_160,local_2d0);

      _objc_msgSend_nextVideos(local_160,local_2d0);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar3 + 0x10))(lVar3,local_169 & 1);

      local_1c0 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(lVar3);

      lVar3 = _objc_msgSend_count(local_1c0,local_2d0);

      local_1c9 = 0;

      local_1d9 = 0;

      local_304 = 1;

      if (lVar3 != 0) {

        _objc_msgSend_collection(local_160,local_2d0);

        local_1c8 = _objc_retainAutoreleasedReturnValue();

        local_1c9 = 1;

        uVar4 = _objc_msgSend_isDragging(local_1c8,local_2d0);

        local_304 = 1;

        if ((uVar4 & 1) == 0) {

          _objc_msgSend_collection(local_160,local_2d0);

          local_1d8 = _objc_retainAutoreleasedReturnValue();

          local_1d9 = 1;

          local_304 = _objc_msgSend_isDecelerating(local_1d8,local_2d0);

        }

      }

      if ((local_1d9 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_1d8);

      }

      if ((local_1c9 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_1c8);

      }

      if ((local_304 & 1) == 0) {

        local_1e8 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

        _memset(auStack_230,0,0x40);

        _objc_msgSend_videos(local_160,local_2d0);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        local_338 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar7,local_2d0,auStack_230,auStack_a8,0x10);

        if (local_338 != 0) {

          lVar3 = *local_220;

          local_340 = 0;

          do {

            do {

              if (*local_220 - lVar3 != 0) {

                _objc_enumerationMutation(*local_220 - lVar3,uVar7);

              }

              uVar9 = local_1e8;

              local_1f0 = *(undefined8 *)(local_228 + local_340 * 8);

              _objc_msgSend_objectForKeyedSubscript_(local_1f0,local_2d0,&cf_id);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_addObject_(uVar9,local_2d0);

              (*(code *)PTR__objc_release_00110458)(uVar8);

              local_340 = local_340 + 1;

            } while (local_340 < local_338);

            local_338 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                  (uVar7,local_2d0,auStack_230,auStack_a8,0x10);

            local_340 = 0;

          } while (local_338 != 0);

        }

        (*(code *)PTR__objc_release_00110458)(uVar7);

        _objc_msgSend_videos(local_160,local_2d0);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        local_238 = _objc_msgSend_mutableCopy(uVar7,local_2d0);

        (*(code *)PTR__objc_release_00110458)(uVar7);

        local_240 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

        _memset(auStack_288,0,0x40);

        uVar7 = (*(code *)PTR__objc_retain_00110460)(local_1c0);

        local_390 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar7,local_2d0,auStack_288,auStack_128,0x10);

        if (local_390 != 0) {

          lVar3 = *local_278;

          local_398 = 0;

          do {

            do {

              if (*local_278 - lVar3 != 0) {

                _objc_enumerationMutation(*local_278 - lVar3,uVar7);

              }

              uVar9 = local_1e8;

              local_248 = *(undefined8 *)(local_280 + local_398 * 8);

              _objc_msgSend_objectForKeyedSubscript_(local_248,local_2d0,&cf_id);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              uVar2 = _objc_msgSend_containsObject_(uVar9,local_2d0);

              (*(code *)PTR__objc_release_00110458)(uVar8);

              uVar9 = local_1e8;

              if ((uVar2 & 1) == 0) {

                _objc_msgSend_objectForKeyedSubscript_(local_248,local_2d0,&cf_id);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_addObject_(uVar9,local_2d0);

                (*(code *)PTR__objc_release_00110458)(uVar8);

                uVar9 = local_240;

                uVar8 = _objc_msgSend_count(local_238,local_2d0);

                _objc_msgSend_indexPathForItem_inSection_

                          (&_OBJC_CLASS___NSIndexPath,local_2d0,uVar8,0);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_addObject_(uVar9,local_2d0);

                (*(code *)PTR__objc_release_00110458)(uVar8);

                _objc_msgSend_addObject_(local_238,local_2d0,local_248);

              }

              local_398 = local_398 + 1;

            } while (local_398 < local_390);

            local_390 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                  (uVar7,local_2d0,auStack_288,auStack_128,0x10);

            local_398 = 0;

          } while (local_390 != 0);

        }

        (*(code *)PTR__objc_release_00110458)(uVar7);

        lVar3 = _objc_msgSend_count(local_240,local_2d0);

        if (lVar3 != 0) {

          _objc_msgSend_setVideos_(local_160,local_2d0,local_238);

          local_2b8 = PTR___NSConcreteStackBlock_001104f0;

          local_2b0 = 0xc2000000;

          local_2ac = 0;

          local_2a8 = ___39__WCMVideoController_extendVideoQueue___block_invoke;

          local_2a0 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;

          local_298 = (*(code *)PTR__objc_retain_00110460)(local_160);

          local_290 = (*(code *)PTR__objc_retain_00110460)(local_240);

          _objc_msgSend_performWithoutAnimation_(&_OBJC_CLASS___UIView,local_2d0,&local_2b8);

          local_158 = &cf_added;

          uVar7 = _objc_msgSend_count(local_240,local_2d0);

          _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_2d0,uVar7);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          local_150 = &cf_count;

          local_140 = uVar7;

          uVar9 = _objc_msgSend_count(local_238,local_2d0);

          _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_2d0,uVar9);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          local_148 = &cf_index;

          local_138 = uVar9;

          uVar8 = _objc_msgSend_index(local_160,local_2d0);

          _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_2d0,uVar8);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          local_130 = uVar8;

          _objc_msgSend_dictionaryWithObjects_forKeys_count_

                    (&_OBJC_CLASS___NSDictionary,local_2d0,&local_140,&local_158,3);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _Trace(&cf_video_queue_append);

          (*(code *)PTR__objc_release_00110458)(uVar10);

          (*(code *)PTR__objc_release_00110458)(uVar8);

          (*(code *)PTR__objc_release_00110458)(uVar9);

          (*(code *)PTR__objc_release_00110458)(uVar7);

          _objc_msgSend_warmNeighbors(local_160,local_2d0);

          _objc_storeStrong(&local_290);

          _objc_storeStrong(&local_298,0);

        }

        local_1e0 = (uint)(lVar3 == 0);

        _objc_storeStrong(&local_240);

        _objc_storeStrong(&local_238,0);

        _objc_storeStrong(&local_1e8,0);

      }

      else {

        local_1e0 = 1;

      }

      _objc_storeStrong(&local_1c0,0);

    }

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d1] player @0x2b2a4 ----
// CALLERS: viewDidLoad, viewWillDisappear:, viewDidDisappear:, dealloc, prepareVideoAtIndex:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, warmNeighbors, resetVideoSurface
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::player(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_player);

}






// ---- [d1] scrollView @0xbc040 ----
// CALLERS: scrollViewWillBeginDragging:, scrollViewDidEndDecelerating:, scrollViewDidEndDragging:willDecelerate:, isFeedScrolling, viewDidLoad, refreshPan:, dealloc, scrollViewDidScroll:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::scrollView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_scrollView);

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






// ---- [d2] videos @0x2b0e4 ----
// CALLERS: updateVideoCounts, collectionView:numberOfItemsInSection:, collectionView:cellForItemAtIndexPath:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, warmNeighbors, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::videos(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_videos);

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






// ---- [d2] nextVideos @0x2b144 ----
// CALLERS: extendVideoQueue:, setNextVideos:, .cxx_destruct, _objc_msgSend$nextVideos
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::nextVideos(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_nextVideos);

}






// ---- [d2] lastQueueRequest @0x2b1a4 ----
// CALLERS: extendVideoQueue:, setLastQueueRequest:, _objc_msgSend$lastQueueRequest
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMVideoController::lastQueueRequest(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_lastQueueRequest);

}






// ---- [d2] setLastQueueRequest: @0x2b1c8 ----
// CALLERS: extendVideoQueue:, _objc_msgSend$setLastQueueRequest:
// CALLEES: lastQueueRequest


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setLastQueueRequest_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_lastQueueRequest) = param_3;

  return;

}






// ---- [d2] index @0x2b1f4 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMVideoController::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + _index);

}






// ---- [d2] collection @0x2b244 ----
// CALLERS: viewDidLoad, gestureRecognizer:shouldReceiveTouch:, viewDidLayoutSubviews, viewDidAppear:, collectionView:numberOfItemsInSection:, collectionView:layout:sizeForItemAtIndexPath:, collectionView:cellForItemAtIndexPath:, ___60-[WCMVideoController_collectionView:cellForItemAtIndexPath:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::collection(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_collection);

}






// ---- [d2] index @0x93290 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMYYImageFrame::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + 8);

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






// ---- [d3] facade @0xea18 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMInboxController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

}






// ---- [d3] facade @0x1588c ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoComments::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

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






// ---- [d3] _TraceVideo @0x1e0c0 ----
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






// ---- [d3] playbackFailed @0x2b658 ----
// CALLERS: warmNeighbors, setPlaybackFailed:, _objc_msgSend$playbackFailed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMVideoController::playbackFailed(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_playbackFailed) & 1;

}






// ---- [d3] facade @0x2b824 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

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






// ---- [d3] facade @0x59138 ----
// CALLERS: loadMessages, isMine:, tableView:cellForRowAtIndexPath:, tableView:willDisplayCell:forRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad, reloadComments, sendComment
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::facade(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_facade);

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






// ---- [d4] _VideoNumber @0x2747c ----
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






// ---- [d5] isEqual: @0x9cba0 ----
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






// ---- [d5] isEqual: @0xae354 ----
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






// ---- [d6] ___CGSizeEqualToSize @0x1b4d0 ----
// CALLERS: viewDidLayoutSubviews, viewWillAppear:, viewWillTransitionToSize:withTransitionCoordinator:, isEqual:
// CALLEES: (叶)


bool ___CGSizeEqualToSize(double param_1,double param_2,double param_3,double param_4)



{

  return param_1 == param_3 && param_2 == param_4;

}






// ---- [d6] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d6] title @0xaf10c ----
// CALLERS: viewDidLayoutSubviews, showAspectRatioDialog, setTitle:, titleLabel, isEqual:, hash, _objc_msgSend$title
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerAspectRatioPreset::title(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}





