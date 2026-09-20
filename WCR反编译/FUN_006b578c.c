// FUN_006b578c @ 006b578c

void FUN_006b578c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldHangupUsername__026a6878,
             *(undefined8 *)(param_1 + 0x20));
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineDoNotDisturbSupport_026ce118,
               PTR_s_hangupIncomingCallFromHintView_u_026a0ce8,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x20));
    FUN_006b50a0(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

