// warmNeighbors @0x1f1e4

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

