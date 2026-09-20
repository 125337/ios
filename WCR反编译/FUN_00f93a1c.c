// FUN_00f93a1c @ 00f93a1c

double FUN_00f93a1c(double param_1)

{
  double local_28;
  double local_18;
  
  if (0.0 < param_1) {
    if (param_1 < 1.0) {
      if (DAT_0232c548 < param_1) {
        _pow(param_1,DAT_0232c540);
        local_28 = DAT_0232c538 + param_1 * DAT_0232c520;
      }
      else {
        local_28 = DAT_0232c518 * param_1;
      }
      local_18 = local_28;
    }
    else {
      local_18 = 1.0;
    }
  }
  else {
    local_18 = 0.0;
  }
  return local_18;
}

