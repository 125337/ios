// shouldIgnoreForegroundExitAutoHide @ 011140d8

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::shouldIgnoreForegroundExitAutoHide(ID param_1,SEL param_2)

{
  ID IVar1;
  double dVar2;
  ID local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_titleLongPressAuthenticating_026aef70);
  if (((param_1 & 1) == 0) &&
     (IVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_plusLongPressAuthenticating_026aef78),
     (IVar1 & 1) == 0)) {
    if (0.0 < DAT_028e3550) {
      dVar2 = DAT_028e3550;
      _CFAbsoluteTimeGetCurrent();
      local_11 = dVar2 < DAT_028e3550;
    }
    else {
      local_11 = false;
    }
  }
  else {
    local_11 = true;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

