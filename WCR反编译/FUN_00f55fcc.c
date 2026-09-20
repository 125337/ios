// FUN_00f55fcc @ 00f55fcc

ulong FUN_00f55fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _WCRefineEnhancedAdBlockIsDisallowedJSFunction();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

