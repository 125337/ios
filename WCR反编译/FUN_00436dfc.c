// FUN_00436dfc @ 00436dfc

void FUN_00436dfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_78;
  long local_48;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00436ffc(local_20,param_2);
  if (lVar1 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = local_20;
    _object_getIvar(local_20,lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_78;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

