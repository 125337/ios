// FUN_00150d58 @ 00150d58

long FUN_00150d58(long param_1,long param_2)

{
  long local_8;
  
  if (param_1 < 0) {
    local_8 = 0;
  }
  else {
    local_8 = param_1;
    if ((param_2 != 0) && (param_2 <= param_1)) {
      local_8 = param_2 + -1;
    }
  }
  return local_8;
}

