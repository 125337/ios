// FUN_0065bf14 @ 0065bf14

byte FUN_0065bf14(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_11 = true;
  }
  else {
    uVar1 = local_20;
    FUN_00656104();
    uVar2 = local_28;
    FUN_00656104();
    if ((uVar1 == 0) || (uVar2 == 0)) {
      uVar1 = local_20;
      FUN_00656294();
      uVar2 = local_28;
      FUN_00656294();
      if ((uVar1 == 0) || (uVar2 == 0)) {
        local_11 = false;
      }
      else {
        local_11 = uVar2 <= uVar1;
      }
    }
    else {
      local_11 = uVar2 <= uVar1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

