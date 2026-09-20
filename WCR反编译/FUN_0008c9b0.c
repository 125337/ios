// FUN_0008c9b0 @ 0008c9b0

ulong FUN_0008c9b0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarSceneAllowsContainerBaseFallback();
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

