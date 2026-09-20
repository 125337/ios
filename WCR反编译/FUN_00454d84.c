// FUN_00454d84 @ 00454d84

void FUN_00454d84(undefined8 param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_20;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_00454a6c();
  if ((uVar2 & 1) != 0) {
    uVar4 = local_20;
    FUN_004514e4();
    uVar1 = _WCRLocalEmoticonPid;
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      goto LAB_00454e48;
    }
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar1;
LAB_00454e48:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

