// FUN_000622ec @ 000622ec

void FUN_000622ec(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  FUN_00062394();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

