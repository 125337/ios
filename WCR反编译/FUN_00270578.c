// FUN_00270578 @ 00270578

void FUN_00270578(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_88;
  bool local_51;
  long local_50;
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
    _class_getInstanceVariable(lVar1,param_2);
    if (lVar1 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = local_20;
      _object_getIvar(local_20,lVar1);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    local_51 = lVar1 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

