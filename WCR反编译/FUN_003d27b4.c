// FUN_003d27b4 @ 003d27b4

undefined8 FUN_003d27b4(uint param_1)

{
  undefined8 local_8;
  
  if ((param_1 >> 1 & 1) == 0) {
    if ((param_1 & 1) == 0) {
      local_8 = 2;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    local_8 = 1;
  }
  return local_8;
}

