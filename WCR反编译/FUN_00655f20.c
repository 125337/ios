// FUN_00655f20 @ 00655f20

long FUN_00655f20(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_30;
  
  local_30 = param_1;
  while( true ) {
    if (local_30 == 0) {
      return 0;
    }
    lVar1 = local_30;
    _class_getInstanceVariable(local_30,param_2);
    if (lVar1 != 0) break;
    _class_getSuperclass();
  }
  return lVar1;
}

