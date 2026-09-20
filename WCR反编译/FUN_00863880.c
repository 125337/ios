// FUN_00863880 @ 00863880

void FUN_00863880(void)

{
  if (((DAT_028cd4d1 & 1) != 0) || ((DAT_028cd4d0 & 1) != 0)) {
    DAT_028cd4d1 = 0;
    DAT_028cd4d0 = 0;
    DAT_028cd4d8 = DAT_028cd4d8 + 1;
  }
  return;
}

