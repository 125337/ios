// finishAuthWithCancel @ 010f11dc

/* Function Stack Size: 0x10 bytes */

void WCRefinePageLockGuard::finishAuthWithCancel(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingCancel_026aec10);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clearPendingAuthState_026aec00);
  if (local_28 != 0) {
    (**(code **)(local_28 + 0x10))();
  }
  _objc_storeStrong(&local_28,0);
  return;
}

