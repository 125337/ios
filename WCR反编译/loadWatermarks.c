// loadWatermarks @ 01fa4f44

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::loadWatermarks(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_328;
  ulong local_320;
  undefined *local_278;
  undefined *local_270;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,
             *(undefined8 *)(local_130 + (long)_libraryDirectory),0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(local_130 + (long)_watermarkPaths);
  *(undefined8 *)(local_130 + (long)_watermarkPaths) = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _memset(auStack_190,0,0x40);
  puVar1 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_270 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_270 != (undefined *)0x0) {
    lVar6 = *local_180;
    local_278 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar6 != 0) {
          _objc_enumerationMutation(*local_180 - lVar6,puVar1);
        }
        uVar7 = *(ulong *)(local_188 + (long)local_278 * 8);
        local_150 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        FUN_01fa5868();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if ((uVar5 & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_130 + (long)_watermarkPaths),PTR_s_addObject__0269d180,
                     puVar2);
          _objc_storeStrong(&local_198,0);
        }
        local_278 = local_278 + 1;
      } while (local_278 < local_270);
      local_270 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_278 = (undefined *)0x0;
    } while (local_270 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)(local_130 + (long)_sortOrder) == 1) {
    uVar4 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar3 = local_1a0;
    uVar4 = *(undefined8 *)(local_130 + (long)_watermarkPaths);
    local_1d0 = PTR___NSConcreteGlobalBlock_02578658;
    local_1c8 = 0xd0800000;
    local_1c4 = 0;
    local_1c0 = FUN_01fa5968;
    local_1b8 = &DAT_02589838;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_140;
    local_1b0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_sortUsingComparator__0269d168,&local_1d0);
    _objc_storeStrong(&local_1a8);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_1a0,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_130 + (long)_watermarkPaths),
               PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_0258d168);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotWatermarkToppedList_026a78b8);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar1;
  if ((puVar1 != (undefined *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0), puVar1 != (undefined *)0x0
     )) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = puVar2;
    _memset(auStack_238,0,0x40);
    uVar5 = *(ulong *)(local_130 + (long)_watermarkPaths);
    (*(code *)PTR__objc_retain_02578638)();
    local_320 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,0x10);
    if (local_320 != 0) {
      lVar6 = *local_228;
      local_328 = 0;
      do {
        do {
          if (*local_228 - lVar6 != 0) {
            _objc_enumerationMutation(*local_228 - lVar6,uVar5);
          }
          local_1f8 = *(undefined8 *)(local_230 + local_328 * 8);
          puVar1 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_containsObject__0269cbb8,local_1f8);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObject__0269d180,local_1f8);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_addObject__0269d180,local_1f8);
          }
          local_328 = local_328 + 1;
        } while (local_328 < local_320);
        local_320 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,
                   0x10);
        local_328 = 0;
      } while (local_320 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_240 = puVar1;
    for (local_248 = (undefined *)0x0; puVar1 = local_248, puVar2 = local_1e0,
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0), puVar1 < puVar2;
        local_248 = local_248 + 1) {
      puVar1 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_248);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_1e8;
      local_250 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_containsObject__0269cbb8,puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_250);
      }
      _objc_storeStrong(&local_250,0);
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,local_240);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(local_130 + (long)_watermarkPaths);
    *(undefined8 *)(local_130 + (long)_watermarkPaths) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_130 + (long)_watermarkPaths),
               PTR_s_addObjectsFromArray__0269d540,local_1f0);
    _objc_storeStrong(&local_240);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1e8,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_applySearchFilter_026b6408);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_130 + (long)_collectionView),PTR_s_reloadData_0269e400);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_updateTitle_026b63c8);
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

