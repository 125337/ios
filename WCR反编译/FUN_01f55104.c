// FUN_01f55104 @ 01f55104

void FUN_01f55104(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if ((DAT_028e48c0 & 1) == 0) {
    (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_20,0);
  return;
}

