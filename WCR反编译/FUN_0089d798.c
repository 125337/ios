// FUN_0089d798 @ 0089d798

bool FUN_0089d798(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  bool local_11;
  
  _objc_getClass();
  if ((param_1 == 0) || (lVar1 = param_1, _class_getInstanceMethod(param_1,param_2), lVar1 == 0)) {
    local_11 = false;
  }
  else {
    _MSHookMessageEx(param_1,param_2,param_3,param_4);
    local_11 = *param_4 != 0;
  }
  return local_11;
}

