// _WCRefineShouldModifyClownImage @ 00f11df4

byte _WCRefineShouldModifyClownImage(ulong param_1)

{
  byte bVar1;
  
  _WCRefineShouldApplyClown();
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = DAT_028e2b9a;
  }
  return bVar1 & 1;
}

