// loadDiskCacheIntoMemoryForUsername: @ 010bfaf4

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsMonitor::loadDiskCacheIntoMemoryForUsername_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168 [2];
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0 [3];
  uint local_c4;
  long local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  puVar4 = local_b0;
  if (lVar6 == 0) {
    local_c4 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(puVar4);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_diskLoadedUsers_026ae6f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    bVar1 = ((ulong)puVar3 & 1) != 0;
    if (bVar1) {
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_diskLoadScheduledUsers_026ae700);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_c4 = (uint)bVar1;
    _objc_sync_exit(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_c4 == 0) {
      puVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cacheRootPath_026ae668);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0[0] = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      _objc_alloc_init();
      local_e8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_e0[0],0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_f0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_f0;
      local_f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
      if (puVar4 != (undefined *)0x0) {
        _memset(auStack_140,0,0x40);
        puVar4 = local_f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        if (local_1f0 != (undefined *)0x0) {
          lVar6 = *local_130;
          local_1f8 = (undefined *)0x0;
          do {
            do {
              if (*local_130 - lVar6 != 0) {
                _objc_enumerationMutation(*local_130 - lVar6,puVar4);
              }
              uVar7 = *(ulong *)(local_138 + (long)local_1f8 * 8);
              local_100 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasSuffix__0269d018,&cf__dat);
              if ((uVar7 & 1) != 0) {
                puVar2 = local_e0[0];
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0[0],PTR_s_stringByAppendingPathComponent__026cab30,local_100);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
                local_148 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                           puVar2);
                _objc_retainAutoreleasedReturnValue();
                local_150 = puVar3;
                if (puVar3 == (undefined *)0x0) {
                  local_c4 = 3;
                }
                else {
                  local_158 = (undefined *)0x0;
                  puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,
                             PTR_s_unarchiveObjectWithData__026a4f98,puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = local_158;
                  local_158 = puVar5;
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  if (local_158 == (undefined *)0x0) {
                    local_c4 = 3;
                  }
                  else {
                    puVar2 = local_158;
                    FUN_010b66f4();
                    _objc_retainAutoreleasedReturnValue();
                    local_168[0] = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
                    if (puVar2 == (undefined *)0x0) {
                      local_c4 = 3;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_158,
                                 local_168[0]);
                      local_c4 = 0;
                    }
                    _objc_storeStrong(local_168,0);
                  }
                  _objc_storeStrong(&local_158,0);
                }
                _objc_storeStrong(&local_150);
                _objc_storeStrong(&local_148,0);
              }
              local_1f8 = local_1f8 + 1;
            } while (local_1f8 < local_1f0);
            local_1f0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8
                       ,0x10);
            local_1f8 = (undefined *)0x0;
          } while (local_1f0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_b0;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(puVar4);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_memoryCache_026ae658);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_170 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_170;
        local_170 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_memoryCache_026ae658);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar3 = local_f8;
      puVar2 = local_170;
      local_198 = PTR___NSConcreteGlobalBlock_02578658;
      local_190 = 0xd0800000;
      local_18c = 0;
      local_188 = FUN_010c0448;
      local_180 = &DAT_02583738;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_198);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_diskLoadedUsers_026ae6f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_diskLoadScheduledUsers_026ae700);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBrowseListSnapshot__026ae660,0);
      _objc_storeStrong(&local_178);
      _objc_storeStrong(&local_170,0);
      _objc_sync_exit(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(local_e0,0);
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

