// _WCRefineEnhancedAdBlockShouldDropJSEventParameters @ 00f552a8

byte _WCRefineEnhancedAdBlockShouldDropJSEventParameters(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  _WCRefineEnhancedAdBlockNetworkEnabled();
  if (((ulong)puVar1 & 1) == 0) {
    _WCRefineEnhancedAdBlockBrandEnabled();
    if (((ulong)puVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_20;
      FUN_00f55350();
      local_11 = (byte)uVar2 & 1;
    }
  }
  else {
    uVar2 = local_20;
    FUN_00f55350();
    local_11 = (byte)uVar2 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

