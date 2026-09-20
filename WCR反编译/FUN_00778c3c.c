// FUN_00778c3c @ 00778c3c

void FUN_00778c3c(char *param_1,long param_2,char *param_3,ulong *param_4)

{
  char *pcVar1;
  char *local_58;
  
  if ((((param_1 != (char *)0x0) && (param_2 != 0)) && (param_3 != (char *)0x0)) &&
     (param_4 != (ulong *)0x0)) {
    local_58 = param_1;
    _class_getInstanceMethod(param_1,param_2);
    if (local_58 == (char *)0x0) {
      local_58 = "v@:";
    }
    else {
      _method_getTypeEncoding();
    }
    pcVar1 = param_1;
    FUN_0077aa3c(param_1,param_2);
    if (((ulong)pcVar1 & 1) == 0) {
      *param_4 = 0;
      _class_addMethod(param_1,param_2,param_3,local_58);
    }
    else {
      _class_getInstanceMethod(param_1,param_2);
      pcVar1 = param_1;
      _method_getImplementation();
      if (pcVar1 != param_3) {
        *param_4 = (ulong)pcVar1;
        _method_setImplementation(param_1,param_3);
      }
    }
  }
  return;
}

