// FUN_003405b8 @ 003405b8

uint FUN_003405b8(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0033f024();
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    local_2c = 1;
    FUN_0033e5dc();
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

