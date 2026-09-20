// FUN_01531a10 @ 01531a10

void FUN_01531a10(long param_1)

{
  FUN_01531aa4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) || ((*(byte *)(param_1 + 0x31) & 1) != 0)) {
    _objc_storeWeak(&DAT_028e38a8);
    DAT_028e3940 = 0;
    _objc_storeWeak(&DAT_028e38b0,0);
  }
  else {
    FUN_01531854();
  }
  return;
}

