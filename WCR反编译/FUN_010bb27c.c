// FUN_010bb27c @ 010bb27c

void FUN_010bb27c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long local_400;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_298;
  undefined *local_290;
  undefined *local_228 [4];
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  undefined *local_1b0;
  int local_1a8;
  byte local_1a1;
  undefined8 local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  byte local_149;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar2 = param_1;
  local_138 = param_1;
  local_130 = param_1;
  _objc_autoreleasePoolPush();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_readBrowseIndexIfNeeded_026ae680);
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_browseRecords_026ae688);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setBrowseRecords__026ae6b8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    local_140 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_cacheRootPath_026ae668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_contentsOfDirectoryAtPath_error__0269e088,uVar5,0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_149 = 0;
    _memset(auStack_198,0,0x40);
    puVar4 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_290 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_290 != (undefined *)0x0) {
      lVar3 = *local_188;
      local_298 = (undefined *)0x0;
      do {
        do {
          if (*local_188 - lVar3 != 0) {
            _objc_enumerationMutation(*local_188 - lVar3,puVar4);
          }
          local_158 = *(undefined8 *)(local_190 + (long)local_298 * 8);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_cacheRootPath_026ae668);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          local_1a1 = 0;
          puVar7 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_1a0,&local_1a1);
          if ((((ulong)puVar7 & 1) == 0) || ((local_1a1 & 1) == 0)) {
            local_1a8 = 3;
          }
          else {
            puVar7 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1a0,0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            _memset(auStack_1f8,0,0x40);
            puVar7 = local_1b0;
            (*(code *)PTR__objc_retain_02578638)();
            local_2e0 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                       auStack_128,0x10);
            if (local_2e0 != (undefined *)0x0) {
              lVar14 = *local_1e8;
              local_2e8 = (undefined *)0x0;
              do {
                do {
                  if (*local_1e8 - lVar14 != 0) {
                    _objc_enumerationMutation(*local_1e8 - lVar14,puVar7);
                  }
                  uVar11 = *(ulong *)(local_1f0 + (long)local_2e8 * 8);
                  local_1b8 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar11);
                  uVar11 = uVar9 & 0xffffffff;
                  if ((uVar9 & 1) != 0) {
                    _objc_autoreleasePoolPush();
                    puVar8 = PTR__OBJC_CLASS___NSData_026ce1d0;
                    local_200 = (undefined *)0x0;
                    uVar5 = local_1a0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1a0,PTR_s_stringByAppendingPathComponent__026cab30,local_1b8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar8,PTR_s_dataWithContentsOfFile__0269e0b8);
                    _objc_retainAutoreleasedReturnValue();
                    local_208 = puVar8;
                    (*(code *)PTR__objc_release_02578630)(uVar5);
                    if (local_208 != (undefined *)0x0) {
                      puVar10 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,
                                 PTR_s_unarchiveObjectWithData__026a4f98,local_208);
                      _objc_retainAutoreleasedReturnValue();
                      puVar8 = local_200;
                      local_200 = puVar10;
                      (*(code *)PTR__objc_release_02578630)(puVar8);
                    }
                    _objc_storeStrong(&local_208,0);
                    uVar5 = local_158;
                    puVar8 = local_200;
                    if (local_200 == (undefined *)0x0) {
                      local_1a8 = 5;
                    }
                    else {
                      puVar10 = local_200;
                      FUN_010b6fcc();
                      _objc_retainAutoreleasedReturnValue();
                      FUN_010b7984(puVar8,uVar5);
                      _objc_retainAutoreleasedReturnValue();
                      local_228[0] = puVar8;
                      (*(code *)PTR__objc_release_02578630)(puVar10);
                      puVar8 = local_228[0];
                      if (local_228[0] != (undefined *)0x0) {
                        uVar6 = *(undefined8 *)(param_1 + 0x20);
                        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_browseRecords_026ae688);
                        _objc_retainAutoreleasedReturnValue();
                        uVar5 = local_158;
                        puVar10 = local_228[0];
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_228[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_tid);
                        _objc_retainAutoreleasedReturnValue();
                        FUN_010b8aa8();
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar6,PTR_s_setObject_forKeyedSubscript__0269d248,puVar8);
                        (*(code *)PTR__objc_release_02578630)(uVar5);
                        (*(code *)PTR__objc_release_02578630)(puVar10);
                        (*(code *)PTR__objc_release_02578630)(uVar6);
                      }
                      _objc_storeStrong(local_228,0);
                      local_1a8 = 0;
                    }
                    _objc_storeStrong(&local_200,0);
                    _objc_autoreleasePoolPop(uVar11);
                    if (local_1a8 == 0) {
                      bVar1 = false;
                      if ((local_149 & 1) == 0) {
                        uVar11 = *(ulong *)(param_1 + 0x20);
                        (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_browseRecords_026ae688);
                        _objc_retainAutoreleasedReturnValue();
                        uVar9 = uVar11;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        bVar1 = 0x3b < uVar9;
                        (*(code *)PTR__objc_release_02578630)(uVar11);
                      }
                      if (bVar1) {
                        local_149 = 1;
                        lVar12 = *(long *)(param_1 + 0x28);
                        uVar13 = *(undefined8 *)(param_1 + 0x20);
                        uVar6 = *(undefined8 *)(param_1 + 0x20);
                        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_browseRecords_026ae688);
                        _objc_retainAutoreleasedReturnValue();
                        uVar5 = uVar6;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar13,PTR_s_sortedItemsFromArray__026ae6d8);
                        _objc_retainAutoreleasedReturnValue();
                        (**(code **)(lVar12 + 0x10))(lVar12,uVar13,0);
                        (*(code *)PTR__objc_release_02578630)(uVar13);
                        (*(code *)PTR__objc_release_02578630)(uVar5);
                        (*(code *)PTR__objc_release_02578630)(uVar6);
                      }
                    }
                  }
                  local_2e8 = local_2e8 + 1;
                } while (local_2e8 < local_2e0);
                local_2e0 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                           auStack_128,0x10);
                local_2e8 = (undefined *)0x0;
              } while (local_2e0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar7);
            _objc_storeStrong(&local_1b0,0);
            local_1a8 = 0;
          }
          _objc_storeStrong(&local_1a0,0);
          local_298 = local_298 + 1;
        } while (local_298 < local_290);
        local_290 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                   0x10);
        local_298 = (undefined *)0x0;
      } while (local_290 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_scheduleBrowseIndexSave_026ae698);
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_140,0);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_sortedBrowseRecords_026ae6e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar3 == 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_browseRecords_026ae688);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_sortedItemsFromArray__026ae6d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSortedBrowseRecords__026ae6c0);
    (*(code *)PTR__objc_release_02578630)(uVar13);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  lVar14 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_sortedBrowseRecords_026ae6e0);
  _objc_retainAutoreleasedReturnValue();
  local_400 = lVar3;
  if (lVar3 == 0) {
    local_400 = *(long *)PTR____NSArray0___02578280;
  }
  (**(code **)(lVar14 + 0x10))(lVar14,local_400,1);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  _objc_autoreleasePoolPop(lVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

