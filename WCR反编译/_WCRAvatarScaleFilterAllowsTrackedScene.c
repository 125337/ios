// _WCRAvatarScaleFilterAllowsTrackedScene @ 0093ab60

ulong _WCRAvatarScaleFilterAllowsTrackedScene(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  uVar1 = local_20;
  _WCRAvatarScaleFilterTokenForTrackedScene(local_20);
  _WCRAvatarScaleFilterAllowsToken(uVar2,uVar1);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

