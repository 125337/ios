// FUN_0069e804 @ 0069e804

void FUN_0069e804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_0069e8dc();
  if (((uVar1 & 1) == 0) && (DAT_028cbd88 != (code *)0x0)) {
    (*DAT_028cbd88)(local_18,local_20,local_28,param_4);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

