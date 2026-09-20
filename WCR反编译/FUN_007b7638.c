// FUN_007b7638 @ 007b7638

void FUN_007b7638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  FUN_007b7710();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

