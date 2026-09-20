// wcr_snapshotOverviewCancelled: @ 014f7ddc

/* Function Stack Size: 0x14 bytes */

ID WCRefineSessionStatsEngine::wcr_snapshotOverviewCancelled_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_1d8;
  undefined *local_1c8;
  undefined *local_1a8;
  undefined *local_190;
  undefined *local_150;
  undefined *local_138;
  undefined *local_f0;
  undefined *local_d8;
  undefined *local_c0;
  undefined *local_a8;
  undefined *local_90;
  undefined *local_78;
  undefined *local_58;
  undefined *local_48;
  undefined *local_40;
  byte local_31;
  SEL local_30;
  undefined *local_28;
  
  local_31 = (byte)param_3;
  puVar1 = PTR_WCRefineSessionStatsOverviewResult_026ced30;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_alloc_init();
  puVar2 = local_28;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewChatFriends_026afd88);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_78 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_78 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopChatFriends__026af878,local_78);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewBusyGroups_026afd80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_90 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_90 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopBusyGroups__026afdc8,local_90);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewWatchedGroups_026afb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_a8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopWatchedGroups__026afdd0,local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_topChatFriends_026afdd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewBestPrivate_026afd90);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopPrivate__026afde0,local_c0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_topWatchedGroups_026afde8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_58 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewTopGroup_026afdf0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_58;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopGroup__026afdf8,local_d8);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewTypes_026afd50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_f0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_f0 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTypeCounts__026af838,local_f0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_typeCounts_026afca8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_wcr_orderedTypeKeys__026afcb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTypeOrder__026af840);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewTotalMessages_026afd48);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTotalMessages__026afe00,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewIndex_026afb70);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setScannedChats__026afe08,puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCancelled__026af8c0,local_31 & 1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewPeople_026afdb8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPeopleCount__026af7a8,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewFriends_026afdc0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFriendCount__026a2cf0,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMale_026afe10);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMaleCount__026af7b0,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewFemale_026afe18);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFemaleCount__026af7b8,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewUnknownSex_026afe20);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUnknownSexCount__026af7c0,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewRegionCount_026afe28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewRegionBucket_026afe30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_014e3aa4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRegionRows__026af7d0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewLateChats_026afd58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_138 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_138 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopLateChats__026afe38,local_138);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewOvernightChats_026afd60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_150 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_150 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopOvernightChats__026afe40,local_150);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_topLateChats_026afe48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLatestChat__026afe50);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_topOvernightChats_026afe58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOvernightChat__026afe60);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewVisitFriends_026afe68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_190 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_190 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopVisitFriends__026af860,local_190);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewCommonFriends_026afe70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1a8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_1a8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTopCommonGroupFriends__026af870,local_1a8)
  ;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMostSelf_026afda0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMostSelfTalk__026afe78);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMostOther_026afdb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMostOtherTalk__026afe80);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rosterCount_026afb18);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRosterCount__026af9f0,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rosterMale_026afe88);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRosterMaleCount__026afe90,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rosterFemale_026afe98);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRosterFemaleCount__026afea0,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rosterUnknown_026afea8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRosterUnknownSexCount__026afeb0,puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rosterRegionRows_026afb38);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_1c8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRosterRegionRows__026afa10,local_1c8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rosterAgeRows_026afb40);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_1d8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRosterAgeRows__026afa18,local_1d8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewGroupWords_026afd70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_014f6a74();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setGroupWordRows__026afeb8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewPrivateWords_026afd78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_014f6a74();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPrivateWordRows__026afec0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

