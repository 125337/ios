// FUN_01f55510 @ 01f55510

void FUN_01f55510(long param_1)

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
    (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_20,0);
  return;
}

