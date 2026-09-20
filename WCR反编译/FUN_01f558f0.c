// FUN_01f558f0 @ 01f558f0

void FUN_01f558f0(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  FUN_01f55590();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),param_3 & 1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

