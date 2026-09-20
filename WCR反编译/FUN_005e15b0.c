// FUN_005e15b0 @ 005e15b0

byte FUN_005e15b0(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if (((((DAT_028cb830 & 1) == 0) && (bVar1 = 1, (DAT_028cb831 & 1) == 0)) &&
      (bVar1 = 1, (DAT_028cb832 & 1) == 0)) &&
     (((bVar1 = 1, (DAT_028cb833 & 1) == 0 && (bVar1 = 1, (DAT_028cb834 & 1) == 0)) &&
      (bVar1 = 1, (DAT_028cb835 & 1) == 0)))) {
    bVar1 = DAT_028cb836;
  }
  return bVar1 & 1;
}

