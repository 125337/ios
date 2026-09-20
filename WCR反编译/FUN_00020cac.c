// FUN_00020cac @ 00020cac

void FUN_00020cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  local_18 = param_3;
  _objc_storeStrong(&local_30);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained();
  FUN_00015844(0,local_20,local_28);
  (*(code *)PTR__objc_release_02578630)(param_3);
  _objc_storeStrong(&local_30,0);
  return;
}

