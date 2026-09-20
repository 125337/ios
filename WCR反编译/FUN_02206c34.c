// FUN_02206c34 @ 02206c34

undefined4 FUN_02206c34(long param_1)

{
  undefined4 local_1c;
  
  if (param_1 == 0) {
    local_1c = 0;
  }
  else if (param_1 == 1) {
    local_1c = 1;
  }
  else if (param_1 == 2) {
    local_1c = 2;
  }
  else {
    if (param_1 != 3) {
      return 4;
    }
    local_1c = 3;
  }
  return local_1c;
}

