// FUN_00573700 @ 00573700

long FUN_00573700(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_20;
  
  local_20 = param_1;
  while( true ) {
    if (local_20 == 0) {
      return 0;
    }
    lVar1 = local_20;
    _class_getInstanceVariable(local_20,param_2);
    if (lVar1 != 0) break;
    _class_getSuperclass();
  }
  return lVar1;
}

