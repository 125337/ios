// loadFrames @ 01d610ac

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::loadFrames(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong local_3a0;
  ulong local_398;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  byte local_199;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(local_130 + (long)_framePaths);
  *(undefined8 *)(local_130 + (long)_framePaths) = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,
             *(undefined8 *)(local_130 + (long)_framesDirectory),0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar1;
  _memset(auStack_190,0,0x40);
  puVar1 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_298 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_298 != (undefined *)0x0) {
    lVar8 = *local_180;
    local_2a0 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar8 != 0) {
          _objc_enumerationMutation(*local_180 - lVar8,puVar1);
        }
        local_150 = *(undefined8 *)(local_188 + (long)local_2a0 * 8);
        uVar2 = *(undefined8 *)(local_130 + (long)_framesDirectory);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_stringByAppendingPathComponent__026cab30,local_150);
        _objc_retainAutoreleasedReturnValue();
        local_199 = 0;
        puVar3 = local_140;
        local_198 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar2,&local_199);
        uVar2 = local_198;
        if ((((ulong)puVar3 & 1) != 0) && ((local_199 & 1) != 0)) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar2 = local_198;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_fileExistsAtPath__026ca630,local_1a8);
          if ((((ulong)puVar3 & 1) != 0) &&
             (puVar3 = local_140,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_140,PTR_s_fileExistsAtPath__026ca630,local_1b0),
             ((ulong)puVar3 & 1) != 0)) {
            lVar4 = 9;
            _NSSearchPathForDirectoriesInDomains(9,1,1);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = lVar5;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            uVar2 = local_198;
            lVar5 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_substringFromIndex__0269d120,lVar5 + 1);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(local_130 + (long)_framePaths),PTR_s_addObject__0269d180,
                       uVar2);
            _objc_storeStrong(&local_1c0);
            _objc_storeStrong(&local_1b8,0);
          }
          _objc_storeStrong(&local_1b0);
          _objc_storeStrong(&local_1a8,0);
        }
        _objc_storeStrong(&local_198,0);
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_2a0 = (undefined *)0x0;
    } while (local_298 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)(local_130 + (long)_sortOrder) == 1) {
    uVar6 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar2 = local_1c8;
    uVar6 = *(undefined8 *)(local_130 + (long)_framePaths);
    local_1f8 = PTR___NSConcreteGlobalBlock_02578658;
    local_1f0 = 0xd0800000;
    local_1ec = 0;
    local_1e8 = FUN_01d61c50;
    local_1e0 = &DAT_02589838;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_140;
    local_1d8 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_sortUsingComparator__0269d168,&local_1f8);
    _objc_storeStrong(&local_1d0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1c8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_130 + (long)_framePaths),PTR_s_sortUsingComparator__0269d168,
               &PTR___NSConcreteGlobalBlock_0258c2a0);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_200 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotFrameToppedList_026a74a8);
  _objc_retainAutoreleasedReturnValue();
  local_208 = puVar1;
  if ((puVar1 != (undefined *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0), puVar1 != (undefined *)0x0
     )) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_210 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_218 = puVar3;
    _memset(auStack_260,0,0x40);
    uVar7 = *(ulong *)(local_130 + (long)_framePaths);
    (*(code *)PTR__objc_retain_02578638)();
    local_398 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,0x10);
    if (local_398 != 0) {
      lVar8 = *local_250;
      local_3a0 = 0;
      do {
        do {
          if (*local_250 - lVar8 != 0) {
            _objc_enumerationMutation(*local_250 - lVar8,uVar7);
          }
          local_220 = *(undefined8 *)(local_258 + local_3a0 * 8);
          puVar1 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_containsObject__0269cbb8,local_220);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_addObject__0269d180,local_220);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_220);
          }
          local_3a0 = local_3a0 + 1;
        } while (local_3a0 < local_398);
        local_398 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,
                   0x10);
        local_3a0 = 0;
      } while (local_398 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar1;
    for (local_270 = (undefined *)0x0; puVar1 = local_270, puVar3 = local_208,
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0), puVar1 < puVar3;
        local_270 = local_270 + 1) {
      puVar1 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_208,PTR_s_objectAtIndexedSubscript__0269cc78,local_270);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_210;
      local_278 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_containsObject__0269cbb8,puVar1);
      if (((ulong)puVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_addObject__0269d180,local_278);
      }
      _objc_storeStrong(&local_278,0);
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,local_268);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(local_130 + (long)_framePaths);
    *(undefined8 *)(local_130 + (long)_framePaths) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_130 + (long)_framePaths),PTR_s_addObjectsFromArray__0269d540,
               local_218);
    _objc_storeStrong(&local_268);
    _objc_storeStrong(&local_218,0);
    _objc_storeStrong(&local_210,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_applySearchFilter_026b6408);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_130 + (long)_collectionView),PTR_s_reloadData_0269e400);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_updateTitle_026b63c8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_200,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

