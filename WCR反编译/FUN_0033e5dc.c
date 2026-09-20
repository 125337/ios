// FUN_0033e5dc @ 0033e5dc

byte FUN_0033e5dc(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((DAT_028c9ee1 & 1) == 0) {
    bVar1 = DAT_028c9ee0;
  }
  return bVar1 & 1;
}

