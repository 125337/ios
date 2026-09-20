// FUN_00871048 @ 00871048

byte FUN_00871048(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if (((DAT_028cd85e & 1) == 0) && (bVar1 = 1, (DAT_028cd85f & 1) == 0)) {
    bVar1 = DAT_028cd863;
  }
  return bVar1 & 1;
}

