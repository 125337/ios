// FUN_0033c5ac @ 0033c5ac

void FUN_0033c5ac(void)

{
  long lVar1;
  long lVar2;
  ulong local_20;
  
  for (local_20 = 0; local_20 < 0xc; local_20 = local_20 + 1) {
    lVar1 = *(long *)(&DAT_026dfe28 + local_20 * 0x28);
    _objc_getClass();
    if (lVar1 != 0) {
      lVar2 = local_20 * 0x28;
      if (((&DAT_026dfe48)[lVar2] & 1) == 0) {
        FUN_00341aa4(lVar1,*(undefined8 *)(&DAT_026dfe30 + lVar2),
                     *(undefined8 *)(&DAT_026dfe38 + lVar2),*(undefined8 *)(&DAT_026dfe40 + lVar2));
      }
      else {
        FUN_00341988(lVar1,*(undefined8 *)(&DAT_026dfe30 + lVar2),
                     *(undefined8 *)(&DAT_026dfe38 + lVar2),*(undefined8 *)(&DAT_026dfe40 + lVar2));
      }
    }
  }
  return;
}

