// FUN_006a7e74 @ 006a7e74

void FUN_006a7e74(ulong param_1)

{
  undefined *puVar1;
  undefined *local_18;
  
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldShowUnreadDot_026a66b0);
    DAT_028cbea2 = SUB81(puVar1,0);
    FUN_006a7ef8();
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      FUN_006a8104(puVar1);
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

