// FUN_002b396c @ 002b396c

void FUN_002b396c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  FUN_002b2754(local_20,param_3);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_20,param_3,uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

