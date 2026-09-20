// _WCRefineTryUnlockPrivateFriendWithPassword @ 006a409c

byte _WCRefineTryUnlockPrivateFriendWithPassword(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enabled_0269db80);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isLocked_0269db88),
     ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unlockWithPassword__026a65e8,local_20);
    if (((ulong)puVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_y__YS_);
      FUN_006a420c();
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

