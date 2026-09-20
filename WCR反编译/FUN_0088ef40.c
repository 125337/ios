// FUN_0088ef40 @ 0088ef40

void FUN_0088ef40(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (((local_18 != 0) && (FUN_0088eea4(), (uVar1 & 1) != 0)) &&
     (uVar3 = local_18, FUN_0088f004(), (uVar3 & 1) == 0)) {
    FUN_0088f1d8(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

