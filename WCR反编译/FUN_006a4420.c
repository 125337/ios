// FUN_006a4420 @ 006a4420

void FUN_006a4420(void)

{
  undefined *puVar1;
  
  FUN_006a4478();
  FUN_006a44e4();
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,
             PTR_s_applyLaunchExitAutoHideIfNeeded_026a65f0);
  if (((ulong)puVar1 & 1) != 0) {
    FUN_006a420c();
  }
  return;
}

