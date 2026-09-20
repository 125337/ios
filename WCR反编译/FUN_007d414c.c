// FUN_007d414c @ 007d414c

void FUN_007d414c(undefined8 param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long local_38;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    local_18 = 0;
  }
  else {
    local_38 = local_20;
    _object_getClass();
    while (local_38 != 0) {
      lVar1 = local_38;
      _class_getInstanceVariable(local_38,param_2);
      if (lVar1 != 0) {
        lVar2 = local_20;
        _object_getIvar(local_20,lVar1);
        _objc_retainAutoreleasedReturnValue();
        local_18 = lVar2;
        goto LAB_007d427c;
      }
      _class_getSuperclass();
    }
    local_18 = 0;
  }
LAB_007d427c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

