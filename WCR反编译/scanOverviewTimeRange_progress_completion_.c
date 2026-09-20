// scanOverviewTimeRange:progress:completion: @ 014eadf8

/* Function Stack Size: 0x28 bytes */

void WCRefineSessionStatsEngine::scanOverviewTimeRange_progress_completion_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,undefined4 param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  undefined8 in_d0;
  undefined *local_68;
  undefined8 local_60;
  ID local_58;
  uint local_4c;
  long local_48;
  undefined8 local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cancel_0269d1e8);
  IVar3 = local_28;
  bVar1 = local_48 != 0;
  if (bVar1) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_generation_026af8a8);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setGeneration__026af8b0,IVar2 + 1);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_generation_026af8a8);
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRunning__026acb08,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewMode__026afa60,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPortraitMode__026af9b8,0);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_clampedSessionStatsTimeRange__026af710,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobTimeRange__026afac0,puVar4);
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_28;
    local_60 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTimeRange_026afac8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,IVar3,PTR_s_windowStartForTimeRange_now__026af740,IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobWindowStart__026afad0,IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTimeRange_026afac8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,IVar3,PTR_s_windowEndForTimeRange_now__026af748,IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobWindowEnd__026afad8,IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobProgress__026af8d8,local_40);
    lVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOverviewDone__026af8e8);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    IVar3 = local_28;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWindowStart_026afaf8);
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWindowEnd_026afb00);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_wcr_watchedGroupsFrom_to__026afb08,IVar2 & 0xffffffff,IVar6);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewWatchedGroups__026af930);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewWatchedGroups_026afb10);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewTopGroup__026af918);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewChatFriends__026af920);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewBusyGroups__026af928);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewTypes__026af938);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewTotalMessages__026af940);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewMale__026af948,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewFemale__026af950,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewUnknownSex__026af958,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewPeople__026af960,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewFriends__026af968,0);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewRegionCount__026af970);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewRegionBucket__026af978);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewLateChats__026af980);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewOvernightChats__026af988);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewGroupWords__026afa20);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewPrivateWords__026afa28);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRefineSessionStatsOverviewResult_026ced30;
    _objc_alloc_init();
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rosterCount_026afb18);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRosterCount__026af9f0,puVar4);
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rosterMaleCount_026afb20);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRosterMale__026af9f8,puVar4);
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rosterFemaleCount_026afb28);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRosterFemale__026afa00,puVar4);
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rosterUnknownSexCount_026afb30);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRosterUnknown__026afa08,puVar4);
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rosterRegionRows_026afb38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRosterRegionRows__026afa10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rosterAgeRows_026afb40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRosterAgeRows__026afa18);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_sessionQueue_026afb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewQueue__026af908);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewIndex__026afb50,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewBestPrivate__026af910);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_pumpOverview__026afb58,local_58);
    _objc_storeStrong(&local_68,0);
  }
  local_4c = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

