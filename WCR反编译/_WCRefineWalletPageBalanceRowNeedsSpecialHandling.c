// _WCRefineWalletPageBalanceRowNeedsSpecialHandling @ 00f1341c

byte _WCRefineWalletPageBalanceRowNeedsSpecialHandling(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_19 = 0;
  uVar2 = local_18;
  _WCRefineResolveWalletReplacementNumberForView(local_18,0,&local_19);
  bVar1 = 0;
  if ((uVar2 & 1) != 0) {
    bVar1 = local_19 ^ 1;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1 & 1;
}

