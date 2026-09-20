// FUN_004fc304 @ 004fc304

void FUN_004fc304(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (lVar1 = param_1, _class_getInstanceMethod(param_1,param_2), lVar1 != 0)))) {
    _MSHookMessageEx(param_1,param_2,param_3,param_4);
  }
  return;
}

