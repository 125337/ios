// FUN_01584ad8 @ 01584ad8

byte FUN_01584ad8(undefined8 param_1)

{
  ulong uVar1;
  byte local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (uVar1 = local_20, FUN_01565620(), (uVar1 & 1) != 0)) {
    local_11 = 0;
  }
  else {
    FUN_0158020c();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_0157add4();
      if ((uVar1 & 1) == 0) {
        FUN_0156c6b8();
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
    }
    else {
      uVar1 = local_20;
      FUN_01564574();
      local_28 = 0;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_0157804c();
        local_28 = (byte)uVar1;
      }
      local_11 = local_28 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

