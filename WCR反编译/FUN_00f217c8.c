// FUN_00f217c8 @ 00f217c8

bool FUN_00f217c8(long param_1,long param_2,long param_3)

{
  bool local_1;
  
  if (param_2 == param_3) {
    local_1 = true;
  }
  else if (param_2 < param_3) {
    local_1 = param_2 <= param_1 && param_1 < param_3;
  }
  else {
    local_1 = param_2 <= param_1 || param_1 < param_3;
  }
  return local_1;
}

