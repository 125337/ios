// FUN_006b1468 @ 006b1468

void FUN_006b1468(void)

{
  byte bVar1;
  
  if ((DAT_028cc050 & 1) == 0) {
    bVar1 = 0;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc050 = bVar1;
  }
  if ((DAT_028cc060 & 1) == 0) {
    bVar1 = 0x20;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc060 = bVar1;
  }
  return;
}

