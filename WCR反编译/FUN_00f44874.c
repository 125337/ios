// FUN_00f44874 @ 00f44874

void FUN_00f44874(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined4 local_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_status_026a1830);
  local_28 = 0;
  if (lVar1 == 3) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_fileExistsWithBytesAtPath__026ac1d8,*(undefined8 *)(param_1 + 0x28));
    local_28 = (uint)uVar2;
  }
  if ((local_28 & 1) == 0) {
    local_40 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0x28);
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),local_40);
  return;
}

