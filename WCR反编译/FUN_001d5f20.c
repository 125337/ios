// FUN_001d5f20 @ 001d5f20

double FUN_001d5f20(double param_1,double param_2,double param_3)

{
  double local_58;
  double local_50;
  double local_8;
  
  local_8 = param_1;
  if (0.0 < param_1) {
    local_50 = param_3;
    if (param_2 < param_3) {
      local_50 = param_2;
    }
    if (0.0 < local_50) {
      local_58 = param_1;
      if (local_50 * 0.5 < param_1) {
        local_58 = local_50 * 0.5;
      }
      local_8 = local_58;
    }
  }
  return local_8;
}

