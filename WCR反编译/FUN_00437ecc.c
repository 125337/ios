// FUN_00437ecc @ 00437ecc

void FUN_00437ecc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isRecording_026a3a00);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isRecording_026a3a00);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_StopRecord_026a3a08);
  return;
}

