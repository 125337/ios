// recomputeDisplayedRecords @ 01b0c040

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertHistoryCardViewController::recomputeDisplayedRecords(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_58;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_historyRecordsByApplyingSecondar_026bea58);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_28 == 0) {
    local_58 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_58 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return local_58;
}

