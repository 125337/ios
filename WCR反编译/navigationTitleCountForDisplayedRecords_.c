// navigationTitleCountForDisplayedRecords: @ 01b26f34

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineKeywordAlertHistoryViewController::navigationTitleCountForDisplayedRecords_
          (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_secondaryFilterKeywordList_026bea98);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_shouldHideDuplicateRecords_026bea60);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_historyRecords_026bea70);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      local_18 = IVar1;
    }
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

