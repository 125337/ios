// FUN_006e1850 @ 006e1850

long FUN_006e1850(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long local_38;
  
  local_38 = param_1;
  while( true ) {
    if (local_38 == 0) {
      if (param_3 != (long *)0x0) {
        *param_3 = 0;
      }
      return 0;
    }
    lVar1 = local_38;
    _class_getInstanceVariable(local_38,param_2);
    if (lVar1 != 0) break;
    _class_getSuperclass();
  }
  if (param_3 == (long *)0x0) {
    return lVar1;
  }
  *param_3 = local_38;
  return lVar1;
}

