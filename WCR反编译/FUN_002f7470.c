// FUN_002f7470 @ 002f7470

void FUN_002f7470(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (((param_1 != 0) && (param_4 != 0)) &&
     (lVar1 = param_1, _class_getInstanceMethod(param_1,param_2), lVar1 != 0)) {
    _MSHookMessageEx(param_1,param_2,param_3,param_4);
  }
  return;
}

