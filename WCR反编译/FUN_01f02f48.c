// FUN_01f02f48 @ 01f02f48

void FUN_01f02f48(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

