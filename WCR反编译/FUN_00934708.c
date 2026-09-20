// FUN_00934708 @ 00934708

bool FUN_00934708(long param_1,byte param_2)

{
  long lVar1;
  bool local_11;
  
  if ((param_2 & 1) == 0) {
    if (param_1 == 0) {
      local_11 = false;
    }
    else {
      lVar1 = param_1;
      FUN_001d2138(param_1,"Range");
      local_11 = true;
      if (lVar1 == 0) {
        lVar1 = param_1;
        FUN_001d2138(param_1,"InvalidArgument");
        local_11 = true;
        if (lVar1 == 0) {
          lVar1 = param_1;
          FUN_001d2138(param_1,"InternalInconsistency");
          local_11 = true;
          if (lVar1 == 0) {
            FUN_001d2138(param_1,"GenericException");
            local_11 = param_1 != 0;
          }
        }
      }
    }
  }
  else {
    local_11 = true;
  }
  return local_11;
}

