// removeAtIndex: @ 01951214

/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationHistoryStore::removeAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ID local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = local_28;
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (uVar1 < IVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectAtIndex__0269d530,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveItems__026b9ae0,local_30);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

