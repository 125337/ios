// recordAtIndex: @ 01b131a4

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryCardViewController::recordAtIndex_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_70;
  ID local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayedRecords_026be900);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (param_3 < IVar1) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_displayedRecords_026be900);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar2;
    if (IVar2 == 0) {
      local_70 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

