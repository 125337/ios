// FUN_002084e4 @ 002084e4

byte FUN_002084e4(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 != 0) {
    uVar2 = local_20;
    FUN_00207ce4();
    uVar1 = (uint)uVar2;
    if ((uVar2 & 1) == 0) {
      FUN_002085e4();
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar2 = local_20;
        FUN_0020870c();
        local_11 = (byte)uVar2 & 1;
      }
      goto LAB_002085bc;
    }
  }
  local_11 = 0;
LAB_002085bc:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

