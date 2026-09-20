// wcr_finishSession:cancelled: @ 014f4f94

/* Function Stack Size: 0x1c bytes */

void WCRefineSessionStatsEngine::wcr_finishSession_cancelled_
               (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  uint local_434;
  cfstringStruct *local_388;
  uint local_324;
  cfstringStruct *local_258;
  cfstringStruct *local_238;
  cfstringStruct *local_220;
  cfstringStruct *local_208;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_198;
  cfstringStruct *local_180;
  undefined4 local_174;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  cfstringStruct *local_150;
  unsigned_long_long local_148;
  char *local_140;
  char *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_39;
  unsigned_long_long local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_39 = (byte)param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_generation_026af8a8);
  if (param_3 == param_1) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineSessionStatsResult_026ced38;
    _objc_alloc_init();
    pcVar3 = local_28;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobUsr_026afba0);
    _objc_retainAutoreleasedReturnValue();
    local_198 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_198 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setUsr__026af828,local_198);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobIsGroup_026afbe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setIsGroup__026af830,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobDisplayName_026afbe8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_61 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1a8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_1a8;
    }
    else {
      local_1a8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobDisplayName_026afbe8);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_1a8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDisplayName__026ae2f8,local_1a8);
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTotal_026afbc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTotalCount__026a30f8,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTypes_026afbc0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1c0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1c0 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTypeCounts__026af838,local_1c0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_typeCounts_026afca8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_wcr_orderedTypeKeys__026afcb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTypeOrder__026af840);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobNewestLocalID_026afca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setLastLocalID__026afcb8,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTotal_026afbc8);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobCap_026afc60);
    FUN_014f4968(pcVar2,pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTruncated__026afcc0,pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCancelled__026af8c0,local_39 & 1);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobLatestCreateTime_026afb98);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setLatestCreateTime__026afcc8,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobLatestCreateTime_026afb98);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_displayTime__026af760,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setLatestTimeText__026afcd0);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobOvernightCount_026afbf0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOvernightCount__026afcd8,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobIsGroup_026afbe0);
    local_71 = 0;
    local_81 = 0;
    local_208 = local_28;
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobOvernightDays_026afbf8);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobOvernightSelfDays_026afc00);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOvernightNights__026afce0,local_208);
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSpeakers_026afc10);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_220 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_220 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSpeakerCounts__026afce8,local_220);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSpeakerLatest_026afc18);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_238 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_238 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSpeakerLatest__026afcf0,local_238);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWords_026afbd0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_014f6a74();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setWordRows__026afcf8);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSample_026afbd8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_91 = 0;
    local_a1 = false;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_258 = &::cf___;
    }
    else {
      local_258 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSample_026afbd8);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_258;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a0 = local_258;
    }
    local_a1 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSampleText__026afd00,local_258);
    if ((local_a1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_speakerCounts_026af780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_wcr_orderedTypeKeys__026afcb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSpeakerOrder__026afd08);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSelfCount_026afc08);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSelfCount__026afd10,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobOtherCount_026afc20);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOtherCount__026a2d00,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobActiveDays_026afb90);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setActiveDayCount__026afd18,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobActiveDays_026afb90);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_014f6ea0();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setStreakDayCount__026afd20,pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSelfLatestCreateTime_026afba8);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSelfLatestCreateTime__026afd28,pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSelfLatestCreateTime_026afba8);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_displayTime__026af760,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSelfLatestTimeText__026afd30);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobCommonGroupCounts_026afb60);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCommonGroupCount__026af818,pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)();
    FUN_014e41d8();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWindowStart_026afaf8);
    pcVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWindowEnd_026afb00);
    pcVar7 = pcVar4;
    FUN_014e3f08(pcVar4,(ulong)pcVar5 & 0xffffffff,pcVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setVisitCount__026af7f0,pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isGroup_026af768);
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((((local_39 & 1) == 0) &&
        (pcVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastLocalID_026afd40), (int)pcVar2 != 0
        )) && (pcVar2 = local_28,
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898),
              ((ulong)pcVar2 & 1) == 0)) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobTimeRange_026afac8);
      pcVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWindowStart_026afaf8);
      pcVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastLocalID_026afd40);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_cacheKeyForUsr_timeRange_windowS_026afc98,pcVar3,pcVar4,
                 (ulong)pcVar5 & 0xffffffff,pcVar6);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)();
      FUN_014f4e90();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_b0,0);
    }
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898);
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRunning__026acb08,0);
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobSessionDone_026af888);
      _objc_retainAutoreleasedReturnValue();
      local_180 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_clearJob_026af8b8);
      if (local_180 != (cfstringStruct *)0x0) {
        (*(code *)local_180->field2_0x10)(local_180,local_48);
      }
      _objc_storeStrong(&local_180,0);
      local_174 = 0;
    }
    else {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_totalCount_026a3130);
      pcVar2 = local_28;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_totalCount_026a3130);
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_overviewTotalMessages_026afd48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_setOverviewTotalMessages__026af940,
                   (undefined *)((long)&pcVar3->field0_0x0 + (long)&pcVar4->field0_0x0));
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_typeCounts_026afca8);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_28;
        local_d8 = PTR___NSConcreteGlobalBlock_02578658;
        local_d0 = 0xd0800000;
        local_cc = 0;
        local_c8 = FUN_014f7388;
        local_c0 = &DAT_025860f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_d8);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewLateChats_026afd58);
        _objc_retainAutoreleasedReturnValue();
        FUN_014f754c();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewOvernightChats_026afd60);
        _objc_retainAutoreleasedReturnValue();
        FUN_014f775c();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWords_026afbd0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_324 = 0;
        if (pcVar3 != (cfstringStruct *)0x0) {
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_portraitMode_026afd68);
          local_324 = (uint)pcVar3 ^ 1;
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if ((local_324 & 1) != 0) {
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isGroup_026af768);
          local_e9 = 0;
          local_f9 = 0;
          local_388 = local_28;
          if (((ulong)pcVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewPrivateWords_026afd78);
            _objc_retainAutoreleasedReturnValue();
            local_f9 = 1;
            local_f8 = local_388;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewGroupWords_026afd70);
            _objc_retainAutoreleasedReturnValue();
            local_e9 = 1;
            local_e8 = local_388;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = local_388;
          if ((local_f9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_f8);
          }
          if ((local_e9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_e8);
          }
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jobWords_026afbd0);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_e0;
          local_128 = PTR___NSConcreteGlobalBlock_02578658;
          local_120 = 0xd0800000;
          local_11c = 0;
          local_118 = FUN_014f7a1c;
          local_110 = &DAT_025860f8;
          (*(code *)PTR__objc_retain_02578638)();
          local_108 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_128);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          _objc_storeStrong(&local_108);
          _objc_storeStrong(&local_e0,0);
        }
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isGroup_026af768);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_portraitMode_026afd68);
          local_130 = 0x14;
          if (((ulong)pcVar2 & 1) == 0) {
            local_130 = 100;
          }
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewChatFriends_026afd88);
          _objc_retainAutoreleasedReturnValue();
          FUN_014e8810();
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_totalCount_026a3130);
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewBestPrivate_026afd90);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (pcVar4 < pcVar2) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setOverviewBestPrivate__026af910,local_48);
          }
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_portraitMode_026afd68);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selfCount_026afd98);
            pcVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMostSelf_026afda0);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            if (pcVar4 < pcVar2) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_setOverviewMostSelf__026af9a0,local_48);
            }
            pcVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_otherCount_026afda8);
            pcVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMostOther_026afdb0);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            if (pcVar4 < pcVar2) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_setOverviewMostOther__026af9a8,local_48);
            }
          }
          pcVar8 = "CContactMgr";
          _objc_getClass();
          FUN_014e23b8();
          _objc_retainAutoreleasedReturnValue();
          local_140 = (char *)0x0;
          pcVar2 = local_48;
          local_138 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_434 = 0;
          if (pcVar3 != (cfstringStruct *)0x0) {
            pcVar8 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178
                      );
            local_434 = (uint)pcVar8;
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar8 = local_138;
          puVar9 = PTR_s_getContactByName__0269d178;
          if ((local_434 & 1) != 0) {
            pcVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_usr_026af770);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,puVar9);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_140;
            local_140 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_28;
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewPeople_026afdb8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_setOverviewPeople__026af960,
                     (undefined *)((long)&pcVar3->field0_0x0 + 1));
          pcVar8 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_respondsToSelector__026ca818,PTR_s_isMyContact_0269ef80);
          if ((((ulong)pcVar8 & 1) != 0) &&
             (pcVar8 = local_140,
             (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isMyContact_0269ef80),
             pcVar2 = local_28, ((ulong)pcVar8 & 1) != 0)) {
            pcVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewFriends_026afdc0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_setOverviewFriends__026af968,
                       (undefined *)((long)&pcVar3->field0_0x0 + 1));
          }
          _objc_storeStrong(&local_140);
          _objc_storeStrong(&local_138,0);
        }
        else {
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_portraitMode_026afd68);
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewBusyGroups_026afd80);
            _objc_retainAutoreleasedReturnValue();
            FUN_014f7b78();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
        }
        _objc_storeStrong(&local_b8,0);
      }
      puVar9 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_28;
      local_170 = PTR___NSConcreteStackBlock_02578660;
      local_168 = 0xc2000000;
      local_164 = 0;
      local_160 = FUN_014f7d94;
      local_158 = &DAT_0257cc98;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = pcVar2;
      local_148 = local_38;
      _dispatch_async(puVar9,&local_170);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      local_174 = 1;
      _objc_storeStrong(&local_150,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  return;
}

