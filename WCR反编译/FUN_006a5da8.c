// FUN_006a5da8 @ 006a5da8

undefined1 FUN_006a5da8(long param_1,long param_2)

{
  long local_30;
  
  _class_getSuperclass();
  local_30 = param_1;
  while( true ) {
    if (local_30 == 0) {
      return 0;
    }
    if (local_30 - param_2 == 0) break;
    _class_getSuperclass(local_30 - param_2);
  }
  return 1;
}

