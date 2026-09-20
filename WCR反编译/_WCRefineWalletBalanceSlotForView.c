// _WCRefineWalletBalanceSlotForView @ 00f1409c

undefined8 _WCRefineWalletBalanceSlotForView(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRefineResolveWalletBalanceSlotForView();
  _objc_storeStrong(&local_18,0);
  return uVar1;
}

