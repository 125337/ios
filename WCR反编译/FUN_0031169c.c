// FUN_0031169c @ 0031169c

byte FUN_0031169c(undefined8 param_1)

{
  ulong uVar1;
  byte local_3c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00319020();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_0031a880();
    local_3c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_0031a9c4();
      local_3c = (byte)uVar1;
    }
    local_11 = local_3c & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

