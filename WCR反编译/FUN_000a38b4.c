// FUN_000a38b4 @ 000a38b4

void FUN_000a38b4(undefined8 param_1)

{
  bool bVar1;
  long local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = local_20 == 0;
  if (bVar1) {
    local_38 = 0;
  }
  else {
    local_38 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c806a);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_38;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

