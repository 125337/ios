// toggleSelectAll @ 01bb6e60

/* Function Stack Size: 0x10 bytes */

void WCRMessageSyncMultiSelectViewController::toggleSelectAll(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allItemIDs_026c0490);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selected_026a2ec0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar1 < IVar3) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selected_026a2ec0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selected_026a2ec0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

