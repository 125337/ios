// FUN_0050a5f4 @ 0050a5f4

void FUN_0050a5f4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00509410(local_20,&cf_dataItem);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    lVar2 = local_20;
    FUN_00509410(local_20,&cf_m_dataItem);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_28;
    if (local_28 == 0) {
      lVar2 = local_20;
      FUN_00509410(local_20,&cf__dataItem);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_28 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

