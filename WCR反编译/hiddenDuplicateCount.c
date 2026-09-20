// hiddenDuplicateCount @ 01b27178

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
WCRefineKeywordAlertHistoryViewController::hiddenDuplicateCount(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  unsigned_long_long local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_historyRecords_026bea70);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_displayedHistoryRecords_026bea50);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (IVar1 < IVar2) {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    local_18 = IVar1 - IVar2;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

