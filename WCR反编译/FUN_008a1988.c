// FUN_008a1988 @ 008a1988

void FUN_008a1988(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 local_40;
  
  if (param_1 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = param_1;
    _class_getInstanceMethod(param_1,param_2);
  }
  if (local_40 != 0) {
    lVar1 = local_40;
    _method_getImplementation();
    *param_4 = lVar1;
    _method_getTypeEncoding(local_40);
    _class_replaceMethod(param_1,param_2,param_3,local_40);
  }
  return;
}

