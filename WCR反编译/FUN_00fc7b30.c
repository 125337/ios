// FUN_00fc7b30 @ 00fc7b30

void FUN_00fc7b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  FUN_00fc7a94(local_20);
  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),param_3);
  _objc_storeStrong(&local_20,0);
  return;
}

