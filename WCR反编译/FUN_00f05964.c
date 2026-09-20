// FUN_00f05964 @ 00f05964

void FUN_00f05964(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  DAT_028e2b18 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_19 & 1,local_28)
    ;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

