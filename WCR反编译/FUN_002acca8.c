// FUN_002acca8 @ 002acca8

void FUN_002acca8(undefined8 param_1,byte param_2)

{
  long lVar1;
  long local_60;
  long local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_19 = param_2;
  FUN_002ad040(local_18,param_2 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar1;
  if (lVar1 == 0) {
    local_60 = local_18;
  }
  local_28 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_60);
  return;
}

