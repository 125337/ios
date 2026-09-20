// FUN_007f7b90 @ 007f7b90

undefined8 FUN_007f7b90(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_007f7ae4();
  uVar1 = 0;
  if ((uVar2 & 1) == 0 || (long)param_1 < 1) {
    uVar1 = 0x7fffffffffffffff;
  }
  return uVar1;
}

