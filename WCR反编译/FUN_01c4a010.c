// FUN_01c4a010 @ 01c4a010

double FUN_01c4a010(double param_1,long param_2)

{
  double local_18;
  double local_8;
  
  local_18 = param_1;
  if (param_2 == 3) {
    if (param_1 < DAT_02323d18) {
      local_18 = DAT_02323d18;
    }
    if (5.0 < local_18) {
      local_18 = 5.0;
    }
    local_8 = local_18;
  }
  else {
    if (param_1 < -80.0) {
      local_18 = -80.0;
    }
    if (80.0 < local_18) {
      local_18 = 80.0;
    }
    local_8 = local_18;
  }
  return local_8;
}

