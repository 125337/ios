// FUN_00ecc428 @ 00ecc428

long FUN_00ecc428(long param_1,long param_2)

{
  long local_8;
  
  if (param_1 < 0) {
    local_8 = 0;
  }
  else {
    local_8 = param_1;
    if (param_2 < param_1) {
      local_8 = param_2;
    }
  }
  return local_8;
}

