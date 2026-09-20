// navigationTitleCount @ 01b0d0d8

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
WCRefineKeywordAlertHistoryCardViewController::navigationTitleCount(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar3 == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_engine_026be8d0);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayedRecords_026be900);
      _objc_retainAutoreleasedReturnValue();
      local_18 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayedRecords_026be900);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return local_18;
}

