// FUN_008a0634 @ 008a0634

bool FUN_008a0634(long param_1)

{
  long local_40 [5];
  bool local_11;
  
  if (param_1 == 0) {
    local_11 = false;
  }
  else {
    local_40[1] = 0;
    local_40[0] = 0;
    local_40[3] = 0;
    local_40[2] = 0;
    local_40[4] = param_1;
    _dladdr(param_1,local_40);
    local_11 = false;
    if (((int)param_1 != 0) && (local_11 = false, local_40[0] != 0)) {
      FUN_001d2138(local_40[0],"WCRefine");
      local_11 = local_40[0] != 0;
    }
  }
  return local_11;
}

