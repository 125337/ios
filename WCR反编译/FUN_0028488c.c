// FUN_0028488c @ 0028488c

void FUN_0028488c(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  FUN_0028470c(0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  FUN_00284820();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

