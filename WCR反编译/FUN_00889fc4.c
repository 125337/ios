// FUN_00889fc4 @ 00889fc4

byte FUN_00889fc4(void)

{
  byte bVar1;
  
  bVar1 = 0;
  if (((DAT_028cd870 & 1) != 0) && (bVar1 = 0, (DAT_028cd4d0 & 1) == 0)) {
    bVar1 = DAT_028cd4d1 ^ 1;
  }
  return bVar1 & 1;
}

