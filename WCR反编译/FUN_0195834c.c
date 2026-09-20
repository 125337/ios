// FUN_0195834c @ 0195834c

void FUN_0195834c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  local_18 = param_3;
  _objc_storeStrong();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
  (*(code *)PTR__objc_release_02578630)(param_3);
  _objc_storeStrong(&local_30,0);
  return;
}

