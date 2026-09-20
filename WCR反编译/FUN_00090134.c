// FUN_00090134 @ 00090134

ulong FUN_00090134(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  _WCRAvatarScaleFilterAllowsTrackedScene(local_20,local_18);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

