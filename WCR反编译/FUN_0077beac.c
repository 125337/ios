// FUN_0077beac @ 0077beac

bool FUN_0077beac(double param_1,double param_2,double param_3,double param_4,long param_5,
                 long param_6)

{
  bool local_1;
  
  if (param_6 == 0) {
    local_1 = true;
    if (param_2 / 5.0 <= param_1) {
      local_1 = param_2 - param_2 / 5.0 < param_1;
    }
  }
  else if (param_5 == 0) {
    local_1 = param_2 - param_4 < param_1;
  }
  else {
    local_1 = param_1 < param_3;
  }
  return local_1;
}

