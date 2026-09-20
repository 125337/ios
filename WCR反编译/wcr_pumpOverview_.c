// wcr_pumpOverview: @ 014ed4c0

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsEngine::wcr_pumpOverview_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  unsigned_long_long local_40;
  unsigned_long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_generation_026af8a8);
  if (param_3 == param_1) {
    puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar5 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar1 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_014ededc;
      local_50 = &DAT_0257cc98;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = IVar2;
      local_40 = local_38;
      _dispatch_async(puVar5,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_48,0);
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewIndex_026afb70);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewQueue_026afb78);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (IVar2 < IVar4) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewQueue_026afb78);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewIndex_026afb70);
        IVar4 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,IVar3);
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewIndex_026afb70);
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setOverviewIndex__026afb50,IVar3 + 1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobUsr__026af8c8,local_70);
        puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_70);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobIsGroup__026afab8,puVar5);
        IVar2 = local_70;
        FUN_014e7d88(local_70,local_70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobDisplayName__026af8d0);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobFromID__026afa68);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobFromCreateTime__026afa70,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobLatestCreateTime__026afa30,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOvernightCount__026afa38);
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOvernightDays__026afa40);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOvernightSelfDays__026afa48);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSpeakers__026afa50);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSpeakerLatest__026afa58);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSelfCount__026af9c0,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobOtherCount__026af9c8,0);
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobActiveDays__026af9d0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobLifeActiveCount__026af9d8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobLifeActivePhase__026af9e0,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSelfLatestCreateTime__026af9e8,0)
        ;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobNewestLocalID__026afa78,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobTotal__026afa80,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobDroppedForeign__026afa88,0);
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobTypes__026af8f0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobWords__026af8f8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobCap__026afae0,DAT_02332d40);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobPreferCreateTime__026afae8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobAppMsgPhase__026afa90,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobAppFromID__026afa98,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobAppFromTime__026afaa0,0);
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSeenLocalIDs__026afaa8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setJobSeenPayIDs__026afab0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobProgress_026afb88);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (IVar2 != 0) {
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobProgress_026afb88);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewIndex_026afb70);
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewQueue_026afb78);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewIndex_026afb70);
          IVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewQueue_026afb78);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__kb);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(IVar2 + 0x10))(IVar2,IVar3,IVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar7);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_pump__026afaf0,local_38);
        _objc_storeStrong(&local_70,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_finishOverview_cancelled__026afb80,local_38,0);
      }
    }
  }
  return;
}

