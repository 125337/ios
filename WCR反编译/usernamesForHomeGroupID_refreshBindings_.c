// usernamesForHomeGroupID:refreshBindings: @ 014bb390

/* Function Stack Size: 0x1c bytes */

ID WCRefineScheduledTask::usernamesForHomeGroupID_refreshBindings_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_440;
  undefined *local_400;
  undefined *local_3f8;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined *local_398;
  undefined *local_378;
  undefined1 *local_350;
  undefined1 *local_348;
  undefined1 *local_318;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  undefined8 local_2b0;
  undefined *local_2a8;
  long local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  long local_258;
  long local_250;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  long local_208;
  undefined1 *local_200;
  undefined *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1dc;
  long local_1d8;
  byte local_1c9;
  long local_1c8;
  SEL local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  local_1c9 = (byte)param_4;
  lVar5 = local_1c8;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1dc = 1;
    local_1b0 = puVar1;
  }
  else {
    puVar1 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_groupForId__026a27e0,local_1d8);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = puVar1;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_1dc = 1;
      local_1b0 = puVar1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_1f0;
      local_1f8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_kind_026a27e8);
      if (puVar2 == (undefined1 *)0x0) {
        if ((local_1c9 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e8,PTR_s_syncMembersForGroupWithId_added__026a26b8,local_1d8,0);
        }
        puVar2 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_groupForId__026a27e0,local_1d8);
        _objc_retainAutoreleasedReturnValue();
        local_318 = puVar2;
        if (puVar2 == (undefined1 *)0x0) {
          local_318 = local_1f0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_200 = local_318;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _memset(auStack_248,0,0x40);
        puVar2 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_members_0269ea98);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        FUN_014b56f0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_348 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8,
                   0x10);
        if (local_348 != (undefined1 *)0x0) {
          lVar5 = *local_238;
          local_350 = (undefined1 *)0x0;
          do {
            do {
              if (*local_238 - lVar5 != 0) {
                _objc_enumerationMutation(*local_238 - lVar5,puVar4);
              }
              lVar6 = *(long *)(local_240 + (long)local_350 * 8);
              local_208 = lVar6;
              FUN_014b5580();
              _objc_retainAutoreleasedReturnValue();
              local_250 = lVar6;
              (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
              if (lVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_250)
                ;
              }
              _objc_storeStrong(&local_250,0);
              local_350 = local_350 + 1;
            } while (local_350 < local_348);
            local_348 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8
                       ,0x10);
            local_350 = (undefined1 *)0x0;
          } while (local_348 != (undefined1 *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar1 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_378 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          local_378 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1b0 = local_378;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_1dc = 1;
        _objc_storeStrong(&local_200,0);
      }
      else {
        _memset(auStack_298,0,0x40);
        puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_scope_0269ea90);
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_allMembersForScope__026ac9f8,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_398 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_398 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_3b0 = local_398;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_398,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_128
                   ,0x10);
        if (local_3b0 != (undefined *)0x0) {
          lVar5 = *local_288;
          local_3b8 = (undefined *)0x0;
          do {
            do {
              if (*local_288 - lVar5 != 0) {
                _objc_enumerationMutation(*local_288 - lVar5,local_398);
              }
              lVar7 = *(long *)(local_290 + (long)local_3b8 * 8);
              local_258 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_username_026a2238);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar7;
              FUN_014b5580();
              _objc_retainAutoreleasedReturnValue();
              local_2a0 = lVar6;
              (*(code *)PTR__objc_release_02578630)(lVar7);
              lVar6 = local_2a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
              if (lVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_2a0)
                ;
              }
              _objc_storeStrong(&local_2a0,0);
              local_3b8 = local_3b8 + 1;
            } while (local_3b8 < local_3b0);
            local_3b0 = local_398;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_398,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                       auStack_128,0x10);
            local_3b8 = (undefined *)0x0;
          } while (local_3b0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(local_398);
        puVar2 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_kind_026a27e8);
        if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = puVar1;
          _memset(auStack_2f0,0,0x40);
          puVar1 = local_1f8;
          (*(code *)PTR__objc_retain_02578638)();
          local_3f8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,auStack_1a8,
                     0x10);
          if (local_3f8 != (undefined *)0x0) {
            lVar5 = *local_2e0;
            local_400 = (undefined *)0x0;
            do {
              do {
                if (*local_2e0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_2e0 - lVar5,puVar1);
                }
                local_2b0 = *(undefined8 *)(local_2e8 + (long)local_400 * 8);
                puVar2 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e8,PTR_s_groupIdsContainingMember__026a2ee8,local_2b0);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar2);
                if (puVar4 != (undefined1 *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2a8,PTR_s_addObject__0269d180,local_2b0);
                }
                local_400 = local_400 + 1;
              } while (local_400 < local_3f8);
              local_3f8 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,
                         auStack_1a8,0x10);
              local_400 = (undefined *)0x0;
            } while (local_3f8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_removeObjectsInArray__026a8500,local_2a8);
          _objc_storeStrong(&local_2a8,0);
        }
        puVar1 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_440 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          local_440 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1b0 = local_440;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_1dc = 1;
      }
      _objc_storeStrong(&local_1f8,0);
    }
    _objc_storeStrong(&local_1f0);
    _objc_storeStrong(&local_1e8,0);
  }
  _objc_storeStrong(&local_1d8);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

