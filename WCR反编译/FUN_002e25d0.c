// FUN_002e25d0 @ 002e25d0

void FUN_002e25d0(ulong param_1,long param_2,long param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (ulong *)0x0 &&
      (uVar1 = param_1, _class_getInstanceMethod(param_1,param_2), uVar1 != 0)))) {
    uVar2 = uVar1;
    _method_getImplementation();
    *param_4 = uVar2;
    uVar2 = uVar1;
    _method_getTypeEncoding();
    _class_addMethod(param_1,param_2,param_3,uVar2);
    if ((param_1 & 1) == 0) {
      _method_setImplementation(uVar1,param_3);
    }
  }
  return;
}

