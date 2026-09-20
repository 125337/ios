// FUN_0150bca8 @ 0150bca8

void FUN_0150bca8(long param_1)

{
  ulong uVar1;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  _WCRSideloadShareFixApplySelectedGroupID();
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

