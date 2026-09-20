// FUN_00694d2c @ 00694d2c

void FUN_00694d2c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  uint local_30;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  FUN_00694194();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    uVar3 = local_20;
    FUN_0068c480();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    FUN_0068cf24(uVar3,2);
    uVar3 = local_38;
    FUN_0068e36c();
    _objc_retainAutoreleasedReturnValue();
    FUN_0068d2e0();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _objc_storeStrong(&local_38,0);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

