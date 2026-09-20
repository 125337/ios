// FUN_00892608 @ 00892608

void FUN_00892608(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  lVar1 = 0;
  local_28 = param_2;
  local_20 = param_1;
  FUN_0089ce84();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 == 0) {
    lVar1 = local_20;
    (*DAT_028cd910)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

