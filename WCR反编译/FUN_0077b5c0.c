// FUN_0077b5c0 @ 0077b5c0

byte FUN_0077b5c0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00787f38();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_00788488();
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar1;
      FUN_00788864();
      local_11 = (byte)uVar1 & 1;
      local_24 = 1;
      _objc_storeStrong(local_40,0);
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

