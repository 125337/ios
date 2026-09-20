// FUN_0031688c @ 0031688c

double FUN_0031688c(double param_1)

{
  double local_58;
  double local_50;
  double local_8;
  
  local_8 = param_1;
  if (param_1 <= 0.0) {
    local_8 = 1.0;
  }
  local_50 = local_8 * 3.0;
  if (local_50 < 3.0) {
    local_50 = 3.0;
  }
  local_58 = local_8 * 3.0;
  if (local_58 < 3.5) {
    local_58 = 3.5;
  }
  return local_50 + local_58;
}

