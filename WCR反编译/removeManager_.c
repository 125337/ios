// removeManager: @ 00f5ea48

/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationEngine::removeManager_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  if (local_28 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_managers_026ac768);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureTimer_026ac680);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

