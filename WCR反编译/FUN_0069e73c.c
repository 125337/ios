// FUN_0069e73c @ 0069e73c

void FUN_0069e73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  if (((uVar1 & 1) == 0) && (DAT_028cbd80 != (code *)0x0)) {
    (*DAT_028cbd80)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

