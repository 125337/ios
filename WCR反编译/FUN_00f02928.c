// FUN_00f02928 @ 00f02928

void FUN_00f02928(long param_1)

{
  cfstringStruct *local_48;
  
  local_48 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_48 == (cfstringStruct *)0x0) {
    local_48 = &cf__b;
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      local_48 = &cf_1Y_;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(byte *)(param_1 + 0x30) & 1,local_48);
  return;
}

