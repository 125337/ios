// _WCRefineShouldModifyClownMessageTime @ 00f11e38

byte _WCRefineShouldModifyClownMessageTime(ulong param_1)

{
  byte bVar1;
  
  _WCRefineShouldApplyClown();
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = DAT_028e2b9b;
  }
  return bVar1 & 1;
}

