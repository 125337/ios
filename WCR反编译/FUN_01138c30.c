// FUN_01138c30 @ 01138c30

ulong FUN_01138c30(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_01138ca0(local_18,param_2 & 1);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

