// duplicateCountForRecord: @ 01b0c8dc

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineKeywordAlertHistoryCardViewController::duplicateCountForRecord_
          (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  long local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dedupCountMap_026bea78);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    lVar3 = local_30;
    FUN_01b0c574();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_18 = 0;
    }
    else {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dedupCountMap_026bea78);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

