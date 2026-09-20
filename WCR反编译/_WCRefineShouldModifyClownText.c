// _WCRefineShouldModifyClownText @ 00f11db0

byte _WCRefineShouldModifyClownText(ulong param_1)

{
  byte bVar1;
  
  _WCRefineShouldApplyClown();
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = DAT_028e2b99;
  }
  return bVar1 & 1;
}

