// FUN_000cf0e4 @ 000cf0e4

double FUN_000cf0e4(double param_1)

{
  double in_d4;
  double in_d5;
  double local_a8;
  double local_a0;
  double local_98;
  double local_8;
  
  if ((param_1 <= 0.0) || (in_d4 <= 1.0)) {
    local_8 = 0.0;
  }
  else {
    local_98 = in_d5;
    if (in_d5 <= 0.0) {
      local_98 = 0.0;
    }
    local_a0 = (in_d4 - 44.0) - local_98;
    if (local_a0 <= 0.0) {
      local_a0 = 0.0;
    }
    local_a8 = (double)(long)local_a0;
    if (param_1 < local_a8) {
      local_a8 = param_1;
    }
    local_8 = local_a8;
  }
  return local_8;
}

