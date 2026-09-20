// FUN_006b0bc4 @ 006b0bc4

long FUN_006b0bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  long local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  (*DAT_028cc020)(local_18,local_20,local_28,local_30);
  local_40 = 0;
  for (local_48 = 0; local_48 < uVar1; local_48 = local_48 + 1) {
    uVar2 = local_18;
    FUN_006b2ee8(local_48 - uVar1,local_18,local_28,local_48,local_30);
    if ((uVar2 & 1) == 0) {
      local_40 = local_40 + 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return local_40;
}

