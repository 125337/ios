// FUN_006b16b8 @ 006b16b8

void FUN_006b16b8(void)

{
  byte bVar1;
  
  if ((DAT_028cc0d8 & 1) == 0) {
    bVar1 = 0xa0;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc0d8 = bVar1;
  }
  if ((DAT_028cc0e8 & 1) == 0) {
    bVar1 = 0xc0;
    _NSClassFromString();
    _object_getClass();
    FUN_006a60d0();
    DAT_028cc0e8 = bVar1;
  }
  if ((DAT_028cc0f8 & 1) == 0) {
    bVar1 = 0xe0;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc0f8 = bVar1;
  }
  if ((DAT_028cc108 & 1) == 0) {
    bVar1 = 0;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc108 = bVar1;
  }
  return;
}

