// FUN_0169ddd8 @ 0169ddd8

void FUN_0169ddd8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_016a9384();
  if (((uVar1 & 1) == 0) && (uVar1 = local_18, FUN_016a948c(), (uVar1 & 1) == 0)) {
    uVar1 = local_18;
    FUN_016aa360();
    _objc_retainAutoreleasedReturnValue();
    FUN_016a95c0();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

