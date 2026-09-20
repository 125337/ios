// FUN_00742584 @ 00742584

ulong FUN_00742584(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_007472c8(local_28);
  uVar1 = local_18;
  (*DAT_028cc6a8)(local_18,local_20,local_28,param_4);
  _objc_storeStrong(&local_28,0);
  return uVar1 & 0xffffffff;
}

