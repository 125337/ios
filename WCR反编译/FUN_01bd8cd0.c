// FUN_01bd8cd0 @ 01bd8cd0

bool FUN_01bd8cd0(long param_1,long param_2)

{
  bool local_1;
  
  if (param_2 == 1) {
    local_1 = param_1 == 1;
  }
  else if (param_2 == 2) {
    local_1 = 1 < param_1 && param_1 < 6;
  }
  else if (param_2 == 3) {
    local_1 = 5 < param_1 && param_1 < 0xb;
  }
  else if (param_2 == 4) {
    local_1 = 10 < param_1;
  }
  else {
    local_1 = true;
  }
  return local_1;
}

