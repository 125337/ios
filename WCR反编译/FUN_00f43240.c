// FUN_00f43240 @ 00f43240

void FUN_00f43240(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_appFilePathFromMessageWrap_cell__026ac1f0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x38);
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isReadableVideoAtPath__026ac1e0,uVar1);
  if ((uVar2 & 1) == 0) {
    if (*(ulong *)(param_1 + 0x40) < 0x27) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_waitForAppFileVideoFromWrap_cell_026ac260,
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(long *)(param_1 + 0x40) + 1,*(undefined8 *)(param_1 + 0x30));
    }
    else if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

