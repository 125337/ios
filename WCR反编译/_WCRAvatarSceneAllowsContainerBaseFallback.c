// _WCRAvatarSceneAllowsContainerBaseFallback @ 00939a08

ulong _WCRAvatarSceneAllowsContainerBaseFallback(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarSceneUsesProfileScale();
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

