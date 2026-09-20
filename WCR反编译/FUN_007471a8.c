// FUN_007471a8 @ 007471a8

void FUN_007471a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = local_20;
  _object_getClass();
  do {
    if (local_30 == 0) {
      local_18 = 0;
LAB_007472a4:
      _objc_storeStrong(&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    lVar1 = local_30;
    _class_getInstanceVariable(local_30,param_2);
    if (lVar1 != 0) {
      lVar2 = local_20;
      _object_getIvar(local_20,lVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar2;
      goto LAB_007472a4;
    }
    _class_getSuperclass();
  } while( true );
}

