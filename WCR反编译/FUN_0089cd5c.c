// FUN_0089cd5c @ 0089cd5c

void FUN_0089cd5c(long param_1)

{
  long lVar1;
  long local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar1 = 1;
  local_30 = param_1;
  FUN_0089ce84();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    (**(code **)(param_1 + 0x20))(lVar1,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

