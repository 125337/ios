// FUN_000fa82c @ 000fa82c

byte FUN_000fa82c(ulong param_1)

{
  byte bStack_7;
  
  bStack_7 = 0;
  if (((param_1 & 0x100000000) != 0) && (bStack_7 = 1, (param_1 & 1) == 0)) {
    bStack_7 = (byte)(param_1 >> 8);
  }
  return bStack_7 & 1;
}

