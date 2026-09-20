// FUN_01f55184 @ 01f55184

void FUN_01f55184(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  if ((DAT_028e48c0 & 1) == 0) {
    (**(code **)(param_2 + 0x20))(param_1,local_20,*(undefined8 *)(param_2 + 0x28));
  }
  _objc_storeStrong(&local_20,0);
  return;
}

