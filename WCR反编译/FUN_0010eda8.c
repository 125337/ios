// FUN_0010eda8 @ 0010eda8

uint FUN_0010eda8(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00125510();
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_001256a8();
    local_2c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

