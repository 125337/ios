// FUN_006a7a7c @ 006a7a7c

void FUN_006a7a7c(byte param_1)

{
  byte bVar1;
  undefined *puVar2;
  byte local_11;
  
  bVar1 = DAT_028cbea0 & 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_refreshRuntimeSnapshot_026a66a8);
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,
             PTR_s_applyLaunchExitAutoHideIfNeeded_026a65f0);
  local_11 = param_1;
  if (((ulong)puVar2 & 1) != 0) {
    local_11 = 1;
  }
  FUN_006a44e4();
  if (((DAT_028cbea0 & 1) != 0) && (((local_11 & 1) != 0 || (bVar1 == 0)))) {
    FUN_006a420c();
  }
  FUN_006a7dbc();
  return;
}

