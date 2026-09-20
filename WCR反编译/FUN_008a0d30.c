// FUN_008a0d30 @ 008a0d30

void FUN_008a0d30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_getClass();
  if ((param_1 != 0) && (lVar1 = param_1, _class_getInstanceMethod(param_1,param_2), lVar1 != 0)) {
    lVar2 = lVar1;
    _method_getImplementation();
    *param_4 = lVar2;
    _method_getTypeEncoding(lVar1);
    _class_replaceMethod(param_1,param_2,param_3,lVar1);
  }
  return;
}

