// FUN_00279750 @ 00279750

void FUN_00279750(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = local_20;
    FUN_0027ac10(local_20,&cf_width);
    lVar2 = local_20;
    FUN_0027ac10(local_20,&cf_height);
    FUN_0027b474(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

