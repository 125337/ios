// FUN_0158c4f4 @ 0158c4f4

long FUN_0158c4f4(long param_1,long param_2)

{
  long lVar1;
  long local_30;
  
  if ((param_1 != 0) && (local_30 = param_1, param_2 != 0)) {
    while (local_30 != 0) {
      lVar1 = local_30;
      _class_getInstanceVariable(local_30,param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      _class_getSuperclass();
    }
  }
  return 0;
}

