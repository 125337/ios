// FUN_000caa2c @ 000caa2c

double FUN_000caa2c(double param_1,double param_2,double param_3)

{
  double local_70;
  double local_68;
  double local_28;
  double local_8;
  
  if ((param_1 <= 0.0) || (param_2 <= 1.0)) {
    local_8 = 0.0;
  }
  else {
    local_68 = param_3;
    if (param_3 <= 0.0) {
      local_68 = 0.0;
    }
    local_28 = (double)(long)((param_2 - 44.0) - local_68);
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    local_70 = param_1;
    if (local_28 <= param_1) {
      local_70 = local_28;
    }
    local_8 = local_70;
  }
  return local_8;
}

