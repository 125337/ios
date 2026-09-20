// scanSessionUsr:isGroup:displayName:timeRange:progress:completion: @ 014ea23c

/* Function Stack Size: 0x3c bytes */

void WCRefineSessionStatsEngine::scanSessionUsr_isGroup_displayName_timeRange_progress_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,long_long param_6,
               ID param_7,undefined4 param_8,ID param_9,undefined4 param_10)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  undefined8 in_d0;
  undefined *local_1d8;
  long local_118;
  long local_a0;
  long local_90;
  undefined *local_78;
  undefined4 local_6c;
  long local_68;
  long local_60;
  undefined8 local_58;
  long_long local_50;
  long local_48;
  undefined1 local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (undefined1)param_4;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_58 = 0;
  local_50 = param_6;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  lVar1 = local_38;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cancel_0269d1e8);
  if (local_60 == 0) {
    local_6c = 1;
  }
  else {
    lVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    IVar3 = local_28;
    if (lVar1 == 0) {
      puVar4 = PTR_WCRefineSessionStatsResult_026ced38;
      _objc_alloc_init();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setCancelled__026af8c0,1);
      (**(code **)(local_60 + 0x10))(local_60,local_78);
      local_6c = 1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_generation_026af8a8);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setGeneration__026af8b0,IVar2 + 1);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_generation_026af8a8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRunning__026acb08,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewMode__026afa60,0);
      puVar4 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobUsr__026af8c8,local_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobIsGroup__026afab8,(byte)puVar4 & 1)
      ;
      lVar1 = local_48;
      FUN_014dfa54();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (lVar5 == 0) {
        local_118 = local_68;
        FUN_014e7d88(local_68,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_118;
      }
      else {
        local_118 = local_48;
        FUN_014dfa54();
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_118;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobDisplayName__026af8d0,local_118);
      if (lVar5 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_release_02578630)(lVar1);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_clampedSessionStatsTimeRange__026af710,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobTimeRange__026afac0,puVar4);
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTimeRange_026afac8);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,IVar2,PTR_s_windowStartForTimeRange_now__026af740,IVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobWindowStart__026afad0,IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTimeRange_026afac8);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,IVar2,PTR_s_windowEndForTimeRange_now__026af748,IVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobWindowEnd__026afad8,IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobFromID__026afa68);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobFromCreateTime__026afa70,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobNewestLocalID__026afa78,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobTotal__026afa80);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobDroppedForeign__026afa88,0);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobTypes__026af8f0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobWords__026af8f8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSample__026af900);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobLatestCreateTime__026afa30,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOvernightCount__026afa38,0);
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOvernightDays__026afa40);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOvernightSelfDays__026afa48);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSpeakers__026afa50);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSpeakerLatest__026afa58);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSelfCount__026af9c0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOtherCount__026af9c8,0);
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobActiveDays__026af9d0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobLifeActiveCount__026af9d8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobLifeActivePhase__026af9e0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSelfLatestCreateTime__026af9e8,0);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((long)local_1d8 < 1) {
        local_1d8 = (undefined *)0x0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobCap__026afae0,local_1d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobPreferCreateTime__026afae8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobAppMsgPhase__026afa90,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobAppFromID__026afa98,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobAppFromTime__026afaa0,0);
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSeenLocalIDs__026afaa8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSeenPayIDs__026afab0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobProgress__026af8d8,local_58);
      lVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSessionDone__026af8e0);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_pump__026afaf0,IVar3);
      local_6c = 0;
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

