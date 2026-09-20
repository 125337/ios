// FUN_003f28a8 @ 003f28a8

uint FUN_003f28a8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 local_14;
  
  puVar2 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_isVoiceRecordHoldActive_026a34a0);
  local_14 = 1;
  uVar1 = (uint)puVar2;
  if (((ulong)puVar2 & 1) == 0) {
    _WCRVoiceTransInteractionActive();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

