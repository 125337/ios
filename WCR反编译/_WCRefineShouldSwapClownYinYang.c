// _WCRefineShouldSwapClownYinYang @ 00f11f04

byte _WCRefineShouldSwapClownYinYang(ulong param_1)

{
  byte bVar1;
  
  _WCRefineShouldApplyClown();
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = DAT_028e2b9e;
  }
  return bVar1 & 1;
}

