// FUN_002dae98 @ 002dae98

void FUN_002dae98(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_002ce0bc();
  if ((uVar1 & 1) == 0) {
    FUN_002daee4(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

