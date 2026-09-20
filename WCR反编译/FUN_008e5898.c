// FUN_008e5898 @ 008e5898

void FUN_008e5898(undefined8 param_1)

{
  long lVar1;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_008e59f0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    lVar1 = local_20;
    FUN_008e5e98();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    FUN_008e59f0();
    _objc_retainAutoreleasedReturnValue();
    local_38 = 1;
    local_18 = lVar1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 1;
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

