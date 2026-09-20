// FUN_006e134c @ 006e134c

void FUN_006e134c(undefined8 param_1)

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
    _object_getClass();
    FUN_006e1850(lVar1,"m_upToCloudDataLogic",0);
    lVar2 = local_20;
    FUN_006e194c(local_20,lVar1);
    FUN_006e1904();
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

