// _WCRefineWalletNumberViewShouldReplace @ 00f13078

ulong _WCRefineWalletNumberViewShouldReplace(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRefineResolveWalletReplacementNumberForView(local_18,0);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

