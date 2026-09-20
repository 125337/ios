// FUN_0000f90c @ 0000f90c

void FUN_0000f90c(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  FUN_0000d5b4();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

