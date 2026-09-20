// scanFriendPortraitTimeRange:progress:completion: @ 014eb87c

/* Function Stack Size: 0x28 bytes */

void WCRefineSessionStatsEngine::scanFriendPortraitTimeRange_progress_completion_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,undefined4 param_5,ID param_6,
               undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 in_d0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_290;
  undefined *local_268;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined *local_118;
  byte local_109;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  long local_d0;
  undefined8 local_c8;
  long_long local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cancel_0269d1e8);
  puVar2 = local_b0;
  if (local_d0 == 0) {
    local_d4 = 1;
  }
  else {
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_generation_026af8a8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setGeneration__026af8b0,puVar1 + 1);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_generation_026af8a8);
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRunning__026acb08,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewMode__026afa60,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPortraitMode__026af9b8,1);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_clampedSessionStatsTimeRange__026af710,local_c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setJobTimeRange__026afac0,puVar2);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_b0;
    local_e8 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_jobTimeRange_026afac8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,puVar2,PTR_s_windowStartForTimeRange_now__026af740,puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setJobWindowStart__026afad0,puVar2);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_jobTimeRange_026afac8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,puVar2,PTR_s_windowEndForTimeRange_now__026af748,puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setJobWindowEnd__026afad8,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setJobProgress__026af8d8,local_c8);
    lVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setJobOverviewDone__026af8e8);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewWatchedGroups__026af930);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewTopGroup__026af918,0);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewChatFriends__026af920);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewBusyGroups__026af928);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewTypes__026af938);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewTotalMessages__026af940);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewMale__026af948,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewFemale__026af950,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewUnknownSex__026af958,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewPeople__026af960,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewFriends__026af968,0);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewRegionCount__026af970);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewRegionBucket__026af978);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewLateChats__026af980);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewOvernightChats__026af988);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineSessionStatsOverviewResult_026ced30;
    _objc_alloc_init();
    local_f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rosterCount_026afb18);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRosterCount__026af9f0,puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rosterMaleCount_026afb20);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRosterMale__026af9f8,puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rosterFemaleCount_026afb28);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRosterFemale__026afa00,puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rosterUnknownSexCount_026afb30);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRosterUnknown__026afa08,puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rosterRegionRows_026afb38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRosterRegionRows__026afa10);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rosterAgeRows_026afb40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRosterAgeRows__026afa18);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setJobCommonGroupCounts__026af9b0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    puVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_jobCommonGroupCounts_026afb60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_rowsFromCommonGroupCounts_limit__026af848,puVar3,0x14);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f9 = 0;
    local_268 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_268 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_268;
    }
    local_f9 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setOverviewCommonFriends__026af998,local_268);
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_jobWindowStart_026afaf8);
    puVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_jobWindowEnd_026afb00);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_watchedFriendsFrom_to_limit__026af858,(ulong)puVar1 & 0xffffffff,puVar3,
               0x14);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_109 = 0;
    local_290 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_290 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_290;
    }
    local_109 = puVar1 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setOverviewVisitFriends__026af990,local_290);
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar2;
    _memset(auStack_160,0,0x40);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_sessionQueue_026afb48);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2b0 != (undefined *)0x0) {
      lVar4 = *local_150;
      local_2b8 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar4 != 0) {
            _objc_enumerationMutation(*local_150 - lVar4,puVar2);
          }
          local_120 = *(undefined8 *)(local_158 + (long)local_2b8 * 8);
          puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_120
                    );
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_addObject__0269d180,local_120);
          }
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_2b8 = (undefined *)0x0;
      } while (local_2b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewQueue__026af908);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewIndex__026afb50,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewBestPrivate__026af910);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewMostSelf__026af9a0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOverviewMostOther__026af9a8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_pumpOverview__026afb58,local_e0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_f0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

