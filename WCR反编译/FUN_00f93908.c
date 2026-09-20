// FUN_00f93908 @ 00f93908

double FUN_00f93908(double param_1)

{
  double local_60;
  double local_58;
  double local_50;
  
  local_50 = param_1;
  if (1.0 < param_1) {
    local_50 = 1.0;
  }
  if (local_50 <= 0.0) {
    local_58 = 0.0;
  }
  else {
    local_58 = local_50;
  }
  if (DAT_0232c530 < local_58) {
    local_60 = (local_58 + DAT_0232c528) / DAT_0232c520;
    _pow(local_60,0x4003333333333333);
  }
  else {
    local_60 = local_58 / DAT_0232c518;
  }
  return local_60;
}

