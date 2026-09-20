// FUN_006b1500 @ 006b1500

void FUN_006b1500(void)

{
  byte bVar1;
  
  if ((DAT_028cc070 & 1) == 0) {
    bVar1 = 0xe0;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc070 = bVar1;
  }
  if ((DAT_028cc080 & 1) == 0) {
    bVar1 = 0;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc080 = bVar1;
  }
  if ((DAT_028cc090 & 1) == 0) {
    bVar1 = 0x20;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc090 = bVar1;
  }
  if ((DAT_028cc0a0 & 1) == 0) {
    bVar1 = 0x40;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc0a0 = bVar1;
  }
  if ((DAT_028cc0b0 & 1) == 0) {
    bVar1 = 0x60;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc0b0 = bVar1;
  }
  if ((DAT_028cc0c0 & 1) == 0) {
    bVar1 = 0x80;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc0c0 = bVar1;
  }
  return;
}

