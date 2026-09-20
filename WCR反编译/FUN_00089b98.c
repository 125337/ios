// FUN_00089b98 @ 00089b98

ulong FUN_00089b98(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  _WCRAvatarIsStrictMomentsProfileScene(local_18,local_20,param_3 & 1,param_4 & 1,param_5 & 1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

