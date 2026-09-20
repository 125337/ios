// FUN_006a7c70 @ 006a7c70

void FUN_006a7c70(void)

{
  undefined *puVar1;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_applyExitAutoHideIfNeeded_026a6708);
  local_11 = (byte)puVar1;
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enabled_0269db80);
  if ((((((ulong)puVar1 & 1) != 0) &&
       (puVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isLocked_0269db88),
       ((ulong)puVar1 & 1) != 0)) &&
      (puVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_autoHideOnExitEnabled_026a6710),
      ((ulong)puVar1 & 1) != 0)) && (FUN_006aba98(), (local_11 & 1) != 0)) {
    FUN_006a420c();
  }
  _objc_storeStrong(&local_20,0);
  return;
}

