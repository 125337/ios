// FUN_00738df8 @ 00738df8

byte FUN_00738df8(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint local_54;
  long local_50;
  uint local_3c;
  long *local_38;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (long *)0x0)) {
    local_11 = 0;
  }
  else {
    local_3c = 0;
    local_38 = param_4;
    local_30 = param_3;
    local_28 = param_2;
    local_20 = param_1;
    _class_copyMethodList(param_1,&local_3c);
    local_50 = 0;
    for (local_54 = 0; local_54 < local_3c; local_54 = local_54 + 1) {
      lVar3 = *(long *)(param_1 + (ulong)local_54 * 8);
      _method_getName();
      if (lVar3 == local_28) {
        local_50 = *(long *)(param_1 + (ulong)local_54 * 8);
        break;
      }
    }
    if (param_1 != 0) {
      _free(param_1);
    }
    if (local_50 == 0) {
      lVar3 = local_20;
      _class_getInstanceMethod(local_20,local_28);
      if (lVar3 == 0) {
        local_11 = 0;
      }
      else {
        lVar4 = lVar3;
        _method_getImplementation();
        lVar5 = local_20;
        lVar2 = local_28;
        lVar1 = local_30;
        *local_38 = lVar4;
        _method_getTypeEncoding(lVar3);
        _class_addMethod(lVar5,lVar2,lVar1,lVar3);
        local_11 = (byte)lVar5 & 1;
      }
    }
    else {
      _method_setImplementation(local_50,local_30);
      *local_38 = local_50;
      local_11 = 1;
    }
  }
  return local_11;
}

