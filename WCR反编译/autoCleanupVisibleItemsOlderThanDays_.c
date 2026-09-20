// autoCleanupVisibleItemsOlderThanDays: @ 010c6618

/* Function Stack Size: 0x18 bytes */

unsigned_long_long __thiscall
WCRefineMomentsMonitor::autoCleanupVisibleItemsOlderThanDays_
          (WCRefineMomentsMonitor *this,ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  double in_d0;
  double dVar13;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_378;
  undefined *local_370;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  int local_264;
  ID local_260;
  ulong local_258;
  ulong local_250;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  ulong local_1f8;
  undefined *local_1f0;
  undefined4 local_1e4;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined *local_198 [3];
  undefined *local_180;
  ID local_178;
  ID local_170;
  undefined *local_168;
  double local_160;
  long_long local_158;
  SEL local_150;
  ID local_148;
  undefined *local_140;
  undefined1 auStack_138 [128];
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = param_3;
  local_150 = param_2;
  local_148 = param_1;
  if ((long)param_3 < 1) {
    local_140 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar13 = (double)(long)local_158;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_160 = in_d0 - dVar13 * 86400.0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_170 = 0;
    local_178 = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = local_148;
    local_180 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar8);
    IVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar5 = local_170;
    local_170 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_cacheStatuses_026ae720);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar5 = local_178;
    local_178 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar5 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_proactivelyDeletedTids_026ae750);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_180;
    local_1b8 = PTR___NSConcreteGlobalBlock_02578658;
    local_1b0 = 0xd0800000;
    local_1ac = 0;
    local_1a8 = FUN_010c70dc;
    local_1a0 = &DAT_025853a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_198[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_1b8);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_memoryCache_026ae658);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_168;
    local_1e0 = PTR___NSConcreteGlobalBlock_02578658;
    local_1d8 = 0xd0800000;
    local_1d4 = 0;
    local_1d0 = FUN_010c71a8;
    local_1c8 = &DAT_025852f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_1e0);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_1c0);
    _objc_storeStrong(local_198,0);
    _objc_sync_exit(IVar8);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    puVar1 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      local_140 = (undefined *)0x0;
      local_1e4 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = puVar1;
      _memset(auStack_238,0,0x40);
      puVar1 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_370 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10)
      ;
      if (local_370 != (undefined *)0x0) {
        lVar10 = *local_228;
        local_378 = (undefined *)0x0;
        do {
          do {
            if (*local_228 - lVar10 != 0) {
              _objc_enumerationMutation(*local_228 - lVar10,puVar1);
            }
            uVar11 = *(ulong *)(local_230 + (long)local_378 * 8);
            local_1f8 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_objectAtIndexedSubscript__0269cc78,0)
            ;
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_1f8;
            local_240 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,1);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = local_1f8;
            local_248 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_objectAtIndexedSubscript__0269cc78,2);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_180;
            local_250 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_objectForKeyedSubscript__0269d098,local_240);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (((ulong)puVar7 & 1) == 0) {
              uVar6 = local_240;
              FUN_010b8aa8(local_240,local_248);
              _objc_retainAutoreleasedReturnValue();
              local_258 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
              if ((uVar6 == 0) ||
                 (IVar5 = local_170,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_170,PTR_s_containsObject__0269cbb8,local_258), (IVar5 & 1) == 0))
              {
                IVar5 = local_178;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_178,PTR_s_objectForKeyedSubscript__0269d098,local_258);
                _objc_retainAutoreleasedReturnValue();
                IVar8 = IVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar5);
                local_260 = IVar8;
                if ((IVar8 == 2) || (IVar8 - 3 == 0)) {
                  local_1e4 = 3;
                }
                else {
                  uVar6 = local_250;
                  FUN_010c18d0(IVar8 - 3);
                  puVar2 = local_1f0;
                  local_264 = (int)uVar6;
                  if ((local_264 == 0) ||
                     (dVar13 = (double)NEON_ucvtf(uVar6 & 0xffffffff), local_160 <= dVar13)) {
                    local_1e4 = 3;
                  }
                  else {
                    local_b8 = local_240;
                    local_b0 = local_248;
                    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                               PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
                    (*(code *)PTR__objc_release_02578630)(puVar7);
                    local_1e4 = 0;
                  }
                }
              }
              else {
                local_1e4 = 3;
              }
              _objc_storeStrong(&local_258,0);
            }
            else {
              local_1e4 = 3;
            }
            _objc_storeStrong(&local_250);
            _objc_storeStrong(&local_248,0);
            _objc_storeStrong(&local_240,0);
            local_378 = local_378 + 1;
          } while (local_378 < local_370);
          local_370 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,
                     0x10);
          local_378 = (undefined *)0x0;
        } while (local_370 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _memset(auStack_2b0,0,0x40);
      puVar1 = local_1f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_3f0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_138,0x10
                );
      if (local_3f0 != (undefined *)0x0) {
        lVar10 = *local_2a0;
        local_3f8 = (undefined *)0x0;
        do {
          do {
            if (*local_2a0 - lVar10 != 0) {
              _objc_enumerationMutation(*local_2a0 - lVar10,puVar1);
            }
            IVar5 = local_148;
            uVar12 = *(undefined8 *)(local_2a8 + (long)local_3f8 * 8);
            local_270 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_270;
            (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_deleteCachedDataItemForUsername__026ae778,uVar12);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            (*(code *)PTR__objc_release_02578630)(uVar12);
            local_3f8 = local_3f8 + 1;
          } while (local_3f8 < local_3f0);
          local_3f0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_138,
                     0x10);
          local_3f8 = (undefined *)0x0;
        } while (local_3f0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_count_0269cfe0);
      local_1e4 = 1;
      local_140 = puVar1;
      _objc_storeStrong(&local_1f0,0);
    }
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return (unsigned_long_long)local_140;
}

