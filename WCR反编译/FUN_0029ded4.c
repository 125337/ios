// FUN_0029ded4 @ 0029ded4

void FUN_0029ded4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_50 [3];
  long local_38;
  uint local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if (local_20 == 0) {
    local_18 = 0;
    local_2c = 1;
    goto LAB_0029e050;
  }
  lVar1 = local_20;
  FUN_002acca8(local_20,0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if ((lVar1 == 0) || (lVar1 - local_20 == 0)) {
LAB_0029e010:
    lVar1 = local_20;
    FUN_002acd8c(0,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = lVar1;
  }
  else {
    FUN_002acd8c(lVar1 - local_20,lVar1,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
    local_2c = (uint)(lVar1 != 0);
    _objc_storeStrong(local_50,0);
    if (local_2c == 0) goto LAB_0029e010;
  }
  _objc_storeStrong(&local_38,0);
LAB_0029e050:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

