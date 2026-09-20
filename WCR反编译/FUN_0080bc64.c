// FUN_0080bc64 @ 0080bc64

double FUN_0080bc64(double param_1,double param_2)

{
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  
  local_98 = param_2;
  if (param_2 <= 1.0) {
    local_98 = 1.0;
  }
  if (local_98 <= 100.0) {
    local_a0 = local_98;
  }
  else {
    local_a0 = 100.0;
  }
  local_a8 = param_1 * DAT_02324338;
  if (local_a8 <= 3.0) {
    local_a8 = 3.0;
  }
  local_b0 = param_1 * DAT_02324330;
  if (local_b0 <= local_a8) {
    local_b0 = local_a8;
  }
  return local_b0 - ((local_a0 - 1.0) / 99.0) * (local_b0 - local_a8);
}

