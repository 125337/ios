// FUN_00730914 @ 00730914

byte FUN_00730914(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if (((((((DAT_028cc509 & 1) == 0) && (bVar1 = 1, (DAT_028cc50a & 1) == 0)) &&
        (bVar1 = 1, (DAT_028cc50b & 1) == 0)) &&
       ((bVar1 = 1, (DAT_028cc50c & 1) == 0 && (bVar1 = 1, (DAT_028cc50d & 1) == 0)))) &&
      ((bVar1 = 1, (DAT_028cc50e & 1) == 0 &&
       ((bVar1 = 1, (DAT_028cc50f & 1) == 0 && (bVar1 = 1, (DAT_028cc510 & 1) == 0)))))) &&
     ((bVar1 = 1, (DAT_028cc511 & 1) == 0 &&
      ((bVar1 = 1, (DAT_028cc512 & 1) == 0 && (bVar1 = 1, (DAT_028cc513 & 1) == 0)))))) {
    bVar1 = DAT_028cc514;
  }
  return bVar1 & 1;
}

