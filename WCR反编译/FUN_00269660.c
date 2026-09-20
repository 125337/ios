// FUN_00269660 @ 00269660

void FUN_00269660(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_38;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_18 = 0;
  }
  else {
    local_38 = local_20;
    _object_getClass();
    _class_getInstanceVariable(local_38,param_2);
    if (local_38 == 0) {
      local_38 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _class_getInstanceVariable(local_38,param_2);
    }
    if (local_38 == 0) {
      local_18 = 0;
    }
    else {
      lVar1 = local_20;
      _object_getIvar(local_20,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

