// shouldShowGeneralFunctionEntry @ 0110d370

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::shouldShowGeneralFunctionEntry(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEntryVisibleForCurrentUser_0269e560);
  if ((param_1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_enabled_0269db80);
    if ((IVar1 & 1) == 0) {
      local_11 = 1;
    }
    else {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isLocked_0269db88);
      local_11 = ((byte)IVar1 ^ 1) & 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  return local_11 & 1;
}

