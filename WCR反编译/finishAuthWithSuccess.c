// finishAuthWithSuccess @ 010f1108

/* Function Stack Size: 0x10 bytes */

void WCRefinePageLockGuard::finishAuthWithSuccess(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingKey_026aebf0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingSuccess_026aebf8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clearPendingAuthState_026aec00);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_markUnlockedForKey__026aec08,local_28);
  if (local_30 != 0) {
    (**(code **)(local_30 + 0x10))();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

