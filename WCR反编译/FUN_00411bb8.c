// FUN_00411bb8 @ 00411bb8

byte FUN_00411bb8(long param_1,byte param_2)

{
  byte local_1;
  
  if (param_1 == 2) {
    local_1 = param_2 & 1;
  }
  else if (param_1 == 1) {
    local_1 = (param_2 ^ 1) & 1;
  }
  else {
    local_1 = 1;
  }
  return local_1;
}

