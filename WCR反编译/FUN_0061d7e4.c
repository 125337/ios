// FUN_0061d7e4 @ 0061d7e4

bool FUN_0061d7e4(void)

{
  bool bVar1;
  
  if (DAT_028cb988 != 0) {
    DAT_028cb988 = DAT_028cb988 + -1;
  }
  bVar1 = DAT_028cb988 == 0;
  if (bVar1) {
    _objc_storeWeak(&DAT_028cb8b0,0);
  }
  return bVar1;
}

