// FUN_00831d64 @ 00831d64

void FUN_00831d64(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  uVar3 = param_1 + 0x30;
  local_28 = lVar2;
  _objc_loadWeakRetained();
  local_30 = uVar3;
  if (((local_28 != 0) && (uVar3 != 0)) &&
     (FUN_0082d7bc(), lVar2 = local_28, uVar1 = local_30, (uVar3 & 1) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    FUN_00831ebc(lVar2,uVar4,uVar1);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

