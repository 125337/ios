// FUN_0004e5a8 @ 0004e5a8

byte FUN_0004e5a8(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar1 = local_28;
  FUN_0004e678();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    FUN_0004e7b8(local_28,*(undefined8 *)(param_1 + 0x20));
    local_11 = (byte)uVar1 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

