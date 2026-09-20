// FUN_0079ddcc @ 0079ddcc

byte FUN_0079ddcc(long param_1,long param_2)

{
  byte local_11;
  
  if (param_1 == param_2) {
    local_11 = 1;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    local_11 = 0;
  }
  else {
    _CGColorEqualToColor(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  return local_11;
}

