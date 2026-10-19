// extendVideoQueue: @0x21054

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

