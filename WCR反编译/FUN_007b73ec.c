// FUN_007b73ec @ 007b73ec

void FUN_007b73ec(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  FUN_007b7488();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

