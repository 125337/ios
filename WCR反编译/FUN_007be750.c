// FUN_007be750 @ 007be750

void FUN_007be750(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (((param_4 != (long *)0x0 && (*param_4 == 0)) &&
      (lVar1 = param_1, _class_getClassMethod(param_1,param_2), lVar1 != 0)))) {
    _object_getClass(param_1);
    _MSHookMessageEx();
  }
  return;
}

