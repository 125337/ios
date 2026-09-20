// friendPortraitSeed @ 014e8ab8

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineSessionStatsEngine::friendPortraitSeed
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 in_d0;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineSessionStatsOverviewResult_026ced30;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_fillFriendRoster__026af850,puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_clampedSessionStatsTimeRange__026af710,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,local_18,PTR_s_windowStartForTimeRange_now__026af740,puVar1);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,local_18,PTR_s_windowEndForTimeRange_now__026af748,puVar1);
  IVar6 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_watchedFriendsFrom_to_limit__026af858,IVar4 & 0xffffffff,
             IVar5 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTopVisitFriends__026af860);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_topCommonGroupFriendsLimit__026af868,0x14);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTopCommonGroupFriends__026af870);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setTopChatFriends__026af878,*(undefined8 *)PTR____NSArray0___02578280);
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

