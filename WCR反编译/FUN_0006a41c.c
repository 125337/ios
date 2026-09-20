// FUN_0006a41c @ 0006a41c

undefined1 FUN_0006a41c(long param_1,long param_2)

{
  long lVar1;
  uint local_40;
  uint local_2c;
  long local_28;
  long local_20;
  undefined1 local_11;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_11 = 0;
  }
  else {
    local_2c = 0;
    local_28 = param_2;
    local_20 = param_1;
    _class_copyMethodList(param_1,&local_2c);
    local_11 = 0;
    for (local_40 = 0; local_40 < local_2c; local_40 = local_40 + 1) {
      lVar1 = *(long *)(param_1 + (ulong)local_40 * 8);
      _method_getName();
      if (lVar1 == local_28) {
        local_11 = 1;
        break;
      }
    }
    if (param_1 != 0) {
      _free(param_1);
    }
  }
  return local_11;
}

