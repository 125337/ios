// FUN_01584c04 @ 01584c04

byte FUN_01584c04(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (uVar1 = local_20, FUN_01564574(), (uVar1 & 1) != 0)) ||
     (uVar1 = local_20, FUN_01565620(), (uVar1 & 1) != 0)) {
    local_11 = 0;
  }
  else {
    FUN_0158020c();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_0157add4();
      local_11 = (byte)uVar1 & 1;
    }
    else {
      uVar1 = local_20;
      FUN_0157804c();
      local_11 = (byte)uVar1 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

