// FUN_000cefdc @ 000cefdc

double FUN_000cefdc(double param_1)

{
  double in_d4;
  double local_78;
  double local_70;
  double local_8;
  
  if ((param_1 <= 0.0) || (in_d4 <= 1.0)) {
    local_8 = 0.0;
  }
  else {
    local_70 = in_d4 - 44.0;
    if (local_70 <= 0.0) {
      local_70 = 0.0;
    }
    local_78 = (double)(long)local_70;
    if (param_1 < local_78) {
      local_78 = param_1;
    }
    local_8 = local_78;
  }
  return local_8;
}

