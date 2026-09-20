// FUN_00690914 @ 00690914

void FUN_00690914(long param_1)

{
  cfstringStruct *local_48;
  
  DAT_028cbd49 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    local_48 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_48 == (cfstringStruct *)0x0) {
      local_48 = &cf___;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(byte *)(param_1 + 0x30) & 1,local_48);
  }
  return;
}

