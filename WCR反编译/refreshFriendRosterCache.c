// refreshFriendRosterCache @ 014e4c80

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsEngine::refreshFriendRosterCache(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineSessionStatsOverviewResult_026ced30;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_applyFriendRosterToResult_refres_026af820,puVar1,1);
  _objc_storeStrong(&local_28,0);
  return;
}

