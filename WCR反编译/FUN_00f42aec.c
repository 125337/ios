// FUN_00f42aec @ 00f42aec

void FUN_00f42aec(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_videoPathFromMessageWrap__026ac248,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 == 0) && (*(ulong *)(param_1 + 0x38) < 0x1d)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_waitForVideoFromWrap_attempt_com_026ac250,
               *(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x38) + 1,
               *(undefined8 *)(param_1 + 0x28));
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

