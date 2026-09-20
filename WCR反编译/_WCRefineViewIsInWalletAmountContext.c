// _WCRefineViewIsInWalletAmountContext @ 00f12ca0

byte _WCRefineViewIsInWalletAmountContext(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  if ((local_20 == 0) || (_WCRefineCustomAmountFeatureAllowed(), ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    _WCRefineViewIsInsideWalletEntryHeader();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      FUN_00f12d58(local_20,0);
      local_11 = (byte)uVar2 & 1;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

