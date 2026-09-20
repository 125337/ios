// FUN_01638d68 @ 01638d68

void FUN_01638d68(long param_1)

{
  undefined8 local_30;
  
  DAT_028e3c90 = *(byte *)(param_1 + 0x2c) & 1;
  DAT_028e3c91 = *(byte *)(param_1 + 0x2d) & 1;
  if ((*(long *)(param_1 + 0x20) < 0) || (2 < *(long *)(param_1 + 0x20))) {
    local_30 = 0;
  }
  else {
    local_30 = *(undefined8 *)(param_1 + 0x20);
  }
  DAT_028e3c98 = local_30;
  DAT_028e3ca0 = *(undefined4 *)(param_1 + 0x28);
  DAT_028e3ca4 = *(byte *)(param_1 + 0x2e) & 1;
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    FUN_01638e40();
  }
  else {
    FUN_01638e8c();
  }
  return;
}

