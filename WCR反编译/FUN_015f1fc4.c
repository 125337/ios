// FUN_015f1fc4 @ 015f1fc4

void FUN_015f1fc4(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 1) {
    FUN_015f2038(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x20);
    FUN_015f2508();
    if ((uVar1 & 1) == 0) {
      FUN_015f2038(*(undefined8 *)(param_1 + 0x20));
    }
  }
  return;
}

