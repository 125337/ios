// FUN_00396098 @ 00396098

byte FUN_00396098(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_003b0d1c();
  if ((uVar1 & 1) == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_20;
    FUN_003b0f1c();
    local_11 = true;
    if (uVar1 == 0) {
      uVar1 = local_20;
      FUN_003b106c();
      local_11 = uVar1 != 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

