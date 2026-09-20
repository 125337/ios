// FUN_0069c020 @ 0069c020

void FUN_0069c020(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long local_70;
  long local_40;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  bVar1 = local_20 == 0;
  if (bVar1) {
    local_70 = 0;
  }
  else {
    local_70 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_70;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

