// FUN_01e4d670 @ 01e4d670

undefined8 FUN_01e4d670(long param_1)

{
  undefined8 local_8;
  
  if (param_1 < 1) {
    local_8 = 0;
  }
  else if (param_1 < 3) {
    local_8 = 1;
  }
  else if (param_1 == 3) {
    local_8 = 2;
  }
  else {
    local_8 = 3;
  }
  return local_8;
}

