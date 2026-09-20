// FUN_003caf7c @ 003caf7c

double FUN_003caf7c(double param_1)

{
  double local_88;
  double local_80;
  double local_78;
  double local_20;
  
  FUN_003cb0c8();
  local_78 = (double)(long)(DAT_02324030 * param_1 + 0.5);
  if (local_78 <= 12.0) {
    local_78 = 12.0;
  }
  if (local_78 <= 40.0) {
    local_80 = local_78;
  }
  else {
    local_80 = 40.0;
  }
  local_20 = local_80;
  if (param_1 - 4.0 < local_80) {
    local_20 = param_1 - 4.0;
  }
  if (local_20 <= 10.0) {
    local_88 = 10.0;
  }
  else {
    local_88 = local_20;
  }
  return local_88;
}

