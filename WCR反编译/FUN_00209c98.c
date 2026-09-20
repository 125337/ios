// FUN_00209c98 @ 00209c98

double FUN_00209c98(double param_1,byte param_2)

{
  double local_48;
  double local_40;
  double local_8;
  
  if (80.0 <= param_1) {
    if ((param_2 & 1) == 0) {
      local_40 = param_1 - 32.0;
    }
    else {
      local_40 = param_1 * DAT_02323d30;
    }
    if (local_40 <= 80.0) {
      local_48 = 80.0;
    }
    else {
      local_48 = local_40;
    }
    local_8 = local_48;
  }
  else {
    local_8 = 80.0;
  }
  return local_8;
}

