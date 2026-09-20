// FUN_008c81c0 @ 008c81c0

ulong FUN_008c81c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  (*DAT_028ce1a8)(local_18,local_20,local_28,local_30,param_5);
  _objc_storeStrong(&local_30,0);
  return uVar1 & 0xffffffff;
}

