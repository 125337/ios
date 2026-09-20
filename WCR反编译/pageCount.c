// pageCount @ 01b0d00c

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRefineKeywordAlertHistoryCardViewController::pageCount(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayedRecords_026be900);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_configuredCardsPerPage_026be9a0);
    local_18 = 0;
    if (param_1 != 0) {
      local_18 = ((IVar2 + param_1) - 1) / param_1;
    }
  }
  return local_18;
}

