// FUN_01571850 @ 01571850

ulong FUN_01571850(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_01572af4(local_18,local_20,1);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

