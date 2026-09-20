// FUN_0072d5cc @ 0072d5cc

ulong FUN_0072d5cc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_0072f154(local_28);
  uVar1 = local_18;
  (*DAT_028cc450)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return uVar1 & 0xffffffff;
}

