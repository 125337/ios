// FUN_00f58124 @ 00f58124

byte FUN_00f58124(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00f5909c();
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    for (local_38 = 1; local_38 < 0x41; local_38 = local_38 << 1) {
      if ((uVar1 & local_38) != 0) {
        uVar2 = local_38;
        FUN_00f59508();
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          goto LAB_00f581fc;
        }
      }
    }
    local_11 = 0;
  }
LAB_00f581fc:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

