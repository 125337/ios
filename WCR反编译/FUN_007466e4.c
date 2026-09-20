// FUN_007466e4 @ 007466e4

byte FUN_007466e4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  FUN_0074699c();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_00746f28();
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

