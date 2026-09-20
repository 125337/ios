// FUN_00522988 @ 00522988

uint FUN_00522988(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint local_44;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028cb100)(local_18,local_20,local_28);
  local_44 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    FUN_005293d0();
    local_44 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      FUN_00529ab4();
      local_44 = (uint)uVar1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_44 & 1;
}

