// FUN_005499c4 @ 005499c4

uint FUN_005499c4(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00549f24();
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_0054a190();
    local_2c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

