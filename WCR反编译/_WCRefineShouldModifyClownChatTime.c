// _WCRefineShouldModifyClownChatTime @ 00f11ec0

byte _WCRefineShouldModifyClownChatTime(ulong param_1)

{
  byte bVar1;
  
  _WCRefineShouldApplyClown();
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = DAT_028e2b9d;
  }
  return bVar1 & 1;
}

