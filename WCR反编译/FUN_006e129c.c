// FUN_006e129c @ 006e129c

void FUN_006e129c(undefined8 param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = local_20;
    FUN_006e1438(local_20,&cf_m_DataLogic,0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

