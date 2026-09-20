// _WCRefineShouldSortClownMessages @ 00f11e7c

byte _WCRefineShouldSortClownMessages(ulong param_1)

{
  byte bVar1;
  
  _WCRefineShouldApplyClown();
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = DAT_028e2b9c;
  }
  return bVar1 & 1;
}

