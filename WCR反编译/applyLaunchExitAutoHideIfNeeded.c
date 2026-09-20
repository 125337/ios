// applyLaunchExitAutoHideIfNeeded @ 0111dbac

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::applyLaunchExitAutoHideIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  if ((DAT_028e3558 & 1) == 0) {
    local_28 = param_2;
    local_20 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ownerWxid_026aef20);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    if ((IVar1 & 1) == 0) {
      DAT_028e3558 = 1;
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_applyExitAutoHideIfNeeded_026a6708);
      local_11 = (byte)IVar1 & 1;
    }
    else {
      local_11 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_11 = 0;
  }
  return local_11 & 1;
}

