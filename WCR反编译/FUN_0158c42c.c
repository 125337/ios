// FUN_0158c42c @ 0158c42c

void FUN_0158c42c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_18 = 0;
  }
  else {
    lVar1 = local_20;
    _object_getClass();
    FUN_0158c4f4();
    if (lVar1 == 0) {
      local_18 = 0;
    }
    else {
      lVar2 = local_20;
      _object_getIvar(local_20,lVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

