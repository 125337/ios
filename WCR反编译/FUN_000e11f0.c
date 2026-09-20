// FUN_000e11f0 @ 000e11f0

void FUN_000e11f0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long lVar3;
  long *local_98;
  long local_48 [3];
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar3 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_m_sessionInfo;
    _NSSelectorFromString();
    FUN_000d8e7c(lVar3,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_m_msgWrap;
    local_30 = lVar3;
    _NSSelectorFromString();
    FUN_000d8e7c(lVar3,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_48[0] = lVar3;
    if (lVar3 == 0) {
      pcVar1 = &cf_m_msgWrap;
      _NSSelectorFromString();
      FUN_000d8e7c(lVar2,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_48[0];
      local_48[0] = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    if (local_48[0] == 0) {
      local_98 = &local_20;
    }
    else {
      local_98 = local_48;
    }
    lVar3 = *local_98;
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = lVar3;
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

