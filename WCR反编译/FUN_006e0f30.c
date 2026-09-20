// FUN_006e0f30 @ 006e0f30

void FUN_006e0f30(undefined8 param_1)

{
  bool bVar1;
  long local_60;
  long local_40;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_60 = local_20;
  FUN_006e129c();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_60 == 0;
  local_28 = local_60;
  if (bVar1) {
    local_40 = local_20;
    FUN_006e134c();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_60;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

