// FUN_016d1634 @ 016d1634

void FUN_016d1634(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_016d1680();
  if ((uVar1 & 1) == 0) {
    FUN_016d1ccc(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

