// FUN_000fa7c8 @ 000fa7c8

byte FUN_000fa7c8(uint param_1)

{
  undefined1 uStack_17;
  
  FUN_000f915c();
  uStack_17 = 1;
  if ((param_1 & 1) == 0) {
    uStack_17 = (byte)(param_1 >> 8);
  }
  return uStack_17 & 1;
}

