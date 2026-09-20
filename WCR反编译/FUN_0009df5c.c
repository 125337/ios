// FUN_0009df5c @ 0009df5c

ulong FUN_0009df5c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  _WCRAvatarScaleFilterAllowsSceneName(local_20,local_18);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

