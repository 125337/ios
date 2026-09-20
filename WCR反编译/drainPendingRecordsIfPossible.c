// drainPendingRecordsIfPossible @ 00ff4a70

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertDanmakuPresenter::drainPendingRecordsIfPossible(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  int local_3c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  do {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRecords_026ad698);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (IVar2 == 0) {
      return;
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRecords_026ad698);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_estimatedBubbleWidthForRecord__026ad718,local_28);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_trackIndexForNextSpawnWithBubble_026ad720,local_28);
    if (IVar1 == 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleDrainRetryIfNeeded_026ad728);
      local_3c = 3;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRecords_026ad698);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentRecord_onTrack__026ad730,local_28,IVar1);
      local_3c = 0;
    }
    _objc_storeStrong(&local_28,0);
  } while (local_3c == 0);
  return;
}

