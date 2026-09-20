// deleteCachedDataItemsForUsername: @ 010c48f0

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineMomentsMonitor::deleteCachedDataItemsForUsername_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  unsigned_long_long local_4a0;
  ulong local_410;
  ulong local_408;
  ulong local_398;
  ulong local_390;
  undefined *local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  ID local_1d8;
  long local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  ID local_1a8;
  ID local_1a0;
  long local_198;
  ID *local_190;
  ID local_178 [2];
  ID *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  long local_148;
  SEL local_140;
  ID local_138;
  unsigned_long_long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  lVar6 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_130 = 0;
    local_14c = 1;
  }
  else {
    local_168 = local_178 + 1;
    local_178[1] = 0;
    local_160 = 0x20000000;
    local_15c = 0x20;
    local_158 = 0;
    IVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_cacheRootPath_026ae668);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_178[0] = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar2 = local_138;
    local_1c8 = PTR___NSConcreteStackBlock_02578660;
    local_1c0 = 0xc2000000;
    local_1bc = 0;
    local_1b8 = FUN_010c54dc;
    local_1b0 = &DAT_025851f8;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_178[0];
    local_1a8 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar6 = local_148;
    local_1a0 = IVar1;
    local_190 = local_178 + 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = lVar6;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_performIOTaskSync__026ae6f0,&local_1c8);
    lVar6 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_138;
    local_1d8 = 0;
    local_1d0 = lVar6;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_memoryCache_026ae658);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1d8 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_memoryCache_026ae658);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_diskLoadedUsers_026ae6f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_diskLoadScheduledUsers_026ae700);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_proactivelyDeletedTids_026ae750);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _memset(auStack_220,0,0x40);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_cacheStatuses_026ae720);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_390 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10);
    if (local_390 != 0) {
      lVar6 = *local_210;
      local_398 = 0;
      do {
        do {
          if (*local_210 - lVar6 != 0) {
            _objc_enumerationMutation(*local_210 - lVar6,IVar4);
          }
          uVar7 = *(ulong *)(local_218 + local_398 * 8);
          local_1e0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasPrefix__0269d320,local_1d0);
          if ((uVar7 & 1) != 0) {
            IVar2 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_cacheStatuses_026ae720);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar2);
          }
          local_398 = local_398 + 1;
        } while (local_398 < local_390);
        local_390 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10
                  );
        local_398 = 0;
      } while (local_390 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _memset(auStack_268,0,0x40);
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_408 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,0x10);
    if (local_408 != 0) {
      lVar6 = *local_258;
      local_410 = 0;
      do {
        do {
          if (*local_258 - lVar6 != 0) {
            _objc_enumerationMutation(*local_258 - lVar6,IVar4);
          }
          uVar7 = *(ulong *)(local_260 + local_410 * 8);
          local_228 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasPrefix__0269d320,local_1d0);
          if ((uVar7 & 1) != 0) {
            IVar2 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_favoriteMomentKeys_026ae728);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar2);
          }
          local_410 = local_410 + 1;
        } while (local_410 < local_408);
        local_408 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,
                   0x10);
        local_410 = 0;
      } while (local_408 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setBrowseListSnapshot__026ae660,0);
    puVar5 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_138;
    local_270 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_cacheStatuses_026ae720);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_setObject_forKey__026ca9e8,IVar3,&cf_WCRefineMomentsCacheStatuses);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar5 = local_270;
    IVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_setObject_forKey__026ca9e8,IVar3,&cf_WCRefineMomentsCacheFavorites);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_270,0);
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_4a0 = local_168[3];
    if (local_4a0 < local_1d8) {
      local_4a0 = local_1d8;
    }
    local_130 = local_4a0;
    local_14c = 1;
    _objc_storeStrong(&local_1d0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(local_178,0);
    __Block_object_dispose(local_178 + 1,8);
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

