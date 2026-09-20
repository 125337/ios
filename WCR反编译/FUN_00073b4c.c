// FUN_00073b4c @ 00073b4c

double FUN_00073b4c(double param_1,double param_2,long param_3)

{
  double local_38;
  double local_30;
  long local_20;
  double local_8;
  
  if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
    local_8 = 0.0;
  }
  else {
    local_20 = param_3;
    if (param_3 < 0) {
      local_20 = 0;
    }
    if (100 < local_20) {
      local_20 = 100;
    }
    local_38 = (double)NEON_fminnm(param_1,param_2);
    if (local_20 == 0) {
      local_30 = 0.0;
    }
    else {
      if (local_20 < 100) {
        local_38 = (local_38 / 2.0) * ((double)local_20 / 100.0);
      }
      else {
        local_38 = local_38 / 2.0;
      }
      local_30 = local_38;
    }
    local_8 = local_30;
  }
  return local_8;
}

