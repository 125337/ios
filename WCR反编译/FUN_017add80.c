// FUN_017add80 @ 017add80

void FUN_017add80(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  DAT_028e41b0 = 0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  FUN_017ad60c();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

