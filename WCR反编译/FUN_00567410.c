// FUN_00567410 @ 00567410

uint FUN_00567410(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0056787c();
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_00567ae8();
    local_2c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

