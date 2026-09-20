// FUN_001257f8 @ 001257f8

byte FUN_001257f8(void)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((DAT_028c85a8 & 1) == 0) {
    bVar1 = DAT_028c85c8 ^ 1;
  }
  return bVar1 & 1;
}

