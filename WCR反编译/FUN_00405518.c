// FUN_00405518 @ 00405518

void FUN_00405518(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((DAT_028ca6e0 & 1) != 0) {
    bVar1 = *(double *)(param_1 + 0x20) < DAT_028ca6e8;
  }
  **(undefined1 **)(param_1 + 0x28) = bVar1;
  return;
}

