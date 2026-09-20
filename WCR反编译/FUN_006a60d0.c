// FUN_006a60d0 @ 006a60d0

undefined1 FUN_006a60d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 local_11;
  
  if ((param_1 == 0) || (lVar1 = param_1, _class_getInstanceMethod(param_1,param_2), lVar1 == 0)) {
    local_11 = 0;
  }
  else {
    _MSHookMessageEx(param_1,param_2,param_3,param_4);
    local_11 = 1;
  }
  return local_11;
}

