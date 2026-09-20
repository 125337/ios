// wcr_finishOverview:cancelled: @ 014f8c58

/* Function Stack Size: 0x1c bytes */

void WCRefineSessionStatsEngine::wcr_finishOverview_cancelled_
               (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  ID IVar1;
  ID local_40;
  ID local_38;
  byte local_29;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_29 = (byte)param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_generation_026af8a8);
  if (param_3 == param_1) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_snapshotOverviewCancelled__026af8a0,local_29 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRunning__026acb08,0);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_jobOverviewDone_026af890);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_clearJob_026af8b8);
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,local_38);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

