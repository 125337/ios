// FUN_000fad94 @ 000fad94

void FUN_000fad94(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long local_50 [3];
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_29 = param_3;
  local_28 = param_2;
  FUN_000fb830();
  lVar1 = local_20;
  local_38 = param_2;
  _objc_getAssociatedObject(local_20,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = lVar1;
  if ((lVar1 == 0) && ((local_29 & 1) != 0)) {
    lVar2 = local_20;
    FUN_000fb874(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50[0];
    local_50[0] = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_setAssociatedObject(local_20,local_38,local_50[0],1);
    lVar1 = local_50[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

