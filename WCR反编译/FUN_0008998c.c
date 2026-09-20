// FUN_0008998c @ 0008998c

ulong FUN_0008998c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  _WCRAvatarIsTextStateProfileScene(local_18,local_20);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

