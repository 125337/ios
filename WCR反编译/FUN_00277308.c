// FUN_00277308 @ 00277308

void FUN_00277308(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_00276c80(local_19 & 1,local_28,0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_19 & 1,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

