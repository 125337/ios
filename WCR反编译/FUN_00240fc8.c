// FUN_00240fc8 @ 00240fc8

void FUN_00240fc8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_38;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_hangup_026a0d08);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_hangup_026a0d08);
  }
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_hangupIncomingCallAndReplyIfNeed_026a0cf8,local_38);
  return;
}

