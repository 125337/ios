// FUN_002adc54 @ 002adc54

double FUN_002adc54(double param_1)

{
  double local_18;
  
  FUN_002ad620();
  if (0.0 <= param_1) {
    param_1 = param_1 / 8.0;
    FUN_002adba4(param_1,0,0x3ff0000000000000);
    param_1 = param_1 * -14.0;
  }
  else {
    param_1 = -param_1 / 6.0;
    FUN_002adba4(param_1,0,0x3ff0000000000000);
    param_1 = param_1 * 66.0;
  }
  local_18 = param_1 + 30.0;
  return local_18;
}

