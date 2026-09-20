// FUN_006a6764 @ 006a6764

uint FUN_006a6764(void)

{
  undefined *puVar1;
  undefined4 local_14;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,
             PTR_s_isNotificationDisguiseSnapshotEn_026a6658);
  local_14 = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,
               PTR_s_isNotificationSuppressSnapshotEn_026a6660);
    local_14 = (uint)puVar1;
  }
  return local_14 & 1;
}

