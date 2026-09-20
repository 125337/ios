// FUN_01584ccc @ 01584ccc

byte FUN_01584ccc(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 != 0) {
    uVar1 = local_20;
    FUN_01565620();
    local_11 = (byte)uVar1;
    if ((uVar1 & 1) == 0) {
      FUN_0156c6b8();
      local_11 = local_11 & 1;
      goto LAB_01584d38;
    }
  }
  local_11 = 0;
LAB_01584d38:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

