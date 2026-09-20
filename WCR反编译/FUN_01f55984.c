// FUN_01f55984 @ 01f55984

byte FUN_01f55984(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar1 = local_28;
  FUN_01f55590();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (**(code **)(param_1 + 0x20))(local_28,*(undefined8 *)(param_1 + 0x28));
    local_11 = (byte)uVar1 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

