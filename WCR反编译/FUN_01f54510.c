// FUN_01f54510 @ 01f54510

void FUN_01f54510(ulong param_1)

{
  ulong uVar1;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = param_1;
  FUN_01f5458c();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_20,0);
  return;
}

