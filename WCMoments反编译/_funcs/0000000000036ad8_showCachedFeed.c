// showCachedFeed @0x36ad8

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::showCachedFeed(ID param_1,SEL param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_380;
  ulong local_378;
  ulong local_348;
  uint local_2fc;
  ulong local_2e0;
  ulong local_2d8;
  undefined8 local_290;
  undefined8 local_260;
  undefined8 local_250;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  undefined8 local_200;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  byte local_1d9;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  bool local_181;
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  byte local_161;
  undefined8 local_160;
  byte local_151;
  undefined8 local_150;
  SEL local_148;
  ID local_140;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_148 = param_2;
  local_140 = param_1;
  uVar2 = _objc_msgSend_ready(param_1);
  local_151 = 0;
  local_161 = 0;
  bVar1 = true;
  if ((uVar2 & 1) != 0) {
    uVar2 = _objc_msgSend_cachedFeedShown(local_140,local_260);
    bVar1 = true;
    if ((uVar2 & 1) == 0) {
      _objc_msgSend_assetHandler(local_140,local_260);
      local_150 = _objc_retainAutoreleasedReturnValue();
      local_151 = 1;
      _objc_msgSend_root(local_150,local_260);
      local_160 = _objc_retainAutoreleasedReturnValue();
      local_161 = 1;
      lVar3 = _objc_msgSend_length(local_160,local_260);
      bVar1 = lVar3 == 0;
    }
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_160);
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_150);
  }
  if (!bVar1) {
    _objc_msgSend_setCachedFeedShown_(local_140,local_260,1);
    _objc_msgSend_assetHandler(local_140,local_260);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_root(uVar4,local_260);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_stringByAppendingPathComponent_(uVar5,local_260,&cf_feed_json);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_260);
    local_170 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_181 = false;
    bVar1 = local_170 == 0;
    if (bVar1) {
      local_290 = 0;
    }
    else {
      _objc_msgSend_JSONObjectWithData_options_error_
                (&_OBJC_CLASS___NSJSONSerialization,local_260,local_170,0,0);
      local_290 = _objc_retainAutoreleasedReturnValue();
      local_180 = local_290;
    }
    local_181 = !bVar1;
    local_178 = (*(code *)PTR__objc_retain_00110460)(local_290);
    if ((local_181 & 1U) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_180);
    }
    uVar4 = local_178;
    uVar5 = _objc_opt_class(&_OBJC_CLASS___NSArray);
    uVar2 = _objc_opt_isKindOfClass(uVar4,uVar5);
    if (((uVar2 & 1) != 0) && (lVar3 = _objc_msgSend_count(local_178,local_260), lVar3 != 0)) {
      local_38 = &cf_rows;
      uVar4 = _objc_msgSend_count(local_178,local_260);
      _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_260,uVar4);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      local_30 = uVar4;
      _objc_msgSend_dictionaryWithObjects_forKeys_count_
                (&_OBJC_CLASS___NSDictionary,local_260,&local_30,&local_38,1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _Trace(&cf_cache_snapshot);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _memset(auStack_1d0,0,0x40);
      uVar4 = (*(code *)PTR__objc_retain_00110460)(local_178);
      local_2d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar4,local_260,auStack_1d0,auStack_b8,0x10);
      if (local_2d8 != 0) {
        lVar3 = *local_1c0;
        local_2e0 = 0;
        do {
          do {
            if (*local_1c0 - lVar3 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar3,uVar4);
            }
            uVar6 = *(undefined8 *)(local_1c8 + local_2e0 * 8);
            local_190 = uVar6;
            uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);
            uVar2 = _objc_opt_isKindOfClass(uVar6,uVar5);
            local_1d9 = 0;
            local_2fc = 0;
            if ((uVar2 & 1) != 0) {
              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_id);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              local_1d9 = 1;
              local_1d8 = uVar5;
              uVar6 = _objc_opt_class(&_OBJC_CLASS___NSString);
              local_2fc = _objc_opt_isKindOfClass(uVar5,uVar6);
            }
            if ((local_1d9 & 1) != 0) {
              (*(code *)PTR__objc_release_00110458)(local_1d8);
            }
            uVar5 = local_190;
            if ((local_2fc & 1) != 0) {
              _objc_msgSend_cachedRows(local_140,local_260);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_id);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_setObject_forKeyedSubscript_(uVar6,local_260,uVar5);
              (*(code *)PTR__objc_release_00110458)(uVar7);
              (*(code *)PTR__objc_release_00110458)(uVar6);
              local_1e8 = _objc_msgSend_coverRevision(local_140,local_260);
              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_coverVersion);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              uVar2 = _objc_msgSend_unsignedIntegerValue(uVar5,local_260);
              (*(code *)PTR__objc_release_00110458)(uVar5);
              local_348 = uVar2;
              if (uVar2 <= local_1e8) {
                local_348 = local_1e8;
              }
              local_1f8 = local_348;
              local_1f0 = uVar2;
              _objc_msgSend_setCoverRevision_(local_140,local_260,local_348);
              _objc_msgSend_rowOrder(local_140,local_260);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_objectForKeyedSubscript_(local_190,local_260,&cf_id);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_addObject_(uVar5,local_260);
              (*(code *)PTR__objc_release_00110458)(uVar6);
              (*(code *)PTR__objc_release_00110458)(uVar5);
            }
            local_2e0 = local_2e0 + 1;
          } while (local_2e0 < local_2d8);
          local_2d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar4,local_260,auStack_1d0,auStack_b8,0x10);
          local_2e0 = 0;
        } while (local_2d8 != 0);
      }
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_syncHiddenUsers(local_140,local_260);
      local_200 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
      _memset(auStack_248,0,0x40);
      _objc_msgSend_rowOrder(local_140,local_260);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      local_378 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar4,local_260,auStack_248,auStack_138,0x10);
      if (local_378 != 0) {
        lVar3 = *local_238;
        local_380 = 0;
        do {
          do {
            if (*local_238 - lVar3 != 0) {
              _objc_enumerationMutation(*local_238 - lVar3,uVar4);
            }
            local_208 = *(undefined8 *)(local_240 + local_380 * 8);
            _objc_msgSend_cachedRows(local_140,local_260);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_objectForKeyedSubscript_(uVar5,local_260,local_208);
            lVar8 = _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)();
            (*(code *)PTR__objc_release_00110458)(uVar5);
            uVar5 = local_200;
            if (lVar8 != 0) {
              _objc_msgSend_cachedRows(local_140,local_260);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_objectForKeyedSubscript_(uVar6,local_260,local_208);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_addObject_(uVar5,local_260);
              (*(code *)PTR__objc_release_00110458)(uVar7);
              (*(code *)PTR__objc_release_00110458)(uVar6);
            }
            local_380 = local_380 + 1;
          } while (local_380 < local_378);
          local_378 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar4,local_260,auStack_248,auStack_138,0x10);
          local_380 = 0;
        } while (local_378 != 0);
      }
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_dataWithJSONObject_options_error_
                (&_OBJC_CLASS___NSJSONSerialization,local_260,local_200,0);
      local_250 = _objc_retainAutoreleasedReturnValue();
      uVar4 = _objc_alloc(&_OBJC_CLASS___NSString);
      uVar4 = _objc_msgSend_initWithData_encoding_(uVar4,local_260,local_250,4);
      _objc_msgSend_setLastJSON_(local_140,local_260);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_web(local_140,local_260);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_lastJSON(local_140,local_260);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_260,&cf_setFeed____);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_evaluateJavaScript_completionHandler_(uVar4,local_260,uVar6,0);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_storeStrong(&local_250,0);
      _objc_storeStrong(&local_200,0);
    }
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

