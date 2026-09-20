// FUN_00069eb0 @ 00069eb0

void FUN_00069eb0(ulong param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (((param_4 != (long *)0x0 && (*param_4 == 0)) &&
      (uVar1 = param_1, FUN_0006a41c(param_1,param_2), (uVar1 & 1) != 0)))) {
    _MSHookMessageEx(param_1,param_2,param_3,param_4);
  }
  return;
}

